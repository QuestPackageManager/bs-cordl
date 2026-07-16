#pragma once
// IWYU pragma private; include "Mono/SystemCertificateProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__SystemCertificateProvider_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::SystemCertificateProvider.GetX509Pal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::X509PalImpl* (*)()>(&::Mono::SystemCertificateProvider::GetX509Pal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fca180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "GetX509Pal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.EnsureInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::SystemCertificateProvider::EnsureInitialized)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5fca22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "EnsureInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.get_X509Pal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::X509PalImpl* (::Mono::SystemCertificateProvider::*)()>(&::Mono::SystemCertificateProvider::get_X509Pal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fca37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "get_X509Pal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fca3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "Import", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Mono_ISystemCertificateProvider_Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags,
                                          ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fca638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                                { "Mono.ISystemCertificateProvider.Import",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags,
                                          ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fca63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                                { "Import",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Mono_ISystemCertificateProvider_Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::SystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags)>(
    &::Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fca744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                                { "Mono.ISystemCertificateProvider.Import",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::SystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fca748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                            { "Import", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::SystemCertificateProvider::*)()>(&::Mono::SystemCertificateProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fca86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::SystemCertificateProvider::setStaticF_initialized(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "initialized", ::Mono::SystemCertificateProvider*>(std::forward<int32_t>(value));
}
inline int32_t Mono::SystemCertificateProvider::getStaticF_initialized() {
  return ::cordl_internals::getStaticField<int32_t, "initialized", ::Mono::SystemCertificateProvider*>();
}
inline void Mono::SystemCertificateProvider::setStaticF_x509pal(::Mono::X509PalImpl* value) {
  ::cordl_internals::setStaticField<::Mono::X509PalImpl*, "x509pal", ::Mono::SystemCertificateProvider*>(std::forward<::Mono::X509PalImpl*>(value));
}
inline ::Mono::X509PalImpl* Mono::SystemCertificateProvider::getStaticF_x509pal() {
  return ::cordl_internals::getStaticField<::Mono::X509PalImpl*, "x509pal", ::Mono::SystemCertificateProvider*>();
}
inline void Mono::SystemCertificateProvider::setStaticF_syncRoot(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncRoot", ::Mono::SystemCertificateProvider*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::SystemCertificateProvider::getStaticF_syncRoot() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncRoot", ::Mono::SystemCertificateProvider*>();
}
inline ::Mono::X509PalImpl* Mono::SystemCertificateProvider::GetX509Pal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "GetX509Pal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*>(nullptr, ___internal_method);
}
inline void Mono::SystemCertificateProvider::EnsureInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "EnsureInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Mono::X509PalImpl* Mono::SystemCertificateProvider::get_X509Pal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { "get_X509Pal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::SystemCertificateProvider::Import(::ArrayW<uint8_t> data, ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                                                                         { "Import", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                        ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags,
                                                                        ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                              { "Mono.ISystemCertificateProvider.Import",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data, password, keyStorageFlags, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*
Mono::SystemCertificateProvider::Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                        ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                              { "Import",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, keyStorageFlags, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                                              { "Mono.ISystemCertificateProvider.Import",
                                                {},
                                                { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, cert, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::SystemCertificateProvider::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                                                         ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(),
                          { "Import", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::CertificateImportFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, cert, importFlags);
}
inline void Mono::SystemCertificateProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::SystemCertificateProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::SystemCertificateProvider* Mono::SystemCertificateProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::SystemCertificateProvider*>());
}
/// @brief Convert operator to "::Mono::ISystemCertificateProvider"
constexpr Mono::SystemCertificateProvider::operator ::Mono::ISystemCertificateProvider*() noexcept {
  return static_cast<::Mono::ISystemCertificateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::ISystemCertificateProvider"
constexpr ::Mono::ISystemCertificateProvider* Mono::SystemCertificateProvider::i___Mono__ISystemCertificateProvider() noexcept {
  return static_cast<::Mono::ISystemCertificateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::SystemCertificateProvider::SystemCertificateProvider() {}
