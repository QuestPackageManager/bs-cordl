#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\PssSigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__PssSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.CreateRawSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Signers::PssSigner* (*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*)>(
        &::Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x342f314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                            { "CreateRawSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.CreateRawSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Signers::PssSigner* (*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*,
                                                                                                            ::Org::BouncyCastle::Crypto::IDigest*, int32_t, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x342f5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                             { "CreateRawSigner",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x342f6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x342f7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x342f7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x342f830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x342f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x342f7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x342f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Crypto::IDigest*, int32_t,
    ::ArrayW<uint8_t>, uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x342f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x342f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::Init)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x342f984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.ClearBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::ClearBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x342fc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { "ClearBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x342fc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::BlockUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x342fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x342fdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::PssSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x342fe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x3430720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.ItoOSP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::ItoOSP)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3430c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { "ItoOSP", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PssSigner.MaskGeneratorFunction1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::PssSigner::MaskGeneratorFunction1)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x34302a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                         { "MaskGeneratorFunction1", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_contentDigest1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentDigest1;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_contentDigest1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentDigest1;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_contentDigest1(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentDigest1 = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_contentDigest2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentDigest2;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_contentDigest2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentDigest2;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_contentDigest2(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentDigest2 = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_mgfDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mgfDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_mgfDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mgfDigest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_mgfDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mgfDigest = value;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_hLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_hLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hLen;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_hLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hLen = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_mgfhLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mgfhLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_mgfhLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mgfhLen;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_mgfhLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mgfhLen = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_sLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_sLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sLen;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_sLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sLen = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_sSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sSet;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_sSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sSet;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_sSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sSet = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_emBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_emBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emBits;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_emBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emBits = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_salt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_salt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___salt;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_salt(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___salt = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_mDash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDash;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_mDash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDash;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_mDash(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDash = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_block(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___block = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_trailer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailer;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_get_trailer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailer;
}
constexpr void Org::BouncyCastle::Crypto::Signers::PssSigner::__cordl_internal_set_trailer(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailer = value;
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                       ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                          { "CreateRawSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(nullptr, ___internal_method, cipher, digest);
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                       ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                                                                       ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen,
                                                                                                                       uint8_t trailer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                           { "CreateRawSigner",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(nullptr, ___internal_method, cipher, contentDigest, mgfDigest, saltLen, trailer);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, digest);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, digest, saltLen);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> salt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, digest, salt);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                 ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, contentDigest, mgfDigest, saltLen);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                 ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, ::ArrayW<uint8_t> salt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, contentDigest, mgfDigest, salt);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLen,
                                                                 uint8_t trailer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, digest, saltLen, trailer);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                 ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen, uint8_t trailer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, contentDigest, mgfDigest, saltLen, trailer);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* contentDigest1,
                                                                 ::Org::BouncyCastle::Crypto::IDigest* contentDigest2, ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen,
                                                                 ::ArrayW<uint8_t> salt, uint8_t trailer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, contentDigest1, contentDigest2, mgfDigest, saltLen, salt, trailer);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::PssSigner::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::ClearBlock(::ArrayW<uint8_t> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { "ClearBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::PssSigner::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::PssSigner::VerifySignature(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::PssSigner::ItoOSP(int32_t i, ::ArrayW<uint8_t> sp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(), { "ItoOSP", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, sp);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::PssSigner::MaskGeneratorFunction1(::ArrayW<uint8_t> Z, int32_t zOff, int32_t zLen, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(),
                                       { "MaskGeneratorFunction1", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, Z, zOff, zLen, length);
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, digest));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, digest, saltLen));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> salt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, digest, salt));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, contentDigest, mgfDigest, saltLen));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, ::ArrayW<uint8_t> salt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, contentDigest, mgfDigest, salt));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* digest, int32_t saltLen, uint8_t trailer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, digest, saltLen, trailer));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* contentDigest,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen, uint8_t trailer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, contentDigest, mgfDigest, saltLen, trailer));
}
inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* contentDigest1,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* contentDigest2,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* mgfDigest, int32_t saltLen,
                                                                                                                ::ArrayW<uint8_t> salt, uint8_t trailer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PssSigner*>(cipher, contentDigest1, contentDigest2, mgfDigest, saltLen, salt, trailer));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::PssSigner::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::PssSigner::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::PssSigner::PssSigner() {}
