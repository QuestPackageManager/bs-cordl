#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRCompositionUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCompositionUtil_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil.SafeDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRCompositionUtil::SafeDestroy)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5df3c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { "SafeDestroy", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil.SafeDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::GameObject*>)>(&::GlobalNamespace::OVRCompositionUtil::SafeDestroy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5df3cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { "SafeDestroy", {}, { ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil.GetWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRCompositionUtil::GetWorldPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5df3d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { "GetWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil.GetWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&::GlobalNamespace::OVRCompositionUtil::GetWorldPosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5df3dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(),
                                                             { "GetWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil.GetMaximumBoundaryDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Camera*, ::GlobalNamespace::OVRBoundary_BoundaryType)>(
    &::GlobalNamespace::OVRCompositionUtil::GetMaximumBoundaryDistance)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5df3e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(),
                                                { "GetMaximumBoundaryDistance", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil.BuildBoundaryMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::GlobalNamespace::OVRBoundary_BoundaryType, float_t, float_t)>(
    &::GlobalNamespace::OVRCompositionUtil::BuildBoundaryMesh)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x5df4024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(),
                                                { "BuildBoundaryMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCompositionUtil._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCompositionUtil::*)()>(&::GlobalNamespace::OVRCompositionUtil::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df44fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRCompositionUtil::SafeDestroy(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { "SafeDestroy", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::OVRCompositionUtil::SafeDestroy(::by_ref<::UnityEngine::GameObject*> obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { "SafeDestroy", {}, { ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRCompositionUtil::GetWorldPosition(::UnityEngine::Vector3 trackingSpacePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { "GetWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, trackingSpacePosition);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRCompositionUtil::GetWorldPosition(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 trackingSpacePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(),
                                                           { "GetWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, camera, trackingSpacePosition);
}
inline float_t GlobalNamespace::OVRCompositionUtil::GetMaximumBoundaryDistance(::UnityEngine::Camera* camera, ::GlobalNamespace::OVRBoundary_BoundaryType boundaryType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(),
                                              { "GetMaximumBoundaryDistance", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, camera, boundaryType);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::OVRCompositionUtil::BuildBoundaryMesh(::GlobalNamespace::OVRBoundary_BoundaryType boundaryType, float_t topY, float_t bottomY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(),
                                              { "BuildBoundaryMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, boundaryType, topY, bottomY);
}
inline void GlobalNamespace::OVRCompositionUtil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCompositionUtil*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRCompositionUtil* GlobalNamespace::OVRCompositionUtil::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRCompositionUtil*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCompositionUtil::OVRCompositionUtil() {}
