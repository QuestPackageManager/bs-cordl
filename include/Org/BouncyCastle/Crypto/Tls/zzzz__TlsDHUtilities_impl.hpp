#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsDHUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x347f2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.FromSafeP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromSafeP)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x347f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "FromSafeP", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.AddNegotiatedDheGroupsClientExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x347f42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                { "AddNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.AddNegotiatedDheGroupsServerExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x347f610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                             { "AddNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GetNegotiatedDheGroupsClientExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x347f7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                             { "GetNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GetNegotiatedDheGroupsServerExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x347f930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                             { "GetNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.CreateNegotiatedDheGroupsClientExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x347f568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                           { "CreateNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.CreateNegotiatedDheGroupsServerExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x347f74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "CreateNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadNegotiatedDheGroupsClientExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x347f884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                           { "ReadNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadNegotiatedDheGroupsServerExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x347fa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                           { "ReadNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GetParametersForDHEGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(int16_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetParametersForDHEGroup)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x347fa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "GetParametersForDHEGroup", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ContainsDheCipherSuites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ContainsDheCipherSuites)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x347fb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "ContainsDheCipherSuites", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.IsDheCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::IsDheCipherSuite)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x347fc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "IsDheCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.AreCompatibleParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AreCompatibleParameters)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x347fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                         { "AreCompatibleParameters",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.CalculateDHBasicAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CalculateDHBasicAgreement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x347e70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                           { "CalculateDHBasicAgreement",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GenerateDHKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(
        &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateDHKeyPair)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x347fe14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                         { "GenerateDHKeyPair", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GenerateEphemeralClientKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*,
                                                                                     ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralClientKeyExchange)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x347e3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                             { "GenerateEphemeralClientKeyExchange",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GenerateEphemeralServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*,
                                                                                     ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralServerKeyExchange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x347dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                             { "GenerateEphemeralServerKeyExchange",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadDHParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x347e034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "ReadDHParameter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadDHParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x347ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "ReadDHParameters", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReceiveDHParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReceiveDHParameters)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x347df0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                { "ReceiveDHParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.WriteDHParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x347fedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                             { "WriteDHParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.WriteDHParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x347ff64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                { "WriteDHParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3480204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_Two() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe2432_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draft_ffdhe2432_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe2432_p() {
  return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe2432_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe2432(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe2432", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe2432() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe2432", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe3072_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draft_ffdhe3072_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe3072_p() {
  return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe3072_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe3072", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe3072() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe3072", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe4096_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draft_ffdhe4096_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe4096_p() {
  return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe4096_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe4096", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe4096() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe4096", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe6144_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draft_ffdhe6144_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe6144_p() {
  return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe6144_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe6144", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe6144() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe6144", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe8192_p(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draft_ffdhe8192_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe8192_p() {
  return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe8192_p", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::setStaticF_draft_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe8192", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(
      std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(value));
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::getStaticF_draft_ffdhe8192() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "draft_ffdhe8192", ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>();
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromHex(::StringW hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, hex);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromSafeP(::StringW hexP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "FromSafeP", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, hexP);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> dheGroups) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                              { "AddNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, dheGroups);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* extensions, uint8_t dheGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                           { "AddNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, extensions, dheGroup);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                         { "GetNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensions);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                         { "GetNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, extensions);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t> dheGroups) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                         { "CreateNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dheGroups);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsServerExtension(uint8_t dheGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "CreateNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dheGroup);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                         { "ReadNegotiatedDheGroupsClientExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, extensionData);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsServerExtension(::ArrayW<uint8_t> extensionData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                         { "ReadNegotiatedDheGroupsServerExtension", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, extensionData);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetParametersForDHEGroup(int16_t dheGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "GetParametersForDHEGroup", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, dheGroup);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ContainsDheCipherSuites(::ArrayW<int32_t> cipherSuites) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "ContainsDheCipherSuites", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuites);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::IsDheCipherSuite(int32_t cipherSuite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "IsDheCipherSuite", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cipherSuite);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AreCompatibleParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* a,
                                                                                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
          { "AreCompatibleParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CalculateDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* publicKey,
                                                                                                   ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                                                         { "CalculateDHBasicAgreement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, publicKey, privateKey);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateDHKeyPair(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                                               ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                          { "GenerateDHKeyPair", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(nullptr, ___internal_method, random, dhParams);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams,
                                                                                   ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                           { "GenerateEphemeralClientKeyExchange",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(),
                                                               ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>(nullptr, ___internal_method, random, dhParams, output);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams,
                                                                                   ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                           { "GenerateEphemeralServerKeyExchange",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(),
                                                               ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*>(nullptr, ___internal_method, random, dhParams, output);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameter(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "ReadDHParameter", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameters(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { "ReadDHParameters", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReceiveDHParameters(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                                                                                  ::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                              { "ReceiveDHParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(nullptr, ___internal_method, dhVerifier, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                                           { "WriteDHParameter", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, ::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(),
                                              { "WriteDHParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dhParameters, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities* Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::TlsDHUtilities() {}
