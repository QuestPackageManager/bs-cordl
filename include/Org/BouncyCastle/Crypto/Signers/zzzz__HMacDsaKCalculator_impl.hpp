#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/HMacDsaKCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__HMacDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3427cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.get_IsDeterministic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::get_IsDeterministic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3427da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3427db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x3427dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(),
                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.NextK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::NextK)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x34282f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.BitsToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::BitsToInt)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3428228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), { "BitsToInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Macs::HMac*& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_hMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMac;
}
constexpr ::Org::BouncyCastle::Crypto::Macs::HMac* const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_hMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMac;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_set_hMac(::Org::BouncyCastle::Crypto::Macs::HMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hMac = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_K() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_K() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_set_K(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___K = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_V() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___V;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_V() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___V;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_set_V(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___V = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
inline void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline bool Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::get_IsDeterministic() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, random);
}
inline void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d, ::ArrayW<uint8_t> message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(),
                       { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, d, message);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::NextK() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::BitsToInt(::ArrayW<uint8_t> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(), { "BitsToInt", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, t);
}
inline ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::i___Org__BouncyCastle__Crypto__Signers__IDsaKCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::HMacDsaKCalculator() {}
