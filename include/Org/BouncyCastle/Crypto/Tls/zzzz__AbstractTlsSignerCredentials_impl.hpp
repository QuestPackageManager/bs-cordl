#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials.GenerateCertificateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::GenerateCertificateSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials.get_SignatureAndHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (
    ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::get_SignatureAndHashAlgorithm)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf86868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf868b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::i___Org__BouncyCastle__Crypto__Tls__TlsSignerCredentials() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::GenerateCertificateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> hash) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, hash);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::get_SignatureAndHashAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>());
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::AbstractTlsSignerCredentials() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
