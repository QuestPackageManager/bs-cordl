#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2ImplMono.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61f3934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::Mono::Security::X509::X509Certificate*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61f3944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61f3950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61f39d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61f3b78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_Cert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Cert)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61f3be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                                 "get_Cert", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetRawCertData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61f3bfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_HasPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61f3c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_PrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x61f3c58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.set_PrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x61f4070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetRSAPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRSAPrivateKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x61f4208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetDSAPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetDSAPrivateKey)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x61f4298;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.ImportPkcs12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*)>(
    &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61f3b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), "ImportPkcs12",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.ImportPkcs12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::X509::X509Certificate* (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(
        &::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x61f4328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                                 "ImportPkcs12", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61f4ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_IntermediateCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61f4cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_MonoCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (
    ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61f4ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                                 "get_MonoCertificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___intermediateCerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::setStaticF_empty_error(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "empty_error",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::getStaticF_empty_error() {
  return ::cordl_internals::getStaticField<::StringW, "empty_error",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get>();
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::setStaticF_signedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "signedData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::getStaticF_signedData() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "signedData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get>();
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::Mono::Security::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cert);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData,
                                                                                              ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                              ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawData, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Cert() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), "get_Cert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_HasPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRSAPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetDSAPrivateKey() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), "ImportPkcs12",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method, rawData, password);
}
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData,
                                                                                                                                         ::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                               "ImportPkcs12", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method, rawData, password);
}
inline bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, thisCertificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>::get(),
                                               "get_MonoCertificate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor(::Mono::Security::X509::X509Certificate* cert) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(cert));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(other));
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*
System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*>(rawData, password, keyStorageFlags));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::X509Certificate2ImplMono() {}
