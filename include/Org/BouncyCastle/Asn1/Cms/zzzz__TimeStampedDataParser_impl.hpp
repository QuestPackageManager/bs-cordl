#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/TimeStampedDataParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__TimeStampedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Evidence_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__MetaData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x3361854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::GetInstance)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3361c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser.get_DataUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::get_DataUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser.get_MetaData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::MetaData* (::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::get_MetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser* (::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser.GetTemporalEvidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Evidence* (::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::GetTemporalEvidence)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3361d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_dataUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataUri;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_dataUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataUri;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataUri = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData*& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_metaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metaData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData* const& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_metaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metaData;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metaData = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* const& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1OctetStringParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence*& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_temporalEvidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalEvidence;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence* const& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_temporalEvidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalEvidence;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___temporalEvidence = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser* const& Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::__cordl_internal_set_parser(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parser = value;
}
inline void Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parser);
}
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::get_DataUri() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::get_MetaData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::MetaData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::get_Content() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::GetTemporalEvidence() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Evidence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser*>(parser));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser::TimeStampedDataParser() {}
