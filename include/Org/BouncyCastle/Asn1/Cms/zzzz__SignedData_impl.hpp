#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\SignedData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignedData* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::SignedData::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x335fbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignedData::*)(
    ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x33602d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.CalculateVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (
    ::Org::BouncyCastle::Asn1::Cms::SignedData::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*,
                                                   ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Asn1::Cms::SignedData::CalculateVersion)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x33603e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(),
                                                             { "CalculateVersion",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.CheckForVersion3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Cms::SignedData::*)(::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::CheckForVersion3)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3360a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "CheckForVersion3", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignedData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::_ctor)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x335fc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3360cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_DigestAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_DigestAlgorithms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3360cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_DigestAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_EncapContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_EncapContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3360cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_EncapContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_Certificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_Certificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3360cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_Certificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_CRLs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignedData::get_CRLs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3360cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_CRLs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_SignerInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_SignerInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3360cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_SignerInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3360ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_digestAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithms;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_digestAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithms;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_digestAlgorithms(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgorithms = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentInfo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_certificates(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificates = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crls;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crls;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crls = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_signerInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfos;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_signerInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfos;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_signerInfos(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signerInfos = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certsBer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certsBer;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certsBer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certsBer;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_certsBer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certsBer = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crlsBer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlsBer;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crlsBer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlsBer;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_crlsBer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlsBer = value;
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version1(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version1", ::Org::BouncyCastle::Asn1::Cms::SignedData*>(std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version1", ::Org::BouncyCastle::Asn1::Cms::SignedData*>();
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version3(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version3", ::Org::BouncyCastle::Asn1::Cms::SignedData*>(std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version3() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version3", ::Org::BouncyCastle::Asn1::Cms::SignedData*>();
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version4(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version4", ::Org::BouncyCastle::Asn1::Cms::SignedData*>(std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version4() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version4", ::Org::BouncyCastle::Asn1::Cms::SignedData*>();
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version5(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version5", ::Org::BouncyCastle::Asn1::Cms::SignedData*>(std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version5() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version5", ::Org::BouncyCastle::Asn1::Cms::SignedData*>();
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedData* Org::BouncyCastle::Asn1::Cms::SignedData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignedData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo,
                                                            ::Org::BouncyCastle::Asn1::Asn1Set* certificates, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                            ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digestAlgorithms, contentInfo, certificates, crls, signerInfos);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentOid,
                                                                                                         ::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                                                                         ::Org::BouncyCastle::Asn1::Asn1Set* signerInfs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(),
                                                           { "CalculateVersion",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method, contentOid, certs, crls, signerInfs);
}
inline bool Org::BouncyCastle::Asn1::Cms::SignedData::CheckForVersion3(::Org::BouncyCastle::Asn1::Asn1Set* signerInfs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "CheckForVersion3", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signerInfs);
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_DigestAlgorithms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_DigestAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Asn1::Cms::SignedData::get_EncapContentInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_EncapContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_Certificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_Certificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_CRLs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_CRLs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_SignerInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), { "get_SignerInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::SignedData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedData* Org::BouncyCastle::Asn1::Cms::SignedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms,
                                                                                                      ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo,
                                                                                                      ::Org::BouncyCastle::Asn1::Asn1Set* certificates, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                                                                      ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::SignedData*>(digestAlgorithms, contentInfo, certificates, crls, signerInfos));
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedData* Org::BouncyCastle::Asn1::Cms::SignedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::SignedData*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedData::SignedData() {}
