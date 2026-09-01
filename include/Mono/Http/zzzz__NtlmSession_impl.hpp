#pragma once
// IWYU pragma private; include "Mono\Http\NtlmSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Http/zzzz__NtlmSession_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: ::Mono::Http::NtlmSession._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Http::NtlmSession::*)()>(&::Mono::Http::NtlmSession::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdedcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmSession*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmSession.Authenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::Mono::Http::NtlmSession::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::Mono::Http::NtlmSession::Authenticate)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x5fdedd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmSession*>(),
                                         { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Protocol::Ntlm::MessageBase*& Mono::Http::NtlmSession::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::Mono::Security::Protocol::Ntlm::MessageBase* const& Mono::Http::NtlmSession::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void Mono::Http::NtlmSession::__cordl_internal_set_message(::Mono::Security::Protocol::Ntlm::MessageBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
inline void Mono::Http::NtlmSession::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmSession*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Authorization* Mono::Http::NtlmSession::Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmSession*>(),
                                              { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, challenge, webRequest, credentials);
}
inline ::Mono::Http::NtlmSession* Mono::Http::NtlmSession::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Http::NtlmSession*>());
}
// Ctor Parameters []
constexpr ::Mono::Http::NtlmSession::NtlmSession() {}
