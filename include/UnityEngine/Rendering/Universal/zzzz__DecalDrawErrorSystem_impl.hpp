#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalDrawErrorSystem.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawErrorSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityManager*, ::UnityEngine::Rendering::Universal::DecalTechnique)>(&::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6857de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalTechnique>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem.GetPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetPassIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6857e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem.GetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetMaterial)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6857ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique& UnityEngine::Rendering::Universal::DecalDrawErrorSystem::__cordl_internal_get_m_Technique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique const& UnityEngine::Rendering::Universal::DecalDrawErrorSystem::__cordl_internal_get_m_Technique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawErrorSystem::__cordl_internal_set_m_Technique(::UnityEngine::Rendering::Universal::DecalTechnique value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Technique = value;
}
inline void UnityEngine::Rendering::Universal::DecalDrawErrorSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager,
                                                                           ::UnityEngine::Rendering::Universal::DecalTechnique technique) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalTechnique>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager, technique);
}
inline int32_t UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, decalCachedChunk);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, decalEntityChunk);
}
inline ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*
UnityEngine::Rendering::Universal::DecalDrawErrorSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager,
                                                                  ::UnityEngine::Rendering::Universal::DecalTechnique technique) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(entityManager, technique));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::DecalDrawErrorSystem() {}
