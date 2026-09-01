#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Multiplier\FixedPointCombMultiplier.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__FixedPointCombMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x350d564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350d970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, p, k);
}
inline void Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier* Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier::FixedPointCombMultiplier() {}
