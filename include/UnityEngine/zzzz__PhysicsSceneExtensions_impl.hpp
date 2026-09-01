#pragma once
// IWYU pragma private; include "UnityEngine\PhysicsSceneExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PhysicsSceneExtensions_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsSceneExtensions.GetPhysicsScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::PhysicsSceneExtensions::GetPhysicsScene)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b95ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsSceneExtensions*>(), { "GetPhysicsScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsSceneExtensions.GetPhysicsScene_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::PhysicsSceneExtensions::GetPhysicsScene_Internal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b95dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsSceneExtensions*>(), { "GetPhysicsScene_Internal", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsSceneExtensions.GetPhysicsScene_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::SceneManagement::Scene>, ::by_ref<::UnityEngine::PhysicsScene>)>(
    &::UnityEngine::PhysicsSceneExtensions::GetPhysicsScene_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b95e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions*>(),
                         { "GetPhysicsScene_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>(), ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::PhysicsScene UnityEngine::PhysicsSceneExtensions::GetPhysicsScene(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsSceneExtensions*>(), { "GetPhysicsScene", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(nullptr, ___internal_method, scene);
}
inline ::UnityEngine::PhysicsScene UnityEngine::PhysicsSceneExtensions::GetPhysicsScene_Internal(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::PhysicsSceneExtensions*>(), { "GetPhysicsScene_Internal", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(nullptr, ___internal_method, scene);
}
inline void UnityEngine::PhysicsSceneExtensions::GetPhysicsScene_Internal_Injected(::by_ref<::UnityEngine::SceneManagement::Scene> scene, ::by_ref<::UnityEngine::PhysicsScene> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::PhysicsSceneExtensions*>(),
                       { "GetPhysicsScene_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>(), ::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsSceneExtensions::PhysicsSceneExtensions() {}
