#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCachedSystem.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::*)(
    ::Unity::Mathematics::quaternion, ::Unity::Mathematics::quaternion)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::DistanceBetweenQuaternions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66a73cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get(),
                                                 "DistanceBetweenQuaternions", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::*)(
    int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x66a73fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get(),
                                                 "Execute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Jobs::TransformAccess>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob.GetDecalProjectBoundingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BoundingSphere (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::*)(
    ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::GetDecalProjectBoundingSphere)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x66a7a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get(), "GetDecalProjectBoundingSphere",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::setStaticF_k_MinusYtoZRotation(::Unity::Mathematics::quaternion value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::quaternion, "k_MinusYtoZRotation",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get>(
      std::forward<::Unity::Mathematics::quaternion>(value));
}
inline ::Unity::Mathematics::quaternion UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::getStaticF_k_MinusYtoZRotation() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::quaternion, "k_MinusYtoZRotation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get>();
}
inline float_t UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::DistanceBetweenQuaternions(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get(),
                                               "DistanceBetweenQuaternions", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get(),
                                               "Execute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Jobs::TransformAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, transform);
}
inline ::UnityEngine::BoundingSphere UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4 decalToWorld) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob>::get(), "GetDecalProjectBoundingSphere",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere, false>(this, ___internal_method, decalToWorld);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityManager*)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x66a6f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x66a6fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x66a7134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EntityManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Sampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SamplerJob)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityManager);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::Execute(::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk,
                                                                                ::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityChunk*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityChunk, cachedChunk, count);
}
inline ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*
UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*>(entityManager));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem::DecalUpdateCachedSystem() {}
