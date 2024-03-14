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

#ifndef PB_TEST_H
#define PB_TEST_H

#include <set>
#include <string>
#include "general.h"
void pb_serialization(int array_size, std::string &buffer,
                      int64_t &time_ms, const std::set<TEST_TYPE> &tts);  // NOLINT
void pb_deserialization(const std::string &buffer, int64_t &time_ms);

#endif /* PB_TEST_H */
