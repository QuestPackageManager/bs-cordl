#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IVerifier.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifier_def.hpp"
inline bool Org::BouncyCastle::Crypto::IVerifier::IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifier*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline bool Org::BouncyCastle::Crypto::IVerifier::IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t off, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IVerifier*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, source, off, length);
}
