#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerTaggedObjectParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerTaggedObjectParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObjectParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerTaggedObjectParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerTaggedObjectParser::*)(int32_t, int32_t, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::BerTaggedObjectParser::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x368cbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerTaggedObjectParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerTaggedObjectParser::*)(bool, int32_t, ::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(
    &::Org::BouncyCastle::Asn1::BerTaggedObjectParser::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3683cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerTaggedObjectParser.get_IsConstructed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::BerTaggedObjectParser::*)()>(&::Org::BouncyCastle::Asn1::BerTaggedObjectParser::get_IsConstructed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368cc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "get_IsConstructed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerTaggedObjectParser.get_TagNo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::BerTaggedObjectParser::*)()>(&::Org::BouncyCastle::Asn1::BerTaggedObjectParser::get_TagNo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "get_TagNo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerTaggedObjectParser.GetObjectParser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::BerTaggedObjectParser::*)(int32_t, bool)>(
    &::Org::BouncyCastle::Asn1::BerTaggedObjectParser::GetObjectParser)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x368cc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "GetObjectParser", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerTaggedObjectParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::BerTaggedObjectParser::*)()>(
    &::Org::BouncyCastle::Asn1::BerTaggedObjectParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3683cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "ToAsn1Object", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_get__constructed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructed;
}
constexpr bool const& Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_get__constructed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructed;
}
constexpr void Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_set__constructed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constructed = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_get__tagNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagNumber;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_get__tagNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tagNumber;
}
constexpr void Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_set__tagNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tagNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_get__parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* const& Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_get__parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr void Org::BouncyCastle::Asn1::BerTaggedObjectParser::__cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parser = value;
}
inline void Org::BouncyCastle::Asn1::BerTaggedObjectParser::_ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream* contentStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseTag, tagNumber, contentStream);
}
inline void Org::BouncyCastle::Asn1::BerTaggedObjectParser::_ctor(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1StreamParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructed, tagNumber, parser);
}
inline bool Org::BouncyCastle::Asn1::BerTaggedObjectParser::get_IsConstructed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "get_IsConstructed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::BerTaggedObjectParser::get_TagNo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "get_TagNo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::BerTaggedObjectParser::GetObjectParser(int32_t tag, bool isExplicit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "GetObjectParser", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(this, ___internal_method, tag, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::BerTaggedObjectParser::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(), { "ToAsn1Object", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::BerTaggedObjectParser* Org::BouncyCastle::Asn1::BerTaggedObjectParser::New_ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream* contentStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(baseTag, tagNumber, contentStream));
}
inline ::Org::BouncyCastle::Asn1::BerTaggedObjectParser* Org::BouncyCastle::Asn1::BerTaggedObjectParser::New_ctor(bool constructed, int32_t tagNumber,
                                                                                                                  ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerTaggedObjectParser*>(constructed, tagNumber, parser));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
constexpr Org::BouncyCastle::Asn1::BerTaggedObjectParser::operator ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser"
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* Org::BouncyCastle::Asn1::BerTaggedObjectParser::i___Org__BouncyCastle__Asn1__Asn1TaggedObjectParser() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::BerTaggedObjectParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::BerTaggedObjectParser::i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerTaggedObjectParser::BerTaggedObjectParser() {}
