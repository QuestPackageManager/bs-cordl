#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Agreement\Srp\Srp6Client.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Client_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)()>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36e1570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36e1574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36e1580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.GenerateClientCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
        &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::GenerateClientCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36e15a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.CalculateSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateSecret)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x36e1a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.SelectPrivateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::SelectPrivateValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36e1c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.CalculateS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateS)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x36e1b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), { "CalculateS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.CalculateClientEvidenceMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateClientEvidenceMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36e1d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.VerifyServerEvidenceMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::VerifyServerEvidenceMessage)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36e1dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client.CalculateSessionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateSessionKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36e1e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_N() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_N() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_N(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___N = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_privA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privA;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_privA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privA;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_privA(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privA = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_pubA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubA;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_pubA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubA;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_pubA(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubA = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___B;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_B(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___B = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_u(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___u = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_S(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_M1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M1;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_M1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M1;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_M1(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M1 = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_M2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M2;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_M2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M2;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_M2(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M2 = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_Key(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Key = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                        ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, N, g, digest, random);
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                        ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, digest, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::GenerateClientCredentials(::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> identity,
                                                                                                                               ::ArrayW<uint8_t> password) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, salt, identity, password);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateSecret(::Org::BouncyCastle::Math::BigInteger* serverB) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, serverB);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::SelectPrivateValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), { "CalculateS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateClientEvidenceMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::VerifyServerEvidenceMessage(::Org::BouncyCastle::Math::BigInteger* serverM2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverM2);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateSessionKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Srp6Client() {}
