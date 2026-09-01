#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalDrawScreenSpaceSystem.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawScreenSpaceSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6862638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem.GetPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(
    &::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::GetPassIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68626bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(), 5 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalEntityManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityManager);
}
inline int32_t UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, decalCachedChunk);
}
inline ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*
UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(entityManager));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem::DecalDrawScreenSpaceSystem() {}
