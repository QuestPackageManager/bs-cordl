#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerOctetStringParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3685688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.GetOctetStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368e624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(), { "GetOctetStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x368e62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(), { "ToAsn1Object", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*& Org::BouncyCastle::Asn1::DerOctetStringParser::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* const& Org::BouncyCastle::Asn1::DerOctetStringParser::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Asn1::DerOctetStringParser::__cordl_internal_set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
inline void Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(), { "GetOctetStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(), { "ToAsn1Object", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerOctetStringParser* Org::BouncyCastle::Asn1::DerOctetStringParser::New_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(stream));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
constexpr Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Org::BouncyCastle::Asn1::DerOctetStringParser::i___Org__BouncyCastle__Asn1__Asn1OctetStringParser() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::DerOctetStringParser::i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerOctetStringParser::DerOctetStringParser() {}
