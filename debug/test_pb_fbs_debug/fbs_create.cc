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
#include "fbs_create.h"

#include <cstdint>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#include <string_view>
#include <vector>

#include "common_generated.h"
#include "flatbuffers/flatbuffer_builder.h"
#include "flatbuffers/flexbuffers.h"
#include "flatbuffers/verifier.h"
#include "general.h"

void fbs_create() {
  flatbuffers::FlatBufferBuilder builder;
  builder.CreateStruct(bool(true));
  builder.CreateStruct(int(32));
  builder.CreateStruct(int64_t(1000));
  builder.CreateStruct(float(1.23f));
  builder.CreateStruct(double(123434.4545));
  builder.CreateString("string");
  std::string s("bytes");
  builder.CreateVector(s.data(), s.size());

  /////////////////////////////////////////////////////
  flexbuffers::Builder fbb;
  fbb.Int(13);
  fbb.Finish();
}