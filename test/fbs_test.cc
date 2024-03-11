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
#include "flatbuffers/flatbuffers.h"

void test_fbs() {
  flatbuffers::FlatBufferBuilder builder;

  std::vector<flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>>
      vecScalarDataMapEntry;

  auto field1 = dingodb::fbs::common::ScalarField::ScalarField_booldata;

  std::vector<flatbuffers::Offset<dingodb::fbs::common::ScalarField>>
      vecFields1;

  auto fields1 = builder.CreateVector(vecFields1);



  auto scalar_field1 = dingodb::fbs::common::CreateScalarField(
      builder, dingodb::fbs::common::ScalarFieldType::ScalarFieldType_BOOL,
      fields1);

  auto scalar_data_map_entry1 = dingodb::fbs::common::CreateScalarDataMapEntry(
      builder, builder.CreateString("key1"), scalar_field1);
  vecScalarDataMapEntry.push_back(scalar_data_map_entry1);

  // dingodb::fbs::common::CreateScalarDataMapEntry(::flatbuffers::FlatBufferBuilder
  // &_fbb);

  // auto scalarfield1 = dingodb::fbs::common::CreateScalarField(builder, );
  //   auto vec1 = dingodb::fbs::common::CreateScalarDataMapEntry(
  //       builder, builder.CreateString("key1"), scalarfield1);

  auto scalar_data = builder.CreateVector(vecScalarDataMapEntry);

  auto vector_scalar_data =
      dingodb::fbs::common::CreateVectorScalardata(builder, scalar_data);
  builder.Finish(vector_scalar_data);
}
