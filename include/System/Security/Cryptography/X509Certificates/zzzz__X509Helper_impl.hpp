#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509Helper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Helper_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.get_CertificateProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::ISystemCertificateProvider* (*)()>(&::System::Security::Cryptography::X509Certificates::X509Helper::get_CertificateProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b12e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(), { "get_CertificateProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.InitFromCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
        &::System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b11e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                             { "InitFromCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.InitFromCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(
        &::System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b119bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                             { "InitFromCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper::IsValid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b12858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                             { "IsValid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.ThrowIfContextInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b12b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                             { "ThrowIfContextInvalid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.GetInvalidContextException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b12bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(), { "GetInvalidContextException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::X509Certificates::X509Helper::Import)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b11870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(), { "Import", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*,
                                                                                             ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
        &::System::Security::Cryptography::X509Certificates::X509Helper::Import)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b11cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                             { "Import",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>() } })));
    return ___internal_method;
  }
};
inline ::Mono::ISystemCertificateProvider* System::Security::Cryptography::X509Certificates::X509Helper::get_CertificateProvider() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(), { "get_CertificateProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                           { "InitFromCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(nullptr, ___internal_method, cert);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                           { "InitFromCertificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(nullptr, ___internal_method, impl);
}
inline bool System::Security::Cryptography::X509Certificates::X509Helper::IsValid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                           { "IsValid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, impl);
}
inline void System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                           { "ThrowIfContextInvalid", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, impl);
}
inline ::System::Exception* System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(), { "GetInvalidContextException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509Helper::Import(::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(), { "Import", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(nullptr, ___internal_method, rawData);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
System::Security::Cryptography::X509Certificates::X509Helper::Import(::ArrayW<uint8_t> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                     ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Helper*>(),
                                                           { "Import",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(nullptr, ___internal_method, rawData, password, keyStorageFlags);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Helper::X509Helper() {}
