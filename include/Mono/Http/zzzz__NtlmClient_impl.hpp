#pragma once
// IWYU pragma private; include "Mono\Http\NtlmClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Http/zzzz__NtlmClient_def.hpp"
#include "Mono/Http/zzzz__NtlmClient_def.hpp"
#include "Mono/Http/zzzz__NtlmSession_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
//  Writing Method size for method: ::Mono::Http::NtlmClient___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Http::NtlmClient___c::*)()>(&::Mono::Http::NtlmClient___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdf6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient___c._Authenticate_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Http::NtlmSession* (::Mono::Http::NtlmClient___c::*)(::System::Net::HttpWebRequest*)>(
    &::Mono::Http::NtlmClient___c::_Authenticate_b__1_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fdf700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient___c*>(), { "<Authenticate>b__1_0", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>() } })));
    return ___internal_method;
  }
};
inline void Mono::Http::NtlmClient___c::setStaticF___9(::Mono::Http::NtlmClient___c* value) {
  ::cordl_internals::setStaticField<::Mono::Http::NtlmClient___c*, "<>9", ::Mono::Http::NtlmClient___c*>(std::forward<::Mono::Http::NtlmClient___c*>(value));
}
inline ::Mono::Http::NtlmClient___c* Mono::Http::NtlmClient___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Mono::Http::NtlmClient___c*, "<>9", ::Mono::Http::NtlmClient___c*>();
}
inline void
Mono::Http::NtlmClient___c::setStaticF___9__1_0(::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "<>9__1_0",
                                    ::Mono::Http::NtlmClient___c*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* Mono::Http::NtlmClient___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "<>9__1_0",
                                           ::Mono::Http::NtlmClient___c*>();
}
inline void Mono::Http::NtlmClient___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Http::NtlmSession* Mono::Http::NtlmClient___c::_Authenticate_b__1_0(::System::Net::HttpWebRequest* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient___c*>(), { "<Authenticate>b__1_0", {}, { ::i2c::type_of<::System::Net::HttpWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Http::NtlmSession*>(this, ___internal_method, x);
}
inline ::Mono::Http::NtlmClient___c* Mono::Http::NtlmClient___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Http::NtlmClient___c*>());
}
// Ctor Parameters []
constexpr ::Mono::Http::NtlmClient___c::NtlmClient___c() {}
//  Writing Method size for method: ::Mono::Http::NtlmClient.Authenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::Mono::Http::NtlmClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::Mono::Http::NtlmClient::Authenticate)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5fdf238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(),
                                         { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient.PreAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (::Mono::Http::NtlmClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::Mono::Http::NtlmClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdf5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(),
                                                             { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Http::NtlmClient::*)()>(&::Mono::Http::NtlmClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fdf5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(), { "get_AuthenticationType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Http::NtlmClient::*)()>(&::Mono::Http::NtlmClient::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdf614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::Http::NtlmClient::setStaticF_cache(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "cache", ::Mono::Http::NtlmClient*>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* Mono::Http::NtlmClient::getStaticF_cache() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "cache",
                                           ::Mono::Http::NtlmClient*>();
}
inline ::System::Net::Authorization* Mono::Http::NtlmClient::Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(),
                                              { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, challenge, webRequest, credentials);
}
inline ::System::Net::Authorization* Mono::Http::NtlmClient::PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(), { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(this, ___internal_method, webRequest, credentials);
}
inline ::StringW Mono::Http::NtlmClient::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(), { "get_AuthenticationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Http::NtlmClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Http::NtlmClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Http::NtlmClient* Mono::Http::NtlmClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Http::NtlmClient*>());
}
/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr Mono::Http::NtlmClient::operator ::System::Net::IAuthenticationModule*() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAuthenticationModule"
constexpr ::System::Net::IAuthenticationModule* Mono::Http::NtlmClient::i___System__Net__IAuthenticationModule() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Http::NtlmClient::NtlmClient() {}
