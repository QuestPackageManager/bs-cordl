#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathValidatorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlDistPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DistributionPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509AttrCertStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindTrustAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::TrustAnchor* (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindTrustAnchor)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x35c7bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                            { "FindTrustAnchor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.IsIssuerTrustAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsIssuerTrustAnchor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35bcdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                            { "IsIssuerTrustAnchor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.AddAdditionalStoresFromAltNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromAltNames)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x35bcfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                         { "AddAdditionalStoresFromAltNames", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetValidDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::Org::BouncyCastle::Pkix::PkixParameters*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidDate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x35d1f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "GetValidDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetIssuerPrincipal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIssuerPrincipal)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x35d1b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(), { "GetIssuerPrincipal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.IsSelfIssued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsSelfIssued)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x35bd69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "IsSelfIssued", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x35c8428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "GetAlgorithmIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.IsAnyPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsAnyPolicy)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35d1fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "IsAnyPolicy", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.AddAdditionalStoreFromLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoreFromLocation)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x35d1cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "AddAdditionalStoreFromLocation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::System::Object*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetSerialNumber)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35d2110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(), { "GetSerialNumber", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetQualifierSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetQualifierSet)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x35d21ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "GetQualifierSet", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.RemovePolicyNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::ArrayW<::System::Collections::IList*>, ::Org::BouncyCastle::Pkix::PkixPolicyNode*)>(
        &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x35d264c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "RemovePolicyNode",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.RemovePolicyNodeRecurse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Collections::IList*>, ::Org::BouncyCastle::Pkix::PkixPolicyNode*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNodeRecurse)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x35d2798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                            { "RemovePolicyNodeRecurse", {}, { ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.PrepareNextCertB1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::System::Collections::IList*>, ::StringW, ::System::Collections::IDictionary*,
                                                                ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB1)> {
  constexpr static std::size_t size = 0xb4c;
  constexpr static std::size_t addrs = 0x35d2ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "PrepareNextCertB1",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.PrepareNextCertB2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(int32_t, ::ArrayW<::System::Collections::IList*>, ::StringW, ::Org::BouncyCastle::Pkix::PkixPolicyNode*)>(
        &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB2)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x35d37cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "PrepareNextCertB2",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetCertStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::Pkix::CertStatus*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCertStatus)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x35d3ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "GetCertStatus",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetNextWorkingKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::System::Collections::IList*, int32_t)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetNextWorkingKey)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x35cf938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "GetNextWorkingKey", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetValidCertDateFromValidityModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidCertDateFromValidityModel)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x35bdad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                         { "GetValidCertDateFromValidityModel",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x35bb9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                         { "FindCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetCrlIssuersFromDistributionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Collections::ICollection*,
                                                                ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCrlIssuersFromDistributionPoint)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x35d432c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                { "GetCrlIssuersFromDistributionPoint",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::System::Collections::ICollection*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetCompleteCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*,
                                                                                                              ::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCompleteCrls)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x35d4810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "GetCompleteCrls",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetDeltaCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Crl*)>(
        &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetDeltaCrls)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x35d4dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
            { "GetDeltaCrls", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.isDeltaCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::X509::X509Crl*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::isDeltaCrl)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35d5658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                           { "isDeltaCrl", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x35bb1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                            { "FindCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.AddAdditionalStoresFromCrlDistributionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::CrlDistPoint*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromCrlDistributionPoint)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x35d5758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                             { "AddAdditionalStoresFromCrlDistributionPoint",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CrlDistPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.ProcessCertD1i
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::ArrayW<::System::Collections::IList*>, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*,
                                                                ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1i)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x35d597c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                { "ProcessCertD1i",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.ProcessCertD1ii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::System::Collections::IList*>, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*,
                                                                ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1ii)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x35d5d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                { "ProcessCertD1ii",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.FindIssuerCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Pkix::PkixBuilderParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindIssuerCerts)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x35bd328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                            { "FindIssuerCerts", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities.GetExtensionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::Org::BouncyCastle::X509::IX509Extension*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetExtensionValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35d36f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                            { "GetExtensionValue", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509Extension*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35d646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::setStaticF_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "CrlUtilities", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(
      std::forward<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(value));
}
inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::getStaticF_CrlUtilities() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "CrlUtilities", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>();
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::setStaticF_ANY_POLICY(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ANY_POLICY", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::getStaticF_ANY_POLICY() {
  return ::cordl_internals::getStaticField<::StringW, "ANY_POLICY", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>();
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::setStaticF_CRL_NUMBER(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CRL_NUMBER", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::getStaticF_CRL_NUMBER() {
  return ::cordl_internals::getStaticField<::StringW, "CRL_NUMBER", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>();
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::setStaticF_KEY_CERT_SIGN(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KEY_CERT_SIGN", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::getStaticF_KEY_CERT_SIGN() {
  return ::cordl_internals::getStaticField<int32_t, "KEY_CERT_SIGN", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>();
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::setStaticF_CRL_SIGN(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "CRL_SIGN", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::getStaticF_CRL_SIGN() {
  return ::cordl_internals::getStaticField<int32_t, "CRL_SIGN", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>();
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::setStaticF_crlReasons(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "crlReasons", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::getStaticF_crlReasons() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "crlReasons", ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>();
}
inline ::Org::BouncyCastle::Pkix::TrustAnchor* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindTrustAnchor(::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                        ::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "FindTrustAnchor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::TrustAnchor*>(nullptr, ___internal_method, cert, trustAnchors);
}
inline bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsIssuerTrustAnchor(::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                         ::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "IsIssuerTrustAnchor", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cert, trustAnchors);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromAltNames(::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                     ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "AddAdditionalStoresFromAltNames", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cert, pkixParams);
}
inline ::System::DateTime Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidDate(::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "GetValidDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, paramsPKIX);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIssuerPrincipal(::System::Object* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(), { "GetIssuerPrincipal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(nullptr, ___internal_method, cert);
}
inline bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsSelfIssued(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "IsSelfIssued", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetAlgorithmIdentifier(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                           { "GetAlgorithmIdentifier", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(nullptr, ___internal_method, key);
}
inline bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsAnyPolicy(::Org::BouncyCastle::Utilities::Collections::ISet* policySet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "IsAnyPolicy", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, policySet);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoreFromLocation(::StringW location, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                           { "AddAdditionalStoreFromLocation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, pkixParams);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetSerialNumber(::System::Object* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(), { "GetSerialNumber", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetQualifierSet(::Org::BouncyCastle::Asn1::Asn1Sequence* qualifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "GetQualifierSet", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, qualifiers);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNode(::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                                                                            ::ArrayW<::System::Collections::IList*> policyNodes,
                                                                                                                            ::Org::BouncyCastle::Pkix::PkixPolicyNode* _node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                           { "RemovePolicyNode",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(nullptr, ___internal_method, validPolicyTree, policyNodes, _node);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNodeRecurse(::ArrayW<::System::Collections::IList*> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode* _node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "RemovePolicyNodeRecurse", {}, { ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, policyNodes, _node);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB1(int32_t i, ::ArrayW<::System::Collections::IList*> policyNodes, ::StringW id_p,
                                                                                       ::System::Collections::IDictionary* m_idp, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                           { "PrepareNextCertB1",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, policyNodes, id_p, m_idp, cert);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB2(int32_t i, ::ArrayW<::System::Collections::IList*> policyNodes,
                                                                                                                             ::StringW id_p,
                                                                                                                             ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "PrepareNextCertB2",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(nullptr, ___internal_method, i, policyNodes, id_p, validPolicyTree);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCertStatus(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* crl, ::System::Object* cert,
                                                                                   ::Org::BouncyCastle::Pkix::CertStatus* certStatus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "GetCertStatus",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, validDate, crl, cert, certStatus);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetNextWorkingKey(::System::Collections::IList* certs, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "GetNextWorkingKey", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(nullptr, ___internal_method, certs, index);
}
inline ::System::DateTime Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidCertDateFromValidityModel(::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix,
                                                                                                                     ::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                       { "GetValidCertDateFromValidityModel",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, paramsPkix, certPath, index);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* certSelect,
                                                                                                                     ::System::Collections::IList* certStores) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                       { "FindCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, certSelect, certStores);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCrlIssuersFromDistributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp,
                                                                                                        ::System::Collections::ICollection* issuerPrincipals,
                                                                                                        ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* selector,
                                                                                                        ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                              { "GetCrlIssuersFromDistributionPoint",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::System::Collections::ICollection*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dp, issuerPrincipals, selector, pkixParams);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCompleteCrls(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp,
                                                                                                                                   ::System::Object* cert, ::System::DateTime currentDate,
                                                                                                                                   ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "GetCompleteCrls",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, dp, cert, currentDate, paramsPKIX);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetDeltaCrls(::System::DateTime currentDate,
                                                                                                                                ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                                                                ::Org::BouncyCastle::X509::X509Crl* completeCRL) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
          { "GetDeltaCrls", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, currentDate, paramsPKIX, completeCRL);
}
inline bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::isDeltaCrl(::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                                                                         { "isDeltaCrl", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, crl);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* certSelect,
                                                                                                                     ::System::Collections::IList* certStores) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "FindCertificates", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, certSelect, certStores);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromCrlDistributionPoint(::Org::BouncyCastle::Asn1::X509::CrlDistPoint* crldp,
                                                                                                                 ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
          { "AddAdditionalStoresFromCrlDistributionPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CrlDistPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, crldp, pkixParams);
}
inline bool Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1i(int32_t index, ::ArrayW<::System::Collections::IList*> policyNodes,
                                                                                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* pOid, ::Org::BouncyCastle::Utilities::Collections::ISet* pq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                              { "ProcessCertD1i",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, policyNodes, pOid, pq);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1ii(int32_t index, ::ArrayW<::System::Collections::IList*> policyNodes,
                                                                                     ::Org::BouncyCastle::Asn1::DerObjectIdentifier* _poid, ::Org::BouncyCastle::Utilities::Collections::ISet* _pq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                                              { "ProcessCertD1ii",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, policyNodes, _poid, _pq);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindIssuerCerts(::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                    ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "FindIssuerCerts", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, cert, pkixParams);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetExtensionValue(::Org::BouncyCastle::X509::IX509Extension* ext,
                                                                                                                         ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(),
                          { "GetExtensionValue", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::IX509Extension*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(nullptr, ___internal_method, ext, oid);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities* Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PkixCertPathValidatorUtilities() {}
