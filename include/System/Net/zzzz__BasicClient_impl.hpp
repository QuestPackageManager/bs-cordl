#pragma once
// IWYU pragma private; include "System/Net/BasicClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__BasicClient_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: ::System::Net::BasicClient.Authenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::System::Net::BasicClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::BasicClient::Authenticate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64227a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(),
                                         { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BasicClient.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Net::BasicClient::GetBytes)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6422b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(), { "GetBytes", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BasicClient.InternalAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::BasicClient::InternalAuthenticate)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6422858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(),
                                                             { "InternalAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BasicClient.PreAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::System::Net::BasicClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::BasicClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6422c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(),
                                                             { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BasicClient.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::BasicClient::*)()>(&::System::Net::BasicClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6422c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(), { "get_AuthenticationType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BasicClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BasicClient::*)()>(&::System::Net::BasicClient::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6421ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::Authorization* System::Net::BasicClient::Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(),
                                              { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, challenge, webRequest, credentials);
}
inline ::ArrayW<uint8_t> System::Net::BasicClient::GetBytes(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(), { "GetBytes", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline ::System::Net::Authorization* System::Net::BasicClient::InternalAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(),
                                                           { "InternalAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, webRequest, credentials);
}
inline ::System::Net::Authorization* System::Net::BasicClient::PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(),
                                                           { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, webRequest, credentials);
}
inline ::StringW System::Net::BasicClient::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(), { "get_AuthenticationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::BasicClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::BasicClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::BasicClient* System::Net::BasicClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BasicClient*>());
}
/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr System::Net::BasicClient::operator ::System::Net::IAuthenticationModule*() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAuthenticationModule"
constexpr ::System::Net::IAuthenticationModule* System::Net::BasicClient::i___System__Net__IAuthenticationModule() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::BasicClient::BasicClient() {}
