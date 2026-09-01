#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\ObjectMapInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectMapInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(int32_t, int32_t, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5dd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo.isCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(int32_t, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b5dd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>(),
                                                { "isCompatible", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_numMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMembers;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_numMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numMembers;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_set_numMembers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numMembers = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_set_memberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__cordl_internal_set_memberTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberTypes = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectId, numMembers, memberNames, memberTypes);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible(int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>(),
                                                           { "isCompatible", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, numMembers, memberNames, memberTypes);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::New_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>(objectId, numMembers, memberNames, memberTypes));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::ObjectMapInfo() {}
