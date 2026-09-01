#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalDrawSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.get_overrideMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::get_overrideMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x685aa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), { "get_overrideMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.set_overrideMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::set_overrideMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x685aa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), { "set_overrideMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(::StringW, ::UnityEngine::Rendering::Universal::DecalEntityManager*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6853918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::Execute)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x685aa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), { "Execute", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::Execute)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6855218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.GetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::GetMaterial)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x685aca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.GetPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::GetPassIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*,
    ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::Execute)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x685aae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                { "Execute",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*,
    ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::Draw)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x685af2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                { "Draw",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.DrawInstanced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*,
    ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::DrawInstanced)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x685acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                { "DrawInstanced",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::DecalDrawSystem::Execute)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x685b20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*,
    ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::Execute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x685b3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                { "Execute",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*,
    ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::Draw)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x685b84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                            { "Draw",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawSystem.DrawInstanced
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawSystem::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*,
    ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawSystem::DrawInstanced)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x685b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                            { "DrawInstanced",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_EntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_EntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EntityManager = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_WorldToDecals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToDecals;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_WorldToDecals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToDecals;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_set_m_WorldToDecals(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldToDecals = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_NormalToDecals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalToDecals;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_NormalToDecals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalToDecals;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_set_m_NormalToDecals(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NormalToDecals = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_DecalLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayerMasks;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_DecalLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayerMasks;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_set_m_DecalLayerMasks(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayerMasks = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_Sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get_m_Sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sampler = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get__overrideMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterial_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_get__overrideMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawSystem::__cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideMaterial_k__BackingField = value;
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::setStaticF_MaxBatchSize(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "MaxBatchSize", ::UnityEngine::Rendering::Universal::DecalDrawSystem*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::DecalDrawSystem::getStaticF_MaxBatchSize() {
  return ::cordl_internals::getStaticField<uint32_t, "MaxBatchSize", ::UnityEngine::Rendering::Universal::DecalDrawSystem*>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalDrawSystem::get_overrideMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), { "get_overrideMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::set_overrideMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), { "set_overrideMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::_ctor(::StringW sampler, ::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler, entityManager);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Execute(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), { "Execute", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Execute(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalDrawSystem::GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, decalEntityChunk);
}
inline int32_t UnityEngine::Rendering::Universal::DecalDrawSystem::GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, decalCachedChunk);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Execute(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                                                                        ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk,
                                                                        ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                              { "Execute",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                  ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, decalEntityChunk, decalCachedChunk, decalDrawCallChunk, count);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Draw(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                                                                     ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk,
                                                                     ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                              { "Draw",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                  ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, decalEntityChunk, decalCachedChunk, decalDrawCallChunk, passIndex);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::DrawInstanced(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                              ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                                                                              ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk,
                                                                              ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                              { "DrawInstanced",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                  ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, decalEntityChunk, decalCachedChunk, decalDrawCallChunk, passIndex);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Execute(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Execute(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                        ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                                                                        ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk,
                                                                        ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                              { "Execute",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>(),
                                                  ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, decalEntityChunk, decalCachedChunk, decalDrawCallChunk, count);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::Draw(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                     ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                                                                     ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk,
                                                                     ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                       { "Draw",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, decalEntityChunk, decalCachedChunk, decalDrawCallChunk);
}
inline void UnityEngine::Rendering::Universal::DecalDrawSystem::DrawInstanced(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                              ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                                                                              ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk,
                                                                              ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(),
                                       { "DrawInstanced",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityChunk*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalCachedChunk*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, decalEntityChunk, decalCachedChunk, decalDrawCallChunk);
}
inline ::UnityEngine::Rendering::Universal::DecalDrawSystem* UnityEngine::Rendering::Universal::DecalDrawSystem::New_ctor(::StringW sampler,
                                                                                                                          ::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalDrawSystem*>(sampler, entityManager));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalDrawSystem::DecalDrawSystem() {}
