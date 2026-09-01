#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\SerObjectInfoCache.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::StringW, ::StringW, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5f0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b5f070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_fullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_fullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_set_fullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullTypeName = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_assemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_assemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_set_assemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyString = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_hasTypeForwardedFrom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_hasTypeForwardedFrom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypeForwardedFrom;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_set_hasTypeForwardedFrom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTypeForwardedFrom = value;
}
constexpr ::ArrayW<::System::Reflection::MemberInfo*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_memberInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberInfos;
}
constexpr ::ArrayW<::System::Reflection::MemberInfo*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_memberInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberInfos;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_set_memberInfos(::ArrayW<::System::Reflection::MemberInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberInfos = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_set_memberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__cordl_internal_set_memberTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberTypes = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, assemblyName, hasTypeForwardedFrom);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(typeName, assemblyName, hasTypeForwardedFrom));
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::SerObjectInfoCache() {}
