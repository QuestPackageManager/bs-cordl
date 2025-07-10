#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedDataParser.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26632d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(
    ::Org::BouncyCastle::Cms::CmsTypedStream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2663354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2663348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::Org::BouncyCastle::Cms::CmsTypedStream*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x26633cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2663b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_DigestOids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2663bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                               "get_DigestOids", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignerInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0x2663c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                               "GetSignerInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetAttributeCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2664710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetAttributeCertificates",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2664798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetCertificates",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2664820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetCrls", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.PopulateCertCrlSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x266459c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                               "PopulateCertCrlSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.get_SignedContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2664958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                               "get_SignedContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (::Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x2664960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                               "GetSignedContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceSigners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::Org::BouncyCastle::Cms::SignerInformationStore*,
                                                                                                            ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2664dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "ReplaceSigners", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceCertificatesAndCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (*)(::System::IO::Stream*, ::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*,
                                          ::Org::BouncyCastle::X509::Store::IX509Store*, ::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x266501c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "ReplaceCertificatesAndCrls", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsSignedDataParser.GetAsn1Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (*)(::Org::BouncyCastle::Asn1::Asn1SetParser*)>(
    &::Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26648a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetAsn1Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SetParser*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signedData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signedContentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signedContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____digests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____digestOids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signerInfoStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____crlSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificateStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____crlStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::CmsSignedDataParser::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get>();
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signedContent, sigBlock);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::System::IO::Stream* sigData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigData);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::System::IO::Stream* sigData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signedContent, sigData);
}
inline int32_t Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                             "get_DigestOids", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                             "GetSignerInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetAttributeCertificates",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetCertificates",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls(::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetCrls", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                             "PopulateCertCrlSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                             "get_SignedContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(),
                                                                             "GetSignedContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners(::System::IO::Stream* original, ::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore,
                                                                                         ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "ReplaceSigners", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, original, signerInformationStore, outStr);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls(::System::IO::Stream* original, ::Org::BouncyCastle::X509::Store::IX509Store* x509Certs,
                                                                                                     ::Org::BouncyCastle::X509::Store::IX509Store* x509Crls,
                                                                                                     ::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts, ::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "ReplaceCertificatesAndCrls", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, original, x509Certs, x509Crls, x509AttrCerts, outStr);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set(::Org::BouncyCastle::Asn1::Asn1SetParser* asn1SetParser) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsSignedDataParser*>::get(), "GetAsn1Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SetParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(nullptr, ___internal_method, asn1SetParser);
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent,
                                                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(signedContent, sigBlock));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::System::IO::Stream* sigData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(sigData));
}
inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::System::IO::Stream* sigData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsSignedDataParser*>(signedContent, sigData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsSignedDataParser::CmsSignedDataParser() {}
