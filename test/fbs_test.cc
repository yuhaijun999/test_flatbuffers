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

#include <cstdint>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "common_generated.h"  // NOLINT
#include "flatbuffers/flatbuffer_builder.h"
#include "flatbuffers/verifier.h"
#include "general.h"

static GeneralData general_data;

static void create_bool_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    bool value) {
  field_types.push_back(
      dingodb::fbs::common::ScalarField::ScalarField_booldata);

  auto off =
      builder.CreateStruct(dingodb::fbs::common::bool_data_wrapper(value))
          .Union();

  field_values.push_back(off);
}

static void create_int_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    int32_t value) {
  field_types.push_back(dingodb::fbs::common::ScalarField::ScalarField_intdata);

  auto off = builder.CreateStruct(dingodb::fbs::common::int_data_wrapper(value))
                 .Union();

  field_values.push_back(off);
}

static void create_long_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    int64_t value) {
  field_types.push_back(
      dingodb::fbs::common::ScalarField::ScalarField_longdata);

  auto off =
      builder.CreateStruct(dingodb::fbs::common::long_data_wrapper(value))
          .Union();

  field_values.push_back(off);
}

static void create_float_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    float value) {
  field_types.push_back(
      dingodb::fbs::common::ScalarField::ScalarField_floatdata);

  auto off =
      builder.CreateStruct(dingodb::fbs::common::float_data_wrapper(value))
          .Union();

  field_values.push_back(off);
}

static void create_double_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    double value) {
  field_types.push_back(
      dingodb::fbs::common::ScalarField::ScalarField_doubledata);

  auto off =
      builder.CreateStruct(dingodb::fbs::common::double_data_wrapper(value))
          .Union();

  field_values.push_back(off);
}

static void create_string_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    const std::string &value) {
  field_types.push_back(
      dingodb::fbs::common::ScalarField::ScalarField_stringdata);

  auto off = dingodb::fbs::common::Createstring_data_wrapper(
                 builder, builder.CreateString(value))
                 .Union();

  field_values.push_back(off);
}

static void create_bytes_data_wrapper_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,               // NOLINT
    std::vector<uint8_t> &field_types,                     // NOLINT
    std::vector<flatbuffers::Offset<void>> &field_values,  // NOLINT
    const std::string &value) {
  field_types.push_back(
      dingodb::fbs::common::ScalarField::ScalarField_bytesdata);
  std::vector<uint8_t> internal_value;
  internal_value.reserve(value.size());
  std::copy(value.begin(), value.end(), std::back_inserter(internal_value));

  auto off = dingodb::fbs::common::Createbytes_data_wrapper(
                 builder, builder.CreateVector(internal_value))
                 .Union();

  field_values.push_back(off);
}

static auto create_scalar_value_for_serialization(
    flatbuffers::FlatBufferBuilder &builder,  // NOLINT
    dingodb::fbs::common::ScalarFieldType scalar_field_type, int array_size) {
  std::vector<flatbuffers::Offset<void>> vecFields;
  std::vector<uint8_t> vecTypes;

  switch (scalar_field_type) {
    case dingodb::fbs::common::ScalarFieldType_BOOL: {
      for (int i = 0; i < array_size; i++) {
        bool value = general_data.get_bool_data();
        create_bool_data_wrapper_for_serialization(builder, vecTypes, vecFields,
                                                   value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_INT8:
      [[fallthrough]];
    case dingodb::fbs::common::ScalarFieldType_INT16:
      [[fallthrough]];
    case dingodb::fbs::common::ScalarFieldType_INT32: {
      for (int i = 0; i < array_size; i++) {
        int32_t value = general_data.get_int_data();
        create_int_data_wrapper_for_serialization(builder, vecTypes, vecFields,
                                                  value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_INT64: {
      for (int i = 0; i < array_size; i++) {
        int64_t value = general_data.get_long_data();
        create_long_data_wrapper_for_serialization(builder, vecTypes, vecFields,
                                                   value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_FLOAT32: {
      for (int i = 0; i < array_size; i++) {
        float value = general_data.get_float_data();
        create_float_data_wrapper_for_serialization(builder, vecTypes,
                                                    vecFields, value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_DOUBLE: {
      for (int i = 0; i < array_size; i++) {
        double value = general_data.get_double_data();
        create_double_data_wrapper_for_serialization(builder, vecTypes,
                                                     vecFields, value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_STRING: {
      for (int i = 0; i < array_size; i++) {
        const std::string &value = general_data.get_string_data();
        create_string_data_wrapper_for_serialization(builder, vecTypes,
                                                     vecFields, value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_BYTES: {
      for (int i = 0; i < array_size; i++) {
        const std::string &value = general_data.get_bytes_data();
        create_bytes_data_wrapper_for_serialization(builder, vecTypes,
                                                    vecFields, value);
      }
      break;
    }
    case dingodb::fbs::common::ScalarFieldType_NONE:
    default:
      break;
  }

  auto fields = builder.CreateVector(vecFields);
  auto types = builder.CreateVector(vecTypes);

  return dingodb::fbs::common::CreateScalarValue(builder, scalar_field_type,
                                                 types, fields);
}

// [[deprecated]] static auto create_scalar_data_map_entry_for_serialization(
//     flatbuffers::FlatBufferBuilder &builder, const std::string &key,  //
//     NOLINT dingodb::fbs::common::ScalarFieldType scalar_field_type, int
//     array_size) {
//   return dingodb::fbs::common::CreateScalarDataMapEntry(
//       builder, builder.CreateString(key),
//       create_scalar_value_for_serialization(builder, scalar_field_type,
//       array_size));
// }

static auto create_vector_scalar_data_for_serialization(
    flatbuffers::FlatBufferBuilder &builder, int array_size) {
  std::string key;

  std::vector<flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>>
      vecScalarDataMapEntry;

  // bool
  key = general_data.get_key_prefix() + "_bool_" +
        std::to_string(general_data.get_key_prefix_index());

  auto bool_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_BOOL,
              array_size));

  vecScalarDataMapEntry.push_back(bool_scalar_data_map_entry);

  // int32
  key = general_data.get_key_prefix() + "_int_" +
        std::to_string(general_data.get_key_prefix_index());

  auto int_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_INT32,
              array_size));

  vecScalarDataMapEntry.push_back(int_scalar_data_map_entry);

  // long
  key = general_data.get_key_prefix() + "_long_" +
        std::to_string(general_data.get_key_prefix_index());

  auto long_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_INT64,
              array_size));

  vecScalarDataMapEntry.push_back(long_scalar_data_map_entry);

  // float
  key = general_data.get_key_prefix() + "_float_" +
        std::to_string(general_data.get_key_prefix_index());

  auto float_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_FLOAT32,
              array_size));

  vecScalarDataMapEntry.push_back(float_scalar_data_map_entry);

  // double

  key = general_data.get_key_prefix() + "_double_" +
        std::to_string(general_data.get_key_prefix_index());

  auto double_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_DOUBLE,
              array_size));

  vecScalarDataMapEntry.push_back(double_scalar_data_map_entry);

  // string
  key = general_data.get_key_prefix() + "_string_" +
        std::to_string(general_data.get_key_prefix_index());

  auto string_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_STRING,
              array_size));

  vecScalarDataMapEntry.push_back(string_scalar_data_map_entry);

  // bytes
  key = general_data.get_key_prefix() + "_bytes_" +
        std::to_string(general_data.get_key_prefix_index());

  auto bytes_scalar_data_map_entry =
      dingodb::fbs::common::CreateScalarDataMapEntry(
          builder, builder.CreateString(key),
          create_scalar_value_for_serialization(
              builder,
              dingodb::fbs::common::ScalarFieldType::ScalarFieldType_BYTES,
              array_size));

  vecScalarDataMapEntry.push_back(bytes_scalar_data_map_entry);

  //////////////////////////////////////

  auto scalar_data = builder.CreateVector(vecScalarDataMapEntry);

  auto vector_scalar_data =
      dingodb::fbs::common::CreateVectorScalardata(builder, scalar_data);
  builder.Finish(vector_scalar_data);
}

void fbs_serialization(int array_size, std::string &buffer,
                       int64_t &time_ms) {  // NOLINT
  TimeDiff time_diff;
  flatbuffers::FlatBufferBuilder builder;
  create_vector_scalar_data_for_serialization(builder, array_size);

  buffer.resize(builder.GetSize(), 0);
  memcpy(buffer.data(), builder.GetBufferPointer(), builder.GetSize());
  time_ms = time_diff.GetDiff();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void fbs_deserialization(const std::string &buffer, int64_t &time_ms) {
  TimeDiff time_diff;
  flatbuffers::FlatBufferBuilder builder;
  builder.PushBytes(
      reinterpret_cast<unsigned char *>(const_cast<char *>(buffer.c_str())),
      buffer.size());

  flatbuffers::Verifier verify(builder.GetCurrentBufferPointer(),
                               buffer.size());
  bool verify_flat = dingodb::fbs::common::VerifyVectorScalardataBuffer(verify);
  if (!verify_flat) {
    std::cout << "buffer is wrong" << std::endl;
  }

  auto vector_scalar_data = dingodb::fbs::common::GetVectorScalardata(
      builder.GetCurrentBufferPointer());

  auto scalar_datas = vector_scalar_data->scalar_data();
  for (const auto &scalar_data : *scalar_datas) {
    const auto &key = scalar_data->key();
    const auto &value = scalar_data->value();

    std::string kye_string(key->c_str(), key->size());
    auto scalar_field_type = value->field_type();
    (void)scalar_field_type;
    const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *fields =
        value->fields();

    const ::flatbuffers::Vector<uint8_t> *fields_type = value->fields_type();

    for (size_t i = 0; i < fields->size(); i++) {
      const dingodb::fbs::common::ScalarField sf =
          fields_type->GetEnum<dingodb::fbs::common::ScalarField>(i);
      // fields_type->GetAs<dingodb::fbs::common::ScalarField>(i);
      switch (sf) {
        case dingodb::fbs::common::ScalarField_booldata: {
          const auto *bool_data =
              fields->GetAs<dingodb::fbs::common::bool_data_wrapper>(i);
          (void)bool_data->bool_data();
          break;
        }
        case dingodb::fbs::common::ScalarField_intdata: {
          const auto *int_data =
              fields->GetAs<dingodb::fbs::common::int_data_wrapper>(i);
          (void)int_data->int_data();
          break;
        }
        case dingodb::fbs::common::ScalarField_longdata: {
          const auto *long_data =
              fields->GetAs<dingodb::fbs::common::long_data_wrapper>(i);
          (void)long_data->long_data();
          break;
        }
        case dingodb::fbs::common::ScalarField_floatdata: {
          const auto *float_data =
              fields->GetAs<dingodb::fbs::common::float_data_wrapper>(i);
          (void)float_data->float_data();
          break;
        }
        case dingodb::fbs::common::ScalarField_doubledata: {
          const auto *double_data =
              fields->GetAs<dingodb::fbs::common::double_data_wrapper>(i);
          (void)double_data->double_data();
          break;
        }
        case dingodb::fbs::common::ScalarField_stringdata: {
          const auto *string_data =
              fields->GetAs<dingodb::fbs::common::string_data_wrapper>(i);
          (void)string_data->string_data();
          std::string s(string_data->string_data()->c_str(),
                        string_data->string_data()->size());
          (void)s;
          break;
        }
        case dingodb::fbs::common::ScalarField_bytesdata: {
          const auto *bytes_data =
              fields->GetAs<dingodb::fbs::common::bytes_data_wrapper>(i);
          (void)bytes_data->bytes_data();
          std::string b(bytes_data->bytes_data()->begin(),
                        bytes_data->bytes_data()->end());
          (void)b;
          break;
        }
        case dingodb::fbs::common::ScalarField_NONE:
        default:
          break;
      }
    }
  }

  time_ms = time_diff.GetDiff();
}
