#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsEnvelopedDataParser.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EnvelopedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36abb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x36abc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser.get_EncryptionAlgorithmID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36abf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "get_EncryptionAlgorithmID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser.get_EncryptionAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36abf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "get_EncryptionAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser.get_EncryptionAlgParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x36abf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "get_EncryptionAlgParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser.GetRecipientInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::RecipientInformationStore* (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36abf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "GetRecipientInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser.GetUnprotectedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetUnprotectedAttributes)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x36abf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "GetUnprotectedAttributes", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get_recipientInfoStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoStore;
}
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* const& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get_recipientInfoStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoStore;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientInfoStore = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser*& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get_envelopedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envelopedData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* const& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get_envelopedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envelopedData;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___envelopedData = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get__encAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get__encAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encAlg;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_set__encAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get__unprotectedAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprotectedAttributes;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get__unprotectedAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprotectedAttributes;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_set__unprotectedAttributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unprotectedAttributes = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get__attrNotRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attrNotRead;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_get__attrNotRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attrNotRead;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__cordl_internal_set__attrNotRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attrNotRead = value;
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor(::ArrayW<uint8_t> envelopedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, envelopedData);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor(::System::IO::Stream* envelopedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, envelopedData);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgorithmID() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "get_EncryptionAlgorithmID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "get_EncryptionAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "get_EncryptionAlgParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetRecipientInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "GetRecipientInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformationStore*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetUnprotectedAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(), { "GetUnprotectedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser* Org::BouncyCastle::Cms::CmsEnvelopedDataParser::New_ctor(::ArrayW<uint8_t> envelopedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(envelopedData));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser* Org::BouncyCastle::Cms::CmsEnvelopedDataParser::New_ctor(::System::IO::Stream* envelopedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataParser*>(envelopedData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataParser::CmsEnvelopedDataParser() {}
