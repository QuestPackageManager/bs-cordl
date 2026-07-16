#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSecretKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyPair_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    ::Org::BouncyCastle::Bcpg::SecretKeyPacket*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3590eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool, bool,
    ::Org::BouncyCastle::Security::SecureRandom*, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x3590ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3591bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3591be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::ArrayW<char16_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3591c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3591dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3591d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<char16_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x35920c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                             ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, bool, ::ArrayW<char16_t>,
    bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3592164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x359227c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, bool,
    bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x35921f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CertifiedPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3591df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "CertifiedPublicKey",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CertifiedPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x35922b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { "CertifiedPublicKey",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime,
    ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x35927e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                             ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                             ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime,
    ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x35928bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                             ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                             ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsSigningKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsSigningKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x359299c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_IsSigningKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsMasterKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsMasterKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35929e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_IsMasterKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsPrivateKeyEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsPrivateKeyEmpty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x35929f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_IsPrivateKeyEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_KeyEncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3592a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_KeyEncryptionAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3592a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_S2kUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2kUsage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3592a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_S2kUsage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_S2k
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::S2k* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2k)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3592a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_S2k", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_PublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3592a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_PublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_UserIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserIds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3592a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_UserIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_UserAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3592aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_UserAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractKeyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractKeyData)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x3592ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                                                           { "ExtractKeyData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.RecoverKeyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*,
                                                                             ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::RecoverKeyData)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x3593c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "RecoverKeyData",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3593ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "ExtractPrivateKey", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKeyUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyUtf8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x35946b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "ExtractPrivateKeyUtf8", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKeyRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35946e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "ExtractPrivateKeyRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoExtractPrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoExtractPrivateKey)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x3593f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                                                           { "DoExtractPrivateKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetECKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::StringW, ::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetECKey)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x35946e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "GetECKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.Checksum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(bool, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Checksum)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x35915f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "Checksum", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetEncoded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3594838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Encode)> {
  constexpr static std::size_t size = 0xc5c;
  constexpr static std::size_t addrs = 0x35948b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<char16_t>, ::ArrayW<char16_t>,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPassword)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3595578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                { "CopyWithNewPassword",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPasswordUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<char16_t>, ::ArrayW<char16_t>,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordUtf8)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3595a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                { "CopyWithNewPasswordUtf8",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPasswordRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag,
                                                          ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3595a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                { "CopyWithNewPasswordRaw",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoCopyWithNewPassword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoCopyWithNewPassword)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x35955f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                            { "DoCopyWithNewPassword",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ReplacePublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ReplacePublicKey)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3595a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                            { "ReplacePublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptKeyDataV3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool,
                                                                             ::Org::BouncyCastle::Security::SecureRandom*, ::by_ref<::Org::BouncyCastle::Bcpg::S2k*>, ::by_ref<::ArrayW<uint8_t>>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV3)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x3591900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "EncryptKeyDataV3",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                                 ::i2c::type_of<::by_ref<::Org::BouncyCastle::Bcpg::S2k*>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptKeyDataV4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag,
                                                                             ::ArrayW<uint8_t>, bool, ::Org::BouncyCastle::Security::SecureRandom*, ::by_ref<::Org::BouncyCastle::Bcpg::S2k*>,
                                                                             ::by_ref<::ArrayW<uint8_t>>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3591870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "EncryptKeyDataV4",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::by_ref<::Org::BouncyCastle::Bcpg::S2k*>>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*,
                                                                             ::ArrayW<uint8_t>, int32_t, int32_t, ::Org::BouncyCastle::Security::SecureRandom*, ::by_ref<::ArrayW<uint8_t>>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptData)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x3595b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                { "EncryptData",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(),
                                                    ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3595fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { "ParseSecretKeyFromSExpr",
                                           {},
                                           { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3596338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { "ParseSecretKeyFromSExprUtf8",
                                           {},
                                           { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3596370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { "ParseSecretKeyFromSExprRaw",
                                           {},
                                           { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x3595fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                                                           { "DoParseSecretKeyFromSExpr",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35967f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "ParseSecretKeyFromSExpr", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3596ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "ParseSecretKeyFromSExprUtf8", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3596d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                             { "ParseSecretKeyFromSExprRaw", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x3596820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                { "DoParseSecretKeyFromSExpr", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetDValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, bool, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetDValue)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x35965ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                         { "GetDValue", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__cordl_internal_get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__cordl_internal_get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__cordl_internal_set_secret(::Org::BouncyCastle::Bcpg::SecretKeyPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secret = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__cordl_internal_get_pub() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pub;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__cordl_internal_get_pub() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pub;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__cordl_internal_set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pub = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret, pub);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKey, pubKey, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, rand, isMasterKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets, unhashedPackets,
                                                   rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  ::ArrayW<char16_t> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets,
                                                   unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                           ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets,
                                                   rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets,
                                                   unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "CertifiedPublicKey",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, certificationLevel, keyPair, id, hashedPackets, unhashedPackets);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey(
    int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { "CertifiedPublicKey",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(nullptr, ___internal_method, certificationLevel, keyPair, id, hashedPackets, unhashedPackets,
                                                                                                hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                                  ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                  ::ArrayW<char16_t> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                           ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                                  ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                  ::ArrayW<char16_t> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                           ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, useSha1, hashedPackets,
                                                   unhashedPackets, rand);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsSigningKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_IsSigningKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsMasterKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_IsMasterKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsPrivateKeyEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_IsPrivateKeyEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyEncryptionAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_KeyEncryptionAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2kUsage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_S2kUsage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2k() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_S2k", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_PublicKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_PublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_UserIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "get_UserAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractKeyData(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                                                         { "ExtractKeyData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rawPassPhrase, clearPassPhrase);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::RecoverKeyData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::StringW modeAndPadding,
                                                                                        ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> keyData,
                                                                                        int32_t keyOff, int32_t keyLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "RecoverKeyData",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, encAlgorithm, modeAndPadding, key, iv, keyData, keyOff, keyLen);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKey(::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "ExtractPrivateKey", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(this, ___internal_method, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyUtf8(::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "ExtractPrivateKeyUtf8", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(this, ___internal_method, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyRaw(::ArrayW<uint8_t> rawPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "ExtractPrivateKeyRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(this, ___internal_method, rawPassPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoExtractPrivateKey(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                                                         { "DoExtractPrivateKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(this, ___internal_method, rawPassPhrase, clearPassPhrase);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetECKey(::StringW algorithm,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "GetECKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>(this, ___internal_method, algorithm, bcpgIn);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Checksum(bool useSha1, ::ArrayW<uint8_t> bytes, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "Checksum", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, useSha1, bytes, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Encode(::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                             ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase,
                                                                                                                             ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                             ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                              { "CopyWithNewPassword",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, key, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordUtf8(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                                 ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                                 ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                              { "CopyWithNewPasswordUtf8",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, key, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordRaw(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                                ::ArrayW<uint8_t> rawOldPassPhrase, ::ArrayW<uint8_t> rawNewPassPhrase,
                                                                                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                                ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                              { "CopyWithNewPasswordRaw",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, key, rawOldPassPhrase, rawNewPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoCopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                               ::ArrayW<uint8_t> rawOldPassPhrase, ::ArrayW<uint8_t> rawNewPassPhrase,
                                                                                                                               bool clearPassPhrase,
                                                                                                                               ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                               ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                          { "DoCopyWithNewPassword",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, key, rawOldPassPhrase, rawNewPassPhrase, clearPassPhrase, newEncAlgorithm,
                                                                                                rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ReplacePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secretKey,
                                                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                          { "ReplacePublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, secretKey, publicKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV3(::ArrayW<uint8_t> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                          ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                          ::by_ref<::Org::BouncyCastle::Bcpg::S2k*> s2k, ::by_ref<::ArrayW<uint8_t>> iv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "EncryptKeyDataV3",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                                                               ::i2c::type_of<::by_ref<::Org::BouncyCastle::Bcpg::S2k*>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rawKeyData, encAlgorithm, rawPassPhrase, clearPassPhrase, random, s2k, iv);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV4(::ArrayW<uint8_t> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                          ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase,
                                                                                          bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                          ::by_ref<::Org::BouncyCastle::Bcpg::S2k*> s2k, ::by_ref<::ArrayW<uint8_t>> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                          { "EncryptKeyDataV4",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                              ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(),
                              ::i2c::type_of<::by_ref<::Org::BouncyCastle::Bcpg::S2k*>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rawKeyData, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, random, s2k, iv);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                     ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t> data, int32_t dataOff,
                                                                                     int32_t dataLen, ::Org::BouncyCastle::Security::SecureRandom* random, ::by_ref<::ArrayW<uint8_t>> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                              { "EncryptData",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(),
                                                  ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, encAlgorithm, key, data, dataOff, dataLen, random, iv);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<char16_t> passPhrase,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
          { "ParseSecretKeyFromSExpr", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, passPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream, ::ArrayW<char16_t> passPhrase,
                                                                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { "ParseSecretKeyFromSExprUtf8",
                                         {},
                                         { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, passPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream, ::ArrayW<uint8_t> rawPassPhrase,
                                                                                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { "ParseSecretKeyFromSExprRaw",
                                         {},
                                         { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, rawPassPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t> rawPassPhrase,
                                                                                                                                   bool clearPassPhrase,
                                                                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                                                         { "DoParseSecretKeyFromSExpr",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "ParseSecretKeyFromSExpr", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream, ::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "ParseSecretKeyFromSExprUtf8", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream,
                                                                                                                                    ::ArrayW<uint8_t> rawPassPhrase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                                           { "ParseSecretKeyFromSExprRaw", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, rawPassPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t> rawPassPhrase,
                                                                                                                                   bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                              { "DoParseSecretKeyFromSExpr", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetDValue(::System::IO::Stream* inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, ::StringW curveName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(),
                                       { "GetDValue", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase, curveName);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(secret, pub));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                                                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(privKey, pubKey, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, rand, isMasterKey));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<char16_t> passPhrase,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1,
                                                                                                             hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<uint8_t> rawPassPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1,
                                                                                                             hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                         ::ArrayW<char16_t> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1,
                                                                                                             hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase,
                                                                                                                  ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase,
                                                                                                             useSha1, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                         ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1,
                                                                                                             hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                                  ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase,
                                                                                                             clearPassPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                         ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase,
                                                                                                             hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                         ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase,
                                                         bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase,
                                                                                                             useSha1, hashedPackets, unhashedPackets, rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::PgpSecretKey() {}
