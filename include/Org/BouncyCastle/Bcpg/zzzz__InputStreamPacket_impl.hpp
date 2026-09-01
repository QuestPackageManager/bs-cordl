#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\InputStreamPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::InputStreamPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::InputStreamPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::InputStreamPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3699fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::InputStreamPacket.GetInputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::BcpgInputStream* (::Org::BouncyCastle::Bcpg::InputStreamPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::InputStreamPacket::GetInputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369d01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>(), { "GetInputStream", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& Org::BouncyCastle::Bcpg::InputStreamPacket::__cordl_internal_get_bcpgIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgIn;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* const& Org::BouncyCastle::Bcpg::InputStreamPacket::__cordl_internal_get_bcpgIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bcpgIn;
}
constexpr void Org::BouncyCastle::Bcpg::InputStreamPacket::__cordl_internal_set_bcpgIn(::Org::BouncyCastle::Bcpg::BcpgInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bcpgIn = value;
}
inline void Org::BouncyCastle::Bcpg::InputStreamPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::InputStreamPacket::GetInputStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>(), { "GetInputStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::InputStreamPacket* Org::BouncyCastle::Bcpg::InputStreamPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::InputStreamPacket*>(bcpgIn));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket::InputStreamPacket() {}
