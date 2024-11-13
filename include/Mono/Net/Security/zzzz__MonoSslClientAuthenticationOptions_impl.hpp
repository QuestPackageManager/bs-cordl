#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoSslClientAuthenticationOptions.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoSslClientAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_Options
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslClientAuthenticationOptions* (
    ::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40b3e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), "get_Options",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ServerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40b3e38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x40b0fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3e40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3e78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(
    ::System::Security::Authentication::SslProtocols)>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3eb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::StringW)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3ecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x40b3ee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ClientCertificateRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(bool)>(
    &::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x40b3f20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (
    ::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3f58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40b3f74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x40b3f90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x40b3fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SslClientAuthenticationOptions*& Mono::Net::Security::MonoSslClientAuthenticationOptions::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslClientAuthenticationOptions*> const&
Mono::Net::Security::MonoSslClientAuthenticationOptions::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Mono::Net::Security::MonoSslClientAuthenticationOptions::__cordl_internal_set__Options_k__BackingField(::System::Net::Security::SslClientAuthenticationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Options_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Security::SslClientAuthenticationOptions* Mono::Net::Security::MonoSslClientAuthenticationOptions::get_Options() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                                             "get_Options", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslClientAuthenticationOptions*, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerMode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Mono::Net::Security::MonoSslClientAuthenticationOptions* Mono::Net::Security::MonoSslClientAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>());
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols Mono::Net::Security::MonoSslClientAuthenticationOptions::get_EnabledSslProtocols() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Mono::Net::Security::MonoSslClientAuthenticationOptions::get_TargetHost() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_TargetHost(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificateRequired() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificateRequired(bool value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificates() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerCertificate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslClientAuthenticationOptions*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MonoSslClientAuthenticationOptions::MonoSslClientAuthenticationOptions() {}
