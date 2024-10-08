#pragma once
// IWYU pragma private; include "System/Net/Security/SslClientAuthenticationOptions.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_LocalCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::LocalCertificateSelectionCallback* (
    ::System::Net::Security::SslClientAuthenticationOptions::*)()>(&::System::Net::Security::SslClientAuthenticationOptions::get_LocalCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438eabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                 "get_LocalCertificateSelectionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_LocalCertificateSelectionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(
    ::System::Net::Security::LocalCertificateSelectionCallback*)>(&::System::Net::Security::SslClientAuthenticationOptions::set_LocalCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438eac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_LocalCertificateSelectionCallback",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::LocalCertificateSelectionCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_RemoteCertificateValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (
    ::System::Net::Security::SslClientAuthenticationOptions::*)()>(&::System::Net::Security::SslClientAuthenticationOptions::get_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438eacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                 "get_RemoteCertificateValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438ead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                               "get_TargetHost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_TargetHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::StringW)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438eadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_TargetHost",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (
    ::System::Net::Security::SslClientAuthenticationOptions::*)()>(&::System::Net::Security::SslClientAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438eae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                               "get_ClientCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::System::Net::Security::SslClientAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438eaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_ClientCertificates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_CertificateRevocationCheckMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(
    ::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::System::Net::Security::SslClientAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x438eaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_CertificateRevocationCheckMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_EncryptionPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x438eb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_EncryptionPolicy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.get_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438ec2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                               "get_EnabledSslProtocols", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions.set_EnabledSslProtocols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(
    &::System::Net::Security::SslClientAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x438ec34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_EnabledSslProtocols", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SslClientAuthenticationOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::SslClientAuthenticationOptions::*)()>(
    &::System::Net::Security::SslClientAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x438ec3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::EncryptionPolicy& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__encryptionPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr ::System::Net::Security::EncryptionPolicy const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__encryptionPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionPolicy;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__encryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionPolicy = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509RevocationMode const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__checkCertificateRevocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkCertificateRevocation;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__checkCertificateRevocation(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkCertificateRevocation = value;
}
constexpr ::System::Security::Authentication::SslProtocols& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__enabledSslProtocols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledSslProtocols;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledSslProtocols = value;
}
constexpr bool& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__allowRenegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr bool const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__allowRenegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRenegotiation;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__allowRenegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowRenegotiation = value;
}
constexpr ::System::Net::Security::LocalCertificateSelectionCallback*&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalCertificateSelectionCallback_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::LocalCertificateSelectionCallback*> const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__LocalCertificateSelectionCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalCertificateSelectionCallback_k__BackingField;
}
constexpr void
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__LocalCertificateSelectionCallback_k__BackingField(::System::Net::Security::LocalCertificateSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LocalCertificateSelectionCallback_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RemoteCertificateValidationCallback_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__RemoteCertificateValidationCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RemoteCertificateValidationCallback_k__BackingField;
}
constexpr void
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__RemoteCertificateValidationCallback_k__BackingField(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RemoteCertificateValidationCallback_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__TargetHost_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr ::StringW const& System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__TargetHost_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetHost_k__BackingField;
}
constexpr void System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__TargetHost_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetHost_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__ClientCertificates_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificates_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const&
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_get__ClientCertificates_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientCertificates_k__BackingField;
}
constexpr void
System::Net::Security::SslClientAuthenticationOptions::__cordl_internal_set__ClientCertificates_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClientCertificates_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Security::LocalCertificateSelectionCallback* System::Net::Security::SslClientAuthenticationOptions::get_LocalCertificateSelectionCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                               "get_LocalCertificateSelectionCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::LocalCertificateSelectionCallback*, false>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_LocalCertificateSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_LocalCertificateSelectionCallback",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::LocalCertificateSelectionCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::Security::SslClientAuthenticationOptions::get_RemoteCertificateValidationCallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                               "get_RemoteCertificateValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*, false>(this, ___internal_method);
}
inline ::StringW System::Net::Security::SslClientAuthenticationOptions::get_TargetHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                             "get_TargetHost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_TargetHost(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_TargetHost",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::Security::SslClientAuthenticationOptions::get_ClientCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                             "get_ClientCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_ClientCertificates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_CertificateRevocationCheckMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_EncryptionPolicy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::SslProtocols System::Net::Security::SslClientAuthenticationOptions::get_EnabledSslProtocols() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                             "get_EnabledSslProtocols", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(this, ___internal_method);
}
inline void System::Net::Security::SslClientAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(), "set_EnabledSslProtocols", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Security::SslClientAuthenticationOptions* System::Net::Security::SslClientAuthenticationOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Security::SslClientAuthenticationOptions*>());
}
inline void System::Net::Security::SslClientAuthenticationOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::SslClientAuthenticationOptions*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Security::SslClientAuthenticationOptions::SslClientAuthenticationOptions() {}
