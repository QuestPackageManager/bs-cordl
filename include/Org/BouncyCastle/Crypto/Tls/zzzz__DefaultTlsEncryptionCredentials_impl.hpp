#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsEncryptionCredentials.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x23b5d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials.get_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (
    ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::*)()>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b5f64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials.DecryptPreMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::DecryptPreMasterSecret)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23b5f6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const&
Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_get_mCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const&
Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_get_mCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_get_mPrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrivateKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const&
Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_get_mPrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrivateKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__cordl_internal_set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPrivateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*
Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>(context, certificate, privateKey));
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                                   ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, certificate, privateKey);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::get_Certificate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::DecryptPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPreMasterSecret) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, encryptedPreMasterSecret);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::DefaultTlsEncryptionCredentials() {}
