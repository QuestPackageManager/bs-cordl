#pragma once
// IWYU pragma private; include "GlobalNamespace\TransformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TransformExtensions_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformExtensions.InverseTransformRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::TransformExtensions::InverseTransformRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3326e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(),
                                                             { "InverseTransformRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformExtensions.FindChildRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(&::GlobalNamespace::TransformExtensions::FindChildRecursively)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3326f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "FindChildRecursively", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformExtensions.CalculateTransformDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformExtensions::CalculateTransformDepth)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x332704c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "CalculateTransformDepth", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformExtensions.ExtractLocalPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformExtensions::ExtractLocalPose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33270d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "ExtractLocalPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformExtensions.ExtractGlobalPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformExtensions::ExtractGlobalPose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x332713c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "ExtractGlobalPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion GlobalNamespace::TransformExtensions::InverseTransformRotation(::UnityEngine::Transform* trans, ::UnityEngine::Quaternion worldRotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(),
                                                           { "InverseTransformRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, trans, worldRotation);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransformExtensions::FindChildRecursively(::UnityEngine::Transform* parent, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "FindChildRecursively", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, parent, name);
}
inline int32_t GlobalNamespace::TransformExtensions::CalculateTransformDepth(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "CalculateTransformDepth", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Pose GlobalNamespace::TransformExtensions::ExtractLocalPose(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "ExtractLocalPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Pose GlobalNamespace::TransformExtensions::ExtractGlobalPose(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformExtensions*>(), { "ExtractGlobalPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformExtensions::TransformExtensions() {}
