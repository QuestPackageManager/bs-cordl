#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupRenderingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupRenderingUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.CalculateFOVHalfAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LODGroupRenderingUtils::CalculateFOVHalfAngle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x682c958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "CalculateFOVHalfAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.CalculateScreenRelativeMetric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rendering::LODParameters, float_t)>(
    &::UnityEngine::Rendering::LODGroupRenderingUtils::CalculateScreenRelativeMetric)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x682c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                                             { "CalculateScreenRelativeMetric", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.CalculatePerspectiveDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Rendering::LODGroupRenderingUtils::CalculatePerspectiveDistance)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x682c9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                         { "CalculatePerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.CalculateSqrPerspectiveDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Rendering::LODGroupRenderingUtils::CalculateSqrPerspectiveDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x682c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                            { "CalculateSqrPerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.GetWorldReferencePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::LODGroup*)>(&::UnityEngine::Rendering::LODGroupRenderingUtils::GetWorldReferencePoint)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x682ca18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "GetWorldReferencePoint", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.GetWorldSpaceScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::LODGroup*)>(&::UnityEngine::Rendering::LODGroupRenderingUtils::GetWorldSpaceScale)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x682ca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "GetWorldSpaceScale", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.GetWorldSpaceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::LODGroup*)>(&::UnityEngine::Rendering::LODGroupRenderingUtils::GetWorldSpaceSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x682caa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "GetWorldSpaceSize", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODGroupRenderingUtils.CalculateLODDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LODGroupRenderingUtils::CalculateLODDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682b894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                                                                           { "CalculateLODDistance", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::CalculateFOVHalfAngle(float_t fieldOfView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "CalculateFOVHalfAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fieldOfView);
}
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::CalculateScreenRelativeMetric(::UnityEngine::Rendering::LODParameters lodParams, float_t lodBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                                           { "CalculateScreenRelativeMetric", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodParams, lodBias);
}
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::CalculatePerspectiveDistance(::UnityEngine::Vector3 objPosition, ::UnityEngine::Vector3 camPosition, float_t sqrScreenRelativeMetric) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                       { "CalculatePerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, objPosition, camPosition, sqrScreenRelativeMetric);
}
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::CalculateSqrPerspectiveDistance(::UnityEngine::Vector3 objPosition, ::UnityEngine::Vector3 camPosition,
                                                                                               float_t sqrScreenRelativeMetric) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                       { "CalculateSqrPerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, objPosition, camPosition, sqrScreenRelativeMetric);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LODGroupRenderingUtils::GetWorldReferencePoint(::UnityEngine::LODGroup* lodGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "GetWorldReferencePoint", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lodGroup);
}
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::GetWorldSpaceScale(::UnityEngine::LODGroup* lodGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "GetWorldSpaceScale", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodGroup);
}
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::GetWorldSpaceSize(::UnityEngine::LODGroup* lodGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(), { "GetWorldSpaceSize", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodGroup);
}
inline float_t UnityEngine::Rendering::LODGroupRenderingUtils::CalculateLODDistance(float_t relativeScreenHeight, float_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODGroupRenderingUtils*>(),
                                                                                         { "CalculateLODDistance", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, relativeScreenHeight, size);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupRenderingUtils::LODGroupRenderingUtils() {}
