#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Encodings\ISO9796d1Encoding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Encodings/zzzz__ISO9796d1Encoding_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3392c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3392c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3392d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetUnderlyingCipher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::Init)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3392d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.GetInputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetInputBlockSize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3392f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetInputBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.GetOutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetOutputBlockSize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3392ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetOutputBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.SetPadBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::SetPadBits)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33930b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "SetPadBits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.GetPadBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetPadBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3393114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetPadBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::ProcessBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x339311c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                             { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.EncodeBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::EncodeBlock)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x339312c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                             { "EncodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding.DecodeBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::DecodeBlock)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x3393474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                             { "DecodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_bitSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_bitSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitSize;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_set_bitSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitSize = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_padBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_padBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___padBits;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_set_padBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___padBits = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_modulus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modulus;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_get_modulus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modulus;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::__cordl_internal_set_modulus(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modulus = value;
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::setStaticF_Sixteen(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Sixteen", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::getStaticF_Sixteen() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Sixteen", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>();
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::setStaticF_Six(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Six", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::getStaticF_Six() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Six", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>();
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::setStaticF_shadows(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "shadows", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::getStaticF_shadows() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "shadows", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>();
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::setStaticF_inverse(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "inverse", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::getStaticF_inverse() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "inverse", ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>();
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline ::StringW Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::get_AlgorithmName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetUnderlyingCipher() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetUnderlyingCipher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetInputBlockSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetInputBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetOutputBlockSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetOutputBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::SetPadBits(int32_t padBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "SetPadBits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, padBits);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetPadBits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(), { "GetPadBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                           { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::EncodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                           { "EncodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::DecodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(),
                                                           { "DecodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding* Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*>(cipher));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::ISO9796d1Encoding() {}
