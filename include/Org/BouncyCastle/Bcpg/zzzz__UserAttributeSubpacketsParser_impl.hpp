#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\UserAttributeSubpacketsParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketsParser_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser.ReadPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* (::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::*)()>(
    &::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::ReadPacket)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x36a1748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
inline void Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::ReadPacket() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser* Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*>(input));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::UserAttributeSubpacketsParser() {}
