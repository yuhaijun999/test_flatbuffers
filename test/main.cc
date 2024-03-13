
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

#include <cstddef>
#include <iostream>

#include "fbs_test.h"  // NOLINT
#include "pb_test.h"   // NOLINT

int main(int argc, char *argv[]) {
  std::string buffer;
  int times = 100;
  int64_t pb_serialization_time_ms = 0;
  int64_t pb_deserialization_time_ms = 0;
  int64_t fbs_serialization_time_ms = 0;
  int64_t fbs_deserialization_time_ms = 0;
  std::string type = "all";

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
      int tmp_times = atoi(argv[2]);
      times = tmp_times;
    } catch (...) {
    }
  }

  std::cout << "using : argv[1] is type [pb|fbs|all] default all. argv[2] is "
               "times default 100."
            << std::endl;

  std::cout << "type : " << type << " times : " << times << std::endl;

  if (std::string("all") == type || std::string("pb") == type) {
    pb_serialization(times, buffer, pb_serialization_time_ms);
    pb_deserialization(buffer, pb_deserialization_time_ms);

    std::cout << "protobuf   serialization   : " << pb_serialization_time_ms
              << " ms" << std::endl;

    std::cout << "protobuf   deserialization : " << pb_deserialization_time_ms
              << " ms" << std::endl;
  }

  if (std::string("all") == type || std::string("fbs") == type) {
    fbs_serialization(times, buffer, fbs_serialization_time_ms);
    fbs_deserialization(buffer, fbs_deserialization_time_ms);

    std::cout << "flatbuffer serialization   : " << fbs_serialization_time_ms
              << " ms" << std::endl;

    std::cout << "flatbuffer deserialization : " << fbs_deserialization_time_ms
              << " ms" << std::endl;
  }

  return 0;
}
