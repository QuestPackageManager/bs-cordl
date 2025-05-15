#pragma once
// IWYU pragma private; include "System/Net/AuthenticationManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__AuthenticationManager_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__ICredentialPolicy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::AuthenticationManager.EnsureModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::AuthenticationManager::EnsureModules)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x44bafb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "EnsureModules",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Authenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::AuthenticationManager::Authenticate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x44bb22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "Authenticate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.DoAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::AuthenticationManager::DoAuthenticate)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x44bb32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "DoAuthenticate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::AuthenticationManager::PreAuthenticate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x44bb818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "PreAuthenticate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::AuthenticationManager::setStaticF_modules(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "modules", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Net::AuthenticationManager::getStaticF_modules() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "modules", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get>();
}
inline void System::Net::AuthenticationManager::setStaticF_locker(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::AuthenticationManager::getStaticF_locker() {
  return ::cordl_internals::getStaticField<::System::Object*, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get>();
}
inline void System::Net::AuthenticationManager::setStaticF_credential_policy(::System::Net::ICredentialPolicy* value) {
  ::cordl_internals::setStaticField<::System::Net::ICredentialPolicy*, "credential_policy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get>(
      std::forward<::System::Net::ICredentialPolicy*>(value));
}
inline ::System::Net::ICredentialPolicy* System::Net::AuthenticationManager::getStaticF_credential_policy() {
  return ::cordl_internals::getStaticField<::System::Net::ICredentialPolicy*, "credential_policy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get>();
}
inline void System::Net::AuthenticationManager::EnsureModules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "EnsureModules",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::Authenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "Authenticate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(nullptr, ___internal_method, challenge, request, credentials);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::DoAuthenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "DoAuthenticate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(nullptr, ___internal_method, challenge, request, credentials);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AuthenticationManager*>::get(), "PreAuthenticate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(nullptr, ___internal_method, request, credentials);
}
// Ctor Parameters []
constexpr ::System::Net::AuthenticationManager::AuthenticationManager() {}
