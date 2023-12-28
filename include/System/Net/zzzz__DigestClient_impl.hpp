#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__DigestClient_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Net::DigestClient.get_Cache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (*)()>(&::System::Net::DigestClient::get_Cache)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x29beaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "get_Cache",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestClient.CheckExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Net::DigestClient::CheckExpired)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x29bec14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "CheckExpired", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestClient.Authenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::Authorization* (::System::Net::DigestClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::DigestClient::Authenticate)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x29bf45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "Authenticate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestClient.PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::Authorization* (::System::Net::DigestClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::DigestClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x29bf704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "PreAuthenticate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestClient.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestClient::*)()>(&::System::Net::DigestClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29bf898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "get_AuthenticationType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::DigestClient::*)()>(&::System::Net::DigestClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29badb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr System::Net::DigestClient::operator ::System::Net::IAuthenticationModule*() noexcept {
  return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
inline void System::Net::DigestClient::setStaticF_cache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::DigestClient::getStaticF_cache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get>();
}
inline ::System::Collections::Hashtable* System::Net::DigestClient::get_Cache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "get_Cache",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(nullptr, ___internal_method);
}
inline void System::Net::DigestClient::CheckExpired(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "CheckExpired", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, count);
}
inline ::System::Net::Authorization* System::Net::DigestClient::Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "Authenticate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(this, ___internal_method, challenge, webRequest, credentials);
}
inline ::System::Net::Authorization* System::Net::DigestClient::PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "PreAuthenticate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(this, ___internal_method, webRequest, credentials);
}
inline ::StringW System::Net::DigestClient::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), "get_AuthenticationType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::DigestClient* System::Net::DigestClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::DigestClient*>());
}
inline void System::Net::DigestClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestClient*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::DigestClient::DigestClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
