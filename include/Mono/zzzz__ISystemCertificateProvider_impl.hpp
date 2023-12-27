#pragma once
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::ISystemCertificateProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::ISystemCertificateProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*,
                                           ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::Mono::ISystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(), 2));
    return ___internal_method;
  }
};
/// @param importFlags: ::Mono::CertificateImportFlags (default: static_cast<int32_t>(0x0))
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::ISystemCertificateProvider::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                                         ::Mono::CertificateImportFlags importFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, data, importFlags);
}
/// @param importFlags: ::Mono::CertificateImportFlags (default: static_cast<int32_t>(0x0))
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
Mono::ISystemCertificateProvider::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                         ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, data, password, keyStorageFlags, importFlags);
}
/// @param importFlags: ::Mono::CertificateImportFlags (default: static_cast<int32_t>(0x0))
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::ISystemCertificateProvider::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                                                         ::Mono::CertificateImportFlags importFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, cert, importFlags);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
