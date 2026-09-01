#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\TrustPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::TrustPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::TrustPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::TrustPacket::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x369b9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::TrustPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::TrustPacket::*)(int32_t)>(&::Org::BouncyCastle::Bcpg::TrustPacket::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36a1544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::TrustPacket.GetLevelAndTrustAmount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::TrustPacket::*)()>(&::Org::BouncyCastle::Bcpg::TrustPacket::GetLevelAndTrustAmount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36a15bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { "GetLevelAndTrustAmount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::TrustPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::TrustPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::TrustPacket::Encode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36a1634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::TrustPacket::__cordl_internal_get_levelAndTrustAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelAndTrustAmount;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::TrustPacket::__cordl_internal_get_levelAndTrustAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelAndTrustAmount;
}
constexpr void Org::BouncyCastle::Bcpg::TrustPacket::__cordl_internal_set_levelAndTrustAmount(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelAndTrustAmount = value;
}
inline void Org::BouncyCastle::Bcpg::TrustPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::TrustPacket::_ctor(int32_t trustCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trustCode);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::TrustPacket::GetLevelAndTrustAmount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), { "GetLevelAndTrustAmount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::TrustPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::TrustPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::TrustPacket* Org::BouncyCastle::Bcpg::TrustPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::TrustPacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::TrustPacket* Org::BouncyCastle::Bcpg::TrustPacket::New_ctor(int32_t trustCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::TrustPacket*>(trustCode));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket::TrustPacket() {}
