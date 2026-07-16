#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/UserAttributePacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x369971c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>)>(
    &::Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket.GetSubpackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)()>(
    &::Org::BouncyCastle::Bcpg::UserAttributePacket::GetSubpackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369f2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), { "GetSubpackets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributePacket::Encode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x369f2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>& Org::BouncyCastle::Bcpg::UserAttributePacket::__cordl_internal_get_subpackets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpackets;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> const& Org::BouncyCastle::Bcpg::UserAttributePacket::__cordl_internal_get_subpackets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpackets;
}
constexpr void Org::BouncyCastle::Bcpg::UserAttributePacket::__cordl_internal_set_subpackets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subpackets = value;
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> subpackets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subpackets);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> Org::BouncyCastle::Bcpg::UserAttributePacket::GetSubpackets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), { "GetSubpackets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* Org::BouncyCastle::Bcpg::UserAttributePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* Org::BouncyCastle::Bcpg::UserAttributePacket::New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*> subpackets) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(subpackets));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::UserAttributePacket::UserAttributePacket() {}
