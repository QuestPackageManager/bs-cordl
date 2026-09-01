#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\DsaPublicBcpgKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__DsaPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x369d0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                             ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x369d2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x369d450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::GetEncoded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x369d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::Encode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x369d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_G)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369d64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_G", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.get_P
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_P)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369d664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_P", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.get_Q
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_Q)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369d67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_Q", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::*)()>(
    &::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_Y)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369d694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_set_p(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_set_q(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_set_g(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger*& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::Org::BouncyCastle::Bcpg::MPInteger* const& Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::__cordl_internal_set_y(::Org::BouncyCastle::Bcpg::MPInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g,
                                                             ::Org::BouncyCastle::Math::BigInteger* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, q, g, y);
}
inline ::StringW Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::GetEncoded() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_G() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_G", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_P() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_P", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_Q() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_Q", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::get_Y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                                        ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* y) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*>(p, q, g, y));
}
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::operator ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr ::Org::BouncyCastle::Bcpg::IBcpgKey* Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::i___Org__BouncyCastle__Bcpg__IBcpgKey() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::IBcpgKey*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey::DsaPublicBcpgKey() {}
