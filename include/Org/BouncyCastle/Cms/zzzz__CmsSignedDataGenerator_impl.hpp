#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedDataGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::*)(
    ::Org::BouncyCastle::Cms::CmsSignedGenerator*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::StringW, ::StringW,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x36b3e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::*)(
    ::Org::BouncyCastle::Cms::CmsSignedGenerator*, ::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x36b3c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf.get_DigestAlgorithmID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::get_DigestAlgorithmID)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36b4e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(), { "get_DigestAlgorithmID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf.get_SignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* (::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b6444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(), { "get_SignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf.get_UnsignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* (::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b644c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(), { "get_UnsignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf.ToSignerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerInfo* (
    ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Cms::CmsProcessable*,
                                                                   ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::ToSignerInfo)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x36b4f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(),
                                                             { "ToSignerInfo",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator*& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outer;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_outer(::Org::BouncyCastle::Cms::CmsSignedGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outer = value;
}
constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory*& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_sigCalc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigCalc;
}
constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_sigCalc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigCalc;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_sigCalc(::Org::BouncyCastle::Crypto::ISignatureFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigCalc = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_signerIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_signerIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerIdentifier;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signerIdentifier = value;
}
constexpr ::StringW& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_digestOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_digestOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOID;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_digestOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestOID = value;
}
constexpr ::StringW& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_encOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encOID;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_encOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encOID;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_encOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encOID = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_sAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sAttr;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_sAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sAttr;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sAttr = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_unsAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsAttr;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_unsAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsAttr;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsAttr = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_baseSignedTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseSignedTable;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_get_baseSignedTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseSignedTable;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::__cordl_internal_set_baseSignedTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseSignedTable = value;
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::_ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                            ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW digestOID, ::StringW encOID,
                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr, baseSignedTable);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::_ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::ISignatureFactory* sigCalc,
                                                                            ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier,
                                                                            ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr,
                                                                            ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::ISignatureFactory*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, sigCalc, signerIdentifier, sAttr, unsAttr, baseSignedTable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::get_DigestAlgorithmID() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(), { "get_DigestAlgorithmID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::get_SignedAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(), { "get_SignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::get_UnsignedAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(), { "get_UnsignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::ToSignerInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                                                                          ::Org::BouncyCastle::Cms::CmsProcessable* content,
                                                                                                                          ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(),
                                                           { "ToSignerInfo",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>(this, ___internal_method, contentType, content, random);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*
Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::New_ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                   ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW digestOID, ::StringW encOID,
                                                                   ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr,
                                                                   ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr, baseSignedTable));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*
Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::New_ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator* outer, ::Org::BouncyCastle::Crypto::ISignatureFactory* sigCalc,
                                                                   ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* sAttr,
                                                                   ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf*>(outer, sigCalc, signerIdentifier, sAttr, unsAttr, baseSignedTable));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataGenerator_SignerInf::CmsSignedDataGenerator_SignerInf() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x36b2964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36b29f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36b2a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                           { "AddSigner",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x36b3044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                             { "AddSigner",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x36b32b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                            { "AddSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>, ::StringW,
                                                                                                                  ::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x36b3358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                           { "AddSigner",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36b3430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                            { "AddSigner",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*,
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x36b34ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                             { "AddSigner",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36b367c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                { "AddSigner",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>, ::StringW, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x36b3738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                            { "AddSigner",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36b3848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                            { "AddSigner",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36b3904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                             { "AddSigner",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36b39bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                         { "AddSigner",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>, ::StringW, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36b3a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                            { "AddSigner",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSignerInfoGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Cms::SignerInfoGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSignerInfoGenerator)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x36b3b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                           { "AddSignerInfoGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.doAddSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::StringW, ::StringW, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*,
    ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::doAddSigner)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x36b317c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                { "doAddSigner",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(),
                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36b3f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(), { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (
    ::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::StringW, ::Org::BouncyCastle::Cms::CmsProcessable*, bool)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0xe54;
  constexpr static std::size_t addrs = 0x36b4018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, bool)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36b3f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataGenerator.GenerateCounterSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (
    ::Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(&::Org::BouncyCastle::Cms::CmsSignedDataGenerator::GenerateCounterSigners)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36b5e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                           { "GenerateCounterSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::CmsSignedDataGenerator::__cordl_internal_get_signerInfs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::CmsSignedDataGenerator::__cordl_internal_get_signerInfs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfs;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator::__cordl_internal_set_signerInfs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signerInfs = value;
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedDataGenerator::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                      ::StringW digestOID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, cert, digestOID);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                      ::StringW encryptionOID, ::StringW digestOID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                           { "AddSigner",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, cert, encryptionOID, digestOID);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, subjectKeyID, digestOID);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID,
                                                                      ::StringW digestOID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                         { "AddSigner",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, subjectKeyID, encryptionOID, digestOID);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                      ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                      ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, cert, digestOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                      ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                      ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, cert, encryptionOID, digestOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID,
                                                                      ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                              { "AddSigner",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, subjectKeyID, digestOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID,
                                                                      ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr,
                                                                      ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, subjectKeyID, encryptionOID, digestOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                      ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen,
                                                                      ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, cert, digestOID, signedAttrGen, unsignedAttrGen);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::X509::X509Certificate* cert,
                                                                      ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen,
                                                                      ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                           { "AddSigner",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, cert, encryptionOID, digestOID, signedAttrGen, unsignedAttrGen);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID,
                                                                      ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen,
                                                                      ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                       { "AddSigner",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, subjectKeyID, digestOID, signedAttrGen, unsignedAttrGen);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID,
                                                                      ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen,
                                                                      ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                          { "AddSigner",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, subjectKeyID, encryptionOID, digestOID, signedAttrGen, unsignedAttrGen);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSignerInfoGenerator(::Org::BouncyCastle::Cms::SignerInfoGenerator* signerInfoGenerator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                         { "AddSignerInfoGenerator", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInfoGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signerInfoGenerator);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataGenerator::doAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                        ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, ::StringW encryptionOID, ::StringW digestOID,
                                                                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen,
                                                                        ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen,
                                                                        ::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                              { "doAddSigner",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, signerIdentifier, encryptionOID, digestOID, signedAttrGen, unsignedAttrGen, baseSignedTable);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(), { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*>(this, ___internal_method, content);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(::StringW signedContentType, ::Org::BouncyCastle::Cms::CmsProcessable* content,
                                                                                                         bool encapsulate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*>(this, ___internal_method, signedContentType, content, encapsulate);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, bool encapsulate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                         { "Generate", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*>(this, ___internal_method, content, encapsulate);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::CmsSignedDataGenerator::GenerateCounterSigners(::Org::BouncyCastle::Cms::SignerInformation* signer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(),
                                                                                         { "GenerateCounterSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*>(this, ___internal_method, signer);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator* Org::BouncyCastle::Cms::CmsSignedDataGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataGenerator* Org::BouncyCastle::Cms::CmsSignedDataGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataGenerator::CmsSignedDataGenerator() {}
