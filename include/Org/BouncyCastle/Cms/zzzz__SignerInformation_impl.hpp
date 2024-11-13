#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/SignerInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__DigestInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::SignerInfo*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Cms::CmsProcessable*, ::Org::BouncyCastle::Cms::IDigestCalculator*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2626328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::IDigestCalculator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2648f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_IsCounterSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_IsCounterSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2648fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_IsCounterSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2648fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_ContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_SignerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerID* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_SignerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2648fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_SignerID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2648fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgorithmID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2648fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_DigestAlgorithmID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2648ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_DigestAlgOid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x264901c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_DigestAlgParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetContentDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetContentDigest)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2649054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "GetContentDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgorithmID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2649110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_EncryptionAlgorithmID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2649118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_EncryptionAlgOid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2649144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_EncryptionAlgParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_SignedAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x264917c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_SignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_UnsignedAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26491ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "get_UnsignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetSignature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x262d364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "GetSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetCounterSignatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetCounterSignatures)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x264925c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "GetCounterSignatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetEncodedSignedAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetEncodedSignedAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2649acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "GetEncodedSignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.DoVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::DoVerify)> {
  constexpr static std::size_t size = 0x12b0;
  constexpr static std::size_t addrs = 0x2649b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "DoVerify", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::IsNull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x264b660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "IsNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.DerDecode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::DigestInfo* (
    ::Org::BouncyCastle::Cms::SignerInformation::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::SignerInformation::DerDecode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x264b6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "DerDecode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.VerifyDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cms::SignerInformation::VerifyDigest)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x264afd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "VerifyDigest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::Verify)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x264b7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::Verify)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x264b9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.ToSignerInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerInfo* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::ToSignerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264ba14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "ToSignerInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSingleValuedSignedAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (
    ::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(&::Org::BouncyCastle::Cms::SignerInformation::GetSingleValuedSignedAttribute)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x264add8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "GetSingleValuedSignedAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSigningTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::Time* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetSigningTime)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x264b868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                               "GetSigningTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.ReplaceUnsignedAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::SignerInformation* (*)(::Org::BouncyCastle::Cms::SignerInformation*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
        &::Org::BouncyCastle::Cms::SignerInformation::ReplaceUnsignedAttributes)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x264ba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "ReplaceUnsignedAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.AddCounterSigners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Cms::SignerInformation* (*)(::Org::BouncyCastle::Cms::SignerInformation*, ::Org::BouncyCastle::Cms::SignerInformationStore*)>(
        &::Org::BouncyCastle::Cms::SignerInformation::AddCounterSigners)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x264bb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "AddCounterSigners", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::SignerID*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_sid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sid;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerID*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_sid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sid;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_sid(::Org::BouncyCastle::Cms::SignerID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerInfo*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignerInfo*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::SignerInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithm;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_encryptionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const&
Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_encryptionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionAlgorithm;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_encryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptionAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeSet;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeSet;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_signedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signedAttributeSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeSet;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeSet;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_unsignedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unsignedAttributeSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessable*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsProcessable*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_content(::Org::BouncyCastle::Cms::CmsProcessable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_signature(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestCalculator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::IDigestCalculator*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestCalculator;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_digestCalculator(::Org::BouncyCastle::Cms::IDigestCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestCalculator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_resultDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultDigest;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_resultDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultDigest;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_resultDigest(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeTable;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeTable;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_signedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signedAttributeTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeTable;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeTable;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_unsignedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unsignedAttributeTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_isCounterSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCounterSignature;
}
constexpr bool const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_isCounterSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCounterSignature;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_isCounterSignature(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCounterSignature = value;
}
inline void Org::BouncyCastle::Cms::SignerInformation::setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::SignerInformation::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get>();
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info,
                                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                                                        ::Org::BouncyCastle::Cms::CmsProcessable* content,
                                                                                                        ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::SignerInformation*>(info, contentType, content, digestCalculator));
}
inline void Org::BouncyCastle::Cms::SignerInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                             ::Org::BouncyCastle::Cms::CmsProcessable* content, ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::IDigestCalculator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, contentType, content, digestCalculator);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::New_ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::SignerInformation*>(baseInfo));
}
inline void Org::BouncyCastle::Cms::SignerInformation::_ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseInfo);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::get_IsCounterSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_IsCounterSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_ContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerID* Org::BouncyCastle::Cms::SignerInformation::get_SignerID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_SignerID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerID*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Cms::SignerInformation::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgorithmID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_DigestAlgorithmID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_DigestAlgOid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_DigestAlgParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::SignerInformation::GetContentDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "GetContentDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgorithmID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_EncryptionAlgorithmID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_EncryptionAlgOid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_EncryptionAlgParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::get_SignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_SignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::get_UnsignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "get_UnsignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::SignerInformation::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "GetSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::SignerInformation::GetCounterSignatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "GetCounterSignatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::SignerInformation::GetEncodedSignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "GetEncodedSignedAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::DoVerify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "DoVerify", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::IsNull(::Org::BouncyCastle::Asn1::Asn1Encodable* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "IsNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* Org::BouncyCastle::Cms::SignerInformation::DerDecode(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "DerDecode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DigestInfo*, false>(this, ___internal_method, encoding);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::VerifyDigest(::ArrayW<uint8_t, ::Array<uint8_t>*> digest, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "VerifyDigest", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, digest, key, signature);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pubKey);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::Verify(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::SignerInformation::ToSignerInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "ToSignerInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::GetSingleValuedSignedAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrOID,
                                                                                                                        ::StringW printableName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "GetSingleValuedSignedAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method, attrOID, printableName);
}
inline ::Org::BouncyCastle::Asn1::Cms::Time* Org::BouncyCastle::Cms::SignerInformation::GetSigningTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                                                             "GetSigningTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Time*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::ReplaceUnsignedAttributes(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                                                                         ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "ReplaceUnsignedAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*, false>(nullptr, ___internal_method, signerInformation, unsignedAttributes);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::AddCounterSigners(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                                                                 ::Org::BouncyCastle::Cms::SignerInformationStore* counterSigners) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SignerInformation*>::get(), "AddCounterSigners", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::SignerInformationStore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*, false>(nullptr, ___internal_method, signerInformation, counterSigners);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SignerInformation::SignerInformation() {}
