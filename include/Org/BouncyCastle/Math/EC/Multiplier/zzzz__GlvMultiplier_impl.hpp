#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/GlvMultiplier.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__GlvMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*)>(&::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x350bc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier.MultiplyPositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x350bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__cordl_internal_get_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__cordl_internal_get_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curve = value;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*& Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__cordl_internal_get_glvEndomorphism() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___glvEndomorphism;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* const& Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__cordl_internal_get_glvEndomorphism() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___glvEndomorphism;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__cordl_internal_set_glvEndomorphism(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___glvEndomorphism = value;
}
inline void Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, glvEndomorphism);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint* p,
                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*
Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* glvEndomorphism) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier*>(curve, glvEndomorphism));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::GlvMultiplier() {}
