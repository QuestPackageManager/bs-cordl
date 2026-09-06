#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/GlvEndomorphism.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism.DecomposeScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::*)(
    ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(), 0 }));
    return ___internal_method;
  }
};
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, k);
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::i___Org__BouncyCastle__Math__EC__Endo__ECEndomorphism() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
