#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ValueTypeFixupInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ValueTypeFixupInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ValueTypeFixupInfo::*)(int64_t, ::System::Reflection::FieldInfo*, ::ArrayW<int32_t>)>(
    &::System::Runtime::Serialization::ValueTypeFixupInfo::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b4d224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ContainerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&::System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4d320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(), { "get_ContainerID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ParentField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(
    &::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4d328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(), { "get_ParentField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ParentIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(
    &::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4d330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(), { "get_ParentIndex", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__containerID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerID;
}
constexpr int64_t const& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__containerID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerID;
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_set__containerID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerID = value;
}
constexpr ::System::Reflection::FieldInfo*& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentField;
}
constexpr ::System::Reflection::FieldInfo* const& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentField;
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_set__parentField(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentField = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentIndex;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentIndex;
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_set__parentIndex(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentIndex = value;
}
inline void System::Runtime::Serialization::ValueTypeFixupInfo::_ctor(int64_t containerID, ::System::Reflection::FieldInfo* member, ::ArrayW<int32_t> parentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerID, member, parentIndex);
}
inline int64_t System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(), { "get_ContainerID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(), { "get_ParentField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method);
}
inline ::ArrayW<int32_t> System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ValueTypeFixupInfo*>(), { "get_ParentIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ValueTypeFixupInfo* System::Runtime::Serialization::ValueTypeFixupInfo::New_ctor(int64_t containerID, ::System::Reflection::FieldInfo* member,
                                                                                                                          ::ArrayW<int32_t> parentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ValueTypeFixupInfo*>(containerID, member, parentIndex));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo::ValueTypeFixupInfo() {}
