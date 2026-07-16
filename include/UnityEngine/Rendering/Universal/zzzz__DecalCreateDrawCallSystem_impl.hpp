#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCreateDrawCallSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::Execute)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6854f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "decalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "normalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeOffsets", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawDistances", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "angleFades", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvScaleBiases", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMasks", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneLayerMasks", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "fadeFactors", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "boundingSpheres", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderingLayerMasks", ty:
// "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "visibleDecalIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleDecalCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "maxDrawDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "decalToWorldsDraw", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalToDecalsDraw", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderingLayerMasksDraw", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subCalls", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subCallCount", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::DecalCreateDrawCallSystem_DrawCallJob(
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> drawDistances,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> angleFades, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> uvScaleBiases,
    ::Unity::Collections::NativeArray_1<int32_t> layerMasks, ::Unity::Collections::NativeArray_1<uint64_t> sceneLayerMasks, ::Unity::Collections::NativeArray_1<float_t> fadeFactors,
    ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres, ::Unity::Collections::NativeArray_1<uint32_t> renderingLayerMasks, ::UnityEngine::Vector3 cameraPosition,
    uint64_t sceneCullingMask, int32_t cullingMask, ::Unity::Collections::NativeArray_1<int32_t> visibleDecalIndices, int32_t visibleDecalCount, float_t maxDrawDistance,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorldsDraw, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToDecalsDraw,
    ::Unity::Collections::NativeArray_1<float_t> renderingLayerMasksDraw, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> subCalls,
    ::Unity::Collections::NativeArray_1<int32_t> subCallCount) noexcept {
  this->decalToWorlds = decalToWorlds;
  this->normalToWorlds = normalToWorlds;
  this->sizeOffsets = sizeOffsets;
  this->drawDistances = drawDistances;
  this->angleFades = angleFades;
  this->uvScaleBiases = uvScaleBiases;
  this->layerMasks = layerMasks;
  this->sceneLayerMasks = sceneLayerMasks;
  this->fadeFactors = fadeFactors;
  this->boundingSpheres = boundingSpheres;
  this->renderingLayerMasks = renderingLayerMasks;
  this->cameraPosition = cameraPosition;
  this->sceneCullingMask = sceneCullingMask;
  this->cullingMask = cullingMask;
  this->visibleDecalIndices = visibleDecalIndices;
  this->visibleDecalCount = visibleDecalCount;
  this->maxDrawDistance = maxDrawDistance;
  this->decalToWorldsDraw = decalToWorldsDraw;
  this->normalToDecalsDraw = normalToDecalsDraw;
  this->renderingLayerMasksDraw = renderingLayerMasksDraw;
  this->subCalls = subCalls;
  this->subCallCount = subCallCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob::DecalCreateDrawCallSystem_DrawCallJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.get_maxDrawDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(), { "get_maxDrawDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.set_maxDrawDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6854b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(), { "set_maxDrawDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, float_t)>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6854b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6854bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6854d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                                                { "Execute",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_EntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_EntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntityManager = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_Sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_Sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sampler = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_MaxDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_MaxDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_MaxDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxDrawDistance = value;
}
inline float_t UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(), { "get_maxDrawDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(), { "set_maxDrawDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t maxDrawDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager, maxDrawDistance);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk,
                                                                                  ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk,
                                                                                  ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(),
                                              { "Execute",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cachedChunk, culledChunk, drawCallChunk, count);
}
inline ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*
UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t maxDrawDistance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(entityManager, maxDrawDistance));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::DecalCreateDrawCallSystem() {}
