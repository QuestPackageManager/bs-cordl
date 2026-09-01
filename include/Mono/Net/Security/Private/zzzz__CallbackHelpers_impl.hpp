#pragma once
// IWYU pragma private; include "Mono\Net\Security\Private\CallbackHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/Private/zzzz__CallbackHelpers_def.hpp"
#include "Mono/Net/Security/Private/zzzz__CallbackHelpers_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoLocalCertificateSelectionCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoRemoteCertificateValidationCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__LocalCertSelectionCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::*)()>(
    &::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fded84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0._PublicToMono_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors)>(
    &::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::_PublicToMono_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fded8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0*>(),
                            { "<PublicToMono>b__0",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::Mono::Security::Interface::MonoSslPolicyErrors>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::__cordl_internal_set_callback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
inline void Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::_PublicToMono_b__0(::StringW h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c,
                                                                                                   ::System::Security::Cryptography::X509Certificates::X509Chain* ch,
                                                                                                   ::Mono::Security::Interface::MonoSslPolicyErrors e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0*>(),
                                       { "<PublicToMono>b__0",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                           ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::Mono::Security::Interface::MonoSslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, h, c, ch, e);
}
inline ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0* Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass0_0::CallbackHelpers___c__DisplayClass0_0() {}
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::*)()>(
    &::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fded88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0._MonoToInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                             ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(
    &::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::_MonoToInternal_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fdedac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0*>(),
                                                             { "<MonoToInternal>b__0",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* const& Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::__cordl_internal_set_callback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
inline void Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::_MonoToInternal_b__0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc,
                                                                                         ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::ArrayW<::StringW> ai) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0*>(),
                                                           { "<MonoToInternal>b__0",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, t, lc, rc, ai);
}
inline ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0* Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::Private::CallbackHelpers___c__DisplayClass6_0::CallbackHelpers___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers.PublicToMono
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* (*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(
    &::Mono::Net::Security::Private::CallbackHelpers::PublicToMono)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fde2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers*>(),
                                                             { "PublicToMono", {}, { ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers.MonoToInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::LocalCertSelectionCallback* (*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(
    &::Mono::Net::Security::Private::CallbackHelpers::MonoToInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fd8f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers*>(),
                                                             { "MonoToInternal", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>() } })));
    return ___internal_method;
  }
};
inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*
Mono::Net::Security::Private::CallbackHelpers::PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers*>(),
                                                                                         { "PublicToMono", {}, { ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>(nullptr, ___internal_method, callback);
}
inline ::System::Net::Security::LocalCertSelectionCallback*
Mono::Net::Security::Private::CallbackHelpers::MonoToInternal(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::Private::CallbackHelpers*>(),
                                                           { "MonoToInternal", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::LocalCertSelectionCallback*>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::Private::CallbackHelpers::CallbackHelpers() {}
