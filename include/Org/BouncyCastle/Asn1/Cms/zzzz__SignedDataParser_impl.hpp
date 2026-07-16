#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/SignedDataParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignedDataParser* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetInstance)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x335ec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x335ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335ef44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetDigestAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetDigestAlgorithms)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x335ef4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetDigestAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetEncapContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetEncapContentInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x335f030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetEncapContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCertificates)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x335f13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCrls)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x335f3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetCrls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedDataParser.GetSignerInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::SignedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetSignerInfos)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x335f660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetSignerInfos", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seq;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_set__seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____seq = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_set__version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::Object*& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__nextObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextObject;
}
constexpr ::System::Object* const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__nextObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextObject;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_set__nextObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextObject = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__certsCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certsCalled;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__certsCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certsCalled;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_set__certsCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certsCalled = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__crlsCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crlsCalled;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_get__crlsCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crlsCalled;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedDataParser::__cordl_internal_set__crlsCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crlsCalled = value;
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(nullptr, ___internal_method, o);
}
inline void Org::BouncyCastle::Asn1::Cms::SignedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedDataParser::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetDigestAlgorithms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetDigestAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetEncapContentInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetEncapContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCertificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetCrls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetCrls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::GetSignerInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(), { "GetSignerInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* Org::BouncyCastle::Asn1::Cms::SignedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser::SignedDataParser() {}
