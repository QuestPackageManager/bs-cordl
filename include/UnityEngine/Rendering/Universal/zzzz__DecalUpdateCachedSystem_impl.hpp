#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalUpdateCachedSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCachedSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob.DistanceBetweenQuaternions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::*)(
    ::Unity::Mathematics::quaternion, ::Unity::Mathematics::quaternion)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::DistanceBetweenQuaternions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x685f930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                                                { "DistanceBetweenQuaternions", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x685f960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob.GetDecalProjectBoundingSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::*)(::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::GetDecalProjectBoundingSphere)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x685fef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                                                                                           { "GetDecalProjectBoundingSphere", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::setStaticF_k_MinusYtoZRotation(::Unity::Mathematics::quaternion value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::quaternion, "k_MinusYtoZRotation", ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(
      std::forward<::Unity::Mathematics::quaternion>(value));
}
inline ::Unity::Mathematics::quaternion UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::getStaticF_k_MinusYtoZRotation() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::quaternion, "k_MinusYtoZRotation", ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>();
}
inline float_t UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::DistanceBetweenQuaternions(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                                              { "DistanceBetweenQuaternions", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
inline ::UnityEngine::BoundingSphere UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4 decalToWorld) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>(),
                                                                                         { "GetDecalProjectBoundingSphere", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(*this, ___internal_method, decalToWorld);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotations", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "scales", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirty", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "scaleModes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "sizeOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "decalToWorlds", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalToWorlds", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "boundingSpheres", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::DecalUpdateCachedSystem_UpdateTransformsJob(
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> rotations,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> scales, ::Unity::Collections::NativeArray_1<bool> dirty,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> scaleModes, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds,
    ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres, float_t minDistance) noexcept {
  this->positions = positions;
  this->rotations = rotations;
  this->scales = scales;
  this->dirty = dirty;
  this->scaleModes = scaleModes;
  this->sizeOffsets = sizeOffsets;
  this->decalToWorlds = decalToWorlds;
  this->normalToWorlds = normalToWorlds;
  this->boundingSpheres = boundingSpheres;
  this->minDistance = minDistance;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::DecalUpdateCachedSystem_UpdateTransformsJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x685f46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x685f528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x685f698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                                                             { "Execute",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_EntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_EntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntityManager = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_Sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_Sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sampler = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_SamplerJob() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplerJob;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_get_m_SamplerJob() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplerJob;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::__cordl_internal_set_m_SamplerJob(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SamplerJob = value;
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute(::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk,
                                                                                ::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(),
                                                                                         { "Execute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityChunk, cachedChunk, count);
}
inline ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*
UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(entityManager));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::DecalUpdateCachedSystem() {}
