#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/RandomDsaKCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__RandomDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.get_IsDeterministic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x342e918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x342e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x342e928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.NextK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x342e974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(&::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x342ea30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline bool Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, random);
}
inline void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d, ::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, d, message);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator* Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::i___Org__BouncyCastle__Crypto__Signers__IDsaKCalculator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::RandomDsaKCalculator() {}
