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
#include "fbs_test.h"

#include <vector>

#include "common_generated.h"
#include "flatbuffers/flatbuffer_builder.h"
#include "flatbuffers/flatbuffers.h"

void test_fbs() {
  flatbuffers::FlatBufferBuilder builder;

  std::vector<flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>>
      vecScalarDataMapEntry;

  auto field1 = dingodb::fbs::common::ScalarField::ScalarField_booldata;

  std::vector<flatbuffers::Offset<void>> vecFields1;

  std::vector<uint8_t> vecFieldTypes1;

  vecFieldTypes1.push_back(dingodb::fbs::common::ScalarFieldType_BOOL);

  flatbuffers::FlatBufferBuilder fbb;

  auto booldata1 =
      fbb.CreateStruct(dingodb::fbs::common::bool_data_wrapper(true)).Union();

  vecFields1.push_back(booldata1);

  auto fields1 = builder.CreateVector(vecFields1);
  auto types1 = builder.CreateVector(vecFieldTypes1);

  auto scalar_value1 = dingodb::fbs::common::CreateScalarValue(
      builder, dingodb::fbs::common::ScalarFieldType::ScalarFieldType_BOOL,
      types1, fields1);

  auto scalar_data_map_entry1 = dingodb::fbs::common::CreateScalarDataMapEntry(
      builder, builder.CreateString("key1"), scalar_value1);
  vecScalarDataMapEntry.push_back(scalar_data_map_entry1);

  auto scalar_data = builder.CreateVector(vecScalarDataMapEntry);

  auto vector_scalar_data =
      dingodb::fbs::common::CreateVectorScalardata(builder, scalar_data);
  builder.Finish(vector_scalar_data);
}
