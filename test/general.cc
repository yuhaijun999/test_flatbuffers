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
#include "general.h"

GeneralData::GeneralData() {}

GeneralData::~GeneralData() {}

bool GeneralData::get_bool_data() {
  bool_data = !bool_data;
  return bool_data;
}
int32_t GeneralData::get_int_data() { return ++int_data; }
int64_t GeneralData::get_long_data() {
  long_data += 100;
  return long_data;
}
float GeneralData::get_float_data() { return ++float_data; }
double GeneralData::get_double_data() {
  double_data += 100;
  return double_data;
}
std::string GeneralData::get_string_data() {
  return "[" + std::to_string(++string_data_index) + "]" + string_data;
}
std::string GeneralData::get_bytes_data() {
  return "[" + std::to_string(++bytes_data_index) + "]" + bytes_data;
}
std::string GeneralData::get_key_prefix() { return key_prefix; }
int32_t GeneralData::get_key_prefix_index() { return key_prefix_index++; }

TimeDiff::TimeDiff() { start = std::chrono::steady_clock::now(); }
TimeDiff::~TimeDiff() {}
int64_t TimeDiff::GetDiff() {
  end = std::chrono::steady_clock::now();
  return std::chrono::duration_cast<std::chrono::microseconds>(end - start)
      .count();
}
