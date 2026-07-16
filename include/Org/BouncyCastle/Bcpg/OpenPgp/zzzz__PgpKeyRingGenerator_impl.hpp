#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpKeyRingGenerator.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRingGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyPair_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x358202c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35820b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::ArrayW<char16_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3582138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x35821b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<char16_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3582348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                             ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, bool, ::ArrayW<char16_t>,
    bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x35823d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3582468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3582610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                                                                           { "AddSubKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3582a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { "AddSubKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x3582618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { "AddSubKey",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x3582a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                         { "AddSubKey",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.GenerateSecretKeyRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GenerateSecretKeyRing)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3582f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(), { "GenerateSecretKeyRing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.GeneratePublicKeyRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GeneratePublicKeyRing)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x3582f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(), { "GeneratePublicKeyRing", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_keys(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
constexpr ::StringW& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_encAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_encAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_certificationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificationLevel;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_certificationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificationLevel;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_certificationLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificationLevel = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_rawPassPhrase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawPassPhrase;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_rawPassPhrase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawPassPhrase;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_rawPassPhrase(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawPassPhrase = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_useSha1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useSha1;
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_useSha1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useSha1;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_useSha1(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useSha1 = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_masterKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterKey;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_masterKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterKey;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_masterKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___masterKey = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_hashedPacketVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashedPacketVector;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_hashedPacketVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashedPacketVector;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_hashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashedPacketVector = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_unhashedPacketVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhashedPacketVector;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_unhashedPacketVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unhashedPacketVector;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_unhashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unhashedPacketVector = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rand = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase,
                                                                         bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets,
                                                   rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                         ::ArrayW<char16_t> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                         bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets,
                                                   unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                         ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>(),
                                           ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets,
                                                   rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                                                                         { "AddSubKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyPair);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { "AddSubKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyPair, hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                              { "AddSubKey",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyPair, hashedPackets, unhashedPackets);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                             ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(),
                                       { "AddSubKey",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyPair, hashedPackets, unhashedPackets, hashAlgorithm);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GenerateSecretKeyRing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(), { "GenerateSecretKeyRing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GeneratePublicKeyRing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(), { "GeneratePublicKeyRing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, passPhrase, useSha1, hashedPackets,
                                                                                                                    unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, utf8PassPhrase, passPhrase,
                                                                                                                    useSha1, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, rawPassPhrase, useSha1,
                                                                                                                    hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                ::ArrayW<char16_t> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1,
                                                                                                                    hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, utf8PassPhrase,
                                                                                                                    passPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, rawPassPhrase,
                                                                                                                    useSha1, hashedPackets, unhashedPackets, rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::PgpKeyRingGenerator() {}
