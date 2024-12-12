#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IEntropySourceProvider.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::IEntropySourceProvider::Get(int32_t bitsRequired) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*, false>(this, ___internal_method, bitsRequired);
}
