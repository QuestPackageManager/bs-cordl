#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AABBExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABBExtensions_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AABBExtensions.ToAABB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AABB (*)(::UnityEngine::Bounds)>(&::UnityEngine::Rendering::AABBExtensions::ToAABB)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6804a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABBExtensions*>(), { "ToAABB", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABBExtensions.ToBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Rendering::AABB)>(&::UnityEngine::Rendering::AABBExtensions::ToBounds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6804a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABBExtensions*>(), { "ToBounds", {}, { ::i2c::type_of<::UnityEngine::Rendering::AABB>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::AABB UnityEngine::Rendering::AABBExtensions::ToAABB(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABBExtensions*>(), { "ToAABB", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AABB>(nullptr, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::AABBExtensions::ToBounds(::UnityEngine::Rendering::AABB aabb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AABBExtensions*>(), { "ToBounds", {}, { ::i2c::type_of<::UnityEngine::Rendering::AABB>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, aabb);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AABBExtensions::AABBExtensions() {}
