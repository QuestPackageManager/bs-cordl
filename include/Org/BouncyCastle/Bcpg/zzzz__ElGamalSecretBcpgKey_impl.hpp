#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\ElGamalSecretBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ElGamalSecretBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x369e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x369e554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x369e5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey.get_X
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::get_X)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369e600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { "get_X", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::GetEncoded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x369e618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::Encode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x369e6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::__cordl_internal_set_x(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::_ctor(::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::StringW Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::get_X() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), { "get_X", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey* Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey* Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::New_ctor(::Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey*>(x));
}
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ElGamalSecretBcpgKey::ElGamalSecretBcpgKey() {}
