#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileTlsProvider.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_impl.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider.CreateSslStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (
    ::Mono::Net::Security::MobileTlsProvider::*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, bool, ::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Net::Security::MobileTlsProvider::CreateSslStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), { ::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider.ValidateCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::MobileTlsProvider::*)(
    ::Mono::Net::Security::ChainValidationHelper*, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool,
    ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>, ::by_ref<::System::Net::Security::SslPolicyErrors>, ::by_ref<int32_t>)>(
    &::Mono::Net::Security::MobileTlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), { ::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::MobileTlsProvider::*)()>(&::Mono::Net::Security::MobileTlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd0778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::MobileTlsProvider::CreateSslStream(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream,
                                                                                                                 bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings* settings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream*>(this, ___internal_method, sslStream, innerStream, leaveInnerStreamOpen, settings);
}
inline bool Mono::Net::Security::MobileTlsProvider::ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* validator, ::StringW targetHost, bool serverMode,
                                                                        ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain,
                                                                        ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*> chain,
                                                                        ::by_ref<::System::Net::Security::SslPolicyErrors> errors, ::by_ref<int32_t> status11) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
}
inline void Mono::Net::Security::MobileTlsProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::MobileTlsProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MobileTlsProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::MobileTlsProvider*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::MobileTlsProvider::MobileTlsProvider() {}
