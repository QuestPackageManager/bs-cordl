#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\CmsSignedDataParser.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36b8b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::Org::BouncyCastle::Cms::CmsTypedStream*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36b8b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsTypedStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36b8b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::Org::BouncyCastle::Cms::CmsTypedStream*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x36b8c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsTypedStream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36b9430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_DigestOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x36b9454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "get_DigestOids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignerInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos)> {
  constexpr static std::size_t size = 0x984;
  constexpr static std::size_t addrs = 0x36b94b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetSignerInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetAttributeCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36b9fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetAttributeCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36ba04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36ba0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetCrls", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.PopulateCertCrlSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x36b9e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "PopulateCertCrlSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_SignedContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ba228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "get_SignedContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignedContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x36ba230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetSignedContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::Org::BouncyCastle::Cms::SignerInformationStore*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x36ba664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
            { "ReplaceSigners", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceCertificatesAndCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*,
                                                                                 ::Org::BouncyCastle::X509::Store::IX509Store*, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x36ba900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
                                                             { "ReplaceCertificatesAndCrls",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(),
                                                                 ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetAsn1Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (*)(::Org::BouncyCastle::Asn1::Asn1SetParser*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x36ba174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetAsn1Set", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SetParser*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signedData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signedData;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__signedData(::Org::BouncyCastle::Asn1::Cms::SignedDataParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signedData = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signedContentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signedContentType;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signedContentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signedContentType;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__signedContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signedContentType = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsTypedStream*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signedContent;
}
constexpr ::Org::BouncyCastle::Cms::CmsTypedStream* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signedContent;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__signedContent(::Org::BouncyCastle::Cms::CmsTypedStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signedContent = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__digests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digests;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__digests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digests;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__digests(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____digests = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__digestOids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digestOids;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__digestOids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____digestOids;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__digestOids(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____digestOids = value;
}
constexpr ::Org::BouncyCastle::Cms::SignerInformationStore*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signerInfoStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signerInfoStore;
}
constexpr ::Org::BouncyCastle::Cms::SignerInformationStore* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__signerInfoStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signerInfoStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signerInfoStore = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__certSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certSet;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__certSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certSet;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__certSet(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certSet = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__crlSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crlSet;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__crlSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crlSet;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__crlSet(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crlSet = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__isCertCrlParsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCertCrlParsed;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__isCertCrlParsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCertCrlParsed;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__isCertCrlParsed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCertCrlParsed = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__attributeStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeStore;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__attributeStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__attributeStore(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeStore = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__certificateStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateStore;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__certificateStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__certificateStore(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certificateStore = value;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__crlStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crlStore;
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_get__crlStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crlStore;
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__cordl_internal_set__crlStore(::Org::BouncyCastle::X509::Store::IX509Store* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crlStore = value;
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::CmsSignedDataParser*>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedDataParser::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::CmsSignedDataParser*>();
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::ArrayW<uint8_t> sigBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::ArrayW<uint8_t> sigBlock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsTypedStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedContent, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::System::IO::Stream* sigData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigData);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::System::IO::Stream* sigData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsTypedStream*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedContent, sigData);
}
inline int32_t Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "get_DigestOids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetSignerInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetAttributeCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetCertificates", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetCrls", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "PopulateCertCrlSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "get_SignedContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetSignedContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners(::System::IO::Stream* original, ::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore,
                                                                                         ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
          { "ReplaceSigners", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, original, signerInformationStore, outStr);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls(::System::IO::Stream* original, ::Org::BouncyCastle::X509::Store::IX509Store* x509Certs,
                                                                                                     ::Org::BouncyCastle::X509::Store::IX509Store* x509Crls,
                                                                                                     ::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts, ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(),
                          { "ReplaceCertificatesAndCrls",
                            {},
                            { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(),
                              ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Store*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, original, x509Certs, x509Crls, x509AttrCerts, outStr);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set(::Org::BouncyCastle::Asn1::Asn1SetParser* asn1SetParser) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(), { "GetAsn1Set", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1SetParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(nullptr, ___internal_method, asn1SetParser);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::ArrayW<uint8_t> sigBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::ArrayW<uint8_t> sigBlock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(signedContent, sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::System::IO::Stream* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(sigData));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::System::IO::Stream* sigData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(signedContent, sigData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataParser::CmsSignedDataParser() {}
