// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COMMON_DINGODB_FBS_COMMON_H_
#define FLATBUFFERS_GENERATED_COMMON_DINGODB_FBS_COMMON_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 6,
             "Non-compatible flatbuffers version included");

namespace dingodb {
namespace fbs {
namespace common {

struct bool_data_wrapper;

struct int_data_wrapper;

struct long_data_wrapper;

struct float_data_wrapper;

struct double_data_wrapper;

struct string_data_wrapper;
struct string_data_wrapperBuilder;

struct bytes_data_wrapper;
struct bytes_data_wrapperBuilder;

struct ScalarValue;
struct ScalarValueBuilder;

struct ScalarDataMapEntry;
struct ScalarDataMapEntryBuilder;

struct VectorScalardata;
struct VectorScalardataBuilder;

enum ScalarField : uint8_t {
  ScalarField_NONE = 0,
  ScalarField_booldata = 1,
  ScalarField_intdata = 2,
  ScalarField_longdata = 3,
  ScalarField_floatdata = 4,
  ScalarField_doubledata = 5,
  ScalarField_stringdata = 6,
  ScalarField_bytesdata = 7,
  ScalarField_MIN = ScalarField_NONE,
  ScalarField_MAX = ScalarField_bytesdata
};

inline const ScalarField (&EnumValuesScalarField())[8] {
  static const ScalarField values[] = {
    ScalarField_NONE,
    ScalarField_booldata,
    ScalarField_intdata,
    ScalarField_longdata,
    ScalarField_floatdata,
    ScalarField_doubledata,
    ScalarField_stringdata,
    ScalarField_bytesdata
  };
  return values;
}

inline const char * const *EnumNamesScalarField() {
  static const char * const names[9] = {
    "NONE",
    "booldata",
    "intdata",
    "longdata",
    "floatdata",
    "doubledata",
    "stringdata",
    "bytesdata",
    nullptr
  };
  return names;
}

inline const char *EnumNameScalarField(ScalarField e) {
  if (::flatbuffers::IsOutRange(e, ScalarField_NONE, ScalarField_bytesdata)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesScalarField()[index];
}

template<typename T> struct ScalarFieldTraits {
  static const ScalarField enum_value = ScalarField_NONE;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::bool_data_wrapper> {
  static const ScalarField enum_value = ScalarField_booldata;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::int_data_wrapper> {
  static const ScalarField enum_value = ScalarField_intdata;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::long_data_wrapper> {
  static const ScalarField enum_value = ScalarField_longdata;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::float_data_wrapper> {
  static const ScalarField enum_value = ScalarField_floatdata;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::double_data_wrapper> {
  static const ScalarField enum_value = ScalarField_doubledata;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::string_data_wrapper> {
  static const ScalarField enum_value = ScalarField_stringdata;
};

template<> struct ScalarFieldTraits<dingodb::fbs::common::bytes_data_wrapper> {
  static const ScalarField enum_value = ScalarField_bytesdata;
};

bool VerifyScalarField(::flatbuffers::Verifier &verifier, const void *obj, ScalarField type);
bool VerifyScalarFieldVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<uint8_t> *types);

enum ScalarFieldType : int32_t {
  ScalarFieldType_NONE = 0,
  ScalarFieldType_BOOL = 1,
  ScalarFieldType_INT8 = 2,
  ScalarFieldType_INT16 = 3,
  ScalarFieldType_INT32 = 4,
  ScalarFieldType_INT64 = 5,
  ScalarFieldType_FLOAT32 = 6,
  ScalarFieldType_DOUBLE = 7,
  ScalarFieldType_STRING = 8,
  ScalarFieldType_BYTES = 9,
  ScalarFieldType_MIN = ScalarFieldType_NONE,
  ScalarFieldType_MAX = ScalarFieldType_BYTES
};

inline const ScalarFieldType (&EnumValuesScalarFieldType())[10] {
  static const ScalarFieldType values[] = {
    ScalarFieldType_NONE,
    ScalarFieldType_BOOL,
    ScalarFieldType_INT8,
    ScalarFieldType_INT16,
    ScalarFieldType_INT32,
    ScalarFieldType_INT64,
    ScalarFieldType_FLOAT32,
    ScalarFieldType_DOUBLE,
    ScalarFieldType_STRING,
    ScalarFieldType_BYTES
  };
  return values;
}

inline const char * const *EnumNamesScalarFieldType() {
  static const char * const names[11] = {
    "NONE",
    "BOOL",
    "INT8",
    "INT16",
    "INT32",
    "INT64",
    "FLOAT32",
    "DOUBLE",
    "STRING",
    "BYTES",
    nullptr
  };
  return names;
}

inline const char *EnumNameScalarFieldType(ScalarFieldType e) {
  if (::flatbuffers::IsOutRange(e, ScalarFieldType_NONE, ScalarFieldType_BYTES)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesScalarFieldType()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) bool_data_wrapper FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t bool_data_;

 public:
  bool_data_wrapper()
      : bool_data_(0) {
  }
  bool_data_wrapper(bool _bool_data)
      : bool_data_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_bool_data))) {
  }
  bool bool_data() const {
    return ::flatbuffers::EndianScalar(bool_data_) != 0;
  }
};
FLATBUFFERS_STRUCT_END(bool_data_wrapper, 1);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) int_data_wrapper FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t int_data_;

 public:
  int_data_wrapper()
      : int_data_(0) {
  }
  int_data_wrapper(int32_t _int_data)
      : int_data_(::flatbuffers::EndianScalar(_int_data)) {
  }
  int32_t int_data() const {
    return ::flatbuffers::EndianScalar(int_data_);
  }
};
FLATBUFFERS_STRUCT_END(int_data_wrapper, 4);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) long_data_wrapper FLATBUFFERS_FINAL_CLASS {
 private:
  int64_t long_data_;

 public:
  long_data_wrapper()
      : long_data_(0) {
  }
  long_data_wrapper(int64_t _long_data)
      : long_data_(::flatbuffers::EndianScalar(_long_data)) {
  }
  int64_t long_data() const {
    return ::flatbuffers::EndianScalar(long_data_);
  }
};
FLATBUFFERS_STRUCT_END(long_data_wrapper, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) float_data_wrapper FLATBUFFERS_FINAL_CLASS {
 private:
  float float_data_;

 public:
  float_data_wrapper()
      : float_data_(0) {
  }
  float_data_wrapper(float _float_data)
      : float_data_(::flatbuffers::EndianScalar(_float_data)) {
  }
  float float_data() const {
    return ::flatbuffers::EndianScalar(float_data_);
  }
};
FLATBUFFERS_STRUCT_END(float_data_wrapper, 4);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) double_data_wrapper FLATBUFFERS_FINAL_CLASS {
 private:
  double double_data_;

 public:
  double_data_wrapper()
      : double_data_(0) {
  }
  double_data_wrapper(double _double_data)
      : double_data_(::flatbuffers::EndianScalar(_double_data)) {
  }
  double double_data() const {
    return ::flatbuffers::EndianScalar(double_data_);
  }
};
FLATBUFFERS_STRUCT_END(double_data_wrapper, 8);

struct string_data_wrapper FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef string_data_wrapperBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STRING_DATA = 4
  };
  const ::flatbuffers::String *string_data() const {
    return GetPointer<const ::flatbuffers::String *>(VT_STRING_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_STRING_DATA) &&
           verifier.VerifyString(string_data()) &&
           verifier.EndTable();
  }
};

struct string_data_wrapperBuilder {
  typedef string_data_wrapper Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_string_data(::flatbuffers::Offset<::flatbuffers::String> string_data) {
    fbb_.AddOffset(string_data_wrapper::VT_STRING_DATA, string_data);
  }
  explicit string_data_wrapperBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<string_data_wrapper> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<string_data_wrapper>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<string_data_wrapper> Createstring_data_wrapper(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> string_data = 0) {
  string_data_wrapperBuilder builder_(_fbb);
  builder_.add_string_data(string_data);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<string_data_wrapper> Createstring_data_wrapperDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *string_data = nullptr) {
  auto string_data__ = string_data ? _fbb.CreateString(string_data) : 0;
  return dingodb::fbs::common::Createstring_data_wrapper(
      _fbb,
      string_data__);
}

struct bytes_data_wrapper FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef bytes_data_wrapperBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BYTES_DATA = 4
  };
  const ::flatbuffers::Vector<uint8_t> *bytes_data() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_BYTES_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_BYTES_DATA) &&
           verifier.VerifyVector(bytes_data()) &&
           verifier.EndTable();
  }
};

struct bytes_data_wrapperBuilder {
  typedef bytes_data_wrapper Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_bytes_data(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> bytes_data) {
    fbb_.AddOffset(bytes_data_wrapper::VT_BYTES_DATA, bytes_data);
  }
  explicit bytes_data_wrapperBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<bytes_data_wrapper> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<bytes_data_wrapper>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<bytes_data_wrapper> Createbytes_data_wrapper(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> bytes_data = 0) {
  bytes_data_wrapperBuilder builder_(_fbb);
  builder_.add_bytes_data(bytes_data);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<bytes_data_wrapper> Createbytes_data_wrapperDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *bytes_data = nullptr) {
  auto bytes_data__ = bytes_data ? _fbb.CreateVector<uint8_t>(*bytes_data) : 0;
  return dingodb::fbs::common::Createbytes_data_wrapper(
      _fbb,
      bytes_data__);
}

struct ScalarValue FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ScalarValueBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FIELD_TYPE = 4,
    VT_FIELDS_TYPE = 6,
    VT_FIELDS = 8
  };
  dingodb::fbs::common::ScalarFieldType field_type() const {
    return static_cast<dingodb::fbs::common::ScalarFieldType>(GetField<int32_t>(VT_FIELD_TYPE, 0));
  }
  const ::flatbuffers::Vector<uint8_t> *fields_type() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_FIELDS_TYPE);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *fields() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *>(VT_FIELDS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_FIELD_TYPE, 4) &&
           VerifyOffset(verifier, VT_FIELDS_TYPE) &&
           verifier.VerifyVector(fields_type()) &&
           VerifyOffset(verifier, VT_FIELDS) &&
           verifier.VerifyVector(fields()) &&
           VerifyScalarFieldVector(verifier, fields(), fields_type()) &&
           verifier.EndTable();
  }
};

struct ScalarValueBuilder {
  typedef ScalarValue Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_field_type(dingodb::fbs::common::ScalarFieldType field_type) {
    fbb_.AddElement<int32_t>(ScalarValue::VT_FIELD_TYPE, static_cast<int32_t>(field_type), 0);
  }
  void add_fields_type(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> fields_type) {
    fbb_.AddOffset(ScalarValue::VT_FIELDS_TYPE, fields_type);
  }
  void add_fields(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<void>>> fields) {
    fbb_.AddOffset(ScalarValue::VT_FIELDS, fields);
  }
  explicit ScalarValueBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ScalarValue> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ScalarValue>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ScalarValue> CreateScalarValue(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    dingodb::fbs::common::ScalarFieldType field_type = dingodb::fbs::common::ScalarFieldType_NONE,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> fields_type = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<void>>> fields = 0) {
  ScalarValueBuilder builder_(_fbb);
  builder_.add_fields(fields);
  builder_.add_fields_type(fields_type);
  builder_.add_field_type(field_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<ScalarValue> CreateScalarValueDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    dingodb::fbs::common::ScalarFieldType field_type = dingodb::fbs::common::ScalarFieldType_NONE,
    const std::vector<uint8_t> *fields_type = nullptr,
    const std::vector<::flatbuffers::Offset<void>> *fields = nullptr) {
  auto fields_type__ = fields_type ? _fbb.CreateVector<uint8_t>(*fields_type) : 0;
  auto fields__ = fields ? _fbb.CreateVector<::flatbuffers::Offset<void>>(*fields) : 0;
  return dingodb::fbs::common::CreateScalarValue(
      _fbb,
      field_type,
      fields_type__,
      fields__);
}

struct ScalarDataMapEntry FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ScalarDataMapEntryBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_KEY = 4,
    VT_VALUE = 6
  };
  const ::flatbuffers::String *key() const {
    return GetPointer<const ::flatbuffers::String *>(VT_KEY);
  }
  bool KeyCompareLessThan(const ScalarDataMapEntry * const o) const {
    return *key() < *o->key();
  }
  int KeyCompareWithValue(const char *_key) const {
    return strcmp(key()->c_str(), _key);
  }
  const dingodb::fbs::common::ScalarValue *value() const {
    return GetPointer<const dingodb::fbs::common::ScalarValue *>(VT_VALUE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_KEY) &&
           verifier.VerifyString(key()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyTable(value()) &&
           verifier.EndTable();
  }
};

struct ScalarDataMapEntryBuilder {
  typedef ScalarDataMapEntry Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_key(::flatbuffers::Offset<::flatbuffers::String> key) {
    fbb_.AddOffset(ScalarDataMapEntry::VT_KEY, key);
  }
  void add_value(::flatbuffers::Offset<dingodb::fbs::common::ScalarValue> value) {
    fbb_.AddOffset(ScalarDataMapEntry::VT_VALUE, value);
  }
  explicit ScalarDataMapEntryBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ScalarDataMapEntry> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ScalarDataMapEntry>(end);
    fbb_.Required(o, ScalarDataMapEntry::VT_KEY);
    return o;
  }
};

inline ::flatbuffers::Offset<ScalarDataMapEntry> CreateScalarDataMapEntry(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> key = 0,
    ::flatbuffers::Offset<dingodb::fbs::common::ScalarValue> value = 0) {
  ScalarDataMapEntryBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_key(key);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<ScalarDataMapEntry> CreateScalarDataMapEntryDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *key = nullptr,
    ::flatbuffers::Offset<dingodb::fbs::common::ScalarValue> value = 0) {
  auto key__ = key ? _fbb.CreateString(key) : 0;
  return dingodb::fbs::common::CreateScalarDataMapEntry(
      _fbb,
      key__,
      value);
}

struct VectorScalardata FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef VectorScalardataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SCALAR_DATA = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>> *scalar_data() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>> *>(VT_SCALAR_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SCALAR_DATA) &&
           verifier.VerifyVector(scalar_data()) &&
           verifier.VerifyVectorOfTables(scalar_data()) &&
           verifier.EndTable();
  }
};

struct VectorScalardataBuilder {
  typedef VectorScalardata Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_scalar_data(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>>> scalar_data) {
    fbb_.AddOffset(VectorScalardata::VT_SCALAR_DATA, scalar_data);
  }
  explicit VectorScalardataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<VectorScalardata> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<VectorScalardata>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<VectorScalardata> CreateVectorScalardata(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>>> scalar_data = 0) {
  VectorScalardataBuilder builder_(_fbb);
  builder_.add_scalar_data(scalar_data);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<VectorScalardata> CreateVectorScalardataDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    std::vector<::flatbuffers::Offset<dingodb::fbs::common::ScalarDataMapEntry>> *scalar_data = nullptr) {
  auto scalar_data__ = scalar_data ? _fbb.CreateVectorOfSortedTables<dingodb::fbs::common::ScalarDataMapEntry>(scalar_data) : 0;
  return dingodb::fbs::common::CreateVectorScalardata(
      _fbb,
      scalar_data__);
}

inline bool VerifyScalarField(::flatbuffers::Verifier &verifier, const void *obj, ScalarField type) {
  switch (type) {
    case ScalarField_NONE: {
      return true;
    }
    case ScalarField_booldata: {
      return verifier.VerifyField<dingodb::fbs::common::bool_data_wrapper>(static_cast<const uint8_t *>(obj), 0, 1);
    }
    case ScalarField_intdata: {
      return verifier.VerifyField<dingodb::fbs::common::int_data_wrapper>(static_cast<const uint8_t *>(obj), 0, 4);
    }
    case ScalarField_longdata: {
      return verifier.VerifyField<dingodb::fbs::common::long_data_wrapper>(static_cast<const uint8_t *>(obj), 0, 8);
    }
    case ScalarField_floatdata: {
      return verifier.VerifyField<dingodb::fbs::common::float_data_wrapper>(static_cast<const uint8_t *>(obj), 0, 4);
    }
    case ScalarField_doubledata: {
      return verifier.VerifyField<dingodb::fbs::common::double_data_wrapper>(static_cast<const uint8_t *>(obj), 0, 8);
    }
    case ScalarField_stringdata: {
      auto ptr = reinterpret_cast<const dingodb::fbs::common::string_data_wrapper *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case ScalarField_bytesdata: {
      auto ptr = reinterpret_cast<const dingodb::fbs::common::bytes_data_wrapper *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyScalarFieldVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (::flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyScalarField(
        verifier,  values->Get(i), types->GetEnum<ScalarField>(i))) {
      return false;
    }
  }
  return true;
}

inline const dingodb::fbs::common::VectorScalardata *GetVectorScalardata(const void *buf) {
  return ::flatbuffers::GetRoot<dingodb::fbs::common::VectorScalardata>(buf);
}

inline const dingodb::fbs::common::VectorScalardata *GetSizePrefixedVectorScalardata(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<dingodb::fbs::common::VectorScalardata>(buf);
}

inline bool VerifyVectorScalardataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<dingodb::fbs::common::VectorScalardata>(nullptr);
}

inline bool VerifySizePrefixedVectorScalardataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<dingodb::fbs::common::VectorScalardata>(nullptr);
}

inline void FinishVectorScalardataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<dingodb::fbs::common::VectorScalardata> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedVectorScalardataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<dingodb::fbs::common::VectorScalardata> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace common
}  // namespace fbs
}  // namespace dingodb

#endif  // FLATBUFFERS_GENERATED_COMMON_DINGODB_FBS_COMMON_H_
