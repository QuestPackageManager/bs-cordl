#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsAuthEnvelopedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthEnvelopedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::*)(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*)>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a8a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36a8a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable.get_CryptoObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a8aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(), { "get_CryptoObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable.GetReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x36a8ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(),
                                                                                           { "GetReadable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::__cordl_internal_set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::get_CryptoObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(), { "get_CryptoObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(),
                                                                                         { "GetReadable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*>(this, ___internal_method, key);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*
Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::New_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*>(parent));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable* Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::i___Org__BouncyCastle__Cms__CmsSecureReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36a8940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36a8a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36a8964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_recipientInfoStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoStore;
}
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_recipientInfoStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipientInfoStore;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recipientInfoStore = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_originator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originator;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_originator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originator;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originator = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_authEncAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authEncAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_authEncAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authEncAlg;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authEncAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_authAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_authAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authAttrs = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_mac(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_unauthAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_get_unauthAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::__cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unauthAttrs = value;
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::ArrayW<uint8_t> authEnvData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authEnvData);
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::System::IO::Stream* authEnvData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authEnvData);
}
inline void Org::BouncyCastle::Cms::CmsAuthEnvelopedData::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentInfo);
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::ArrayW<uint8_t> authEnvData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(authEnvData));
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::System::IO::Stream* authEnvData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(authEnvData));
}
inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* Org::BouncyCastle::Cms::CmsAuthEnvelopedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*>(contentInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData::CmsAuthEnvelopedData() {}
