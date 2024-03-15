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

#include "pb_test.h"

#include "common.pb.h"
#include "general.h"

#ifndef PB_USE_COPY
#define PB_USE_COPY
#endif
#undef PB_USE_COPY

static GeneralData general_data;

static void create_bool_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_bool_data(general_data.get_bool_data());
}

static void create_int_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_int_data(general_data.get_int_data());
}

static void create_long_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_long_data(general_data.get_long_data());
}

static void create_float_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_float_data(general_data.get_float_data());
}

static void create_double_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_double_data(general_data.get_double_data());
}

static void create_string_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_string_data(general_data.get_string_data());
}

static void create_bytes_data_for_serialization(
    dingodb::pb::common::ScalarValue &scalar_value) {  // NOLINT
  dingodb::pb::common::ScalarField *field = scalar_value.add_fields();
  field->set_bytes_data(general_data.get_bytes_data());
}

static void create_scalar_value_for_serialization(
    dingodb::pb::common::VectorScalardata &vector_scalar_data,
    int array_size,  // NOLINT
    dingodb::pb::common::ScalarFieldType scalar_field_type) {
  std::string key;

  dingodb::pb::common::ScalarValue scalar_value;

  scalar_value.set_field_type(scalar_field_type);

  switch (scalar_field_type) {
    case dingodb::pb::common::BOOL: {
      key = general_data.get_key_prefix() + "_bool_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_bool_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::INT8:
    case dingodb::pb::common::INT16:
    case dingodb::pb::common::INT32: {
      key = general_data.get_key_prefix() + "_int_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_int_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::INT64: {
      key = general_data.get_key_prefix() + "_long_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_long_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::FLOAT32: {
      key = general_data.get_key_prefix() + "_float_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_float_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::DOUBLE: {
      key = general_data.get_key_prefix() + "_double_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_double_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::STRING: {
      key = general_data.get_key_prefix() + "_string_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_string_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::BYTES: {
      key = general_data.get_key_prefix() + "_bytes_" +
            std::to_string(general_data.get_key_prefix_index());
      for (int i = 0; i < array_size; i++) {
        create_bytes_data_for_serialization(scalar_value);
      }
      break;
    }
    case dingodb::pb::common::NONE:
    default:
      break;
  }

  vector_scalar_data.mutable_scalar_data()->insert(
      {key, std::move(scalar_value)});
}

void pb_serialization(int array_size, std::string &buffer, int64_t &time_ms,
                      const std::set<TEST_TYPE> &tts) {
  TimeDiff time_diff;
  dingodb::pb::common::VectorScalardata vector_scalar_data;
  std::string key;

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_BOOL); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::BOOL);
  }

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_INT); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::INT32);
  }

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_LONG); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::INT64);
  }

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_FLOAT); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::FLOAT32);
  }

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_DOUBLE); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::DOUBLE);
  }

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_STRING); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::STRING);
  }

  if (auto iter = tts.find(TEST_TYPE::TEST_TYPE_BYTES); iter != tts.end()) {
    create_scalar_value_for_serialization(
        vector_scalar_data, array_size,
        dingodb::pb::common::ScalarFieldType::BYTES);
  }

  buffer = vector_scalar_data.SerializeAsString();
  time_ms = time_diff.GetDiff();

}  // NOLINT
void pb_deserialization(const std::string &buffer, int64_t &time_ms) {
  TimeDiff time_diff;
  dingodb::pb::common::VectorScalardata vector_scalar;
  if (!vector_scalar.ParseFromString(buffer)) {
    std::cout << "ParseFromString failed" << std::endl;
  }

  for (const auto &one_scalar_data : vector_scalar.scalar_data()) {
    const auto &key = one_scalar_data.first;
    (void)key;
    const auto &scalar_value = one_scalar_data.second;

    auto field_type = scalar_value.field_type();
    (void)field_type;
    for (const auto &field : scalar_value.fields()) {
      if (field.has_bool_data()) {
        auto bool_data = field.bool_data();
        (void)bool_data;
      } else if (field.has_int_data()) {
        auto int_data = field.int_data();
        (void)int_data;
      } else if (field.has_long_data()) {
        auto long_data = field.long_data();
        (void)long_data;
      } else if (field.has_float_data()) {
        auto float_data = field.float_data();
        (void)float_data;
      } else if (field.has_double_data()) {
        auto double_data = field.double_data();
        (void)double_data;
      } else if (field.has_string_data()) {
#if defined(PB_USE_COPY)
        std::string string_data(field.string_data());
        (void)string_data;
#else
        const std::string &string_data = field.string_data();
        (void)string_data;
#endif
      } else if (field.has_bytes_data()) {
#if defined(PB_USE_COPY)
        std::string bytes_data(field.bytes_data());
        (void)bytes_data;
#else
        const std::string &bytes_data = field.bytes_data();
        (void)bytes_data;
#endif

      } else {
      }
    }
  }

  // vector_scalar.DebugString();
  // vector_scalar.ShortDebugString();

  time_ms = time_diff.GetDiff();
}
