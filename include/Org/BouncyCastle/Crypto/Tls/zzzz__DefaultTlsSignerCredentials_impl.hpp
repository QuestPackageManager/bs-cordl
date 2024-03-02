#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfd58ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xfd58b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials.get_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfd5cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials.GenerateCertificateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::GenerateCertificateSignature)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xfd5cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials.get_SignatureAndHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (
    ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)()>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_SignatureAndHashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfd5f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const&
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mPrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrivateKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const&
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mPrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrivateKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPrivateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSignatureAndHashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignatureAndHashAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*> const&
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSignatureAndHashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignatureAndHashAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSignatureAndHashAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(context, certificate, privateKey));
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, certificate, privateKey);
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                      ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(context, certificate, privateKey, signatureAndHashAlgorithm));
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                               ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, certificate, privateKey, signatureAndHashAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_Certificate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::GenerateCertificateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> hash) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, hash);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_SignatureAndHashAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::DefaultTlsSignerCredentials() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
