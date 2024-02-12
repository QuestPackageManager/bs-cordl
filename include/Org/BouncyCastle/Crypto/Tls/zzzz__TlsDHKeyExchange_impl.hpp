#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(
    int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xfcf9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(
    int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xfcfa4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xfcfb90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.SkipServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfcfc50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xfcfca8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.get_RequiresServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xfd006c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.GenerateServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xfd0094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xfd0334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ValidateCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xfd0614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessClientCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xfd06e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xfd07f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfd0a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.ProcessClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xfd0a6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange.GeneratePremasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xfd0b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 34));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mTlsSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSigner;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mTlsSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTlsSigner;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHVerifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHVerifier;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHVerifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHVerifier;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDHVerifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHParameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const&
Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDHParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mServerPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const&
Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mServerPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mAgreementCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAgreementCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*> const&
Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mAgreementCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAgreementCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mAgreementCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHAgreePrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHAgreePrivateKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*> const&
Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHAgreePrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHAgreePrivateKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mDHAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDHAgreePrivateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*& Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHAgreePublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHAgreePublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*> const&
Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_get_mDHAgreePublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDHAgreePublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::__cordl_internal_set_mDHAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDHAgreePublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                                                      ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>(keyExchange, supportedSignatureAlgorithms, dhParameters));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                    ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms, dhParameters);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::New_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                                                                      ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier,
                                                                                                                      ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>(keyExchange, supportedSignatureAlgorithms, dhVerifier, dhParameters));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms,
                                                                    ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms, dhVerifier, dhParameters);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::SkipServerCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCertificate);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::get_RequiresServerKeyExchange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateServerKeyExchange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessServerKeyExchange(::System::IO::Stream* input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GenerateClientKeyExchange(::System::IO::Stream* output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::ProcessClientKeyExchange(::System::IO::Stream* input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::GeneratePremasterSecret() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange::TlsDHKeyExchange() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
