#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Encodings\Pkcs1Encoding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Encodings/zzzz__Pkcs1Encoding_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.get_StrictLengthEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::get_StrictLengthEnabled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3394d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "get_StrictLengthEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.set_StrictLengthEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::set_StrictLengthEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3394e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "set_StrictLengthEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3394fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x339502c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x33950b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.GetUnderlyingCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::GetUnderlyingCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3395144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "GetUnderlyingCipher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x339514c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "get_AlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::Init)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3395214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.GetInputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::GetInputBlockSize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33954fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "GetInputBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.GetOutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)()>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::GetOutputBlockSize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33955b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "GetOutputBlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::ProcessBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3395674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.EncodeBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::EncodeBlock)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x3395974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { "EncodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.CheckPkcs1Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::CheckPkcs1Encoding)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3395c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                                                           { "CheckPkcs1Encoding", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.DecodeBlockOrRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::DecodeBlockOrRandom)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x3395d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { "DecodeBlockOrRandom", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.DecodeBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::DecodeBlock)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3395684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                             { "DecodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding.FindStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::*)(uint8_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::FindStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3396020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                                                           { "FindStart", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_forPrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forPrivateKey;
}
constexpr bool const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_forPrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forPrivateKey;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_forPrivateKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forPrivateKey = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_useStrictLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStrictLength;
}
constexpr bool const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_useStrictLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStrictLength;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_useStrictLength(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useStrictLength = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_pLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_pLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pLen;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_pLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pLen = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_fallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallback;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_fallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallback;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_fallback(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallback = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_blockBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockBuffer;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_get_blockBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockBuffer;
}
constexpr void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::__cordl_internal_set_blockBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockBuffer = value;
}
inline void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::setStaticF_strictLengthEnabled(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "strictLengthEnabled", ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::getStaticF_strictLengthEnabled() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "strictLengthEnabled", ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>();
}
inline bool Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::get_StrictLengthEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "get_StrictLengthEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::set_StrictLengthEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "set_StrictLengthEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher);
}
inline void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, int32_t pLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, pLen);
}
inline void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::ArrayW<uint8_t> fallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, fallback);
}
inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::GetUnderlyingCipher() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "GetUnderlyingCipher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "get_AlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { "Init", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::GetInputBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "GetInputBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::GetOutputBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(), { "GetOutputBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { "ProcessBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::EncodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { "EncodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::CheckPkcs1Encoding(::ArrayW<uint8_t> encoded, int32_t pLen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                                                         { "CheckPkcs1Encoding", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encoded, pLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::DecodeBlockOrRandom(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { "DecodeBlockOrRandom", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::DecodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                           { "DecodeBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline int32_t Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::FindStart(uint8_t type, ::ArrayW<uint8_t> block) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(),
                                                                                         { "FindStart", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type, block);
}
inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(cipher));
}
inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, int32_t pLen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(cipher, pLen));
}
inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher,
                                                                                                                            ::ArrayW<uint8_t> fallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*>(cipher, fallback));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding::Pkcs1Encoding() {}
