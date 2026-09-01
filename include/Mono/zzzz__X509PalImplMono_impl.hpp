#pragma once
// IWYU pragma private; include "Mono\X509PalImplMono.hpp"
#include "Mono/zzzz__X509PalImpl_impl.hpp"
#include "Mono/zzzz__X509PalImplMono_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: ::Mono::X509PalImplMono.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::Mono::X509PalImplMono::*)(::ArrayW<uint8_t>)>(
    &::Mono::X509PalImplMono::Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd0410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::X509PalImplMono*>(), { ::i2c::class_of<::Mono::X509PalImplMono*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImplMono.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImplMono::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::Mono::X509PalImplMono::Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd0414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::X509PalImplMono*>(), { ::i2c::class_of<::Mono::X509PalImplMono*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImplMono.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::X509PalImplMono::Import)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd0418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::X509PalImplMono*>(), { ::i2c::class_of<::Mono::X509PalImplMono*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImplMono._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::X509PalImplMono::*)()>(&::Mono::X509PalImplMono::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fcf9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImplMono*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::X509PalImplMono::Import(::ArrayW<uint8_t> data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::X509PalImplMono*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*
Mono::X509PalImplMono::Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                              ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::X509PalImplMono*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImplMono::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::X509PalImplMono*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, cert);
}
inline void Mono::X509PalImplMono::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImplMono*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::X509PalImplMono* Mono::X509PalImplMono::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::X509PalImplMono*>());
}
// Ctor Parameters []
constexpr ::Mono::X509PalImplMono::X509PalImplMono() {}
