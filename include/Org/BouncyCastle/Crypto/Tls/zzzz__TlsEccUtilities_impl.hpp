#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsEccUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEccUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.AddSupportedEllipticCurvesExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::AddSupportedEllipticCurvesExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3480a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                { "AddSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.AddSupportedPointFormatsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::AddSupportedPointFormatsExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3480c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                { "AddSupportedPointFormatsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GetSupportedEllipticCurvesExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetSupportedEllipticCurvesExtension)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3480dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "GetSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GetSupportedPointFormatsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetSupportedPointFormatsExtension)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3480fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "GetSupportedPointFormatsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.CreateSupportedEllipticCurvesExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CreateSupportedEllipticCurvesExtension)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3480b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "CreateSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.CreateSupportedPointFormatsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CreateSupportedPointFormatsExtension)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3480d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "CreateSupportedPointFormatsExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ReadSupportedEllipticCurvesExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadSupportedEllipticCurvesExtension)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3480e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "ReadSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ReadSupportedPointFormatsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadSupportedPointFormatsExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3481058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "ReadSupportedPointFormatsExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GetNameOfNamedCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetNameOfNamedCurve)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3481138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "GetNameOfNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GetParametersForNamedCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetParametersForNamedCurve)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3481264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "GetParametersForNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.HasAnySupportedNamedCurves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::HasAnySupportedNamedCurves)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3481398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "HasAnySupportedNamedCurves", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ContainsEccCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ContainsEccCipherSuites)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3481408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "ContainsEccCipherSuites", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.IsEccCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsEccCipherSuite)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34814bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "IsEccCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.AreOnSameCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::AreOnSameCurve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3481574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                            { "AreOnSameCurve",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.IsSupportedNamedCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsSupportedNamedCurve)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x34811e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "IsSupportedNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.IsCompressionPreferred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsCompressionPreferred)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3481588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "IsCompressionPreferred", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.SerializeECFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECFieldElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x34815cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                             { "SerializeECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.SerializeECPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPoint)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x34815e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                             { "SerializeECPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.SerializeECPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPublicKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3481724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                         { "SerializeECPublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.DeserializeECFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECFieldElement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3481798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "DeserializeECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.DeserializeECPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECCurve*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPoint)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3481868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                            { "DeserializeECPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.DeserializeECPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::ArrayW<uint8_t>)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPublicKey)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3481990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                            { "DeserializeECPublicKey",
                              {},
                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.CalculateECDHBasicAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CalculateECDHBasicAgreement)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3481b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "CalculateECDHBasicAgreement",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GenerateECKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateECKeyPair)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3481bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
            { "GenerateECKeyPair", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GenerateEphemeralClientKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*,
                                                                         ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralClientKeyExchange)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3481c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                             { "GenerateEphemeralClientKeyExchange",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.GenerateEphemeralServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<int32_t>, ::ArrayW<uint8_t>, ::System::IO::Stream*)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralServerKeyExchange)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3481e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "GenerateEphemeralServerKeyExchange",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ValidateECPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ValidateECPublicKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x348266c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                             { "ValidateECPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ReadECExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECExponent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3482670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "ReadECExponent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ReadECFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECFieldElement)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x34827e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "ReadECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ReadECParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECParameter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3482748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "ReadECParameter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.ReadECParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECParameters)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x348288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                { "ReadECParameters", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.CheckNamedCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CheckNamedCurve)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3482f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "CheckNamedCurve", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteECExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECExponent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3482fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "WriteECExponent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteECFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::ECFieldElement*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECFieldElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x34830e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                { "WriteECFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteECFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECFieldElement)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3483178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                            { "WriteECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteECParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECParameter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3483060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                             { "WriteECParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteExplicitECParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteExplicitECParameters)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x348206c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                            { "WriteExplicitECParameters",
                              {},
                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteECPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECPoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3481d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                            { "WriteECPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities.WriteNamedECParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteNamedECParameters)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x348258c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                           { "WriteNamedECParameters", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3483714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::setStaticF_CurveNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "CurveNames", ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::getStaticF_CurveNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "CurveNames", ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::AddSupportedEllipticCurvesExtension(::System::Collections::IDictionary* extensions, ::ArrayW<int32_t> namedCurves) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                              { "AddSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, namedCurves);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::AddSupportedPointFormatsExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> ecPointFormats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                              { "AddSupportedPointFormatsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, ecPointFormats);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetSupportedEllipticCurvesExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "GetSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetSupportedPointFormatsExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "GetSupportedPointFormatsExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CreateSupportedEllipticCurvesExtension(::ArrayW<int32_t> namedCurves) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "CreateSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, namedCurves);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CreateSupportedPointFormatsExtension(::ArrayW<uint8_t> ecPointFormats) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "CreateSupportedPointFormatsExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ecPointFormats);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadSupportedEllipticCurvesExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "ReadSupportedEllipticCurvesExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, extensionData);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadSupportedPointFormatsExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "ReadSupportedPointFormatsExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensionData);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetNameOfNamedCurve(int32_t namedCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "GetNameOfNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, namedCurve);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GetParametersForNamedCurve(int32_t namedCurve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "GetParametersForNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(nullptr, ___internal_method, namedCurve);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::HasAnySupportedNamedCurves() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "HasAnySupportedNamedCurves", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ContainsEccCipherSuites(::ArrayW<int32_t> cipherSuites) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "ContainsEccCipherSuites", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuites);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsEccCipherSuite(int32_t cipherSuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "IsEccCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuite);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::AreOnSameCurve(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* a,
                                                                            ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                          { "AreOnSameCurve",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsSupportedNamedCurve(int32_t namedCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "IsSupportedNamedCurve", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, namedCurve);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::IsCompressionPreferred(::ArrayW<uint8_t> ecPointFormats, uint8_t compressionFormat) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "IsCompressionPreferred", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ecPointFormats, compressionFormat);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECFieldElement(int32_t fieldSize, ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                           { "SerializeECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, fieldSize, x);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPoint(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                           { "SerializeECPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ecPointFormats, point);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::SerializeECPublicKey(::ArrayW<uint8_t> ecPointFormats,
                                                                                               ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* keyParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                       { "SerializeECPublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ecPointFormats, keyParameters);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECFieldElement(int32_t fieldSize, ::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "DeserializeECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, fieldSize, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPoint(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                   ::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                          { "DeserializeECPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, ecPointFormats, curve, encoding);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::DeserializeECPublicKey(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params,
                                                                        ::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                          { "DeserializeECPublicKey",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(nullptr, ___internal_method, ecPointFormats, curve_params, encoding);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CalculateECDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* publicKey,
                                                                                                      ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "CalculateECDHBasicAgreement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, publicKey, privateKey);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateECKeyPair(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
          { "GenerateECKeyPair", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, random, ecParams);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t> ecPointFormats,
                                                                                    ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                           { "GenerateEphemeralClientKeyExchange",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(nullptr, ___internal_method, random, ecPointFormats, ecParams, output);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<int32_t> namedCurves,
                                                                                    ::ArrayW<uint8_t> ecPointFormats, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "GenerateEphemeralServerKeyExchange",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(nullptr, ___internal_method, random, namedCurves, ecPointFormats, output);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ValidateECPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                           { "ValidateECPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(nullptr, ___internal_method, key);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECExponent(int32_t fieldSize, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "ReadECExponent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fieldSize, input);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECFieldElement(int32_t fieldSize, ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "ReadECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, fieldSize, input);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECParameter(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { "ReadECParameter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::ReadECParameters(::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> ecPointFormats,
                                                                                                                                      ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                              { "ReadECParameters", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(nullptr, ___internal_method, namedCurves, ecPointFormats, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::CheckNamedCurve(::ArrayW<int32_t> namedCurves, int32_t namedCurve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "CheckNamedCurve", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, namedCurves, namedCurve);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECExponent(int32_t k, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "WriteECExponent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECFieldElement(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                              { "WriteECFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECFieldElement(int32_t fieldSize, ::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                          { "WriteECFieldElement", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fieldSize, x, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                           { "WriteECParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteExplicitECParameters(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParameters,
                                                                                       ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                          { "WriteExplicitECParameters",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ecPointFormats, ecParameters, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteECPoint(::ArrayW<uint8_t> ecPointFormats, ::Org::BouncyCastle::Math::EC::ECPoint* point, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                          { "WriteECPoint", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ecPointFormats, point, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::WriteNamedECParameters(int32_t namedCurve, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(),
                                                                                         { "WriteNamedECParameters", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, namedCurve, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities* Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEccUtilities::TlsEccUtilities() {}
