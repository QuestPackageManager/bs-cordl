#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSrpKeyExchange.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Client_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Server_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpGroupVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.CreateSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSigner* (*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::CreateSigner)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x243c2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), "CreateSigner",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(
    int32_t, ::System::Collections::IList*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x243c3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(
    int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x243c458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(
    int32_t, ::System::Collections::IList*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x243c514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x243c608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.SkipServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x243c6c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x243c710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x243c970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.get_RequiresServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x243cadc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.GenerateServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x243cae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x243d01c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ValidateCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x243d534;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessClientCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x243d56c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x243d5a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x243d730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.GeneratePremasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x243d990;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.InitVerifyer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsSigner*, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*,
                                                            ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::InitVerifyer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x243daa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 35));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mTlsSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSigner;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mTlsSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSigner;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mGroupVerifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroupVerifier;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mGroupVerifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mGroupVerifier;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mGroupVerifier(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mGroupVerifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mIdentity;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mIdentity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mPassword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPassword;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mPassword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPassword;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mPassword(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPassword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mServerPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerPublicKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mServerPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpGroup;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpGroup;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mSrpGroup(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpClient;
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpClient;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mSrpClient(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpServer;
}
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpServer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mSrpServer(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpServer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpPeerCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpPeerCredentials;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpPeerCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpPeerCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mSrpPeerCredentials(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpPeerCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpVerifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpVerifier;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpVerifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpVerifier;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mSrpVerifier(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpVerifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpSalt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpSalt;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mSrpSalt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpSalt;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mSrpSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpSalt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mServerCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerCredentials;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* const& Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_get_mServerCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__cordl_internal_set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSigner* Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::CreateSigner(int32_t keyExchange) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), "CreateSigner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSigner*, false>(nullptr, ___internal_method, keyExchange);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms, identity, password);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                     ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms, groupVerifier, identity, password);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                     ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* loginParameters) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms, identity, loginParameters);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::SkipServerCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCredentials);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::get_RequiresServerKeyExchange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateServerKeyExchange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerKeyExchange(::System::IO::Stream* input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateClientKeyExchange(::System::IO::Stream* output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientKeyExchange(::System::IO::Stream* input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GeneratePremasterSecret() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner* tlsSigner,
                                                                                                             ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                             ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* securityParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*, false>(this, ___internal_method, tlsSigner, algorithm, securityParameters);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>(keyExchange, supportedSignatureAlgorithms, identity, password));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                                                        ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* groupVerifier,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>(keyExchange, supportedSignatureAlgorithms, groupVerifier, identity, password));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                                                                        ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* loginParameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange*>(keyExchange, supportedSignatureAlgorithms, identity, loginParameters));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::TlsSrpKeyExchange() {}
