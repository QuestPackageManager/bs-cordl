#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\ModDetectionCodePacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ModDetectionCodePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x369be0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x369e804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket.GetDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)()>(&::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::GetDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x369e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { "GetDigest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::Encode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x369e960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__cordl_internal_set_digest(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
inline void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor(::ArrayW<uint8_t> digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::ModDetectionCodePacket::GetDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), { "GetDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ModDetectionCodePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* Org::BouncyCastle::Bcpg::ModDetectionCodePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket* Org::BouncyCastle::Bcpg::ModDetectionCodePacket::New_ctor(::ArrayW<uint8_t> digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::ModDetectionCodePacket() {}
