#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509Certificate2ImplMono.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplMono_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImplCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63a942c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::Mono::Security::X509::X509Certificate*)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63a943c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Mono::Security::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63a9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x63a94d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63a9670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_Cert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Cert)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63a96d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), { "get_Cert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetRawCertData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63a96f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_HasPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63a972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x63a9750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.set_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x63a9b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetRSAPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRSAPrivateKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63a9d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetDSAPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetDSAPrivateKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63a9d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.ImportPkcs12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x63a9618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                             { "ImportPkcs12", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.ImportPkcs12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Mono::Security::X509::X509Certificate* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, ::StringW)>(
        &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x63a9e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                           { "ImportPkcs12", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63aa6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_IntermediateCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63aa7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_MonoCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63aa7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), { "get_MonoCertificate", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*&
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__cordl_internal_get_intermediateCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateCerts;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* const&
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__cordl_internal_get_intermediateCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateCerts;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__cordl_internal_set_intermediateCerts(
    ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateCerts = value;
}
constexpr ::Mono::Security::X509::X509Certificate*& System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__cordl_internal_get__cert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cert;
}
constexpr ::Mono::Security::X509::X509Certificate* const& System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__cordl_internal_get__cert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cert;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__cordl_internal_set__cert(::Mono::Security::X509::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cert = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::setStaticF_empty_error(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "empty_error", ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(std::forward<::StringW>(value));
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::getStaticF_empty_error() {
  return ::cordl_internals::getStaticField<::StringW, "empty_error", ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>();
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::setStaticF_signedData(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "signedData", ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::getStaticF_signedData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "signedData", ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>();
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::Mono::Security::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Mono::Security::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::ArrayW<uint8_t> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                              ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Cert() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), { "get_Cert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_HasPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRSAPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetDSAPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12(::ArrayW<uint8_t> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                           { "ImportPkcs12", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, rawData, password);
}
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12(::ArrayW<uint8_t> rawData, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(),
                                                                                         { "ImportPkcs12", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, rawData, password);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, thisCertificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(), { "get_MonoCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor(::Mono::Security::X509::X509Certificate* cert) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(cert));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(other));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor(::ArrayW<uint8_t> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(rawData, password, keyStorageFlags));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::X509Certificate2ImplMono() {}
