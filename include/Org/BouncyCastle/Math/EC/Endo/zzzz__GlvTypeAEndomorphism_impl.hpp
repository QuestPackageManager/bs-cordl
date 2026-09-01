#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Endo\GlvTypeAEndomorphism.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeAEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeAParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x350cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism.DecomposeScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)(
    ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::DecomposeScalar)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x350cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism.get_PointMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPointMap* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_PointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350cca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism.get_HasEfficientPointMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_HasEfficientPointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__cordl_internal_get_m_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_parameters;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__cordl_internal_get_m_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_parameters;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__cordl_internal_set_m_parameters(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_parameters = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__cordl_internal_get_m_pointMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__cordl_internal_get_m_pointMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pointMap;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_pointMap = value;
}
inline void Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, parameters);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, k);
}
inline ::Org::BouncyCastle::Math::EC::ECPointMap* Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_PointMap() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPointMap*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_HasEfficientPointMap() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*
Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*>(curve, parameters));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
constexpr Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::i___Org__BouncyCastle__Math__EC__Endo__GlvEndomorphism() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::i___Org__BouncyCastle__Math__EC__Endo__ECEndomorphism() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::GlvTypeAEndomorphism() {}
