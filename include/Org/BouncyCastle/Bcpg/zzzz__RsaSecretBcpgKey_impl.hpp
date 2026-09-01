#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\RsaSecretBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RsaSecretBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x369f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x369f6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_Modulus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x369f8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_Modulus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_PrivateExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrivateExponent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369f8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrivateExponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_PrimeP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeP)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369f8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_PrimeQ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeQ)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369f908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeQ", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_PrimeExponentP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeExponentP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeExponentP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_PrimeExponentQ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeExponentQ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeExponentQ", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_CrtCoefficient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_CrtCoefficient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_CrtCoefficient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x369f938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::GetEncoded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x369f97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::Encode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x369fa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_d(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_p(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_q(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_u(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___u = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_expP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expP;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_expP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expP;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_expP(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expP = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_expQ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expQ;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_expQ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expQ;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_expQ(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expQ = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_crt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crt;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_get_crt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crt;
}
constexpr void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::__cordl_internal_set_crt(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crt = value;
}
inline void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, p, q);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_Modulus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_Modulus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrivateExponent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrivateExponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeQ() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeQ", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeExponentP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeExponentP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_PrimeExponentQ() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_PrimeExponentQ", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_CrtCoefficient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_CrtCoefficient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Math::BigInteger* p,
                                                                                                        ::Org::BouncyCastle::Math::BigInteger* q) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey*>(d, p, q));
}
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey::RsaSecretBcpgKey() {}
