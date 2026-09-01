#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\BcpgObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgObject.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::BcpgObject::*)()>(&::Org::BouncyCastle::Bcpg::BcpgObject::GetEncoded)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x369c224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgObject.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgObject::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(&::Org::BouncyCastle::Bcpg::BcpgObject::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgObject::*)()>(&::Org::BouncyCastle::Bcpg::BcpgObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x369c374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::BcpgObject::GetEncoded() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgObject::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline void Org::BouncyCastle::Bcpg::BcpgObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgObject*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::BcpgObject* Org::BouncyCastle::Bcpg::BcpgObject::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgObject*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgObject::BcpgObject() {}
