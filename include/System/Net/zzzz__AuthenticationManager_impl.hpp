#pragma once
// IWYU pragma private; include "System\Net\AuthenticationManager.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::AuthenticationManager::EnsureModules)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6427294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(), { "EnsureModules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.Authenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::AuthenticationManager::Authenticate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6427500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(),
                                         { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.DoAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::AuthenticationManager::DoAuthenticate)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x6427604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(),
                                         { "DoAuthenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AuthenticationManager.PreAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Authorization* (*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(
    &::System::Net::AuthenticationManager::PreAuthenticate)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x6427a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(),
                                                             { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::AuthenticationManager::setStaticF_modules(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "modules", ::System::Net::AuthenticationManager*>(std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Net::AuthenticationManager::getStaticF_modules() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "modules", ::System::Net::AuthenticationManager*>();
}
inline void System::Net::AuthenticationManager::setStaticF_locker(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "locker", ::System::Net::AuthenticationManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::AuthenticationManager::getStaticF_locker() {
  return ::cordl_internals::getStaticField<::System::Object*, "locker", ::System::Net::AuthenticationManager*>();
}
inline void System::Net::AuthenticationManager::setStaticF_credential_policy(::System::Net::ICredentialPolicy* value) {
  ::cordl_internals::setStaticField<::System::Net::ICredentialPolicy*, "credential_policy", ::System::Net::AuthenticationManager*>(std::forward<::System::Net::ICredentialPolicy*>(value));
}
inline ::System::Net::ICredentialPolicy* System::Net::AuthenticationManager::getStaticF_credential_policy() {
  return ::cordl_internals::getStaticField<::System::Net::ICredentialPolicy*, "credential_policy", ::System::Net::AuthenticationManager*>();
}
inline void System::Net::AuthenticationManager::EnsureModules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(), { "EnsureModules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::Authenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(),
                                              { "Authenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, challenge, request, credentials);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::DoAuthenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(),
                                       { "DoAuthenticate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, challenge, request, credentials);
}
inline ::System::Net::Authorization* System::Net::AuthenticationManager::PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AuthenticationManager*>(),
                                                           { "PreAuthenticate", {}, { ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::ICredentials*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*>(nullptr, ___internal_method, request, credentials);
}
// Ctor Parameters []
constexpr ::System::Net::AuthenticationManager::AuthenticationManager() {}
