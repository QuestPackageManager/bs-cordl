#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\SignerInformation.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::SignerInfo*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Cms::CmsProcessable*, ::Org::BouncyCastle::Cms::IDigestCalculator*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x36b1298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::IDigestCalculator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36d3ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_IsCounterSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_IsCounterSignature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_IsCounterSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_ContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_ContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_SignerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerID* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_SignerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_SignerID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x36d3f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgorithmID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d3fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_DigestAlgorithmID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36d3fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_DigestAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_DigestAlgParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x36d3fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_DigestAlgParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetContentDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetContentDigest)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36d4020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetContentDigest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgorithmID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d40dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_EncryptionAlgorithmID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36d40e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_EncryptionAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_EncryptionAlgParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x36d4110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_EncryptionAlgParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_SignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36d4148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_SignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.get_UnsignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36d41bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_UnsignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(&::Org::BouncyCastle::Cms::SignerInformation::GetSignature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36b8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetSignature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetCounterSignatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInformationStore* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetCounterSignatures)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x36d4230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetCounterSignatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetEncodedSignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetEncodedSignedAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36d4a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetEncodedSignedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.DoVerify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::DoVerify)> {
  constexpr static std::size_t size = 0x1318;
  constexpr static std::size_t addrs = 0x36d4a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                                                                           { "DoVerify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::IsNull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x36d6654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "IsNull", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.DerDecode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::DigestInfo* (::Org::BouncyCastle::Cms::SignerInformation::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Cms::SignerInformation::DerDecode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x36d66d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "DerDecode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.VerifyDigest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
                                                                                                             ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::SignerInformation::VerifyDigest)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x36d5f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
            { "VerifyDigest", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::Verify)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36d67c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                                                                           { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::Verify)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36d69a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.ToSignerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerInfo* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::ToSignerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d6a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "ToSignerInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSingleValuedSignedAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (
    ::Org::BouncyCastle::Cms::SignerInformation::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(&::Org::BouncyCastle::Cms::SignerInformation::GetSingleValuedSignedAttribute)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x36d5d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                                { "GetSingleValuedSignedAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.GetSigningTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Time* (::Org::BouncyCastle::Cms::SignerInformation::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformation::GetSigningTime)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x36d685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetSigningTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.ReplaceUnsignedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInformation* (*)(::Org::BouncyCastle::Cms::SignerInformation*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::SignerInformation::ReplaceUnsignedAttributes)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x36d6a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                         { "ReplaceUnsignedAttributes", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformation.AddCounterSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Cms::SignerInformation* (*)(::Org::BouncyCastle::Cms::SignerInformation*, ::Org::BouncyCastle::Cms::SignerInformationStore*)>(
        &::Org::BouncyCastle::Cms::SignerInformation::AddCounterSigners)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x36d6b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                            { "AddCounterSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::SignerID*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_sid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sid;
}
constexpr ::Org::BouncyCastle::Cms::SignerID* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_sid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sid;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_sid(::Org::BouncyCastle::Cms::SignerID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sid = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerInfo*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerInfo* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::SignerInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithm;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_encryptionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionAlgorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_encryptionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionAlgorithm;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_encryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptionAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeSet;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeSet;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_signedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedAttributeSet = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeSet;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeSet;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_unsignedAttributeSet(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsignedAttributeSet = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessable*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::Org::BouncyCastle::Cms::CmsProcessable* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_content(::Org::BouncyCastle::Cms::CmsProcessable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signature;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_signature(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signature = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestCalculator;
}
constexpr ::Org::BouncyCastle::Cms::IDigestCalculator* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_digestCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestCalculator;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_digestCalculator(::Org::BouncyCastle::Cms::IDigestCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digestCalculator = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_resultDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultDigest;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_resultDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultDigest;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_resultDigest(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resultDigest = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeTable;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_signedAttributeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signedAttributeTable;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_signedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signedAttributeTable = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeTable;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_get_unsignedAttributeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsignedAttributeTable;
}
constexpr void Org::BouncyCastle::Cms::SignerInformation::__cordl_internal_set_unsignedAttributeTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsignedAttributeTable = value;
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
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::SignerInformation*>(
      std::forward<::Org::BouncyCastle::Cms::CmsSignedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsSignedHelper* Org::BouncyCastle::Cms::SignerInformation::getStaticF_Helper() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsSignedHelper*, "Helper", ::Org::BouncyCastle::Cms::SignerInformation*>();
}
inline void Org::BouncyCastle::Cms::SignerInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                             ::Org::BouncyCastle::Cms::CmsProcessable* content, ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Cms::CmsProcessable*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::IDigestCalculator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, contentType, content, digestCalculator);
}
inline void Org::BouncyCastle::Cms::SignerInformation::_ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInfo);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::get_IsCounterSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_IsCounterSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_ContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerID* Org::BouncyCastle::Cms::SignerInformation::get_SignerID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_SignerID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerID*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Cms::SignerInformation::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgorithmID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_DigestAlgorithmID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_DigestAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::get_DigestAlgParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_DigestAlgParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::SignerInformation::GetContentDigest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetContentDigest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgorithmID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_EncryptionAlgorithmID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_EncryptionAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::get_EncryptionAlgParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_EncryptionAlgParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::get_SignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_SignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SignerInformation::get_UnsignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "get_UnsignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::SignerInformation::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetSignature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::SignerInformation::GetCounterSignatures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetCounterSignatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformationStore*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::SignerInformation::GetEncodedSignedAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetEncodedSignedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::DoVerify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                                                                         { "DoVerify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::IsNull(::Org::BouncyCastle::Asn1::Asn1Encodable* o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "IsNull", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* Org::BouncyCastle::Cms::SignerInformation::DerDecode(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "DerDecode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::DigestInfo*>(this, ___internal_method, encoding);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::VerifyDigest(::ArrayW<uint8_t> digest, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                       { "VerifyDigest", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, digest, key, signature);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pubKey);
}
inline bool Org::BouncyCastle::Cms::SignerInformation::Verify(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "Verify", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::X509Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerInfo* Org::BouncyCastle::Cms::SignerInformation::ToSignerInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "ToSignerInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::SignerInformation::GetSingleValuedSignedAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrOID,
                                                                                                                        ::StringW printableName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                                              { "GetSingleValuedSignedAttribute", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method, attrOID, printableName);
}
inline ::Org::BouncyCastle::Asn1::Cms::Time* Org::BouncyCastle::Cms::SignerInformation::GetSigningTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(), { "GetSigningTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Time*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::ReplaceUnsignedAttributes(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                                                                         ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                          { "ReplaceUnsignedAttributes", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*>(nullptr, ___internal_method, signerInformation, unsignedAttributes);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::AddCounterSigners(::Org::BouncyCastle::Cms::SignerInformation* signerInformation,
                                                                                                                 ::Org::BouncyCastle::Cms::SignerInformationStore* counterSigners) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformation*>(),
                          { "AddCounterSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformationStore*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*>(nullptr, ___internal_method, signerInformation, counterSigners);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::SignerInfo* info,
                                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType,
                                                                                                        ::Org::BouncyCastle::Cms::CmsProcessable* content,
                                                                                                        ::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInformation*>(info, contentType, content, digestCalculator));
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformation::New_ctor(::Org::BouncyCastle::Cms::SignerInformation* baseInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInformation*>(baseInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SignerInformation::SignerInformation() {}
