#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\SM2Engine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SM2Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::SM2Engine::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33c6e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33c6e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::Init)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x33c6e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::ProcessBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33c7110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.CreateBasePointMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::CreateBasePointMultiplier)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33c7998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.Encrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::Encrypt)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x33c7120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                             { "Encrypt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.Decrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::Decrypt)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x33c74d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                             { "Decrypt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.NotEncrypted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::NotEncrypted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x33c7e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                             { "NotEncrypted", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.Kdf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*,
                                                                                                                 ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::SM2Engine::Kdf)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x33c7aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                         { "Kdf", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.Xor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::Xor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33c7fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                { "Xor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.NextK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::SM2Engine::NextK)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x33c79dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { "NextK", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::SM2Engine.AddFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::SM2Engine::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Crypto::Engines::SM2Engine::AddFieldElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x33c7f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                         { "AddFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDigest = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mForEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mForEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mForEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mForEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_set_mForEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mForEncryption = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mECKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* const& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mECKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECKey;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_set_mECKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mECKey = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mECParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECParams;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* const& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mECParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECParams;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mECParams = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mCurveLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurveLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mCurveLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurveLength;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_set_mCurveLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCurveLength = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_get_mRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr void Org::BouncyCastle::Crypto::Engines::SM2Engine::__cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRandom = value;
}
inline void Org::BouncyCastle::Crypto::Engines::SM2Engine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::SM2Engine::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Engines::SM2Engine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, param);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::SM2Engine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Crypto::Engines::SM2Engine::CreateBasePointMultiplier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::SM2Engine::Encrypt(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                           { "Encrypt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::SM2Engine::Decrypt(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                           { "Decrypt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline bool Org::BouncyCastle::Crypto::Engines::SM2Engine::NotEncrypted(::ArrayW<uint8_t> encData, ::ArrayW<uint8_t> input, int32_t inOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                                           { "NotEncrypted", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, encData, input, inOff);
}
inline void Org::BouncyCastle::Crypto::Engines::SM2Engine::Kdf(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* c1, ::ArrayW<uint8_t> encData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                          { "Kdf", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, c1, encData);
}
inline void Org::BouncyCastle::Crypto::Engines::SM2Engine::Xor(::ArrayW<uint8_t> data, ::ArrayW<uint8_t> kdfOut, int32_t dOff, int32_t dRemaining) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                              { "Xor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, kdfOut, dOff, dRemaining);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Engines::SM2Engine::NextK() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(), { "NextK", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::SM2Engine::AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(),
                                       { "AddFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, v);
}
inline ::Org::BouncyCastle::Crypto::Engines::SM2Engine* Org::BouncyCastle::Crypto::Engines::SM2Engine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>());
}
inline ::Org::BouncyCastle::Crypto::Engines::SM2Engine* Org::BouncyCastle::Crypto::Engines::SM2Engine::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::SM2Engine*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::SM2Engine::SM2Engine() {}
