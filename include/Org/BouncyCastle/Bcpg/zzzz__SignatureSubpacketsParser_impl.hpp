#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\SignatureSubpacketsParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketsParser_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser.ReadPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SignatureSubpacket* (::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::*)()>(
    &::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::ReadPacket)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x36a0280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(), { "ReadPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser.CheckData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::CheckData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x36a12b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(),
                                                { "CheckData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
inline void Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::ReadPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(), { "ReadPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::CheckData(::ArrayW<uint8_t> data, int32_t expected, int32_t bytesRead, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(),
                                              { "CheckData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, expected, bytesRead, name);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser* Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*>(input));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::SignatureSubpacketsParser() {}
