#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\MarshalAsAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__VarEnum_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::MarshalAsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::MarshalAsAttribute::*)(::System::Runtime::InteropServices::UnmanagedType)>(
    &::System::Runtime::InteropServices::MarshalAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6f5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MarshalAsAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::UnmanagedType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::MarshalAsAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::UnmanagedType (::System::Runtime::InteropServices::MarshalAsAttribute::*)()>(
    &::System::Runtime::InteropServices::MarshalAsAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6f5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MarshalAsAttribute*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::MarshalAsAttribute.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::MarshalAsAttribute* (::System::Runtime::InteropServices::MarshalAsAttribute::*)()>(
    &::System::Runtime::InteropServices::MarshalAsAttribute::Copy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b6f5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MarshalAsAttribute*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalCookie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalCookie;
}
constexpr ::StringW const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalCookie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalCookie;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_MarshalCookie(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MarshalCookie = value;
}
constexpr ::StringW& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalType;
}
constexpr ::StringW const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalType;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_MarshalType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MarshalType = value;
}
constexpr ::System::Type*& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalTypeRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalTypeRef;
}
constexpr ::System::Type* const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalTypeRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalTypeRef;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_MarshalTypeRef(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MarshalTypeRef = value;
}
constexpr ::System::Type*& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SafeArrayUserDefinedSubType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafeArrayUserDefinedSubType;
}
constexpr ::System::Type* const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SafeArrayUserDefinedSubType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafeArrayUserDefinedSubType;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_SafeArrayUserDefinedSubType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SafeArrayUserDefinedSubType = value;
}
constexpr ::System::Runtime::InteropServices::UnmanagedType& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_utype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___utype;
}
constexpr ::System::Runtime::InteropServices::UnmanagedType const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_utype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___utype;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_utype(::System::Runtime::InteropServices::UnmanagedType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___utype = value;
}
constexpr ::System::Runtime::InteropServices::UnmanagedType& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_ArraySubType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ArraySubType;
}
constexpr ::System::Runtime::InteropServices::UnmanagedType const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_ArraySubType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ArraySubType;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_ArraySubType(::System::Runtime::InteropServices::UnmanagedType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ArraySubType = value;
}
constexpr ::System::Runtime::InteropServices::VarEnum& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SafeArraySubType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafeArraySubType;
}
constexpr ::System::Runtime::InteropServices::VarEnum const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SafeArraySubType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafeArraySubType;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_SafeArraySubType(::System::Runtime::InteropServices::VarEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SafeArraySubType = value;
}
constexpr int32_t& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SizeConst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SizeConst;
}
constexpr int32_t const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SizeConst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SizeConst;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_SizeConst(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SizeConst = value;
}
constexpr int32_t& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_IidParameterIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IidParameterIndex;
}
constexpr int32_t const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_IidParameterIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IidParameterIndex;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_IidParameterIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IidParameterIndex = value;
}
constexpr int16_t& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SizeParamIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SizeParamIndex;
}
constexpr int16_t const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SizeParamIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SizeParamIndex;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_SizeParamIndex(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SizeParamIndex = value;
}
inline void System::Runtime::InteropServices::MarshalAsAttribute::_ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MarshalAsAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::UnmanagedType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unmanagedType);
}
inline ::System::Runtime::InteropServices::UnmanagedType System::Runtime::InteropServices::MarshalAsAttribute::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MarshalAsAttribute*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::UnmanagedType>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Runtime::InteropServices::MarshalAsAttribute::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::MarshalAsAttribute*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::MarshalAsAttribute*>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Runtime::InteropServices::MarshalAsAttribute::New_ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::MarshalAsAttribute*>(unmanagedType));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::MarshalAsAttribute::MarshalAsAttribute() {}
