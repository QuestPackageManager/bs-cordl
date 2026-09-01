#pragma once
// IWYU pragma private; include "Mono\Security\Interface\MonoLocalCertificateSelectionCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoLocalCertificateSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a9e0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                           ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(
    &::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a9e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void Mono::Security::Interface::MonoLocalCertificateSelectionCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                         ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                         ::ArrayW<::StringW> acceptableIssuers) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, targetHost, localCertificates, remoteCertificate,
                                                                                                                   acceptableIssuers);
}
inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* Mono::Security::Interface::MonoLocalCertificateSelectionCallback::New_ctor(::System::Object* object,
                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::MonoLocalCertificateSelectionCallback() {}
