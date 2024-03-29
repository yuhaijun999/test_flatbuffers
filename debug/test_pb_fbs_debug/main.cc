
// Copyright (c) 2023 dingodb.com, Inc. All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cstdint>
#include <iostream>
#include <set>

#include "fbs_test.h"  // NOLINT
#include "general.h"
#include "pb_create.h"
#include "pb_test.h"  // NOLINT

int main(int argc, char *argv[]) {
  std::string buffer;
  int array_size = 10;
  int times = 100;
  int64_t pb_serialization_time_ns = 0;
  int64_t pb_deserialization_time_ns = 0;
  int64_t fbs_serialization_time_ns = 0;
  int64_t fbs_deserialization_time_ns = 0;
  int64_t pb_bytes = 0;
  int64_t fbs_bytes = 0;
  std::string type = "all";
  std::set<TEST_TYPE> tts;
  std::string tmp_type;

  if (argc > 1) {
    tmp_type = argv[1];
  }

  if (tmp_type == std::string("pb")) {
    type = "pb";
  } else if (tmp_type == std::string("fbs")) {
    type = "fbs";
  } else if (tmp_type == std::string("all")) {
    type = "all";
  }

  if (argc > 2) {
    int tmp_times = 0;
    try {
      tmp_times = atoi(argv[2]);
      times = tmp_times;
    } catch (...) {
    }
  }

  if (argc > 3) {
    int tmp_array_size = 0;
    try {
      tmp_array_size = atoi(argv[3]);
      array_size = tmp_array_size;
    } catch (...) {
    }
  }

  std::set<TEST_TYPE> tmp_tts;
  if (argc > 4) {
    for (int i = 4; i < argc; i++) {
      TEST_TYPE tt = get_test_type(argv[i]);
      if (tt != TEST_TYPE::TEST_TYPE_NONE) {
        tmp_tts.insert(tt);
      }
    }
  }

  if (tmp_tts.empty()) {
    std::cout << "not set any types. use all." << std::endl;
    tts.insert(TEST_TYPE::TEST_TYPE_BOOL);
    tts.insert(TEST_TYPE::TEST_TYPE_INT);
    tts.insert(TEST_TYPE::TEST_TYPE_LONG);
    tts.insert(TEST_TYPE::TEST_TYPE_FLOAT);
    tts.insert(TEST_TYPE::TEST_TYPE_DOUBLE);
    tts.insert(TEST_TYPE::TEST_TYPE_STRING);
    tts.insert(TEST_TYPE::TEST_TYPE_BYTES);
  } else {
    tts = tmp_tts;
  }

  std::cout << "using : argv[1] is type [pb|fbs|all] default all. argv[2] is "
               "times default 100. argv[3] is array size default 1 . argv[4] "
               "and other test data types default all."
            << std::endl;

  std::cout << "type : " << type << " times : " << times
            << " array_size : " << array_size << std::endl;

  std::cout << "types : [" << show_types(tts) << "]" << std::endl;

  if (std::string("all") == type || std::string("pb") == type) {
    for (int i = 0; i < times; i++) {
      int64_t serialization_time_ns = 0;
      int64_t deserialization_time_ns = 0;
      pb_serialization(array_size, buffer, serialization_time_ns, tts);
      pb_bytes += buffer.size();
      pb_deserialization(buffer, deserialization_time_ns);

      pb_serialization_time_ns += serialization_time_ns;
      pb_deserialization_time_ns += deserialization_time_ns;
    }

    std::cout << "protobuf   serialization   : " << pb_serialization_time_ns
              << " ns"
              << " bytes : " << pb_bytes << std::endl;

    std::cout << "protobuf   deserialization : " << pb_deserialization_time_ns
              << " ns" << std::endl;
  }

  if (std::string("all") == type || std::string("fbs") == type) {
    for (int i = 0; i < times; i++) {
      int64_t serialization_time_ns = 0;
      int64_t deserialization_time_ns = 0;
      fbs_serialization(array_size, buffer, serialization_time_ns, tts);
      fbs_bytes += buffer.size();
      fbs_deserialization(buffer, deserialization_time_ns);

      fbs_serialization_time_ns += serialization_time_ns;
      fbs_deserialization_time_ns += deserialization_time_ns;
    }

    std::cout << "flatbuffer serialization   : " << fbs_serialization_time_ns
              << " ns"
              << " bytes : " << fbs_bytes << std::endl;

    std::cout << "flatbuffer deserialization : " << fbs_deserialization_time_ns
              << " ns" << std::endl;
  }

  if (0 != fbs_serialization_time_ns && 0 != pb_serialization_time_ns) {
    if (fbs_serialization_time_ns > pb_serialization_time_ns) {
      std::cout << "serialization_time_ns   flatbuffer/protobuf : "
                << static_cast<double>(fbs_serialization_time_ns) /
                       static_cast<double>(pb_serialization_time_ns)
                << std::endl;
    } else {
      std::cout << "serialization_time_ns   protobuf/flatbuffer : "
                << static_cast<double>(
                       pb_serialization_time_ns /
                       static_cast<double>(fbs_serialization_time_ns))
                << std::endl;
    }
  }

  if (0 != fbs_deserialization_time_ns && 0 != pb_deserialization_time_ns) {
    if (fbs_deserialization_time_ns > pb_deserialization_time_ns) {
      std::cout << "deserialization_time_ns flatbuffer/protobuf : "
                << static_cast<double>(fbs_deserialization_time_ns) /
                       static_cast<double>(pb_deserialization_time_ns)
                << std::endl;
    } else {
      std::cout << "deserialization_time_ns protobuf/flatbuffer : "
                << static_cast<double>(
                       pb_deserialization_time_ns /
                       static_cast<double>(fbs_deserialization_time_ns))
                << std::endl;
    }
  }

  if (0 != fbs_bytes && 0 != pb_bytes) {
    if (fbs_bytes > pb_bytes) {
      std::cout << "bytes                   flatbuffer/protobuf : "
                << static_cast<double>(fbs_bytes) /
                       static_cast<double>(pb_bytes)
                << std::endl;
    } else {
      std::cout << "bytes                   protobuf/flatbuffer : "
                << static_cast<double>(pb_bytes /
                                       static_cast<double>(fbs_bytes))
                << std::endl;
    }
  }

  return 0;
}
