#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OutputStreamPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__OutputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OutputStreamPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OutputStreamPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::OutputStreamPacket::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x369c894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OutputStreamPacket.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::BcpgOutputStream* (::Org::BouncyCastle::Bcpg::OutputStreamPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::OutputStreamPacket::Open)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OutputStreamPacket.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OutputStreamPacket::*)()>(&::Org::BouncyCastle::Bcpg::OutputStreamPacket::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& Org::BouncyCastle::Bcpg::OutputStreamPacket::__cordl_internal_get_bcpgOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgOut;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& Org::BouncyCastle::Bcpg::OutputStreamPacket::__cordl_internal_get_bcpgOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgOut;
}
constexpr void Org::BouncyCastle::Bcpg::OutputStreamPacket::__cordl_internal_set_bcpgOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bcpgOut = value;
}
inline void Org::BouncyCastle::Bcpg::OutputStreamPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::OutputStreamPacket::Open() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OutputStreamPacket::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OutputStreamPacket* Org::BouncyCastle::Bcpg::OutputStreamPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OutputStreamPacket*>(bcpgOut));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OutputStreamPacket::OutputStreamPacket() {}
