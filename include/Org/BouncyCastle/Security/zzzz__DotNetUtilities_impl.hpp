#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Security\DotNetUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__DotNetUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsaPrivateKeyStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaPrivateCrtKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Security::DotNetUtilities::*)()>(&::Org::BouncyCastle::Security::DotNetUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35fa824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToX509Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35fa828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                             { "ToX509Certificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToX509Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35fa8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "ToX509Certificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.FromX509Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509Certificate* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::FromX509Certificate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x35fa928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                             { "FromX509Certificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::System::Security::Cryptography::DSA*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35fa9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetDsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::System::Security::Cryptography::DSAParameters)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x35fa9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "GetDsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::DSAParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* (*)(::System::Security::Cryptography::DSA*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35fac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetDsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* (*)(::System::Security::Cryptography::DSAParameters)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x35fac48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "GetDsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::DSAParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::System::Security::Cryptography::RSA*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35fadd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetRsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::System::Security::Cryptography::RSAParameters)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x35fae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "GetRsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* (*)(::System::Security::Cryptography::RSA*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x35fb044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetRsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* (*)(::System::Security::Cryptography::RSAParameters)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x35fb08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "GetRsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::GetKeyPair)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x35fb154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "GetKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35fb2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::RSA* (*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::System::Security::Cryptography::CspParameters*)>(
        &::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35fb4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                            { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35fb590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                             { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::RSA* (*)(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, ::System::Security::Cryptography::CspParameters*)>(
        &::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35fb6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
            { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x35fb6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::RSA* (*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, ::System::Security::Cryptography::CspParameters*)>(
        &::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35fb7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                            { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSAParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35fb2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                             { "ToRSAParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSAParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x35fb5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                             { "ToRSAParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSAParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x35fb6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "ToRSAParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ConvertRSAParametersField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger*, int32_t)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::ConvertRSAParametersField)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x35fb818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                             { "ConvertRSAParametersField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.CreateRSAProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::System::Security::Cryptography::RSAParameters)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x35fb368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                           { "CreateRSAProvider", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.CreateRSAProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::System::Security::Cryptography::RSAParameters, ::System::Security::Cryptography::CspParameters*)>(
    &::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35fb4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                            { "CreateRSAProvider", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Security::DotNetUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509Struct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                           { "ToX509Certificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(nullptr, ___internal_method, x509Struct);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate(::Org::BouncyCastle::X509::X509Certificate* x509Cert) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "ToX509Certificate", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(nullptr, ___internal_method, x509Cert);
}
inline ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::Security::DotNetUtilities::FromX509Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* x509Cert) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                           { "FromX509Certificate", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate*>(nullptr, ___internal_method, x509Cert);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair(::System::Security::Cryptography::DSA* dsa) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetDsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, dsa);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair(::System::Security::Cryptography::DSAParameters dp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "GetDsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::DSAParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, dp);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey(::System::Security::Cryptography::DSA* dsa) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetDsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::DSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*>(nullptr, ___internal_method, dsa);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey(::System::Security::Cryptography::DSAParameters dp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "GetDsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::DSAParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*>(nullptr, ___internal_method, dp);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair(::System::Security::Cryptography::RSA* rsa) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetRsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, rsa);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair(::System::Security::Cryptography::RSAParameters rp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "GetRsaKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, rp);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey(::System::Security::Cryptography::RSA* rsa) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(), { "GetRsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(nullptr, ___internal_method, rsa);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey(::System::Security::Cryptography::RSAParameters rp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "GetRsaPublicKey", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(nullptr, ___internal_method, rp);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Security::DotNetUtilities::GetKeyPair(::System::Security::Cryptography::AsymmetricAlgorithm* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "GetKeyPair", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, privateKey);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, rsaKey);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey,
                                                                                                  ::System::Security::Cryptography::CspParameters* csp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                          { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, rsaKey, csp);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, privKey);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey,
                                                                                                  ::System::Security::Cryptography::CspParameters* csp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
          { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, privKey, csp);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, privKey);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey,
                                                                                                  ::System::Security::Cryptography::CspParameters* csp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                          { "ToRSA", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, privKey, csp);
}
inline ::System::Security::Cryptography::RSAParameters Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "ToRSAParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(nullptr, ___internal_method, rsaKey);
}
inline ::System::Security::Cryptography::RSAParameters Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                           { "ToRSAParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(nullptr, ___internal_method, privKey);
}
inline ::System::Security::Cryptography::RSAParameters Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "ToRSAParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(nullptr, ___internal_method, privKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Security::DotNetUtilities::ConvertRSAParametersField(::Org::BouncyCastle::Math::BigInteger* n, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                           { "ConvertRSAParametersField", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, n, size);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                                                                                         { "CreateRSAProvider", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, rp);
}
inline ::System::Security::Cryptography::RSA* Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp,
                                                                                                              ::System::Security::Cryptography::CspParameters* csp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Security::DotNetUtilities*>(),
                          { "CreateRSAProvider", {}, { ::i2c::type_of<::System::Security::Cryptography::RSAParameters>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, rp, csp);
}
inline ::Org::BouncyCastle::Security::DotNetUtilities* Org::BouncyCastle::Security::DotNetUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Security::DotNetUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Security::DotNetUtilities::DotNetUtilities() {}
