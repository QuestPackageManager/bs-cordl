#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImplMono_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Store_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElement_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29809d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2980aa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2980aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainPolicy* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2980ab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> (
        ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainStatus)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2980abc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.AddStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::AddStatus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2980b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::Build)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x2980b24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29812fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_Roots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_Roots)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x29813c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_Roots",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_CertificateAuthorities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateAuthorities)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2981670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                 "get_CertificateAuthorities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_LMRootStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMRootStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2981488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                 "get_LMRootStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_UserRootStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserRootStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x298157c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                 "get_UserRootStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_LMCAStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMCAStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2981730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_LMCAStore",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_UserCAStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserCAStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2981824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                 "get_UserCAStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_CertificateCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateCollection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2981918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                                 "get_CertificateCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.BuildChainFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::BuildChainFrom)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x29810e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "BuildChainFrom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.SelectBestFromCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*,
                                                                              ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::SelectBestFromCollection)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2981e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "SelectBestFromCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.FindParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindParent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2981c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "FindParent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsChainComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsChainComplete)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2981d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "IsChainComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsSelfIssued
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSelfIssued)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2982104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "IsSelfIssued", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ValidateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ValidateChain)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29811c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ValidateChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(int32_t)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::Process)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x298214c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "Process",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.PrepareForNextCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(int32_t)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::PrepareForNextCertificate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x29823f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "PrepareForNextCertificate",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.WrapUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::WrapUp)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29827e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "WrapUp",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCertificateExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainElement*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCertificateExtensions)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x29828ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ProcessCertificateExtensions",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsSignedWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSignedWith)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2982870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "IsSignedWith", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetSubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetSubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x298204c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetSubjectKeyIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2981fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetAuthorityKeyIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::X509::X509Crl*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2982b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetAuthorityKeyIdentifier",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::X509::X509Extension*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29829a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetAuthorityKeyIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocationOnChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocationOnChain)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x29825f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckRevocationOnChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, int32_t, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2982b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckRevocation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
        ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, bool)>(
        &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2982c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckRevocation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Crl* (*)(::StringW, ::StringW, ::Mono::Security::X509::X509Store*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckCrls)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x29835fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckCrls", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Store*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.FindCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::X509::X509Crl* (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
        &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindCrl)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2982e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "FindCrl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCrlExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::Mono::Security::X509::X509Crl*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlExtensions)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x29832b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ProcessCrlExtensions",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCrlEntryExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::Mono::Security::X509::__X509Crl__X509CrlEntry*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlEntryExtensions)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2982fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ProcessCrlEntryExtensions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_location(::System::Security::Cryptography::X509Certificates::StoreLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___policy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_status(
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___status)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_max_path_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_path_length;
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_max_path_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_path_length;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_max_path_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_path_length = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_working_issuer_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_issuer_name;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_working_issuer_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_issuer_name;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_working_issuer_name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___working_issuer_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_working_public_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_public_key;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::AsymmetricAlgorithm*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_working_public_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_public_key;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_working_public_key(::System::Security::Cryptography::AsymmetricAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___working_public_key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElement*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_bce_restriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bce_restriction;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainElement*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_bce_restriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bce_restriction;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_bce_restriction(::System::Security::Cryptography::X509Certificates::X509ChainElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bce_restriction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_roots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roots;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_roots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roots;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_roots(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_cas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_cas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cas;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_cas(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_root_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root_store;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Store*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_root_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_root_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root_store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_ca_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ca_store;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Store*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_ca_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ca_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_ca_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ca_store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_user_root_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_root_store;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Store*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_user_root_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_root_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_user_root_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___user_root_store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_user_ca_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_ca_store;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Store*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_user_ca_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_ca_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_user_ca_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___user_ca_store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__get_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__set_collection(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::setStaticF_Empty(
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>,
                                    "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get>(
      std::forward<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
System::Security::Cryptography::X509Certificates::X509ChainImplMono::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>,
                                           "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get>();
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainImplMono* System::Security::Cryptography::X509Certificates::X509ChainImplMono::New_ctor(bool useMachineContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(useMachineContext));
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::_ctor(bool useMachineContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useMachineContext);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_IsValid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                               "get_ChainElements", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainPolicy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_ChainPolicy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainStatus() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_ChainStatus",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "AddStatus", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "Build", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, certificate);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_Roots() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_Roots",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateAuthorities() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                               "get_CertificateAuthorities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMRootStore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_LMRootStore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserRootStore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                               "get_UserRootStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMCAStore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_LMCAStore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserCAStore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "get_UserCAStore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(),
                                               "get_CertificateCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
System::Security::Cryptography::X509Certificates::X509ChainImplMono::BuildChainFrom(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "BuildChainFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(this, ___internal_method, certificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Security::Cryptography::X509Certificates::X509ChainImplMono::SelectBestFromCollection(::System::Security::Cryptography::X509Certificates::X509Certificate2* child,
                                                                                              ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "SelectBestFromCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal_method, child, c);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindParent(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "FindParent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal_method, certificate);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsChainComplete(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "IsChainComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, certificate);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSelfIssued(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "IsSelfIssued", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, certificate);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::ValidateChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ValidateChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flag);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::Process(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "Process",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::PrepareForNextCertificate(int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "PrepareForNextCertificate",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::WrapUp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "WrapUp",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCertificateExtensions(::System::Security::Cryptography::X509Certificates::X509ChainElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ProcessCertificateExtensions",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSignedWith(::System::Security::Cryptography::X509Certificates::X509Certificate2* _cordl_signed,
                                                                                              ::System::Security::Cryptography::AsymmetricAlgorithm* pubkey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "IsSignedWith", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, _cordl_signed, pubkey);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetSubjectKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetSubjectKeyIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, certificate);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetAuthorityKeyIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, certificate);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetAuthorityKeyIdentifier",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, crl);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Extension* ext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "GetAuthorityKeyIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ext);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocationOnChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckRevocationOnChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flag);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, int32_t ca, bool online) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckRevocation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(this, ___internal_method, certificate, ca, online);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate2* ca_cert, bool online) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckRevocation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(this, ___internal_method, certificate, ca_cert, online);
}
inline ::Mono::Security::X509::X509Crl* System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckCrls(::StringW subject, ::StringW ski, ::Mono::Security::X509::X509Store* store) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "CheckCrls", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Store*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*, false>(nullptr, ___internal_method, subject, ski, store);
}
inline ::Mono::Security::X509::X509Crl*
System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindCrl(::System::Security::Cryptography::X509Certificates::X509Certificate2* caCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "FindCrl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*, false>(this, ___internal_method, caCertificate);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlExtensions(::Mono::Security::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ProcessCrlExtensions",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, crl);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlEntryExtensions(::Mono::Security::X509::__X509Crl__X509CrlEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>::get(), "ProcessCrlEntryExtensions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::X509ChainImplMono() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
