#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODRenderingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODRenderingUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.CalculateFOVHalfAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::LODRenderingUtils::CalculateFOVHalfAngle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c68e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "CalculateFOVHalfAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.CalculateScreenRelativeMetricNoBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rendering::LODParameters)>(&::UnityEngine::Rendering::LODRenderingUtils::CalculateScreenRelativeMetricNoBias)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c68ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                                             { "CalculateScreenRelativeMetricNoBias", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.CalculateMeshLodConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rendering::LODParameters, float_t, float_t)>(
    &::UnityEngine::Rendering::LODRenderingUtils::CalculateMeshLodConstant)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c68ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                         { "CalculateMeshLodConstant", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.CalculatePerspectiveDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Rendering::LODRenderingUtils::CalculatePerspectiveDistance)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c68ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                         { "CalculatePerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.CalculateSqrPerspectiveDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::Rendering::LODRenderingUtils::CalculateSqrPerspectiveDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c68f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                            { "CalculateSqrPerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.GetWorldReferencePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::LODGroup*)>(&::UnityEngine::Rendering::LODRenderingUtils::GetWorldReferencePoint)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c68f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "GetWorldReferencePoint", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.GetWorldSpaceScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::LODGroup*)>(&::UnityEngine::Rendering::LODRenderingUtils::GetWorldSpaceScale)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c68f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "GetWorldSpaceScale", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.GetWorldSpaceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::LODGroup*)>(&::UnityEngine::Rendering::LODRenderingUtils::GetWorldSpaceSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c68fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "GetWorldSpaceSize", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LODRenderingUtils.CalculateLODDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::LODRenderingUtils::CalculateLODDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c67618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "CalculateLODDistance", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::LODRenderingUtils::CalculateFOVHalfAngle(float_t fieldOfView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "CalculateFOVHalfAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fieldOfView);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::CalculateScreenRelativeMetricNoBias(::UnityEngine::Rendering::LODParameters lodParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                                           { "CalculateScreenRelativeMetricNoBias", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodParams);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::CalculateMeshLodConstant(::UnityEngine::Rendering::LODParameters lodParams, float_t screenRelativeMetric, float_t meshLodThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                       { "CalculateMeshLodConstant", {}, { ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodParams, screenRelativeMetric, meshLodThreshold);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::CalculatePerspectiveDistance(::UnityEngine::Vector3 objPosition, ::UnityEngine::Vector3 camPosition, float_t sqrScreenRelativeMetric) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                       { "CalculatePerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, objPosition, camPosition, sqrScreenRelativeMetric);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::CalculateSqrPerspectiveDistance(::UnityEngine::Vector3 objPosition, ::UnityEngine::Vector3 camPosition, float_t sqrScreenRelativeMetric) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(),
                                       { "CalculateSqrPerspectiveDistance", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, objPosition, camPosition, sqrScreenRelativeMetric);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::LODRenderingUtils::GetWorldReferencePoint(::UnityEngine::LODGroup* lodGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "GetWorldReferencePoint", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lodGroup);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::GetWorldSpaceScale(::UnityEngine::LODGroup* lodGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "GetWorldSpaceScale", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodGroup);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::GetWorldSpaceSize(::UnityEngine::LODGroup* lodGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "GetWorldSpaceSize", {}, { ::i2c::type_of<::UnityEngine::LODGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lodGroup);
}
inline float_t UnityEngine::Rendering::LODRenderingUtils::CalculateLODDistance(float_t relativeScreenHeight, float_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LODRenderingUtils*>(), { "CalculateLODDistance", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, relativeScreenHeight, size);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODRenderingUtils::LODRenderingUtils() {}
