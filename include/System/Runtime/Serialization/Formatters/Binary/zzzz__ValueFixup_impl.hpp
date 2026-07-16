#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ValueFixup.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixupEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixup_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(::System::Array*, ::ArrayW<int32_t>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b6165c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(
    ::System::Object*, ::StringW, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b61ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup.Fixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*,
                                                                                                                                  ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5b60a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(),
                                                                                           { "Fixup",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_valueFixupEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueFixupEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_valueFixupEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueFixupEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_valueFixupEnum(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueFixupEnum = value;
}
constexpr ::System::Array*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_arrayObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayObj;
}
constexpr ::System::Array* const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_arrayObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayObj;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_arrayObj(::System::Array* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayObj = value;
}
constexpr ::ArrayW<int32_t>& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_indexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexMap;
}
constexpr ::ArrayW<int32_t> const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_indexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexMap;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_indexMap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexMap = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_header(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___header = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_memberObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberObject;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_memberObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_memberObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberObject = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_objectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfo;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_objectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfo;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectInfo = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_get_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__cordl_internal_set_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberName = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::setStaticF_valueInfo(::System::Reflection::MemberInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MemberInfo*, "valueInfo", ::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(
      std::forward<::System::Reflection::MemberInfo*>(value));
}
inline ::System::Reflection::MemberInfo* System::Runtime::Serialization::Formatters::Binary::ValueFixup::getStaticF_valueInfo() {
  return ::cordl_internals::getStaticField<::System::Reflection::MemberInfo*, "valueInfo", ::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>();
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::System::Array* arrayObj, ::ArrayW<int32_t> indexMap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arrayObj, indexMap);
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::System::Object* memberObject, ::StringW memberName,
                                                                                  ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberObject, memberName, objectInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* record,
                                                                                  ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(),
                                                                                         { "Fixup",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record, parent);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::System::Array* arrayObj,
                                                                                                                                                  ::ArrayW<int32_t> indexMap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(arrayObj, indexMap));
}
inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup*
System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::System::Object* memberObject, ::StringW memberName,
                                                                         ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(memberObject, memberName, objectInfo));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixup::ValueFixup() {}
