
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

#include <iostream>

#include "fbs_test.h"
#include "pb_test.h"

int main(int argc, char *argv[]) {
  std::cout << "main program" << std::endl;

  std::string buffer;
  int times = 10;
  int64_t pb_serialization_time_ms = 0;
  int64_t pb_deserialization_time_ms = 0;
  int64_t fbs_serialization_time_ms = 0;
  int64_t fbs_deserialization_time_ms = 0;

  pb_serialization(times, buffer, pb_serialization_time_ms);
  pb_deserialization(buffer, pb_deserialization_time_ms);

  std::cout << "pb_serialization : " << pb_serialization_time_ms << " ms"
            << std::endl;

  std::cout << "pb_deserialization : " << pb_deserialization_time_ms << " ms"
            << std::endl;

  fbs_serialization(times, buffer, fbs_serialization_time_ms);
  fbs_deserialization(buffer, fbs_deserialization_time_ms);

  std::cout << "fbs_serialization : " << fbs_serialization_time_ms << " ms"
            << std::endl;

  std::cout << "fbs_deserialization : " << fbs_deserialization_time_ms << " ms"
            << std::endl;

  return 0;
}
