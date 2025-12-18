#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatformResponseException.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformResponseErrorCode_impl.hpp"
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformResponseException_def.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformResponseErrorCode_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException.get_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatformResponseException::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatformResponseException::get_message)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d8627c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), "get_message",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformResponseException::*)(::Oculus::Platform::Models::Error*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d86294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformResponseException::*)(
    ::StringW, ::Oculus::Platform::Models::Error*)>(&::OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d83c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException.ParseMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::StringW, ::Oculus::Platform::Models::Error*, ::ByRef<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode>, ::ByRef<::System::Net::HttpStatusCode>)>(
        &::OculusStudios::Platform::Oculus::OculusPlatformResponseException::ParseMessage)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5d8632c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), "ParseMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::HttpStatusCode>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::Error*& OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::Oculus::Platform::Models::Error* const& OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_set_error(::Oculus::Platform::Models::Error* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode& OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_get_errorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const& OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_get_errorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_set_errorCode(::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCode = value;
}
constexpr ::System::Net::HttpStatusCode& OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_get_httpCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpCode;
}
constexpr ::System::Net::HttpStatusCode const& OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_get_httpCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___httpCode;
}
constexpr void OculusStudios::Platform::Oculus::OculusPlatformResponseException::__cordl_internal_set_httpCode(::System::Net::HttpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___httpCode = value;
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatformResponseException::get_message() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), "get_message",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor(::Oculus::Platform::Models::Error* error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor(::StringW message, ::Oculus::Platform::Models::Error* error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, error);
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatformResponseException::ParseMessage(::StringW message, ::Oculus::Platform::Models::Error* error,
                                                                                                ::ByRef<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode> errorCode,
                                                                                                ::ByRef<::System::Net::HttpStatusCode> httpCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>::get(), "ParseMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Error*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::HttpStatusCode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, message, error, errorCode, httpCode);
}
inline ::OculusStudios::Platform::Oculus::OculusPlatformResponseException* OculusStudios::Platform::Oculus::OculusPlatformResponseException::New_ctor(::Oculus::Platform::Models::Error* error) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(error));
}
inline ::OculusStudios::Platform::Oculus::OculusPlatformResponseException* OculusStudios::Platform::Oculus::OculusPlatformResponseException::New_ctor(::StringW message,
                                                                                                                                                      ::Oculus::Platform::Models::Error* error) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(message, error));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseException::OculusPlatformResponseException() {}
