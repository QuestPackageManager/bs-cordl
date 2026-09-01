#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Endo\ECEndomorphism.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism.get_PointMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPointMap* (::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_PointMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism.get_HasEfficientPointMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_HasEfficientPointMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::ECPointMap* Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_PointMap() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPointMap*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::EC::Endo::ECEndomorphism::get_HasEfficientPointMap() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
