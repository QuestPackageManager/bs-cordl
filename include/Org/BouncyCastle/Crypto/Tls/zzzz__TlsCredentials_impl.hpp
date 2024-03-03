#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsCredentials.get_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (::Org::BouncyCastle::Crypto::Tls::TlsCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::TlsCredentials::get_Certificate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*, false>(this, ___internal_method);
}
