#pragma once
// IWYU pragma private; include "System/Net/NtlmClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NtlmClient_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: ::System::Net::NtlmClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NtlmClient::*)()>(&::System::Net::NtlmClient::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6335990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NtlmClient.Authenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::System::Net::NtlmClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::NtlmClient::Authenticate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x63359e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(),
                                         { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NtlmClient.PreAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::System::Net::NtlmClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::NtlmClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6335ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(),
                                                             { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NtlmClient.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NtlmClient::*)()>(&::System::Net::NtlmClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6335ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(), { "get_AuthenticationType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IAuthenticationModule*& System::Net::NtlmClient::__cordl_internal_get_authObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authObject;
}
constexpr ::System::Net::IAuthenticationModule* const& System::Net::NtlmClient::__cordl_internal_get_authObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authObject;
}
constexpr void System::Net::NtlmClient::__cordl_internal_set_authObject(::System::Net::IAuthenticationModule* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authObject = value;
}
inline void System::Net::NtlmClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Authorization* System::Net::NtlmClient::Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(),
                                              { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, challenge, webRequest, credentials);
}
inline ::System::Net::Authorization* System::Net::NtlmClient::PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(), { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, webRequest, credentials);
}
inline ::StringW System::Net::NtlmClient::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NtlmClient*>(), { "get_AuthenticationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NtlmClient* System::Net::NtlmClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NtlmClient*>());
}
/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr System::Net::NtlmClient::operator ::System::Net::IAuthenticationModule*() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAuthenticationModule"
constexpr ::System::Net::IAuthenticationModule* System::Net::NtlmClient::i___System__Net__IAuthenticationModule() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::NtlmClient::NtlmClient() {}
