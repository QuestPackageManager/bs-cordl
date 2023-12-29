#pragma once
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IDrbgProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* (
    ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider::*)(::Org::BouncyCastle::Crypto::IEntropySource*)>(&::Org::BouncyCastle::Crypto::Prng::IDrbgProvider::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Org::BouncyCastle::Crypto::Prng::IDrbgProvider::Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*, false>(this, ___internal_method, entropySource);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
