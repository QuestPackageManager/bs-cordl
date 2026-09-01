#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\EnvelopedData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EnvelopedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Attributes_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)(
    ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3359514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)(
    ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*, ::Org::BouncyCastle::Asn1::Cms::Attributes*)>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x335985c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::Attributes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3359914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::EnvelopedData* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3359b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::EnvelopedData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::EnvelopedData::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3359b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.get_OriginatorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_OriginatorInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_OriginatorInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.get_RecipientInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_RecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_RecipientInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.get_EncryptedContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_EncryptedContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_EncryptedContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.get_UnprotectedAttrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_UnprotectedAttrs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3359be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_UnprotectedAttrs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::EnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3359bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EnvelopedData.CalculateVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::EnvelopedData::CalculateVersion)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x33595b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                             { "CalculateVersion",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originatorInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_recipientInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfos;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_recipientInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfos;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientInfos = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_encryptedContentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedContentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* const& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_encryptedContentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedContentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptedContentInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_unprotectedAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unprotectedAttrs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_get_unprotectedAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unprotectedAttrs;
}
constexpr void Org::BouncyCastle::Asn1::Cms::EnvelopedData::__cordl_internal_set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unprotectedAttrs = value;
}
inline void Org::BouncyCastle::Asn1::Cms::EnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                               ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originatorInfo, recipientInfos, encryptedContentInfo, unprotectedAttrs);
}
inline void Org::BouncyCastle::Asn1::Cms::EnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                               ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encryptedContentInfo,
                                                               ::Org::BouncyCastle::Asn1::Cms::Attributes* unprotectedAttrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::Attributes*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originatorInfo, recipientInfos, encryptedContentInfo, unprotectedAttrs);
}
inline void Org::BouncyCastle::Asn1::Cms::EnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* Org::BouncyCastle::Asn1::Cms::EnvelopedData::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* Org::BouncyCastle::Asn1::Cms::EnvelopedData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_OriginatorInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_OriginatorInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_RecipientInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_RecipientInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_EncryptedContentInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_EncryptedContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::EnvelopedData::get_UnprotectedAttrs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), { "get_UnprotectedAttrs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::EnvelopedData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::Cms::EnvelopedData::CalculateVersion(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                             ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(),
                                                           { "CalculateVersion",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, originatorInfo, recipientInfos, unprotectedAttrs);
}
inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* Org::BouncyCastle::Asn1::Cms::EnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                                                            ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encryptedContentInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(originatorInfo, recipientInfos, encryptedContentInfo, unprotectedAttrs));
}
inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* Org::BouncyCastle::Asn1::Cms::EnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                                                            ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encryptedContentInfo,
                                                                                                            ::Org::BouncyCastle::Asn1::Cms::Attributes* unprotectedAttrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(originatorInfo, recipientInfos, encryptedContentInfo, unprotectedAttrs));
}
inline ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* Org::BouncyCastle::Asn1::Cms::EnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData::EnvelopedData() {}
