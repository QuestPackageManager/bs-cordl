#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\MPInteger.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::MPInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::MPInteger::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::MPInteger::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x369d1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::MPInteger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::MPInteger::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Bcpg::MPInteger::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x369d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::MPInteger.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Bcpg::MPInteger::*)()>(&::Org::BouncyCastle::Bcpg::MPInteger::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369e980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::MPInteger.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::MPInteger::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(&::Org::BouncyCastle::Bcpg::MPInteger::Encode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x369e988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::MPInteger.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Bcpg::MPInteger::Encode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x369e9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(),
                                                { "Encode", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Bcpg::MPInteger::__cordl_internal_get_val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___val;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Bcpg::MPInteger::__cordl_internal_get_val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___val;
}
constexpr void Org::BouncyCastle::Bcpg::MPInteger::__cordl_internal_set_val(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___val = value;
}
inline void Org::BouncyCastle::Bcpg::MPInteger::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::MPInteger::_ctor(::Org::BouncyCastle::Math::BigInteger* val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Bcpg::MPInteger::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::MPInteger::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline void Org::BouncyCastle::Bcpg::MPInteger::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut, ::Org::BouncyCastle::Math::BigInteger* val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::MPInteger*>(),
                                              { "Encode", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bcpgOut, val);
}
inline ::Org::BouncyCastle::Bcpg::MPInteger* Org::BouncyCastle::Bcpg::MPInteger::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::MPInteger*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::MPInteger* Org::BouncyCastle::Bcpg::MPInteger::New_ctor(::Org::BouncyCastle::Math::BigInteger* val) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::MPInteger*>(val));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::MPInteger::MPInteger() {}
