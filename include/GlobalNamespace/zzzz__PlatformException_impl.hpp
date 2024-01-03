#pragma once
#include "GlobalNamespace/zzzz__PlatformException_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformException_def.hpp"
#include "GlobalNamespace/zzzz__PlatformException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformException__ErrorType::__PlatformException__ErrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformException__ErrorType::__PlatformException__ErrorType() {}
constexpr ::GlobalNamespace::__PlatformException__ErrorType GlobalNamespace::__PlatformException__ErrorType::PlatformNotInstalled{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlatformException__ErrorType GlobalNamespace::__PlatformException__ErrorType::PlatformInitialization{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PlatformException__ErrorType GlobalNamespace::__PlatformException__ErrorType::PlatformUserEntitlement{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlatformException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::PlatformException::*)(::GlobalNamespace::__PlatformException__ErrorType, ::StringW, ::System::Exception*)>(&::GlobalNamespace::PlatformException::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2228ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformException__ErrorType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformException::*)(
    ::GlobalNamespace::__PlatformException__ErrorType, int32_t, int32_t, ::StringW, ::System::Exception*)>(&::GlobalNamespace::PlatformException::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2229358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformException__ErrorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PlatformException__ErrorType& GlobalNamespace::PlatformException::__get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::GlobalNamespace::__PlatformException__ErrorType const& GlobalNamespace::PlatformException::__get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void GlobalNamespace::PlatformException::__set_error(::GlobalNamespace::__PlatformException__ErrorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr int32_t& GlobalNamespace::PlatformException::__get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr int32_t const& GlobalNamespace::PlatformException::__get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr void GlobalNamespace::PlatformException::__set_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___code = value;
}
constexpr int32_t& GlobalNamespace::PlatformException::__get_httpCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpCode;
}
constexpr int32_t const& GlobalNamespace::PlatformException::__get_httpCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpCode;
}
constexpr void GlobalNamespace::PlatformException::__set_httpCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___httpCode = value;
}
/// @param message: ::StringW (default: nullptr)
/// @param innerException: ::System::Exception* (default: nullptr)
inline ::GlobalNamespace::PlatformException* GlobalNamespace::PlatformException::New_ctor(::GlobalNamespace::__PlatformException__ErrorType error, ::StringW message,
                                                                                          ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformException*>(error, message, innerException));
}
/// @param message: ::StringW (default: nullptr)
/// @param innerException: ::System::Exception* (default: nullptr)
inline void GlobalNamespace::PlatformException::_ctor(::GlobalNamespace::__PlatformException__ErrorType error, ::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformException__ErrorType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error, message, innerException);
}
/// @param message: ::StringW (default: nullptr)
/// @param innerException: ::System::Exception* (default: nullptr)
inline ::GlobalNamespace::PlatformException* GlobalNamespace::PlatformException::New_ctor(::GlobalNamespace::__PlatformException__ErrorType error, int32_t code, int32_t httpCode, ::StringW message,
                                                                                          ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformException*>(error, code, httpCode, message, innerException));
}
/// @param message: ::StringW (default: nullptr)
/// @param innerException: ::System::Exception* (default: nullptr)
inline void GlobalNamespace::PlatformException::_ctor(::GlobalNamespace::__PlatformException__ErrorType error, int32_t code, int32_t httpCode, ::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformException__ErrorType>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error, code, httpCode, message, innerException);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformException::PlatformException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
