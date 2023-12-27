#pragma once
#include "Mono/zzzz__X509PalImpl_impl.hpp"
#include "Mono/zzzz__X509PalImplMono_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: ::Mono::X509PalImplMono.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::Mono::X509PalImplMono::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::X509PalImplMono::Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2816ed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImplMono.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImplMono::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::Mono::X509PalImplMono::Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2816edc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImplMono.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (
    ::Mono::X509PalImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::X509PalImplMono::Import)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::X509PalImplMono._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::X509PalImplMono::*)()>(&::Mono::X509PalImplMono::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2816478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::X509PalImplMono::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), "Import", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*
Mono::X509PalImplMono::Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                              ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), "Import", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, data, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::X509PalImplMono::Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), "Import", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, false>(this, ___internal_method, cert);
}
inline ::Mono::X509PalImplMono* Mono::X509PalImplMono::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::X509PalImplMono*>());
}
inline void Mono::X509PalImplMono::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509PalImplMono*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::X509PalImplMono::X509PalImplMono() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
