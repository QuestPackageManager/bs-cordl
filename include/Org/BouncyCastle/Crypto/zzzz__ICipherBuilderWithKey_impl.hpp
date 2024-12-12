#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/ICipherBuilderWithKey.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilder_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::ICipherBuilderWithKey::get_Key() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr Org::BouncyCastle::Crypto::ICipherBuilderWithKey::operator ::Org::BouncyCastle::Crypto::ICipherBuilder*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherBuilder"
constexpr ::Org::BouncyCastle::Crypto::ICipherBuilder* Org::BouncyCastle::Crypto::ICipherBuilderWithKey::i___Org__BouncyCastle__Crypto__ICipherBuilder() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherBuilder*>(static_cast<void*>(this));
}
