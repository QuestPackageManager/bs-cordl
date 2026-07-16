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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::OculusPlatformResponseException::*)()>(
    &::OculusStudios::Platform::Oculus::OculusPlatformResponseException::get_message)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f325a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(), { "get_message", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformResponseException::*)(::Oculus::Platform::Models::Error*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f325b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Oculus::Platform::Models::Error*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::OculusPlatformResponseException::*)(::StringW, ::Oculus::Platform::Models::Error*)>(
    &::OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f2ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::Models::Error*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::OculusPlatformResponseException.ParseMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::Oculus::Platform::Models::Error*, ::by_ref<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode>,
                                                                     ::by_ref<::System::Net::HttpStatusCode>)>(&::OculusStudios::Platform::Oculus::OculusPlatformResponseException::ParseMessage)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5f32650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(),
                                                                                           { "ParseMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::Models::Error*>(),
                                                                                               ::i2c::type_of<::by_ref<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode>>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Net::HttpStatusCode>>() } })));
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
  this->___error = value;
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(), { "get_message", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor(::Oculus::Platform::Models::Error* error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Oculus::Platform::Models::Error*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void OculusStudios::Platform::Oculus::OculusPlatformResponseException::_ctor(::StringW message, ::Oculus::Platform::Models::Error* error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::Models::Error*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, error);
}
inline ::StringW OculusStudios::Platform::Oculus::OculusPlatformResponseException::ParseMessage(::StringW message, ::Oculus::Platform::Models::Error* error,
                                                                                                ::by_ref<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode> errorCode,
                                                                                                ::by_ref<::System::Net::HttpStatusCode> httpCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(),
                                                                                         { "ParseMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Oculus::Platform::Models::Error*>(),
                                                                                             ::i2c::type_of<::by_ref<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode>>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Net::HttpStatusCode>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message, error, errorCode, httpCode);
}
inline ::OculusStudios::Platform::Oculus::OculusPlatformResponseException* OculusStudios::Platform::Oculus::OculusPlatformResponseException::New_ctor(::Oculus::Platform::Models::Error* error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(error));
}
inline ::OculusStudios::Platform::Oculus::OculusPlatformResponseException* OculusStudios::Platform::Oculus::OculusPlatformResponseException::New_ctor(::StringW message,
                                                                                                                                                      ::Oculus::Platform::Models::Error* error) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::OculusPlatformResponseException*>(message, error));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseException::OculusPlatformResponseException() {}
