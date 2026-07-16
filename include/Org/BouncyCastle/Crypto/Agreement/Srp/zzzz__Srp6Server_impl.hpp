#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Srp/Srp6Server.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Server_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)()>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36dfd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::IDigest*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36dfd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::Init)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36dfd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.GenerateServerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::GenerateServerCredentials)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36dfdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.CalculateSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateSecret)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x36dfe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.SelectPrivateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::SelectPrivateValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36dff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.CalculateS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateS)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36dfeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), { "CalculateS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.VerifyClientEvidenceMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::VerifyClientEvidenceMessage)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36dff20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.CalculateServerEvidenceMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateServerEvidenceMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36dffcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server.CalculateSessionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateSessionKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36e004c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_N() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_N() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_N(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___N = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_v(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___A;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___A;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_A(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___A = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_privB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privB;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_privB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privB;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_privB(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privB = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_pubB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubB;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_pubB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubB;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_pubB(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubB = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_u(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___u = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_S() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_S() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___S;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_S(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___S = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_M1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M1;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_M1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M1;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_M1(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M1 = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_M2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M2;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_M2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___M2;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_M2(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___M2 = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_get_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::__cordl_internal_set_Key(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Key = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* v,
                                                                        ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, N, g, v, digest, random);
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Math::BigInteger* v,
                                                                        ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, v, digest, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::GenerateServerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateSecret(::Org::BouncyCastle::Math::BigInteger* clientA) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, clientA);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::SelectPrivateValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), { "CalculateS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::VerifyClientEvidenceMessage(::Org::BouncyCastle::Math::BigInteger* clientM1) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clientM1);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateServerEvidenceMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::CalculateSessionKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server::Srp6Server() {}
