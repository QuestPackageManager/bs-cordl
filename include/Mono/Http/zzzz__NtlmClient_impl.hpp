#pragma once
// IWYU pragma private; include "Mono/Http/NtlmClient.hpp"
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
//  Writing Method size for method: ::Mono::Http::__NtlmClient____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Http::__NtlmClient____c::*)()>(&::Mono::Http::__NtlmClient____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40a1f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::__NtlmClient____c._Authenticate_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Http::NtlmSession* (::Mono::Http::__NtlmClient____c::*)(::System::Net::HttpWebRequest*)>(
    &::Mono::Http::__NtlmClient____c::_Authenticate_b__1_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x40a1f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get(), "<Authenticate>b__1_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Http::__NtlmClient____c::setStaticF___9(::Mono::Http::__NtlmClient____c* value) {
  ::cordl_internals::setStaticField<::Mono::Http::__NtlmClient____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get>(
      std::forward<::Mono::Http::__NtlmClient____c*>(value));
}
inline ::Mono::Http::__NtlmClient____c* Mono::Http::__NtlmClient____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Mono::Http::__NtlmClient____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get>();
}
inline void Mono::Http::__NtlmClient____c::setStaticF___9__1_0(
    ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get>(
      std::forward<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*>(value));
}
inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*
Mono::Http::__NtlmClient____c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get>();
}
inline ::Mono::Http::__NtlmClient____c* Mono::Http::__NtlmClient____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Http::__NtlmClient____c*>());
}
inline void Mono::Http::__NtlmClient____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Http::NtlmSession* Mono::Http::__NtlmClient____c::_Authenticate_b__1_0(::System::Net::HttpWebRequest* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::__NtlmClient____c*>::get(), "<Authenticate>b__1_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Http::NtlmSession*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Mono::Http::__NtlmClient____c::__NtlmClient____c() {}
//  Writing Method size for method: ::Mono::Http::NtlmClient.Authenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::Authorization* (::Mono::Http::NtlmClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::Mono::Http::NtlmClient::Authenticate)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x40a1ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), "Authenticate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient.PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::Authorization* (::Mono::Http::NtlmClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::Mono::Http::NtlmClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40a1e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), "PreAuthenticate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Http::NtlmClient::*)()>(&::Mono::Http::NtlmClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40a1e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), "get_AuthenticationType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Http::NtlmClient::*)()>(&::Mono::Http::NtlmClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40a1e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr Mono::Http::NtlmClient::operator ::System::Net::IAuthenticationModule*() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IAuthenticationModule"
constexpr ::System::Net::IAuthenticationModule* Mono::Http::NtlmClient::i___System__Net__IAuthenticationModule() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
inline void Mono::Http::NtlmClient::setStaticF_cache(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "cache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>* Mono::Http::NtlmClient::getStaticF_cache() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Net::HttpWebRequest*, ::Mono::Http::NtlmSession*>*, "cache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get>();
}
inline ::System::Net::Authorization* Mono::Http::NtlmClient::Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), "Authenticate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(this, ___internal_method, challenge, webRequest, credentials);
}
inline ::System::Net::Authorization* Mono::Http::NtlmClient::PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), "PreAuthenticate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(this, ___internal_method, webRequest, credentials);
}
inline ::StringW Mono::Http::NtlmClient::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), "get_AuthenticationType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Mono::Http::NtlmClient* Mono::Http::NtlmClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Http::NtlmClient*>());
}
inline void Mono::Http::NtlmClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Http::NtlmClient::NtlmClient() {}
