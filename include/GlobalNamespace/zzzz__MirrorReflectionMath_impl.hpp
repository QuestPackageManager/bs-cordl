#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorReflectionMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorReflectionMath_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirrorReflectionMath.Plane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::MirrorReflectionMath::Plane)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f47078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(),
                                                                                           { "Plane", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorReflectionMath.CameraSpacePlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MirrorReflectionMath::CameraSpacePlane)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f470a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(),
                            { "CameraSpacePlane", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorReflectionMath.CalculateReflectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector4)>(&::GlobalNamespace::MirrorReflectionMath::CalculateReflectionMatrix)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f471e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(), { "CalculateReflectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorReflectionMath.CalculateObliqueMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector4)>(
    &::GlobalNamespace::MirrorReflectionMath::CalculateObliqueMatrix)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f472c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(),
                                                             { "CalculateObliqueMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 GlobalNamespace::MirrorReflectionMath::Plane(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(),
                                                                                         { "Plane", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, pos, normal);
}
inline ::UnityEngine::Vector4 GlobalNamespace::MirrorReflectionMath::CameraSpacePlane(::UnityEngine::Matrix4x4 worldToCameraMatrix, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(),
                          { "CameraSpacePlane", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, worldToCameraMatrix, pos, normal);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::MirrorReflectionMath::CalculateReflectionMatrix(::UnityEngine::Vector4 plane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(), { "CalculateReflectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, plane);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::MirrorReflectionMath::CalculateObliqueMatrix(::UnityEngine::Matrix4x4 projection, ::UnityEngine::Vector4 clipPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorReflectionMath*>(),
                                                           { "CalculateObliqueMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, projection, clipPlane);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorReflectionMath::MirrorReflectionMath() {}
