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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*, ::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2)> {
  constexpr static std::size_t size = 0xdf4;
  constexpr static std::size_t addrs = 0x35e41ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                                                           { "ProcessCrlB2",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertBC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC)> {
  constexpr static std::size_t size = 0xa64;
  constexpr static std::size_t addrs = 0x35c8b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                            { "ProcessCertBC",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x35cb574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "PrepareNextCertA", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Pkix::PkixPolicyNode*,
                                                   ::ArrayW<::System::Collections::IList*>, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD)> {
  constexpr static std::size_t size = 0x1cb4;
  constexpr static std::size_t addrs = 0x35c95dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                            { "ProcessCertD",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlB1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*, ::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x35e4fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                                                           { "ProcessCrlB1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::ReasonsMask* (*)(::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::Asn1::X509::DistributionPoint*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x35e5330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                         { "ProcessCrlD", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::X509::X509Certificate*,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Pkix::PkixParameters*,
                                                                       ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF)> {
  constexpr static std::size_t size = 0xde8;
  constexpr static std::size_t addrs = 0x35e562c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "ProcessCrlF",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x35e6414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                         { "ProcessCrlG", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlH
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::X509::X509Crl* (*)(::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
        &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x35e6878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                            { "ProcessCrlH", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.CheckCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime,
                         ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Pkix::CertStatus*,
                         ::Org::BouncyCastle::Pkix::ReasonsMask*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x35e6cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                            { "CheckCrl",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.CheckCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime,
                                                                ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x35e7fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "CheckCrls",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareCertB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::ArrayW<::System::Collections::IList*>,
                                                                                                      ::Org::BouncyCastle::Pkix::PkixPolicyNode*, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB)> {
  constexpr static std::size_t size = 0x1d40;
  constexpr static std::size_t addrs = 0x35cba60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareCertB",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlA1ii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*> (*)(
    ::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x35e8990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "ProcessCrlA1ii",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlA1i
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (*)(::System::DateTime, ::Org::BouncyCastle::Pkix::PkixParameters*,
                                                                                                              ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x35e8e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "ProcessCrlA1i",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixPolicyNode*, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35cb500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                                                           { "ProcessCertF",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*, int32_t, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                         ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x35c8510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "ProcessCertA",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertI1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x35ce0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertI1", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertI2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x35ce504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertI2", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x35cd7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                            { "PrepareNextCertG",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertJ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x35ce93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertJ", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x35cebbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "PrepareNextCertK", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x35cee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertL", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x35cf050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertM", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x35cf2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "PrepareNextCertN", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertO
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Utilities::Collections::ISet*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x35cf4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "PrepareNextCertO",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35cdca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertH1", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35cde08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertH2", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.PrepareNextCertH3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35cdf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "PrepareNextCertH3", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35cfd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "WrapupCertA", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, int32_t)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x35cfda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                { "WrapupCertB", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x35d020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "WrapupCertF",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.WrapupCertG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::Org::BouncyCastle::Utilities::Collections::ISet*,
                                                               int32_t, ::ArrayW<::System::Collections::IList*>, ::Org::BouncyCastle::Pkix::PkixPolicyNode*,
                                                               ::Org::BouncyCastle::Utilities::Collections::ISet*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG)> {
  constexpr static std::size_t size = 0x1464;
  constexpr static std::size_t addrs = 0x35d0684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                         { "WrapupCertG",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::X509::X509Crl*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x35e78d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "ProcessCrlC",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::Pkix::CertStatus*,
                                                                ::Org::BouncyCastle::Pkix::PkixParameters*)>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x35e7e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                             { "ProcessCrlI",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCrlJ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::Org::BouncyCastle::Pkix::CertStatus*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35e7f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                                                           { "ProcessCrlJ",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities.ProcessCertE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixPolicyNode* (*)(::Org::BouncyCastle::Pkix::PkixCertPath*, int32_t, ::Org::BouncyCastle::Pkix::PkixPolicyNode*)>(
    &::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x35cb290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
            { "ProcessCertE", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::*)()>(&::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35e95c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "CrlUtilities", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(
      std::forward<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(value));
}
inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_CrlUtilities() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "CrlUtilities", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_ANY_POLICY(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ANY_POLICY", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_ANY_POLICY() {
  return ::cordl_internals::getStaticField<::StringW, "ANY_POLICY", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_KEY_CERT_SIGN(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KEY_CERT_SIGN", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_KEY_CERT_SIGN() {
  return ::cordl_internals::getStaticField<int32_t, "KEY_CERT_SIGN", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_CRL_SIGN(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "CRL_SIGN", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_CRL_SIGN() {
  return ::cordl_internals::getStaticField<int32_t, "CRL_SIGN", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::setStaticF_CrlReasons(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "CrlReasons", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::getStaticF_CrlReasons() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "CrlReasons", ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>();
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                          { "ProcessCrlB2",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dp, cert, crl);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                             ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                          { "ProcessCertBC",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index, nameConstraintValidator);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "PrepareNextCertA", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                                                  ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies,
                                                                                                                  ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree,
                                                                                                                  ::ArrayW<::System::Collections::IList*> policyNodes, int32_t inhibitAnyPolicy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                       { "ProcessCertD",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(nullptr, ___internal_method, certPath, index, acceptablePolicies, validPolicyTree, policyNodes,
                                                                                         inhibitAnyPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::System::Object* cert, ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                          { "ProcessCrlB1",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dp, cert, crl);
}
inline ::Org::BouncyCastle::Pkix::ReasonsMask* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD(::Org::BouncyCastle::X509::X509Crl* crl,
                                                                                                              ::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                       { "ProcessCrlD", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::ReasonsMask*>(nullptr, ___internal_method, crl, dp);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF(::Org::BouncyCastle::X509::X509Crl* crl, ::System::Object* cert,
                                                                                                                         ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert,
                                                                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey,
                                                                                                                         ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                                                         ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "ProcessCrlF",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, crl, cert, defaultCRLSignCert, defaultCRLSignKey, paramsPKIX,
                                                                                                 certPathCerts);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG(::Org::BouncyCastle::X509::X509Crl* crl,
                                                                                                                           ::Org::BouncyCastle::Utilities::Collections::ISet* keys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "ProcessCrlG", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(nullptr, ___internal_method, crl, keys);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH(::Org::BouncyCastle::Utilities::Collections::ISet* deltaCrls,
                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                          { "ProcessCrlH", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*>(nullptr, ___internal_method, deltaCrls, key);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                        ::Org::BouncyCastle::X509::X509Certificate* cert, ::System::DateTime validDate,
                                                                        ::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert,
                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey, ::Org::BouncyCastle::Pkix::CertStatus* certStatus,
                                                                        ::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                          { "CheckCrl",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                              ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Pkix::ReasonsMask*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dp, paramsPKIX, cert, validDate, defaultCRLSignCert, defaultCRLSignKey, certStatus, reasonMask, certPathCerts);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls(::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                         ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate* sign,
                                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, ::System::Collections::IList* certPathCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "CheckCrls",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                               ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, paramsPKIX, cert, validDate, sign, workingPublicKey, certPathCerts);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                                                  ::ArrayW<::System::Collections::IList*> policyNodes,
                                                                                                                  ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t policyMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareCertB",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(nullptr, ___internal_method, certPath, index, policyNodes, validPolicyTree, policyMapping);
}
inline ::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*> Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii(::System::DateTime currentDate,
                                                                                                                                      ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                                                                      ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                                      ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "ProcessCrlA1ii",
                                                             {},
                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet*>>(nullptr, ___internal_method, currentDate, paramsPKIX, cert, crl);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i(::System::DateTime currentDate,
                                                                                                                           ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX,
                                                                                                                           ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                                                                           ::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "ProcessCrlA1i",
                                                             {},
                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(nullptr, ___internal_method, currentDate, paramsPKIX, cert, crl);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                            ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                                                         { "ProcessCertF",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index, validPolicyTree, explicitPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, int32_t index,
                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey,
                                                                            ::Org::BouncyCastle::Asn1::X509::X509Name* workingIssuerName, ::Org::BouncyCastle::X509::X509Certificate* sign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "ProcessCertA",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Name*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, paramsPKIX, index, workingPublicKey, workingIssuerName, sign);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertI1", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertI2", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, policyMapping);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                          { "PrepareNextCertG",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index, nameConstraintValidator);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertJ", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, inhibitAnyPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "PrepareNextCertK", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertL", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, maxPathLength);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertM", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, maxPathLength);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "PrepareNextCertN", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions, ::System::Collections::IList* pathCheckers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "PrepareNextCertO",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index, criticalExtensions, pathCheckers);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertH1", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertH2", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, policyMapping);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "PrepareNextCertH3", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, inhibitAnyPolicy);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA(int32_t explicitPolicy, ::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "WrapupCertA", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, explicitPolicy, cert);
}
inline int32_t Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                              { "WrapupCertB", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, certPath, index, explicitPolicy);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, ::System::Collections::IList* pathCheckers,
                                                                           ::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "WrapupCertF",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, certPath, index, pathCheckers, criticalExtensions);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG(
    ::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, ::Org::BouncyCastle::Utilities::Collections::ISet* userInitialPolicySet, int32_t index,
    ::ArrayW<::System::Collections::IList*> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, ::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                       { "WrapupCertG",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Collections::IList*>>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(nullptr, ___internal_method, certPath, paramsPKIX, userInitialPolicySet, index, policyNodes, validPolicyTree,
                                                                                         acceptablePolicies);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC(::Org::BouncyCastle::X509::X509Crl* deltaCRL, ::Org::BouncyCastle::X509::X509Crl* completeCRL,
                                                                           ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "ProcessCrlC",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deltaCRL, completeCRL, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* deltacrl, ::System::Object* cert,
                                                                           ::Org::BouncyCastle::Pkix::CertStatus* certStatus, ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                           { "ProcessCrlI",
                                                             {},
                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, validDate, deltacrl, cert, certStatus, pkixParams);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl* completecrl, ::System::Object* cert,
                                                                           ::Org::BouncyCastle::Pkix::CertStatus* certStatus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
                                                                                         { "ProcessCrlJ",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Crl*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::CertStatus*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, validDate, completecrl, cert, certStatus);
}
inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index,
                                                                                                                  ::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(),
          { "ProcessCertE", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(nullptr, ___internal_method, certPath, index, validPolicyTree);
}
inline void Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities* Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::Rfc3280CertPathUtilities() {}
