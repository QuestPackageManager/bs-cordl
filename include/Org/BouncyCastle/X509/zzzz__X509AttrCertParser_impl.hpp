#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509AttrCertParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509AttrCertParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.ReadDerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (
    ::Org::BouncyCastle::X509::X509AttrCertParser::*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(&::Org::BouncyCastle::X509::X509AttrCertParser::ReadDerCertificate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x3646378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(),
                                                                                           { "ReadDerCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.GetCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::X509AttrCertParser::*)()>(
    &::Org::BouncyCastle::X509::X509AttrCertParser::GetCertificate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x36465c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "GetCertificate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.ReadPemCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::X509AttrCertParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509AttrCertParser::ReadPemCertificate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x364684c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadPemCertificate", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.ReadAttrCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::X509AttrCertParser::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCert)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x364690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCert", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.ReadAttrCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509AttrCertParser::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCerts)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3646c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCerts", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.ReadAttrCert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate* (::Org::BouncyCastle::X509::X509AttrCertParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCert)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x3646980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCert", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser.ReadAttrCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509AttrCertParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCerts)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3646cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCerts", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509AttrCertParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509AttrCertParser::*)()>(&::Org::BouncyCastle::X509::X509AttrCertParser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3646e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_get_sData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sData;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_get_sData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sData;
}
constexpr void Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_set_sData(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sData = value;
}
constexpr int32_t& Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_get_sDataObjectCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sDataObjectCount;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_get_sDataObjectCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sDataObjectCount;
}
constexpr void Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_set_sDataObjectCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sDataObjectCount = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_get_currentStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_get_currentStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentStream;
}
constexpr void Org::BouncyCastle::X509::X509AttrCertParser::__cordl_internal_set_currentStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentStream = value;
}
inline void Org::BouncyCastle::X509::X509AttrCertParser::setStaticF_PemAttrCertParser(::Org::BouncyCastle::X509::PemParser* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::X509::PemParser*, "PemAttrCertParser", ::Org::BouncyCastle::X509::X509AttrCertParser*>(
      std::forward<::Org::BouncyCastle::X509::PemParser*>(value));
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::X509AttrCertParser::getStaticF_PemAttrCertParser() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::X509::PemParser*, "PemAttrCertParser", ::Org::BouncyCastle::X509::X509AttrCertParser*>();
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509AttrCertParser::ReadDerCertificate(::Org::BouncyCastle::Asn1::Asn1InputStream* dIn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(),
                                                                                         { "ReadDerCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1InputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509AttrCertParser::GetCertificate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "GetCertificate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509AttrCertParser::ReadPemCertificate(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadPemCertificate", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCert(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCert", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, input);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCerts(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCerts", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCert(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCert", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate*>(this, ___internal_method, inStream);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509AttrCertParser::ReadAttrCerts(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { "ReadAttrCerts", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, inStream);
}
inline void Org::BouncyCastle::X509::X509AttrCertParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509AttrCertParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509AttrCertParser* Org::BouncyCastle::X509::X509AttrCertParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509AttrCertParser*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509AttrCertParser::X509AttrCertParser() {}
