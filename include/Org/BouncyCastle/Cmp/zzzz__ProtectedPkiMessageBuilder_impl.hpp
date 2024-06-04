#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/ProtectedPkiMessageBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessageBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeaderBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x143fc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    int32_t, ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x143fcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetTransactionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetTransactionId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x143fda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetTransactionId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetFreeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetFreeText)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x143fdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetFreeText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.AddGeneralInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddGeneralInfo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x143fdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "AddGeneralInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetMessageTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetMessageTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x143feb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetMessageTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetRecipKID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x143fedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetRecipKID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetRecipNonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x143ff08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetRecipNonce", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetSenderKID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x143ff38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetSenderKID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetSenderNonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x143ff64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetSenderNonce", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiBody*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143ff90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetBody", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.AddCmpCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddCmpCertificate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x143ff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "AddCmpCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessage* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Crypto::ISignatureFactory*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x144004c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessage* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Crypto::IMacFactory*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1440cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMacFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.FinalizeHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeHeader)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1440338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "FinalizeHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.FinalizeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::ProtectedPkiMessage* (
    ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeMessage)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x1440990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "FinalizeMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.CalculateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(
    ::Org::BouncyCastle::Crypto::IStreamCalculator*, ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::Cmp::PkiBody*)>(
    &::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::CalculateSignature)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x1440618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "CalculateSignature", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCalculator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_hdrBuilBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrBuilBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*> const&
Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_hdrBuilBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrBuilBuilder;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_hdrBuilBuilder(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hdrBuilBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiBody*> const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_generalInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_generalInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalInfos;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_generalInfos(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___generalInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_extraCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraCerts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_get_extraCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraCerts;
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__cordl_internal_set_extraCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extraCerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(sender, recipient));
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, recipient);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                                                                          ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>(pvno, sender, recipient));
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pvno, sender, recipient);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetTransactionId(::ArrayW<uint8_t, ::Array<uint8_t>*> tid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetTransactionId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, tid);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetFreeText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, freeText);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* genInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "AddGeneralInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, genInfo);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* generalizedTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetMessageTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, generalizedTime);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipKID(::ArrayW<uint8_t, ::Array<uint8_t>*> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetRecipKID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetRecipNonce", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderKID(::ArrayW<uint8_t, ::Array<uint8_t>*> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetSenderKID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetSenderNonce", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, nonce);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetBody(::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "SetBody", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, body);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddCmpCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "AddCmpCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*, false>(this, ___internal_method, certificate);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*, false>(this, ___internal_method, signatureFactory);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build(::Org::BouncyCastle::Crypto::IMacFactory* factory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMacFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*, false>(this, ___internal_method, factory);
}
inline void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeHeader(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "FinalizeHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithmIdentifier);
}
inline ::Org::BouncyCastle::Cmp::ProtectedPkiMessage* Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeMessage(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                                                                          ::Org::BouncyCastle::Asn1::DerBitString* protection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "FinalizeMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::ProtectedPkiMessage*, false>(this, ___internal_method, header, protection);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::CalculateSignature(::Org::BouncyCastle::Crypto::IStreamCalculator* signer,
                                                                                                                   ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                                                                   ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder*>::get(), "CalculateSignature", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCalculator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, signer, header, body);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::ProtectedPkiMessageBuilder() {}
