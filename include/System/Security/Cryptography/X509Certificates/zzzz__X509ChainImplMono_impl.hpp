#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509ChainImplMono.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImplMono_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Collection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElement_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Store_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x63ac6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ac78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ac794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_ChainPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainPolicy* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ac79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.AddStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::AddStatus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63ac7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::Build)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x63ac7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x63acf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_Roots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_Roots)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63ad054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_Roots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_CertificateAuthorities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateAuthorities)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63ad304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_CertificateAuthorities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_LMRootStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMRootStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63ad11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_LMRootStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_UserRootStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserRootStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63ad210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_UserRootStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_LMCAStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMCAStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63ad3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_LMCAStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_UserCAStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Store* (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserCAStore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63ad4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_UserCAStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.get_CertificateCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateCollection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x63ad5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_CertificateCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.BuildChainFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::BuildChainFrom)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x63acd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "BuildChainFrom", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.SelectBestFromCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*,
                                                                              ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::SelectBestFromCollection)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x63ad85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "SelectBestFromCollection",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                                                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.FindParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindParent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x63ad684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "FindParent", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsChainComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsChainComplete)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63ad79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "IsChainComplete", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsSelfIssued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSelfIssued)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x63adb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "IsSelfIssued", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ValidateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ValidateChain)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x63ace44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "ValidateChain", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(int32_t)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::Process)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x63adb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "Process", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.PrepareForNextCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(int32_t)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::PrepareForNextCertificate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x63ade40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "PrepareForNextCertificate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.WrapUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::WrapUp)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63ae208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "WrapUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCertificateExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainElement*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCertificateExtensions)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63ae2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "ProcessCertificateExtensions", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.IsSignedWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSignedWith)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63ae29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "IsSignedWith",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                                                                                               ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetSubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetSubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63ada98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "GetSubjectKeyIdentifier", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63ad9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "GetAuthorityKeyIdentifier", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::X509::X509Crl*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63ae534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "GetAuthorityKeyIdentifier", {}, { ::i2c::type_of<::Mono::Security::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.GetAuthorityKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::X509::X509Extension*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x63ae3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "GetAuthorityKeyIdentifier", {}, { ::i2c::type_of<::Mono::Security::X509::X509Extension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocationOnChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocationOnChain)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x63ae034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "CheckRevocationOnChain", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, int32_t, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63ae5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                         { "CheckRevocation", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckRevocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(
        ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, bool)>(
        &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x63ae690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "CheckRevocation",
                                                               {},
                                                               { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.CheckCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl* (*)(::StringW, ::StringW, ::Mono::Security::X509::X509Store*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckCrls)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x63af014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "CheckCrls", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::X509::X509Store*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.FindCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Mono::Security::X509::X509Crl* (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(
        &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindCrl)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x63ae878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                             { "FindCrl", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCrlExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::Mono::Security::X509::X509Crl*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlExtensions)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x63aece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "ProcessCrlExtensions", {}, { ::i2c::type_of<::Mono::Security::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainImplMono.ProcessCrlEntryExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::Mono::Security::X509::X509Crl_X509CrlEntry*)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlEntryExtensions)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x63ae9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                           { "ProcessCrlEntryExtensions", {}, { ::i2c::type_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_location(::System::Security::Cryptography::X509Certificates::StoreLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policy;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policy = value;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_status(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_max_path_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_path_length;
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_max_path_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_path_length;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_max_path_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_path_length = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_working_issuer_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_issuer_name;
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_working_issuer_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_issuer_name;
}
constexpr void
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_working_issuer_name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___working_issuer_name = value;
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_working_public_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_public_key;
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_working_public_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___working_public_key;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_working_public_key(::System::Security::Cryptography::AsymmetricAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___working_public_key = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElement*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_bce_restriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bce_restriction;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElement* const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_bce_restriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bce_restriction;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_bce_restriction(::System::Security::Cryptography::X509Certificates::X509ChainElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bce_restriction = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_roots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roots;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_roots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roots;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_roots(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roots = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_cas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cas;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_cas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cas;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_cas(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cas = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_root_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root_store;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_root_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_root_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___root_store = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_ca_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ca_store;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_ca_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ca_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_ca_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ca_store = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_user_root_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_root_store;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_user_root_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_root_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_user_root_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_root_store = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_user_ca_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_ca_store;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Store* const& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_user_ca_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user_ca_store;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_user_ca_store(::System::Security::Cryptography::X509Certificates::X509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user_ca_store = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const&
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_get_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collection;
}
constexpr void
System::Security::Cryptography::X509Certificates::X509ChainImplMono::__cordl_internal_set_collection(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collection = value;
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::setStaticF_Empty(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>, "Empty", ::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(
      std::forward<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> System::Security::Cryptography::X509Certificates::X509ChainImplMono::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>, "Empty",
                                           ::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>();
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::_ctor(bool useMachineContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useMachineContext);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainPolicy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificate);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_Roots() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_Roots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateAuthorities() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_CertificateAuthorities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMRootStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_LMRootStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserRootStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_UserRootStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_LMCAStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_LMCAStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Store* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_UserCAStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_UserCAStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Store*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_CertificateCollection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "get_CertificateCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
System::Security::Cryptography::X509Certificates::X509ChainImplMono::BuildChainFrom(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "BuildChainFrom", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(this, ___internal_method, certificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Security::Cryptography::X509Certificates::X509ChainImplMono::SelectBestFromCollection(::System::Security::Cryptography::X509Certificates::X509Certificate2* child,
                                                                                              ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                         { "SelectBestFromCollection",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                                                                                             ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method, child, c);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindParent(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "FindParent", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method, certificate);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsChainComplete(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "IsChainComplete", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificate);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSelfIssued(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "IsSelfIssued", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificate);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::ValidateChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "ValidateChain", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flag);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::Process(int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "Process", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::PrepareForNextCertificate(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "PrepareForNextCertificate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::WrapUp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(), { "WrapUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCertificateExtensions(::System::Security::Cryptography::X509Certificates::X509ChainElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "ProcessCertificateExtensions", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::IsSignedWith(::System::Security::Cryptography::X509Certificates::X509Certificate2* _cordl_signed,
                                                                                              ::System::Security::Cryptography::AsymmetricAlgorithm* pubkey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                          { "IsSignedWith",
                            {},
                            { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_signed, pubkey);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetSubjectKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "GetSubjectKeyIdentifier", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, certificate);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "GetAuthorityKeyIdentifier", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, certificate);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                         { "GetAuthorityKeyIdentifier", {}, { ::i2c::type_of<::Mono::Security::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, crl);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainImplMono::GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Extension* ext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                         { "GetAuthorityKeyIdentifier", {}, { ::i2c::type_of<::Mono::Security::X509::X509Extension*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ext);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocationOnChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "CheckRevocationOnChain", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flag);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, int32_t ca, bool online) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                          { "CheckRevocation", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(this, ___internal_method, certificate, ca, online);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags
System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate2* ca_cert, bool online) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "CheckRevocation",
                                                             {},
                                                             { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(this, ___internal_method, certificate, ca_cert, online);
}
inline ::Mono::Security::X509::X509Crl* System::Security::Cryptography::X509Certificates::X509ChainImplMono::CheckCrls(::StringW subject, ::StringW ski, ::Mono::Security::X509::X509Store* store) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "CheckCrls", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Security::X509::X509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*>(nullptr, ___internal_method, subject, ski, store);
}
inline ::Mono::Security::X509::X509Crl*
System::Security::Cryptography::X509Certificates::X509ChainImplMono::FindCrl(::System::Security::Cryptography::X509Certificates::X509Certificate2* caCertificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                           { "FindCrl", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*>(this, ___internal_method, caCertificate);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlExtensions(::Mono::Security::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                         { "ProcessCrlExtensions", {}, { ::i2c::type_of<::Mono::Security::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crl);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainImplMono::ProcessCrlEntryExtensions(::Mono::Security::X509::X509Crl_X509CrlEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(),
                                                                                         { "ProcessCrlEntryExtensions", {}, { ::i2c::type_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainImplMono* System::Security::Cryptography::X509Certificates::X509ChainImplMono::New_ctor(bool useMachineContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509ChainImplMono*>(useMachineContext));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainImplMono::X509ChainImplMono() {}
