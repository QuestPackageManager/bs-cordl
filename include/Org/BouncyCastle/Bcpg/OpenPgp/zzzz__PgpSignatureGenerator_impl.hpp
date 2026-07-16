#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSignatureGenerator.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpOnePassSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3592584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.InitSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3592690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                             { "InitSign", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.InitSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x359cc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
            { "InitSign", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x359cef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.doCanonicalUpdateByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x359cf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "doCanonicalUpdateByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.doUpdateCRLF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x359d0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "doUpdateCRLF", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.doUpdateByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateByte)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x359cf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "doUpdateByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359d0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x359d0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                             { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.SetHashedSubpackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetHashedSubpackets)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3592698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                             { "SetHashedSubpackets", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.SetUnhashedSubpackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetUnhashedSubpackets)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x359271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                             { "SetUnhashedSubpackets", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateOnePassVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateOnePassVersion)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x359d28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "GenerateOnePassVersion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Generate)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x359d354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "Generate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x35927a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                             { "GenerateCertification", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x359e1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                            { "GenerateCertification",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x359e378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
            { "GenerateCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GenerateCertification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359e3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                           { "GenerateCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.GetEncodedPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GetEncodedPublicKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x359e3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                           { "GetEncodedPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.packetPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>, ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::packetPresent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x359db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                         { "packetPresent", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.insertSubpacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>, ::Org::BouncyCastle::Bcpg::SignatureSubpacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::insertSubpacket)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x359dbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                         { "insertSubpacket", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.UpdateWithIdData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithIdData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x359e0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                           { "UpdateWithIdData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator.UpdateWithPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithPublicKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x359dff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                           { "UpdateWithPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_keyAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_keyAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_privKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_privKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privKey = value;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sig = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_dig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dig;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_dig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dig;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_dig(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dig = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_signatureType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_signatureType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_signatureType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureType = value;
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_lastb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_lastb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_lastb(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastb = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_unhashed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhashed;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_unhashed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhashed;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_unhashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unhashed = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_hashed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashed;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_get_hashed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashed;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::__cordl_internal_set_hashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashed = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::setStaticF_EmptySignatureSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>, "EmptySignatureSubpackets", ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::getStaticF_EmptySignatureSubpackets() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>, "EmptySignatureSubpackets", ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>();
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyAlgorithm, hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                           { "InitSign", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigType, key);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key,
                                                                              ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
          { "InitSign", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigType, key, random);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "Update", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doCanonicalUpdateByte(uint8_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "doCanonicalUpdateByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateCRLF() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "doUpdateCRLF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::doUpdateByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "doUpdateByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update(::ArrayW<uint8_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Update(::ArrayW<uint8_t> b, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                           { "Update", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, off, len);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetHashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                           { "SetHashedSubpackets", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashedPackets);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::SetUnhashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                           { "SetUnhashedSubpackets", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unhashedPackets);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateOnePassVersion(bool isNested) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "GenerateOnePassVersion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*>(this, ___internal_method, isNested);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::Generate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(), { "Generate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::StringW id,
                                                                                                                                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                           { "GenerateCertification", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(this, ___internal_method, id, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                               ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                          { "GenerateCertification",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(this, ___internal_method, userAttributes, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* masterKey,
                                                                                                                                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                       { "GenerateCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(this, ___internal_method, masterKey, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                         { "GenerateCertification", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(this, ___internal_method, pubKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                         { "GetEncodedPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, pubKey);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::packetPresent(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets,
                                                                                   ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                       { "packetPresent", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packets, type);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::insertSubpacket(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets, ::Org::BouncyCastle::Bcpg::SignatureSubpacket* subpacket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                       { "insertSubpacket", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(this, ___internal_method, packets, subpacket);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithIdData(int32_t header, ::ArrayW<uint8_t> idBytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                         { "UpdateWithIdData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, idBytes);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(),
                                                                                         { "UpdateWithPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                                                                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator*>(keyAlgorithm, hashAlgorithm));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator::PgpSignatureGenerator() {}
