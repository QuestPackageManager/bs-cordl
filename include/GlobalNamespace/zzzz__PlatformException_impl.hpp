#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformException_def.hpp"
#include "GlobalNamespace/zzzz__PlatformException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformException_ErrorType::PlatformException_ErrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformException_ErrorType::PlatformException_ErrorType() {}
constexpr ::GlobalNamespace::PlatformException_ErrorType GlobalNamespace::PlatformException_ErrorType::PlatformNotInstalled{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlatformException_ErrorType GlobalNamespace::PlatformException_ErrorType::PlatformInitialization{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlatformException_ErrorType GlobalNamespace::PlatformException_ErrorType::PlatformUserEntitlement{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PlatformException_ErrorType GlobalNamespace::PlatformException_ErrorType::InvalidPlatformVersion{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::PlatformException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::PlatformException::*)(::GlobalNamespace::PlatformException_ErrorType, ::StringW, ::System::Exception*)>(&::GlobalNamespace::PlatformException::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4080758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformException_ErrorType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformException::*)(
    ::GlobalNamespace::PlatformException_ErrorType, int32_t, int32_t, ::StringW, ::System::Exception*)>(&::GlobalNamespace::PlatformException::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x408076c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformException_ErrorType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlatformException_ErrorType& GlobalNamespace::PlatformException::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::GlobalNamespace::PlatformException_ErrorType const& GlobalNamespace::PlatformException::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void GlobalNamespace::PlatformException::__cordl_internal_set_error(::GlobalNamespace::PlatformException_ErrorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr int32_t& GlobalNamespace::PlatformException::__cordl_internal_get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr int32_t const& GlobalNamespace::PlatformException::__cordl_internal_get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr void GlobalNamespace::PlatformException::__cordl_internal_set_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___code = value;
}
constexpr int32_t& GlobalNamespace::PlatformException::__cordl_internal_get_httpCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpCode;
}
constexpr int32_t const& GlobalNamespace::PlatformException::__cordl_internal_get_httpCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpCode;
}
constexpr void GlobalNamespace::PlatformException::__cordl_internal_set_httpCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___httpCode = value;
}
inline void GlobalNamespace::PlatformException::_ctor(::GlobalNamespace::PlatformException_ErrorType error, ::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformException_ErrorType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error, message, innerException);
}
inline void GlobalNamespace::PlatformException::_ctor(::GlobalNamespace::PlatformException_ErrorType error, int32_t code, int32_t httpCode, ::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformException_ErrorType>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error, code, httpCode, message, innerException);
}
inline ::GlobalNamespace::PlatformException* GlobalNamespace::PlatformException::New_ctor(::GlobalNamespace::PlatformException_ErrorType error, ::StringW message,
                                                                                          ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformException*>(error, message, innerException));
}
inline ::GlobalNamespace::PlatformException* GlobalNamespace::PlatformException::New_ctor(::GlobalNamespace::PlatformException_ErrorType error, int32_t code, int32_t httpCode, ::StringW message,
                                                                                          ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformException*>(error, code, httpCode, message, innerException));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformException::PlatformException() {}
