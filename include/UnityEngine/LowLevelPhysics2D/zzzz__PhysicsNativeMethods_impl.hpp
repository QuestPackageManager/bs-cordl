#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsNativeMethods.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsNativeMethods_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsNativeMethods_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6fd97c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TransformWriteTweens", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "TransformPlane", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "TransformTweening", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::PhysicsNativeMethods_FastWriteTransformsJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane, bool TransformTweening) noexcept {
  this->TransformWriteTweens = TransformWriteTweens;
  this->TransformPlane = TransformPlane;
  this->TransformTweening = TransformTweening;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_FastWriteTransformsJob::PhysicsNativeMethods_FastWriteTransformsJob() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6fd99e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TransformWriteTweens", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "TransformPlane", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "TransformTweening", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::PhysicsNativeMethods_Slow3DWriteTransformsJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane, bool TransformTweening) noexcept {
  this->TransformWriteTweens = TransformWriteTweens;
  this->TransformPlane = TransformPlane;
  this->TransformTweening = TransformTweening;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_Slow3DWriteTransformsJob::PhysicsNativeMethods_Slow3DWriteTransformsJob() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::Execute)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x6fd9c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TransformWriteTweens", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "TransformWriteMode", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "TransformPlane", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InterpolationTime",
// ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ExtrapolationTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::PhysicsNativeMethods_WriteTransformTweensJob(
    ::Unity::Collections::NativeArray_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween> TransformWriteTweens,
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode TransformWriteMode, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane TransformPlane, float_t InterpolationTime,
    float_t ExtrapolationTime) noexcept {
  this->TransformWriteTweens = TransformWriteTweens;
  this->TransformWriteMode = TransformWriteMode;
  this->TransformPlane = TransformPlane;
  this->InterpolationTime = InterpolationTime;
  this->ExtrapolationTime = ExtrapolationTime;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods_WriteTransformTweensJob::PhysicsNativeMethods_WriteTransformTweensJob() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods.CreateWorldTransformAccessArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, int32_t, int32_t)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::CreateWorldTransformAccessArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6fd8fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                            { "CreateWorldTransformAccessArray", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods.DestroyWorldTransformAccessArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::DestroyWorldTransformAccessArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6fd90c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                                                             { "DestroyWorldTransformAccessArray", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods.GetWorldTransformAccessArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Jobs::TransformAccessArray (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::GetWorldTransformAccessArray)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6fd91a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                                                             { "GetWorldTransformAccessArray", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods.WriteWorldTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode,
                                                                ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane, int32_t, bool)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::WriteWorldTransforms)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6fd92a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                                         { "WriteWorldTransforms",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode>(),
                                             ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods.WriteTransformTweens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld, double_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane,
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer)>(&::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::WriteTransformTweens)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6fd956c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                            { "WriteTransformTweens",
                              {},
                              { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(),
                                ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::setStaticF_s_WorldTransformAccessArrays(::ArrayW<::UnityEngine::Jobs::TransformAccessArray> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Jobs::TransformAccessArray>, "s_WorldTransformAccessArrays", ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(
      std::forward<::ArrayW<::UnityEngine::Jobs::TransformAccessArray>>(value));
}
inline ::ArrayW<::UnityEngine::Jobs::TransformAccessArray> UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::getStaticF_s_WorldTransformAccessArrays() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Jobs::TransformAccessArray>, "s_WorldTransformAccessArrays", ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::CreateWorldTransformAccessArray(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, int32_t capacity, int32_t desiredJobCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                          { "CreateWorldTransformAccessArray", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, capacity, desiredJobCount);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::DestroyWorldTransformAccessArray(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                                                           { "DestroyWorldTransformAccessArray", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline ::UnityEngine::Jobs::TransformAccessArray UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::GetWorldTransformAccessArray(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                                                           { "GetWorldTransformAccessArray", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Jobs::TransformAccessArray>(nullptr, ___internal_method, world);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::WriteWorldTransforms(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world,
                                                                                       ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode transformWriteMode,
                                                                                       ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t eventCount,
                                                                                       bool transformTweening) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                                              { "WriteWorldTransforms",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode>(),
                                                  ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, transformWriteMode, transformPlane, eventCount, transformTweening);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::WriteTransformTweens(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, double_t lastSimulationTimestamp,
                                                                                       float_t lastSimulationDeltaTime,
                                                                                       ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode transformWriteMode,
                                                                                       ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane,
                                                                                       ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer transformWriteTweensBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods>(),
                          { "WriteTransformTweens",
                            {},
                            { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformWriteMode>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>(),
                              ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, lastSimulationTimestamp, lastSimulationDeltaTime, transformWriteMode, transformPlane,
                                                   transformWriteTweensBuffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsNativeMethods::PhysicsNativeMethods() {}
