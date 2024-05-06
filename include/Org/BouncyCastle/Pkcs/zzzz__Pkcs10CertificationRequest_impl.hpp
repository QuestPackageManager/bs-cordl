#pragma once
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__CertificationRequest_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsassaPssParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.CreatePssParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int32_t)>(
        &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::CreatePssParams)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x133b084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "CreatePssParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x133b1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1335140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x133b1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x133b1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::StringW, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*,
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x133b258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*,
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x133b43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x133b2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::Org::BouncyCastle::Crypto::ISignatureFactory*, ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Init)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x133b440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.GetPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::GetPublicKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x133b8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(),
                                                                               "GetPublicKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)()>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x133b8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(),
                                                                               "Verify", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x133b8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*)>(&::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x133b958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(::Org::BouncyCastle::Crypto::IVerifierFactory*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x133ba0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.SetSignatureParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::*)(
    ::Org::BouncyCastle::Crypto::ISigner*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::SetSignatureParameters)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x133be2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "SetSignatureParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.GetSignatureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::GetSignatureName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x133bfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "GetSignatureName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest.GetDigestAlgName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x133c158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "GetDigestAlgName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::setStaticF_algorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "algorithms",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::getStaticF_algorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "algorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>();
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::setStaticF_exParams(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "exParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::getStaticF_exParams() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "exParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>();
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::setStaticF_keyAlgorithms(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "keyAlgorithms",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::getStaticF_keyAlgorithms() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "keyAlgorithms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>();
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::setStaticF_oids(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::getStaticF_oids() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oids",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>();
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>(
      std::forward<::Org::BouncyCastle::Utilities::Collections::ISet*>(value));
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::getStaticF_noParams() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet*, "noParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get>();
}
inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId,
                                                                                                                                  int32_t saltSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "CreatePssParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*, false>(nullptr, ___internal_method, hashAlgId, saltSize);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>());
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(encoded));
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoded);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(seq));
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(input));
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::StringW signatureAlgorithm,
                                                                                                                            ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(signatureAlgorithm, subject, publicKey, attributes, signingKey));
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signatureAlgorithm, subject, publicKey, attributes, signingKey);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory,
                                                                                                                            ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(signatureFactory, subject, publicKey, attributes, signingKey));
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signatureFactory, subject, publicKey, attributes, signingKey);
}
inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory,
                                                                                                                            ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                                                                                                                            ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>(signatureFactory, subject, publicKey, attributes));
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                       ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signatureFactory, subject, publicKey, attributes);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Init(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signatureFactory, subject, publicKey, attributes);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::GetPublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(),
                                                                             "GetPublicKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(),
                                                                             "Verify", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, publicKey);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, verifierProvider);
}
inline bool Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Verify(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, verifier);
}
inline void Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::SetSignatureParameters(::Org::BouncyCastle::Crypto::ISigner* signature, ::Org::BouncyCastle::Asn1::Asn1Encodable* asn1Params) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "SetSignatureParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signature, asn1Params);
}
inline ::StringW Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "GetSignatureName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sigAlgId);
}
inline ::StringW Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*>::get(), "GetDigestAlgName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, digestAlgOID);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::Pkcs10CertificationRequest() {}
