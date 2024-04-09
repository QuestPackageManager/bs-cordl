#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials.get_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c43e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::get_Certificate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*>());
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials::AbstractTlsCredentials() {}
