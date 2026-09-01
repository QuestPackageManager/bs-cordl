#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalUpdateCullingGroupSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalUpdateCullingGroupSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem.get_boundingDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::get_boundingDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6860618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(), { "get_boundingDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem.set_boundingDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::set_boundingDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6860640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(), { "set_boundingDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, float_t)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6860668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::Execute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6860740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(), { "Execute", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*,
                                                                                                                                    ::UnityEngine::Rendering::Universal::DecalCulledChunk*, int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::Execute)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x68608bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(),
                                                             { "Execute",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem.GetSceneCullingMaskFromCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::GetSceneCullingMaskFromCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6860a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(),
                                                                                           { "GetSceneCullingMaskFromCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_BoundingDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundingDistance;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_BoundingDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundingDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_set_m_BoundingDistance(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoundingDistance = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Camera = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_EntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_EntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntityManager = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_Sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_get_m_Sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sampler = value;
}
inline float_t UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::get_boundingDistance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(), { "get_boundingDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::set_boundingDistance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(), { "set_boundingDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t drawDistance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager, drawDistance);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::Execute(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(), { "Execute", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk,
                                                                                      ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(),
                                                                                         { "Execute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCulledChunk*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cachedChunk, culledChunk, count);
}
inline uint64_t UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::GetSceneCullingMaskFromCamera(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(),
                                                                                         { "GetSceneCullingMaskFromCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*
UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t drawDistance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*>(entityManager, drawDistance));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem::DecalUpdateCullingGroupSystem() {}
