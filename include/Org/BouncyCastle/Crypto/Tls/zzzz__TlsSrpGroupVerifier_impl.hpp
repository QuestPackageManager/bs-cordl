#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpGroupVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>::get(), 0));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier::Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, group);
}
