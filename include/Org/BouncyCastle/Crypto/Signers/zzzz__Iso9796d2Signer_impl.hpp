#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\Iso9796d2Signer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Iso9796d2Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignerWithRecovery_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.GetRecoveredMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::GetRecoveredMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x342ce20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), { "GetRecoveredMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*, bool)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x342ce28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x342cf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x342cf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Init)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x342cffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.IsSameAs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::IsSameAs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x342d294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                           { "IsSameAs", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.ClearBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::ClearBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x342d35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), { "ClearBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.UpdateWithRecoveredMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::UpdateWithRecoveredMessage)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x342d37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Update)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x342d804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::BlockUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x342d8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Reset)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x342da3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::GenerateSignature)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x342db2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x342df20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.ReturnFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::ReturnFalse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x342e6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), { "ReturnFalse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer.HasFullMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::HasFullMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x342e724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_trailer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailer;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_trailer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailer;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_trailer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailer = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_keyBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_keyBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBits;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_keyBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyBits = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_block(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___block = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_mBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_mBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_mBuf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBuf = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_messageLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_messageLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageLength;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_messageLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageLength = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_fullMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullMessage;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_fullMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullMessage;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_fullMessage(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullMessage = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_recoveredMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recoveredMessage;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_recoveredMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recoveredMessage;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_recoveredMessage(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recoveredMessage = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_preSig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preSig;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_preSig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preSig;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_preSig(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preSig = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_preBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preBlock;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_get_preBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preBlock;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::__cordl_internal_set_preBlock(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preBlock = value;
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::GetRecoveredMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), { "GetRecoveredMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, digest, isImplicit);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, digest);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::IsSameAs(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(),
                                                                                         { "IsSameAs", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::ClearBlock(::ArrayW<uint8_t> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), { "ClearBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::UpdateWithRecoveredMessage(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length);
}
inline void Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::VerifySignature(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::ReturnFalse(::ArrayW<uint8_t> block) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), { "ReturnFalse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, block);
}
inline bool Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::HasFullMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer* Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                            ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(cipher, digest, isImplicit));
}
inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer* Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                            ::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*>(cipher, digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
constexpr Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::operator ::Org::BouncyCastle::Crypto::ISignerWithRecovery*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
constexpr ::Org::BouncyCastle::Crypto::ISignerWithRecovery* Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::i___Org__BouncyCastle__Crypto__ISignerWithRecovery() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Iso9796d2Signer() {}
