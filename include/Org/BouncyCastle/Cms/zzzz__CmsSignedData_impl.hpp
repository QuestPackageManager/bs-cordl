#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedData_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::Org::BouncyCastle::Cms::CmsSignedData*)>(&::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36ae498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36ae4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x36ae6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::System::Collections::IDictionary*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36ae7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x36ae8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36ae910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36ae740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::System::Collections::IDictionary*, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36ae858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedData::*)(::Org::BouncyCastle::Asn1::Cms::ContentInfo*)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x36ae5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(&::Org::BouncyCastle::Cms::CmsSignedData::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36ae930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.GetSignerInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedData::GetSignerInfos)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x36ae954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetSignerInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.GetAttributeCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedData::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36af168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetAttributeCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedData::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::GetCertificates)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36af840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.GetCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedData::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::GetCrls)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36afa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetCrls", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.get_SignedContentTypeOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(&::Org::BouncyCastle::Cms::CmsSignedData::get_SignedContentTypeOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36afcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_SignedContentTypeOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.get_SignedContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedData::get_SignedContentType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36afcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_SignedContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.get_SignedContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsProcessable* (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedData::get_SignedContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36afd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_SignedContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.get_ContentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedData::get_ContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36afd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_ContentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::CmsSignedData::*)()>(&::Org::BouncyCastle::Cms::CmsSignedData::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36afd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::CmsSignedData::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsSignedData::GetEncoded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36afd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetEncoded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.ReplaceSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (*)(::Org::BouncyCastle::Cms::CmsSignedData*, ::Org::BouncyCastle::Cms::SignerInformationStore*)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::ReplaceSigners)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x36afd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                            { "ReplaceSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedData.ReplaceCertificatesAndCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsSignedData* (*)(::Org::BouncyCastle::Cms::CmsSignedData*, ::Org::BouncyCastle::X509::Store::IX509Store*,
                                                                                                    ::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*)>(
    &::Org::BouncyCastle::Cms::CmsSignedData::ReplaceCertificatesAndCrls)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x36b04f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                { "ReplaceCertificatesAndCrls",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsProcessable*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_signedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedContent;
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessable* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_signedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedContent;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_signedContent(::Org::BouncyCastle::Cms::CmsProcessable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedContent = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedData*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_signedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedData* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_signedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedData;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_signedData(::Org::BouncyCastle::Asn1::Cms::SignedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedData = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentInfo = value;
}
constexpr ::Org::BouncyCastle::Cms::SignerInformationStore*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_signerInfoStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfoStore;
}
constexpr ::Org::BouncyCastle::Cms::SignerInformationStore* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_signerInfoStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfoStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signerInfoStore = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_attrCertStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertStore;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_attrCertStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCertStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_attrCertStore(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrCertStore = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_certificateStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateStore;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_certificateStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_certificateStore(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certificateStore = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_crlStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlStore;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_crlStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_crlStore(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlStore = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_hashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashes;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_get_hashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashes;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedData::__cordl_internal_set_hashes(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashes = value;
}
inline void Org::BouncyCastle::Cms::CmsSignedData::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::CmsSignedData*>(std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedData::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::CmsSignedData*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::Org::BouncyCastle::Cms::CmsSignedData* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::ArrayW<uint8_t> sigBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::ArrayW<uint8_t> sigBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedContent, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::System::Collections::IDictionary* hashes, ::ArrayW<uint8_t> sigBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashes, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::System::IO::Stream* sigData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedContent, sigData);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::System::IO::Stream* sigData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigData);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedContent, sigData);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::System::Collections::IDictionary* hashes, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashes, sigData);
}
inline void Org::BouncyCastle::Cms::CmsSignedData::_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigData);
}
inline int32_t Org::BouncyCastle::Cms::CmsSignedData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::CmsSignedData::GetSignerInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetSignerInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedData::GetAttributeCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetAttributeCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedData::GetCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedData::GetCrls(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetCrls", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::StringW Org::BouncyCastle::Cms::CmsSignedData::get_SignedContentTypeOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_SignedContentTypeOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::CmsSignedData::get_SignedContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_SignedContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsProcessable* Org::BouncyCastle::Cms::CmsSignedData::get_SignedContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_SignedContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsProcessable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Cms::CmsSignedData::get_ContentInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "get_ContentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CmsSignedData::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CmsSignedData::GetEncoded(::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), { "GetEncoded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::ReplaceSigners(::Org::BouncyCastle::Cms::CmsSignedData* signedData,
                                                                                                      ::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                       { "ReplaceSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*>(nullptr, ___internal_method, signedData, signerInformationStore);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::ReplaceCertificatesAndCrls(::Org::BouncyCastle::Cms::CmsSignedData* signedData,
                                                                                                                  ::Org::BouncyCastle::X509::Store::IX509Store* x509Certs,
                                                                                                                  ::Org::BouncyCastle::X509::Store::IX509Store* x509Crls,
                                                                                                                  ::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedData*>(),
                                                           { "ReplaceCertificatesAndCrls",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSignedData*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsSignedData*>(nullptr, ___internal_method, signedData, x509Certs, x509Crls, x509AttrCerts);
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::Org::BouncyCastle::Cms::CmsSignedData* c) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(c));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::ArrayW<uint8_t> sigBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::ArrayW<uint8_t> sigBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(signedContent, sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::System::Collections::IDictionary* hashes, ::ArrayW<uint8_t> sigBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(hashes, sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::System::IO::Stream* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(signedContent, sigData));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::System::IO::Stream* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(sigData));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent,
                                                                                                ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(signedContent, sigData));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::System::Collections::IDictionary* hashes, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(hashes, sigData));
}
inline ::Org::BouncyCastle::Cms::CmsSignedData* Org::BouncyCastle::Cms::CmsSignedData::New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedData*>(sigData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedData::CmsSignedData() {}
