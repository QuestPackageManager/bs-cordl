#pragma once
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__VarEnum_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::MarshalAsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::MarshalAsAttribute::*)(::System::Runtime::InteropServices::UnmanagedType)>(
    &::System::Runtime::InteropServices::MarshalAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25cb260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::MarshalAsAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::UnmanagedType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::MarshalAsAttribute.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::UnmanagedType (::System::Runtime::InteropServices::MarshalAsAttribute::*)()>(
    &::System::Runtime::InteropServices::MarshalAsAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cb288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::MarshalAsAttribute*>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::MarshalAsAttribute.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::InteropServices::MarshalAsAttribute* (::System::Runtime::InteropServices::MarshalAsAttribute::*)()>(&::System::Runtime::InteropServices::MarshalAsAttribute::Copy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25cb290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::MarshalAsAttribute*>::get(),
                                                                               "Copy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MarshalCookie)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MarshalType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalTypeRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalTypeRef;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_MarshalTypeRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarshalTypeRef;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_MarshalTypeRef(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MarshalTypeRef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SafeArrayUserDefinedSubType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafeArrayUserDefinedSubType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_get_SafeArrayUserDefinedSubType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SafeArrayUserDefinedSubType;
}
constexpr void System::Runtime::InteropServices::MarshalAsAttribute::__cordl_internal_set_SafeArrayUserDefinedSubType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SafeArrayUserDefinedSubType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Runtime::InteropServices::MarshalAsAttribute::New_ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::MarshalAsAttribute*>(unmanagedType));
}
inline void System::Runtime::InteropServices::MarshalAsAttribute::_ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::MarshalAsAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::UnmanagedType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unmanagedType);
}
inline ::System::Runtime::InteropServices::UnmanagedType System::Runtime::InteropServices::MarshalAsAttribute::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::MarshalAsAttribute*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::UnmanagedType, false>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Runtime::InteropServices::MarshalAsAttribute::Copy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::MarshalAsAttribute*>::get(),
                                                                             "Copy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::MarshalAsAttribute*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::MarshalAsAttribute::MarshalAsAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
