#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/IGeometry.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__IGeometry_def.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryType_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics::IGeometry.get_GeometryType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics::GeometryType (::UnityEngine::LowLevelPhysics::IGeometry::*)()>(
    &::UnityEngine::LowLevelPhysics::IGeometry::get_GeometryType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::IGeometry*>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics::IGeometry*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::IGeometry::get_GeometryType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics::IGeometry*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics::GeometryType>(this, ___internal_method);
}
