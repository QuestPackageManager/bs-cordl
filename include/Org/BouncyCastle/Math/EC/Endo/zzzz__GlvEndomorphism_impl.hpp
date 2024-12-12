#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/GlvEndomorphism.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>, false>(this, ___internal_method, k);
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::i___Org__BouncyCastle__Math__EC__Endo__ECEndomorphism() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
