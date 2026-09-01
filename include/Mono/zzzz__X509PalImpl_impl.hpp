#pragma once
// IWYU pragma private; include "Mono\X509PalImpl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ContentType_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: ::Mono::X509PalImpl.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::Mono::X509PalImpl::*)(::ArrayW<uint8_t>)>(
    &::Mono::X509PalImpl::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { ::i2c::class_of<::Mono::X509PalImpl*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImpl::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::Mono::X509PalImpl::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { ::i2c::class_of<::Mono::X509PalImpl*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImpl::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::X509PalImpl::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { ::i2c::class_of<::Mono::X509PalImpl*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.PEM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&::Mono::X509PalImpl::PEM)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5fd0424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "PEM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.ConvertData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Mono::X509PalImpl::ConvertData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fd05bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "ConvertData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.ImportFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::X509PalImpl::*)(::ArrayW<uint8_t>)>(
    &::Mono::X509PalImpl::ImportFallback)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5fcfc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "ImportFallback", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.ImportFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImpl::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::Mono::X509PalImpl::ImportFallback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fcfee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "ImportFallback",
                                                                                    {},
                                                                                    { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                                      ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.get_SupportsLegacyBasicConstraintsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::X509PalImpl::*)()>(&::Mono::X509PalImpl::get_SupportsLegacyBasicConstraintsExtension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd06cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "get_SupportsLegacyBasicConstraintsExtension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl.GetCertContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ContentType (::Mono::X509PalImpl::*)(::ArrayW<uint8_t>)>(
    &::Mono::X509PalImpl::GetCertContentType)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5fd06d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "GetCertContentType", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::X509PalImpl::*)()>(&::Mono::X509PalImpl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd0420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Mono::X509PalImpl::setStaticF_signedData(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "signedData", ::Mono::X509PalImpl*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::X509PalImpl::getStaticF_signedData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "signedData", ::Mono::X509PalImpl*>();
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::X509PalImpl::Import(::ArrayW<uint8_t> data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::X509PalImpl*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImpl::Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                                           ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::X509PalImpl*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImpl::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::X509PalImpl*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, cert);
}
inline ::ArrayW<uint8_t> Mono::X509PalImpl::PEM(::StringW type, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "PEM", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, type, data);
}
inline ::ArrayW<uint8_t> Mono::X509PalImpl::ConvertData(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "ConvertData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImpl::ImportFallback(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "ImportFallback", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*
Mono::X509PalImpl::ImportFallback(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "ImportFallback",
                                                                                         {},
                                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>(),
                                                                                           ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, keyStorageFlags);
}
inline bool Mono::X509PalImpl::get_SupportsLegacyBasicConstraintsExtension() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "get_SupportsLegacyBasicConstraintsExtension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ContentType Mono::X509PalImpl::GetCertContentType(::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { "GetCertContentType", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ContentType>(this, ___internal_method, rawData);
}
inline void Mono::X509PalImpl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::X509PalImpl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::X509PalImpl* Mono::X509PalImpl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::X509PalImpl*>());
}
// Ctor Parameters []
constexpr ::Mono::X509PalImpl::X509PalImpl() {}
