// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#include "common.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace dingodb {
namespace pb {
namespace common {
PROTOBUF_CONSTEXPR VectorScalardata_ScalarDataEntry_DoNotUse::VectorScalardata_ScalarDataEntry_DoNotUse(
    ::_pbi::ConstantInitialized) {}
struct VectorScalardata_ScalarDataEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VectorScalardata_ScalarDataEntry_DoNotUseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VectorScalardata_ScalarDataEntry_DoNotUseDefaultTypeInternal() {}
  union {
    VectorScalardata_ScalarDataEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VectorScalardata_ScalarDataEntry_DoNotUseDefaultTypeInternal _VectorScalardata_ScalarDataEntry_DoNotUse_default_instance_;
PROTOBUF_CONSTEXPR VectorScalardata::VectorScalardata(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.scalar_data_)*/{::_pbi::ConstantInitialized()}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VectorScalardataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VectorScalardataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VectorScalardataDefaultTypeInternal() {}
  union {
    VectorScalardata _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VectorScalardataDefaultTypeInternal _VectorScalardata_default_instance_;
PROTOBUF_CONSTEXPR ScalarField::ScalarField(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.data_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct ScalarFieldDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ScalarFieldDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ScalarFieldDefaultTypeInternal() {}
  union {
    ScalarField _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ScalarFieldDefaultTypeInternal _ScalarField_default_instance_;
PROTOBUF_CONSTEXPR ScalarValue::ScalarValue(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.fields_)*/{}
  , /*decltype(_impl_.field_type_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ScalarValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ScalarValueDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ScalarValueDefaultTypeInternal() {}
  union {
    ScalarValue _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ScalarValueDefaultTypeInternal _ScalarValue_default_instance_;
}  // namespace common
}  // namespace pb
}  // namespace dingodb
static ::_pb::Metadata file_level_metadata_common_2eproto[4];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_common_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_common_2eproto = nullptr;

const uint32_t TableStruct_common_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::VectorScalardata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::VectorScalardata, _impl_.scalar_data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::ScalarField, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::ScalarField, _impl_._oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::ScalarField, _impl_.data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::ScalarValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::ScalarValue, _impl_.field_type_),
  PROTOBUF_FIELD_OFFSET(::dingodb::pb::common::ScalarValue, _impl_.fields_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse)},
  { 10, -1, -1, sizeof(::dingodb::pb::common::VectorScalardata)},
  { 17, -1, -1, sizeof(::dingodb::pb::common::ScalarField)},
  { 31, -1, -1, sizeof(::dingodb::pb::common::ScalarValue)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::dingodb::pb::common::_VectorScalardata_ScalarDataEntry_DoNotUse_default_instance_._instance,
  &::dingodb::pb::common::_VectorScalardata_default_instance_._instance,
  &::dingodb::pb::common::_ScalarField_default_instance_._instance,
  &::dingodb::pb::common::_ScalarValue_default_instance_._instance,
};

const char descriptor_table_protodef_common_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014common.proto\022\021dingodb.pb.common\"\257\001\n\020Ve"
  "ctorScalardata\022H\n\013scalar_data\030\001 \003(\01323.di"
  "ngodb.pb.common.VectorScalardata.ScalarD"
  "ataEntry\032Q\n\017ScalarDataEntry\022\013\n\003key\030\001 \001(\t"
  "\022-\n\005value\030\002 \001(\0132\036.dingodb.pb.common.Scal"
  "arValue:\0028\001\"\255\001\n\013ScalarField\022\023\n\tbool_data"
  "\030\001 \001(\010H\000\022\022\n\010int_data\030\002 \001(\005H\000\022\023\n\tlong_dat"
  "a\030\003 \001(\003H\000\022\024\n\nfloat_data\030\004 \001(\002H\000\022\025\n\013doubl"
  "e_data\030\005 \001(\001H\000\022\025\n\013string_data\030\006 \001(\tH\000\022\024\n"
  "\nbytes_data\030\007 \001(\014H\000B\006\n\004data\"u\n\013ScalarVal"
  "ue\0226\n\nfield_type\030\001 \001(\0162\".dingodb.pb.comm"
  "on.ScalarFieldType\022.\n\006fields\030\002 \003(\0132\036.din"
  "godb.pb.common.ScalarField*\200\001\n\017ScalarFie"
  "ldType\022\010\n\004NONE\020\000\022\010\n\004BOOL\020\001\022\010\n\004INT8\020\002\022\t\n\005"
  "INT16\020\003\022\t\n\005INT32\020\004\022\t\n\005INT64\020\005\022\013\n\007FLOAT32"
  "\020\006\022\n\n\006DOUBLE\020\007\022\n\n\006STRING\020\010\022\t\n\005BYTES\020\tB\026\n"
  "\021io.dingodb.common\200\001\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_common_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_common_2eproto = {
    false, false, 669, descriptor_table_protodef_common_2eproto,
    "common.proto",
    &descriptor_table_common_2eproto_once, nullptr, 0, 4,
    schemas, file_default_instances, TableStruct_common_2eproto::offsets,
    file_level_metadata_common_2eproto, file_level_enum_descriptors_common_2eproto,
    file_level_service_descriptors_common_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_common_2eproto_getter() {
  return &descriptor_table_common_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_common_2eproto(&descriptor_table_common_2eproto);
namespace dingodb {
namespace pb {
namespace common {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ScalarFieldType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_common_2eproto);
  return file_level_enum_descriptors_common_2eproto[0];
}
bool ScalarFieldType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}


// ===================================================================

VectorScalardata_ScalarDataEntry_DoNotUse::VectorScalardata_ScalarDataEntry_DoNotUse() {}
VectorScalardata_ScalarDataEntry_DoNotUse::VectorScalardata_ScalarDataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void VectorScalardata_ScalarDataEntry_DoNotUse::MergeFrom(const VectorScalardata_ScalarDataEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata VectorScalardata_ScalarDataEntry_DoNotUse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_common_2eproto_getter, &descriptor_table_common_2eproto_once,
      file_level_metadata_common_2eproto[0]);
}

// ===================================================================

class VectorScalardata::_Internal {
 public:
};

VectorScalardata::VectorScalardata(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  if (arena != nullptr && !is_message_owned) {
    arena->OwnCustomDestructor(this, &VectorScalardata::ArenaDtor);
  }
  // @@protoc_insertion_point(arena_constructor:dingodb.pb.common.VectorScalardata)
}
VectorScalardata::VectorScalardata(const VectorScalardata& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  VectorScalardata* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      /*decltype(_impl_.scalar_data_)*/{}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.scalar_data_.MergeFrom(from._impl_.scalar_data_);
  // @@protoc_insertion_point(copy_constructor:dingodb.pb.common.VectorScalardata)
}

inline void VectorScalardata::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      /*decltype(_impl_.scalar_data_)*/{::_pbi::ArenaInitialized(), arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

VectorScalardata::~VectorScalardata() {
  // @@protoc_insertion_point(destructor:dingodb.pb.common.VectorScalardata)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    ArenaDtor(this);
    return;
  }
  SharedDtor();
}

inline void VectorScalardata::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.scalar_data_.Destruct();
  _impl_.scalar_data_.~MapField();
}

void VectorScalardata::ArenaDtor(void* object) {
  VectorScalardata* _this = reinterpret_cast< VectorScalardata* >(object);
  _this->_impl_.scalar_data_.Destruct();
}
void VectorScalardata::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void VectorScalardata::Clear() {
// @@protoc_insertion_point(message_clear_start:dingodb.pb.common.VectorScalardata)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.scalar_data_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VectorScalardata::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // map<string, .dingodb.pb.common.ScalarValue> scalar_data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&_impl_.scalar_data_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* VectorScalardata::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dingodb.pb.common.VectorScalardata)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, .dingodb.pb.common.ScalarValue> scalar_data = 1;
  if (!this->_internal_scalar_data().empty()) {
    using MapType = ::_pb::Map<std::string, ::dingodb::pb::common::ScalarValue>;
    using WireHelper = VectorScalardata_ScalarDataEntry_DoNotUse::Funcs;
    const auto& map_field = this->_internal_scalar_data();
    auto check_utf8 = [](const MapType::value_type& entry) {
      (void)entry;
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.first.data(), static_cast<int>(entry.first.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "dingodb.pb.common.VectorScalardata.ScalarDataEntry.key");
    };

    if (stream->IsSerializationDeterministic() && map_field.size() > 1) {
      for (const auto& entry : ::_pbi::MapSorterPtr<MapType>(map_field)) {
        target = WireHelper::InternalSerialize(1, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    } else {
      for (const auto& entry : map_field) {
        target = WireHelper::InternalSerialize(1, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dingodb.pb.common.VectorScalardata)
  return target;
}

size_t VectorScalardata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dingodb.pb.common.VectorScalardata)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, .dingodb.pb.common.ScalarValue> scalar_data = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_scalar_data_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::dingodb::pb::common::ScalarValue >::const_iterator
      it = this->_internal_scalar_data().begin();
      it != this->_internal_scalar_data().end(); ++it) {
    total_size += VectorScalardata_ScalarDataEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData VectorScalardata::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    VectorScalardata::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*VectorScalardata::GetClassData() const { return &_class_data_; }


void VectorScalardata::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<VectorScalardata*>(&to_msg);
  auto& from = static_cast<const VectorScalardata&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dingodb.pb.common.VectorScalardata)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.scalar_data_.MergeFrom(from._impl_.scalar_data_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void VectorScalardata::CopyFrom(const VectorScalardata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dingodb.pb.common.VectorScalardata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VectorScalardata::IsInitialized() const {
  return true;
}

void VectorScalardata::InternalSwap(VectorScalardata* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.scalar_data_.InternalSwap(&other->_impl_.scalar_data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VectorScalardata::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_common_2eproto_getter, &descriptor_table_common_2eproto_once,
      file_level_metadata_common_2eproto[1]);
}

// ===================================================================

class ScalarField::_Internal {
 public:
};

ScalarField::ScalarField(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:dingodb.pb.common.ScalarField)
}
ScalarField::ScalarField(const ScalarField& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ScalarField* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_data();
  switch (from.data_case()) {
    case kBoolData: {
      _this->_internal_set_bool_data(from._internal_bool_data());
      break;
    }
    case kIntData: {
      _this->_internal_set_int_data(from._internal_int_data());
      break;
    }
    case kLongData: {
      _this->_internal_set_long_data(from._internal_long_data());
      break;
    }
    case kFloatData: {
      _this->_internal_set_float_data(from._internal_float_data());
      break;
    }
    case kDoubleData: {
      _this->_internal_set_double_data(from._internal_double_data());
      break;
    }
    case kStringData: {
      _this->_internal_set_string_data(from._internal_string_data());
      break;
    }
    case kBytesData: {
      _this->_internal_set_bytes_data(from._internal_bytes_data());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:dingodb.pb.common.ScalarField)
}

inline void ScalarField::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  clear_has_data();
}

ScalarField::~ScalarField() {
  // @@protoc_insertion_point(destructor:dingodb.pb.common.ScalarField)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ScalarField::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_data()) {
    clear_data();
  }
}

void ScalarField::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ScalarField::clear_data() {
// @@protoc_insertion_point(one_of_clear_start:dingodb.pb.common.ScalarField)
  switch (data_case()) {
    case kBoolData: {
      // No need to clear
      break;
    }
    case kIntData: {
      // No need to clear
      break;
    }
    case kLongData: {
      // No need to clear
      break;
    }
    case kFloatData: {
      // No need to clear
      break;
    }
    case kDoubleData: {
      // No need to clear
      break;
    }
    case kStringData: {
      _impl_.data_.string_data_.Destroy();
      break;
    }
    case kBytesData: {
      _impl_.data_.bytes_data_.Destroy();
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = DATA_NOT_SET;
}


void ScalarField::Clear() {
// @@protoc_insertion_point(message_clear_start:dingodb.pb.common.ScalarField)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_data();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ScalarField::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool bool_data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _internal_set_bool_data(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 int_data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _internal_set_int_data(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 long_data = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _internal_set_long_data(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float float_data = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 37)) {
          _internal_set_float_data(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // double double_data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 41)) {
          _internal_set_double_data(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // string string_data = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_string_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dingodb.pb.common.ScalarField.string_data"));
        } else
          goto handle_unusual;
        continue;
      // bytes bytes_data = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_bytes_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ScalarField::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dingodb.pb.common.ScalarField)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool bool_data = 1;
  if (_internal_has_bool_data()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_bool_data(), target);
  }

  // int32 int_data = 2;
  if (_internal_has_int_data()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_int_data(), target);
  }

  // int64 long_data = 3;
  if (_internal_has_long_data()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_long_data(), target);
  }

  // float float_data = 4;
  if (_internal_has_float_data()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(4, this->_internal_float_data(), target);
  }

  // double double_data = 5;
  if (_internal_has_double_data()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(5, this->_internal_double_data(), target);
  }

  // string string_data = 6;
  if (_internal_has_string_data()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_string_data().data(), static_cast<int>(this->_internal_string_data().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "dingodb.pb.common.ScalarField.string_data");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_string_data(), target);
  }

  // bytes bytes_data = 7;
  if (_internal_has_bytes_data()) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_bytes_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dingodb.pb.common.ScalarField)
  return target;
}

size_t ScalarField::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dingodb.pb.common.ScalarField)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (data_case()) {
    // bool bool_data = 1;
    case kBoolData: {
      total_size += 1 + 1;
      break;
    }
    // int32 int_data = 2;
    case kIntData: {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_int_data());
      break;
    }
    // int64 long_data = 3;
    case kLongData: {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_long_data());
      break;
    }
    // float float_data = 4;
    case kFloatData: {
      total_size += 1 + 4;
      break;
    }
    // double double_data = 5;
    case kDoubleData: {
      total_size += 1 + 8;
      break;
    }
    // string string_data = 6;
    case kStringData: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_string_data());
      break;
    }
    // bytes bytes_data = 7;
    case kBytesData: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_bytes_data());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ScalarField::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ScalarField::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ScalarField::GetClassData() const { return &_class_data_; }


void ScalarField::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ScalarField*>(&to_msg);
  auto& from = static_cast<const ScalarField&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dingodb.pb.common.ScalarField)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.data_case()) {
    case kBoolData: {
      _this->_internal_set_bool_data(from._internal_bool_data());
      break;
    }
    case kIntData: {
      _this->_internal_set_int_data(from._internal_int_data());
      break;
    }
    case kLongData: {
      _this->_internal_set_long_data(from._internal_long_data());
      break;
    }
    case kFloatData: {
      _this->_internal_set_float_data(from._internal_float_data());
      break;
    }
    case kDoubleData: {
      _this->_internal_set_double_data(from._internal_double_data());
      break;
    }
    case kStringData: {
      _this->_internal_set_string_data(from._internal_string_data());
      break;
    }
    case kBytesData: {
      _this->_internal_set_bytes_data(from._internal_bytes_data());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ScalarField::CopyFrom(const ScalarField& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dingodb.pb.common.ScalarField)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScalarField::IsInitialized() const {
  return true;
}

void ScalarField::InternalSwap(ScalarField* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.data_, other->_impl_.data_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata ScalarField::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_common_2eproto_getter, &descriptor_table_common_2eproto_once,
      file_level_metadata_common_2eproto[2]);
}

// ===================================================================

class ScalarValue::_Internal {
 public:
};

ScalarValue::ScalarValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:dingodb.pb.common.ScalarValue)
}
ScalarValue::ScalarValue(const ScalarValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ScalarValue* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.fields_){from._impl_.fields_}
    , decltype(_impl_.field_type_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.field_type_ = from._impl_.field_type_;
  // @@protoc_insertion_point(copy_constructor:dingodb.pb.common.ScalarValue)
}

inline void ScalarValue::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.fields_){arena}
    , decltype(_impl_.field_type_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ScalarValue::~ScalarValue() {
  // @@protoc_insertion_point(destructor:dingodb.pb.common.ScalarValue)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ScalarValue::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.fields_.~RepeatedPtrField();
}

void ScalarValue::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ScalarValue::Clear() {
// @@protoc_insertion_point(message_clear_start:dingodb.pb.common.ScalarValue)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.fields_.Clear();
  _impl_.field_type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ScalarValue::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .dingodb.pb.common.ScalarFieldType field_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_field_type(static_cast<::dingodb::pb::common::ScalarFieldType>(val));
        } else
          goto handle_unusual;
        continue;
      // repeated .dingodb.pb.common.ScalarField fields = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_fields(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ScalarValue::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dingodb.pb.common.ScalarValue)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .dingodb.pb.common.ScalarFieldType field_type = 1;
  if (this->_internal_field_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_field_type(), target);
  }

  // repeated .dingodb.pb.common.ScalarField fields = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_fields_size()); i < n; i++) {
    const auto& repfield = this->_internal_fields(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dingodb.pb.common.ScalarValue)
  return target;
}

size_t ScalarValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dingodb.pb.common.ScalarValue)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .dingodb.pb.common.ScalarField fields = 2;
  total_size += 1UL * this->_internal_fields_size();
  for (const auto& msg : this->_impl_.fields_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .dingodb.pb.common.ScalarFieldType field_type = 1;
  if (this->_internal_field_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_field_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ScalarValue::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ScalarValue::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ScalarValue::GetClassData() const { return &_class_data_; }


void ScalarValue::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ScalarValue*>(&to_msg);
  auto& from = static_cast<const ScalarValue&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dingodb.pb.common.ScalarValue)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.fields_.MergeFrom(from._impl_.fields_);
  if (from._internal_field_type() != 0) {
    _this->_internal_set_field_type(from._internal_field_type());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ScalarValue::CopyFrom(const ScalarValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dingodb.pb.common.ScalarValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScalarValue::IsInitialized() const {
  return true;
}

void ScalarValue::InternalSwap(ScalarValue* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.fields_.InternalSwap(&other->_impl_.fields_);
  swap(_impl_.field_type_, other->_impl_.field_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ScalarValue::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_common_2eproto_getter, &descriptor_table_common_2eproto_once,
      file_level_metadata_common_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace pb
}  // namespace dingodb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse*
Arena::CreateMaybeMessage< ::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dingodb::pb::common::VectorScalardata_ScalarDataEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::dingodb::pb::common::VectorScalardata*
Arena::CreateMaybeMessage< ::dingodb::pb::common::VectorScalardata >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dingodb::pb::common::VectorScalardata >(arena);
}
template<> PROTOBUF_NOINLINE ::dingodb::pb::common::ScalarField*
Arena::CreateMaybeMessage< ::dingodb::pb::common::ScalarField >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dingodb::pb::common::ScalarField >(arena);
}
template<> PROTOBUF_NOINLINE ::dingodb::pb::common::ScalarValue*
Arena::CreateMaybeMessage< ::dingodb::pb::common::ScalarValue >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dingodb::pb::common::ScalarValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
