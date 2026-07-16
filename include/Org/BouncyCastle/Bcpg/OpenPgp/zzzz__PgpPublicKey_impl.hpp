#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.CalculateFingerprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::CalculateFingerprint)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x35868f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "CalculateFingerprint", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.UpdateDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::UpdateDigest)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3586df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                { "UpdateDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Init)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3586ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x35813d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35871f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::TrustPacket*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3587320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(),
                                                                 ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::TrustPacket*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3582e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(),
                                                                 ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x3583460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::TrustPacket*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Collections::IList*,
    ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x35873c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(),
                                                                 ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>(),
                                                                 ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::System::Collections::IList*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3587274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3587488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_CreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_CreationTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3583970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_CreationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_ValidDays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_ValidDays)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x35874a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_ValidDays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetTrustData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetTrustData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35876a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetTrustData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetValidSeconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetValidSeconds)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x358756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetValidSeconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetExpirationTimeFromSig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(bool, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetExpirationTimeFromSig)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x3587778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "GetExpirationTimeFromSig", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x358802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetFingerprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetFingerprint)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3588034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetFingerprint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_IsEncryptionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsEncryptionKey)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x357dd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_IsEncryptionKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_IsMasterKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsMasterKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3587728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_IsMasterKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Algorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x358000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_BitStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_BitStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35880ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_BitStrength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKey)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x3580028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetECKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetECKey)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x35880b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetECKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetUserIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserIds)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x3588204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetUserIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetUserAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserAttributes)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x35885bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetUserAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForId)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x35889a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetSignaturesForId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesForUserAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForUserAttribute)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3588c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { "GetSignaturesForUserAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesOfType)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x3587bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetSignaturesOfType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignatures)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x3588e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetSignatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetKeySignatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKeySignatures)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35891f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetKeySignatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_PublicKeyPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyPacket* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_PublicKeyPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3589294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_PublicKeyPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetEncoded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x358929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Encode)> {
  constexpr static std::size_t size = 0xd1c;
  constexpr static std::size_t addrs = 0x3589318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.IsRevoked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::IsRevoked)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x358a034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "IsRevoked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x358a318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "AddCertification",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*,
                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x358a804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "AddCertification",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::System::Object*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCert)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x358a388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "AddCert",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x358a874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                            { "RemoveCertification",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x358abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { "RemoveCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::System::Object*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x358a8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                             { "RemoveCert", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x358ac2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "RemoveCertification",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*,
                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x358afb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "RemoveCertification",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::System::Object*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x358ac9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                           { "RemoveCert",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x358b020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                            { "AddCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x358b1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                         { "RemoveCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_keyId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyId = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_fingerprint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fingerprint;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_fingerprint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fingerprint;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_fingerprint(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fingerprint = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStrength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStrength;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_keyStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyStrength = value;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_publicPk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicPk;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_publicPk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicPk;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_publicPk(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicPk = value;
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_trustPk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPk;
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_trustPk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPk;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_trustPk(::Org::BouncyCastle::Bcpg::TrustPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustPk = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keySigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySigs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keySigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySigs;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_keySigs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySigs = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_ids(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ids = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idTrusts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idTrusts;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idTrusts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idTrusts;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_idTrusts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idTrusts = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idSigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idSigs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idSigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idSigs;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_idSigs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___idSigs = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_subSigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subSigs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_subSigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subSigs;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_subSigs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subSigs = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::setStaticF_MasterKeyCertificationTypes(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "MasterKeyCertificationTypes", ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::getStaticF_MasterKeyCertificationTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "MasterKeyCertificationTypes", ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>();
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::CalculateFingerprint(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { "CalculateFingerprint", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, publicPk);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d, ::Org::BouncyCastle::Math::BigInteger* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                              { "UpdateDigest", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                  ::System::DateTime time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, pubKey, time);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicPk);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                  ::System::Collections::IList* sigs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(),
                                                               ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicPk, trustPk, sigs);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust,
                                                                  ::System::Collections::IList* subSigs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(),
                                                               ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, trust, subSigs);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                  ::System::Collections::IList* keySigs, ::System::Collections::IList* ids, ::System::Collections::IList* idTrusts,
                                                                  ::System::Collections::IList* idSigs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), ::i2c::type_of<::System::Collections::IList*>(),
                              ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicPk, trustPk, keySigs, ids, idTrusts, idSigs);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::System::Collections::IList* ids, ::System::Collections::IList* idSigs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicPk, ids, idSigs);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_CreationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_CreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_ValidDays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_ValidDays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetTrustData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetTrustData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetValidSeconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetValidSeconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetExpirationTimeFromSig(bool selfSigned, int32_t signatureType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { "GetExpirationTimeFromSig", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, selfSigned, signatureType);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetFingerprint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetFingerprint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsEncryptionKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_IsEncryptionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsMasterKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_IsMasterKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_BitStrength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_BitStrength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetECKey(::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetECKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>(this, ___internal_method, algorithm);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetUserIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetUserAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForId(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetSignaturesForId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method, id);
}
inline ::System::Collections::IEnumerable*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForUserAttribute(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                           { "GetSignaturesForUserAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method, userAttributes);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesOfType(int32_t signatureType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetSignaturesOfType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method, signatureType);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetSignatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKeySignatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetKeySignatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_PublicKeyPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "get_PublicKeyPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Encode(::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::IsRevoked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), { "IsRevoked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { "AddCertification",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                       { "AddCertification",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, userAttributes, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { "AddCert",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                          { "RemoveCertification",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, userAttributes);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                           { "RemoveCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, id);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                           { "RemoveCert", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, id);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { "RemoveCertification",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                       { "RemoveCertification",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, userAttributes, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                                                         { "RemoveCert",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                          { "AddCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                       { "RemoveCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, key, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                                                                  ::System::DateTime time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(algorithm, pubKey, time));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk,
                                                                                                                  ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk, ::System::Collections::IList* sigs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk, trustPk, sigs));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust, ::System::Collections::IList* subSigs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(key, trust, subSigs));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(pubKey));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk,
                                                                                                                  ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                                                                  ::System::Collections::IList* keySigs, ::System::Collections::IList* ids,
                                                                                                                  ::System::Collections::IList* idTrusts, ::System::Collections::IList* idSigs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk, trustPk, keySigs, ids, idTrusts, idSigs));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk,
                                                                                                                  ::System::Collections::IList* ids, ::System::Collections::IList* idSigs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk, ids, idSigs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::PgpPublicKey() {}
