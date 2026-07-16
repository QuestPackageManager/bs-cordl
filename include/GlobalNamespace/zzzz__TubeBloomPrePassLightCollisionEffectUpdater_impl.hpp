#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLightCollisionEffectUpdater.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightCollisionEffect_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastCommand_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightCollisionEffectUpdater_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightCollisionEffectUpdater_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightCollisionEffect_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
// Ctor Parameters [CppParam { name: "environmentLayerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "showHit", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "useScale", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData::TubeBloomPrePassLightCollisionEffectUpdater_EffectData(int32_t environmentLayerMask, bool showHit, bool useScale,
                                                                                                                                            bool hit, float_t length,
                                                                                                                                            ::Unity::Mathematics::float3 scale) noexcept {
  this->environmentLayerMask = environmentLayerMask;
  this->showHit = showHit;
  this->useScale = useScale;
  this->hit = hit;
  this->length = length;
  this->scale = scale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData::TubeBloomPrePassLightCollisionEffectUpdater_EffectData() {}
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::Execute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x599d184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "effectData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData) noexcept {
  this->effectData = effectData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob::TubeBloomPrePassLightCollisionEffectUpdater_ExtractScaleJob() {}
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::Execute)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x599d244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "effectData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "raycastCommands", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData,
    ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> raycastCommands) noexcept {
  this->effectData = effectData;
  this->raycastCommands = raycastCommands;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob::TubeBloomPrePassLightCollisionEffectUpdater_InitialiseRaycastsJob() {}
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::Execute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x599d364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "effectData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "raycastHits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> effectData,
    ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> raycastHits) noexcept {
  this->effectData = effectData;
  this->raycastHits = raycastHits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob::TubeBloomPrePassLightCollisionEffectUpdater_UpdateHitPointsJob() {}
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x599ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*)>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Add)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x599c3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*)>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Remove)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x599c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(),
                                                                                           { "Remove", {}, { ::i2c::type_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.ExpandCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)(int32_t)>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::ExpandCapacity)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x599caa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "ExpandCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Update)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x599cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::LateUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x599cf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::OnDestroy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x599d040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599d180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__numEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEffects;
}
constexpr int32_t const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__numEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEffects;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__numEffects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numEffects = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>>& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__effects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effects;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__effects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effects;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__effects(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effects = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__finalJobHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalJobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__finalJobHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalJobHandle;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__finalJobHandle(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalJobHandle = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__hitPointRoots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointRoots;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__hitPointRoots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointRoots;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__hitPointRoots(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointRoots = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__effectTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectTransforms;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__effectTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectTransforms;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__effectTransforms(::UnityEngine::Jobs::TransformAccessArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectTransforms = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__scalingTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scalingTransforms;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__scalingTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scalingTransforms;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__scalingTransforms(::UnityEngine::Jobs::TransformAccessArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scalingTransforms = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__hitPointTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointTransforms;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__hitPointTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointTransforms;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__hitPointTransforms(::UnityEngine::Jobs::TransformAccessArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointTransforms = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData>&
GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__effectData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectData;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> const&
GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__effectData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectData;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__effectData(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater_EffectData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectData = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__raycastCommands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastCommands;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__raycastCommands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastCommands;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__raycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____raycastCommands = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__raycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastResults;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_get__raycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raycastResults;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::__cordl_internal_set__raycastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____raycastResults = value;
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Add(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* effect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Remove(::GlobalNamespace::TubeBloomPrePassLightCollisionEffect* effect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(),
                                                                                         { "Remove", {}, { ::i2c::type_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::ExpandCapacity(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "ExpandCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::LateUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater* GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightCollisionEffectUpdater::TubeBloomPrePassLightCollisionEffectUpdater() {}
