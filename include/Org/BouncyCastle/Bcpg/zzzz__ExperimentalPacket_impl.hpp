#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ExperimentalPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ExperimentalPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)(::Org::BouncyCastle::Bcpg::PacketTag, ::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::ExperimentalPacket::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3699b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket.get_Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PacketTag (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::ExperimentalPacket::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369c33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), { "get_Tag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket.GetContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)()>(&::Org::BouncyCastle::Bcpg::ExperimentalPacket::GetContents)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x369c344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), { "GetContents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ExperimentalPacket::Encode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x369c3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag& Org::BouncyCastle::Bcpg::ExperimentalPacket::__cordl_internal_get_tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tag;
}
constexpr ::Org::BouncyCastle::Bcpg::PacketTag const& Org::BouncyCastle::Bcpg::ExperimentalPacket::__cordl_internal_get_tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tag;
}
constexpr void Org::BouncyCastle::Bcpg::ExperimentalPacket::__cordl_internal_set_tag(::Org::BouncyCastle::Bcpg::PacketTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tag = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::ExperimentalPacket::__cordl_internal_get_contents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contents;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::ExperimentalPacket::__cordl_internal_get_contents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contents;
}
constexpr void Org::BouncyCastle::Bcpg::ExperimentalPacket::__cordl_internal_set_contents(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contents = value;
}
inline void Org::BouncyCastle::Bcpg::ExperimentalPacket::_ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::ExperimentalPacket::get_Tag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), { "get_Tag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PacketTag>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::ExperimentalPacket::GetContents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), { "GetContents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ExperimentalPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::ExperimentalPacket* Org::BouncyCastle::Bcpg::ExperimentalPacket::New_ctor(::Org::BouncyCastle::Bcpg::PacketTag tag,
                                                                                                            ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(tag, bcpgIn));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ExperimentalPacket::ExperimentalPacket() {}
