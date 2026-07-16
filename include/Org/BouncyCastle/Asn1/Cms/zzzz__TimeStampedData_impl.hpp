#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/TimeStampedData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__TimeStampedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Evidence_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__MetaData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)(
    ::Org::BouncyCastle::Asn1::DerIA5String*, ::Org::BouncyCastle::Asn1::Cms::MetaData*, ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Asn1::Cms::Evidence*)>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33611f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x336127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::TimeStampedData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::TimeStampedData::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x33615d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData.get_DataUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_DataUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData.get_MetaData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::MetaData* (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_MetaData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336167c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "get_MetaData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "get_Content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData.get_TemporalEvidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Evidence* (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_TemporalEvidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "get_TemporalEvidence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::TimeStampedData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::TimeStampedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::TimeStampedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3361694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_dataUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataUri;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_dataUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataUri;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_set_dataUri(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataUri = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData*& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_metaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metaData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::MetaData* const& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_metaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metaData;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_set_metaData(::Org::BouncyCastle::Asn1::Cms::MetaData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metaData = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence*& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_temporalEvidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalEvidence;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::Evidence* const& Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_get_temporalEvidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalEvidence;
}
constexpr void Org::BouncyCastle::Asn1::Cms::TimeStampedData::__cordl_internal_set_temporalEvidence(::Org::BouncyCastle::Asn1::Cms::Evidence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___temporalEvidence = value;
}
inline void Org::BouncyCastle::Asn1::Cms::TimeStampedData::_ctor(::Org::BouncyCastle::Asn1::DerIA5String* dataUri, ::Org::BouncyCastle::Asn1::Cms::MetaData* metaData,
                                                                 ::Org::BouncyCastle::Asn1::Asn1OctetString* content, ::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerIA5String*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::MetaData*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::Evidence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUri, metaData, content, temporalEvidence);
}
inline void Org::BouncyCastle::Asn1::Cms::TimeStampedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* Org::BouncyCastle::Asn1::Cms::TimeStampedData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_DataUri() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::MetaData* Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_MetaData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "get_MetaData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::MetaData*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_Content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "get_Content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::Evidence* Org::BouncyCastle::Asn1::Cms::TimeStampedData::get_TemporalEvidence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), { "get_TemporalEvidence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Evidence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::TimeStampedData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* Org::BouncyCastle::Asn1::Cms::TimeStampedData::New_ctor(::Org::BouncyCastle::Asn1::DerIA5String* dataUri,
                                                                                                                ::Org::BouncyCastle::Asn1::Cms::MetaData* metaData,
                                                                                                                ::Org::BouncyCastle::Asn1::Asn1OctetString* content,
                                                                                                                ::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(dataUri, metaData, content, temporalEvidence));
}
inline ::Org::BouncyCastle::Asn1::Cms::TimeStampedData* Org::BouncyCastle::Asn1::Cms::TimeStampedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::TimeStampedData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::TimeStampedData::TimeStampedData() {}
