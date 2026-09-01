#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\ElGamalPublicBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ElGamalPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x369e194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x369e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x369e2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::GetEncoded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x369e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey.get_P
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_P)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369e3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_P", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_G)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369e3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_G", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_Y)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369e3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::Encode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x369e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_set_p(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_set_g(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::__cordl_internal_set_y(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, g, y);
}
inline ::StringW Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_P() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_P", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_G() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_G", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::get_Y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey* Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey* Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                                ::Org::BouncyCastle::Math::BigInteger* y) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey*>(p, g, y));
}
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ElGamalPublicBcpgKey::ElGamalPublicBcpgKey() {}
