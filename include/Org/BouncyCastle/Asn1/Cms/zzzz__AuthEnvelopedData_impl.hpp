#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\AuthEnvelopedData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)(
    ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*,
    ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33566d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x335676c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3356bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3356bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_OriginatorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_OriginatorInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_OriginatorInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_RecipientInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_RecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_RecipientInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_AuthEncryptedContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_AuthEncryptedContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_AuthEncryptedContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_AuthAttrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_AuthAttrs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_AuthAttrs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_Mac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_Mac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_Mac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.get_UnauthAttrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_UnauthAttrs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3356d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_UnauthAttrs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3356d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originatorInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_recipientInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfos;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_recipientInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfos;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientInfos = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_authEncryptedContentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authEncryptedContentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_authEncryptedContentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authEncryptedContentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_authEncryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authEncryptedContentInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_authAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_authAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authAttrs = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_mac(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_unauthAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_get_unauthAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::__cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unauthAttrs = value;
}
inline void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                   ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs,
                                                                   ::Org::BouncyCastle::Asn1::Asn1OctetString* mac, ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originatorInfo, recipientInfos, authEncryptedContentInfo, authAttrs, mac, unauthAttrs);
}
inline void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_OriginatorInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_OriginatorInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_RecipientInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_RecipientInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_AuthEncryptedContentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_AuthEncryptedContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_AuthAttrs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_AuthAttrs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_Mac() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_Mac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::get_UnauthAttrs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), { "get_UnauthAttrs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*
Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                          ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* authEncryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs,
                                                          ::Org::BouncyCastle::Asn1::Asn1OctetString* mac, ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(originatorInfo, recipientInfos, authEncryptedContentInfo, authAttrs, mac, unauthAttrs));
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedData::AuthEnvelopedData() {}
