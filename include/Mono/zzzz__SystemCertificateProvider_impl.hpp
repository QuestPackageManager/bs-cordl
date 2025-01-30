#pragma once
// IWYU pragma private; include "Mono/SystemCertificateProvider.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__SystemCertificateProvider_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::SystemCertificateProvider.GetX509Pal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::X509PalImpl* (*)()>(&::Mono::SystemCertificateProvider::GetX509Pal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x410ae38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "GetX509Pal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.EnsureInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Mono::SystemCertificateProvider::EnsureInitialized)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x410aee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "EnsureInitialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.get_X509Pal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::X509PalImpl* (::Mono::SystemCertificateProvider::*)()>(&::Mono::SystemCertificateProvider::get_X509Pal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x410b030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "get_X509Pal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x410b08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Mono_ISystemCertificateProvider_Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*,
                                          ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::Mono::CertificateImportFlags)>(
    &::Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x410b2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Mono.ISystemCertificateProvider.Import", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*,
                                          ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x410b2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Mono_ISystemCertificateProvider_Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::SystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags)>(
    &::Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x410b3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Mono.ISystemCertificateProvider.Import", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::SystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags)>(&::Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x410b3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SystemCertificateProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::SystemCertificateProvider::*)()>(&::Mono::SystemCertificateProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410b50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Mono::SystemCertificateProvider::setStaticF_initialized(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get>(std::forward<int32_t>(value));
}
inline int32_t Mono::SystemCertificateProvider::getStaticF_initialized() {
  return ::cordl_internals::getStaticField<int32_t, "initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get>();
}
inline void Mono::SystemCertificateProvider::setStaticF_x509pal(::Mono::X509PalImpl* value) {
  ::cordl_internals::setStaticField<::Mono::X509PalImpl*, "x509pal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get>(
      std::forward<::Mono::X509PalImpl*>(value));
}
inline ::Mono::X509PalImpl* Mono::SystemCertificateProvider::getStaticF_x509pal() {
  return ::cordl_internals::getStaticField<::Mono::X509PalImpl*, "x509pal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get>();
}
inline void Mono::SystemCertificateProvider::setStaticF_syncRoot(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::SystemCertificateProvider::getStaticF_syncRoot() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get>();
}
inline ::Mono::X509PalImpl* Mono::SystemCertificateProvider::GetX509Pal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "GetX509Pal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*, false>(nullptr, ___internal_method);
}
inline void Mono::SystemCertificateProvider::EnsureInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "EnsureInitialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Mono::X509PalImpl* Mono::SystemCertificateProvider::get_X509Pal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "get_X509Pal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::SystemCertificateProvider::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                                        ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, data, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                        ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags,
                                                                        ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Mono.ISystemCertificateProvider.Import", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, data, password, keyStorageFlags, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*
Mono::SystemCertificateProvider::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                        ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, data, password, keyStorageFlags, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Mono.ISystemCertificateProvider.Import", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, cert, importFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::SystemCertificateProvider::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                                                         ::Mono::CertificateImportFlags importFlags) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, cert, importFlags);
}
inline void Mono::SystemCertificateProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SystemCertificateProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::SystemCertificateProvider* Mono::SystemCertificateProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::SystemCertificateProvider*>());
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
