#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/Rfc3280CertPathUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__Rfc3280CertPathUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidator_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__ReasonsMask_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlB2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*,
                                                                                           ::Org::BouncyCastle::X509::X509Crl*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2)> {
  constexpr static std::size_t size = 0xdf4;
  constexpr static std::size_t addrs = 0x2591384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlB2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertBC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC)> {
  constexpr static std::size_t size = 0xa94;
  constexpr static std::size_t addrs = 0x257530c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertBC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x2577e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Utilities::Collections::ISet*,
                                                               ::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>, int32_t)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD)> {
  constexpr static std::size_t size = 0x1e08;
  constexpr static std::size_t addrs = 0x2575da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertD", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlB1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*,
                                                                                           ::Org::BouncyCastle::X509::X509Crl*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2592178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlB1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::ReasonsMask* (*)(::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::Asn1::X509::DistributionPoint*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2592504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlD", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::X509::X509Certificate*,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Pkix::PkixParameters*,
                                                                       ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF)> {
  constexpr static std::size_t size = 0xdf0;
  constexpr static std::size_t addrs = 0x2592824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlF", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlG
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2593614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlG", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlH
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::X509::X509Crl* (*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2593a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlH", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.CheckCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime,
                         ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Pkix::CertStatus*,
                         ::Org::BouncyCastle::Pkix::ReasonsMask*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl)> {
  constexpr static std::size_t size = 0xba8;
  constexpr static std::size_t addrs = 0x2593ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "CheckCrl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::ReasonsMask*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.CheckCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime, ::Org::BouncyCastle::X509::X509Certificate*,
                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x2595140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "CheckCrls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareCertB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>,
                                                               ::Org::BouncyCastle::Pkix::PkixPolicyNode*, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB)> {
  constexpr static std::size_t size = 0x1e34;
  constexpr static std::size_t addrs = 0x2578344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareCertB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlA1ii
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*, ::Array<::Org::BouncyCastle::Utilities::Collections::ISet*>*> (*)(
        ::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::X509::X509Crl*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x2595bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlA1ii", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlA1i
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*,
                                                                       ::Org::BouncyCastle::X509::X509Crl*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2596084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlA1i", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixPolicyNode*, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2577e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertF", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*, int32_t, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                         ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x2574ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertI1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x257aa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertI1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertI2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x257ae94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertI2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertG
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x257a178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertG", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertJ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x257b2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertJ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x257b520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertK", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x257b7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertM
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x257b990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertM", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x257bc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertN", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Utilities::Collections::ISet*,
                                                                                           ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x257bdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertO", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x257a658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertH1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x257a7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertH2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x257a918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertH3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x257c620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x257c698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x257cae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertF", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertG
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::Utilities::Collections::ISet*,
                                                               int32_t, ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>, ::Org::BouncyCastle::Pkix::PkixPolicyNode*,
                                                               ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG)> {
  constexpr static std::size_t size = 0x158c;
  constexpr static std::size_t addrs = 0x257cf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertG", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2594a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::DateTime, ::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::Pkix::CertStatus*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2594ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlI", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlJ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::DateTime, ::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::Pkix::CertStatus*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25950a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlJ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixPolicyNode*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2577ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertE", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::*)()>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2596784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "CrlUtilities",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>(
      std::forward<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(value));
}
inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_CrlUtilities() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "CrlUtilities",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_ANY_POLICY(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ANY_POLICY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_ANY_POLICY() {
  return ::cordl_internals::getStaticField<::StringW, "ANY_POLICY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_KEY_CERT_SIGN(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KEY_CERT_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_KEY_CERT_SIGN() {
  return ::cordl_internals::getStaticField<int32_t, "KEY_CERT_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_CRL_SIGN(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "CRL_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_CRL_SIGN() {
  return ::cordl_internals::getStaticField<int32_t, "CRL_SIGN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_CrlReasons(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "CrlReasons",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_CrlReasons() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "CrlReasons",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlB2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, cert, crl);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                             ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertBC", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, nameConstraintValidator);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode*
Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies,
                                                                ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes, int32_t inhibitAnyPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertD", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*, false>(nullptr, ___internal_method, certPath, index, acceptablePolicies, validPolicyTree, policyNodes,
                                                                                                inhibitAnyPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlB1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, cert, crl);
}
inline ::Org::BouncyCastle::Pkix::ReasonsMask* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD(::Org::BouncyCastle::X509::X509Crl* crl,
                                                                                                              ::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlD", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::ReasonsMask*, false>(nullptr, ___internal_method, crl, dp);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF(::Org::BouncyCastle::X509::X509Crl* crl, ::System::Object* cert,
                                                                                                                         ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert,
                                                                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey,
                                                                                                                         ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                                                         ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlF", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(nullptr, ___internal_method, crl, cert, defaultCRLSignCert, defaultCRLSignKey, paramsPKIX,
                                                                                                        certPathCerts);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG(::Org::BouncyCastle::X509::X509Crl* crl,
                                                                                                                           ::Org::BouncyCastle::Utilities::Collections::ISet* keys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlG", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(nullptr, ___internal_method, crl, keys);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH(::Org::BouncyCastle::Utilities::Collections::ISet* deltaCrls,
                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlH", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(nullptr, ___internal_method, deltaCrls, key);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                        ::Org::BouncyCastle::X509::X509Certificate* cert, ::System::DateTime validDate,
                                                                        ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert,
                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey, ::Org::BouncyCastle::Pkix::CertStatus* certStatus,
                                                                        ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "CheckCrl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::ReasonsMask*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dp, paramsPKIX, cert, validDate, defaultCRLSignCert, defaultCRLSignKey, certStatus, reasonMask, certPathCerts);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls(::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                         ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate* sign,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "CheckCrls", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, paramsPKIX, cert, validDate, sign, workingPublicKey, certPathCerts);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode*
Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                                ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t policyMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareCertB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*, false>(nullptr, ___internal_method, certPath, index, policyNodes, validPolicyTree, policyMapping);
}
inline ::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*, ::Array<::Org::BouncyCastle::Utilities::Collections::ISet*>*>
Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                  ::Org::BouncyCastle::X509::X509Certificate* cert, ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlA1ii", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*, ::Array<::Org::BouncyCastle::Utilities::Collections::ISet*>*>, false>(
      nullptr, ___internal_method, currentDate, paramsPKIX, cert, crl);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i(::System::DateTime currentDate,
                                                                                                                           ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                                                           ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                           ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlA1i", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(nullptr, ___internal_method, currentDate, paramsPKIX, cert, crl);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                            ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertF", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, validPolicyTree, explicitPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, int32_t index,
                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey,
                                                                            ::Org::BouncyCastle::Asn1::X509::X509Name* workingIssuerName, ::Org::BouncyCastle::X509::X509Certificate* sign) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, paramsPKIX, index, workingPublicKey, workingIssuerName, sign);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertI1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertI2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, policyMapping);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertG", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, nameConstraintValidator);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertJ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, inhibitAnyPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertK", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, maxPathLength);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertM", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, maxPathLength);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertN", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions, ::System::Collections::IList* pathCheckers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertO", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, criticalExtensions, pathCheckers);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertH1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertH2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, policyMapping);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "PrepareNextCertH3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, inhibitAnyPolicy);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA(int32_t explicitPolicy, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertA", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, explicitPolicy, cert);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertB", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::System::Collections::IList* pathCheckers,
                                                                           ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertF", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certPath, index, pathCheckers, criticalExtensions);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode*
Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                               ::Org::BouncyCastle::Utilities::Collections::ISet* userInitialPolicySet, int32_t index,
                                                               ::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*> policyNodes,
                                                               ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "WrapupCertG", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IList*, ::Array<::System::Collections::IList*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*, false>(nullptr, ___internal_method, certPath, paramsPKIX, userInitialPolicySet, index, policyNodes,
                                                                                                validPolicyTree, acceptablePolicies);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC(::Org::BouncyCastle::X509::X509Crl* deltaCRL, ::Org::BouncyCastle::X509::X509Crl* completeCRL,
                                                                           ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlC", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deltaCRL, completeCRL, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* deltacrl, ::System::Object* cert,
                                                                           ::Org::BouncyCastle::Pkix::CertStatus* certStatus, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlI", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validDate, deltacrl, cert, certStatus, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* completecrl, ::System::Object* cert,
                                                                           ::Org::BouncyCastle::Pkix::CertStatus* certStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCrlJ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::CertStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validDate, completecrl, cert, certStatus);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                                                  ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(), "ProcessCertE", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*, false>(nullptr, ___internal_method, certPath, index, validPolicyTree);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::Rfc3280CertPathUtilities() {}
