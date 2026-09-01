#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\PemParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::PemParser::*)(::StringW)>(&::Org::BouncyCastle::X509::PemParser::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3644c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PemParser*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::PemParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::PemParser::ReadLine)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3644d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PemParser*>(), { "ReadLine", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser.ReadPemObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::X509::PemParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::PemParser::ReadPemObject)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3644e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PemParser*>(), { "ReadPemObject", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__header1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____header1;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__header1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____header1;
}
constexpr void Org::BouncyCastle::X509::PemParser::__cordl_internal_set__header1(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____header1 = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__header2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____header2;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__header2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____header2;
}
constexpr void Org::BouncyCastle::X509::PemParser::__cordl_internal_set__header2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____header2 = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__footer1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footer1;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__footer1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footer1;
}
constexpr void Org::BouncyCastle::X509::PemParser::__cordl_internal_set__footer1(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____footer1 = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__footer2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footer2;
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__cordl_internal_get__footer2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footer2;
}
constexpr void Org::BouncyCastle::X509::PemParser::__cordl_internal_set__footer2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____footer2 = value;
}
inline void Org::BouncyCastle::X509::PemParser::_ctor(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PemParser*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::StringW Org::BouncyCastle::X509::PemParser::ReadLine(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PemParser*>(), { "ReadLine", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::X509::PemParser::ReadPemObject(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::PemParser*>(), { "ReadPemObject", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::PemParser::New_ctor(::StringW type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::PemParser*>(type));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::PemParser::PemParser() {}
