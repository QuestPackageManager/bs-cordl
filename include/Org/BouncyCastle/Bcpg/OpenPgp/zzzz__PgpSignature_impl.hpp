#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpSignature.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignaturePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Cast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SignaturePacket* (*)(::Org::BouncyCastle::Bcpg::Packet*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Cast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x359d764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Cast", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::Packet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x359d830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::SignaturePacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x359d870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::SignaturePacket*, ::Org::BouncyCastle::Bcpg::TrustPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x359d878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSig)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x359d8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetSig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359db14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359db2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_KeyAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::HashAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359db44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_HashAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.IsCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x359db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "IsCertification", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.InitVerify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::InitVerify)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x359dba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                           { "InitVerify", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x359dd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.doCanonicalUpdateByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x359de34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "doCanonicalUpdateByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.doUpdateCRLF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x359df20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "doUpdateCRLF", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359e034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x359e04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                             { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Verify)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x359e170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Verify", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.UpdateWithIdData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithIdData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x359e5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                           { "UpdateWithIdData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.UpdateWithPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithPublicKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x359e6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                           { "UpdateWithPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x359e884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                            { "VerifyCertification",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x359eaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                             { "VerifyCertification", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x359ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                         { "VerifyCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x359ed00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                           { "VerifyCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_SignatureType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_SignatureType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_SignatureType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359ee4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetCreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetCreationTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x359ee64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetCreationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_CreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_CreationTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x359ee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_CreationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSignatureTrailer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignatureTrailer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359e2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetSignatureTrailer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_HasSubpackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HasSubpackets)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x359eed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_HasSubpackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetHashedSubPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetHashedSubPackets)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359ef04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetHashedSubPackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetUnhashedSubPackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetUnhashedSubPackets)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359ef78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetUnhashedSubPackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.createSubpacketVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::createSubpacketVector)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x359ef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                             { "createSubpacketVector", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignature)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x359e2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncoded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x359ef98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Encode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3597898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetEncodedPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncodedPublicKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x359e788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                           { "GetEncodedPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.IsCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x359db98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "IsCertification", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SignaturePacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sigPck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPck;
}
constexpr ::Org::BouncyCastle::Bcpg::SignaturePacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sigPck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPck;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_sigPck(::Org::BouncyCastle::Bcpg::SignaturePacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigPck = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_signatureType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_signatureType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_signatureType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureType = value;
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_trustPck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPck;
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_trustPck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPck;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_trustPck(::Org::BouncyCastle::Bcpg::TrustPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trustPck = value;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sig = value;
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_lastb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_lastb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_lastb(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastb = value;
}
inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Cast(::Org::BouncyCastle::Bcpg::Packet* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Cast", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::Packet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignaturePacket*>(nullptr, ___internal_method, packet);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgInput);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigPacket);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPacket) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignaturePacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::TrustPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigPacket, trustPacket);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetSig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_KeyAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_HashAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "IsCertification", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::InitVerify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                         { "InitVerify", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doCanonicalUpdateByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "doCanonicalUpdateByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doUpdateCRLF() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "doUpdateCRLF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(::ArrayW<uint8_t> bytes, int32_t off, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                           { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off, length);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Verify() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Verify", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithIdData(int32_t header, ::ArrayW<uint8_t> idBytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                         { "UpdateWithIdData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, idBytes);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                         { "UpdateWithPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                          { "VerifyCertification",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userAttributes, key);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                           { "VerifyCertification", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, key);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* masterKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                       { "VerifyCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, masterKey, pubKey);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                         { "VerifyCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pubKey);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_SignatureType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_SignatureType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetCreationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetCreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_CreationTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_CreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignatureTrailer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetSignatureTrailer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HasSubpackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "get_HasSubpackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetHashedSubPackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetHashedSubPackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetUnhashedSubPackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetUnhashedSubPackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::createSubpacketVector(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> pcks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                           { "createSubpacketVector", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(this, ___internal_method, pcks);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Encode(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(),
                                                                                         { "GetEncodedPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, pubKey);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification(int32_t signatureType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(), { "IsCertification", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, signatureType);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(bcpgInput));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::New_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(sigPacket));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::New_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket,
                                                                                                                  ::Org::BouncyCastle::Bcpg::TrustPacket* trustPacket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(sigPacket, trustPacket));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::PgpSignature() {}
