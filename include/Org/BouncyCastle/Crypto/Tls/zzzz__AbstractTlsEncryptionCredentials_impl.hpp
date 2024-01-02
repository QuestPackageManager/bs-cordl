#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials.DecryptPreMasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::DecryptPreMasterSecret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf5b55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::DecryptPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPreMasterSecret) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, encryptedPreMasterSecret);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*>());
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::AbstractTlsEncryptionCredentials() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
