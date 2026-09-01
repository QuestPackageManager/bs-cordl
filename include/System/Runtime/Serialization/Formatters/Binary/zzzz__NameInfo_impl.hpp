#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\NameInfo.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::NameInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b67380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::NameInfo::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b67360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.get_IsSealed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::NameInfo::get_IsSealed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b670f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "get_IsSealed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.get_NIname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::NameInfo::get_NIname)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b6b374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "get_NIname", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.set_NIname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::NameInfo::set_NIname)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6b3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "set_NIname", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIFullName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIFullName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIFullName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIFullName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIFullName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIFullName = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIobjectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIobjectId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIobjectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIobjectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIobjectId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIobjectId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIassemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIassemId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIassemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIassemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIassemId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIassemId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIprimitiveTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIprimitiveTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const&
System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIprimitiveTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIprimitiveTypeEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIprimitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIprimitiveTypeEnum = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NItype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NItype;
}
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NItype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NItype;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NItype(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NItype = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisSealed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisSealed;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisSealed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisSealed;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIisSealed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIisSealed = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisArray;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIisArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIisArray = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisArrayItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisArrayItem;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisArrayItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisArrayItem;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIisArrayItem(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIisArrayItem = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NItransmitTypeOnObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NItransmitTypeOnObject;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NItransmitTypeOnObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NItransmitTypeOnObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NItransmitTypeOnObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NItransmitTypeOnObject = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NItransmitTypeOnMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NItransmitTypeOnMember;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NItransmitTypeOnMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NItransmitTypeOnMember;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NItransmitTypeOnMember(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NItransmitTypeOnMember = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisParentTypeOnObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisParentTypeOnObject;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIisParentTypeOnObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIisParentTypeOnObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIisParentTypeOnObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIisParentTypeOnObject = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIarrayEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIarrayEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIarrayEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIarrayEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIarrayEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIarrayEnum = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIsealedStatusChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIsealedStatusChecked;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_get_NIsealedStatusChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NIsealedStatusChecked;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__cordl_internal_set_NIsealedStatusChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NIsealedStatusChecked = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::NameInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::NameInfo::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::NameInfo::get_IsSealed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "get_IsSealed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::NameInfo::get_NIname() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "get_NIname", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::NameInfo::set_NIname(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), { "set_NIname", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::NameInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::NameInfo::NameInfo() {}
