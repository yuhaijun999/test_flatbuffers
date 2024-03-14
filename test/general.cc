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

#include <algorithm>
#include <cctype>
#include <chrono>

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
  return std::chrono::duration_cast<std::chrono::nanoseconds>(end - start)
      .count();
}

TEST_TYPE get_test_type(const char *str) {
  TEST_TYPE tt = TEST_TYPE::TEST_TYPE_NONE;

  std::string s(str);
  std::transform(s.begin(), s.end(), s.begin(), ::tolower);

  if (std::string("bool") == s) {
    tt = TEST_TYPE::TEST_TYPE_BOOL;
  } else if (std::string("int") == s || std::string("int32") == s) {
    tt = TEST_TYPE::TEST_TYPE_INT;
  } else if (std::string("long") == s || std::string("int64") == s) {
    tt = TEST_TYPE::TEST_TYPE_LONG;
  } else if (std::string("float") == s || std::string("float32") == s) {
    tt = TEST_TYPE::TEST_TYPE_FLOAT;
  } else if (std::string("double") == s || std::string("float64") == s) {
    tt = TEST_TYPE::TEST_TYPE_DOUBLE;
  } else if (std::string("string") == s) {
    tt = TEST_TYPE::TEST_TYPE_STRING;
  } else if (std::string("bytes") == s) {
    tt = TEST_TYPE::TEST_TYPE_BYTES;
  }

  return tt;
}

std::string show_types(const std::set<TEST_TYPE> &tts) {
  std::string s;
  bool is_first = true;

  for (const auto &tt : tts) {
    if (!is_first) {
      s += ",";
    }
    switch (tt) {
      case TEST_TYPE::TEST_TYPE_BOOL: {
        s += "bool";
        break;
      }
      case TEST_TYPE::TEST_TYPE_INT: {
        s += "int";
        break;
      }
      case TEST_TYPE::TEST_TYPE_LONG: {
        s += "long";
        break;
      }
      case TEST_TYPE::TEST_TYPE_FLOAT: {
        s += "float";
        break;
      }
      case TEST_TYPE::TEST_TYPE_DOUBLE: {
        s += "double";
        break;
      }
      case TEST_TYPE::TEST_TYPE_STRING: {
        s += "string";
        break;
      }
      case TEST_TYPE::TEST_TYPE_BYTES: {
        s += "bytes";
        break;
      }
      case TEST_TYPE::TEST_TYPE_NONE:
        break;
    }
    is_first = false;
  }

  return s;
}
