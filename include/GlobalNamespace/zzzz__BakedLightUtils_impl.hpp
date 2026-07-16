#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightUtils_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateLoadedEnvironmentScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Nullable_1<::UnityEngine::SceneManagement::Scene>)>(
    &::GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x58e08bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightUtils*>(),
                                                { "ValidateLoadedEnvironmentScene", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::SceneManagement::Scene>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateBakedLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene, bool)>(&::GlobalNamespace::BakedLightUtils::ValidateBakedLights)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x58e0b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightUtils*>(),
                            { "ValidateBakedLights", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateMirrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::BakedLightUtils::ValidateMirrors)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x58e0f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightUtils*>(),
                                                             { "ValidateMirrors", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakedLightUtils::setStaticF__zWritePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_zWritePropertyId", ::GlobalNamespace::BakedLightUtils*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__zWritePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_zWritePropertyId", ::GlobalNamespace::BakedLightUtils*>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilRefValuePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilRefValuePropertyId", ::GlobalNamespace::BakedLightUtils*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilRefValuePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilRefValuePropertyId", ::GlobalNamespace::BakedLightUtils*>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilCompPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilCompPropertyId", ::GlobalNamespace::BakedLightUtils*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilCompPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilCompPropertyId", ::GlobalNamespace::BakedLightUtils*>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilPassOpPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilPassOpPropertyId", ::GlobalNamespace::BakedLightUtils*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilPassOpPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilPassOpPropertyId", ::GlobalNamespace::BakedLightUtils*>();
}
inline void GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene(bool validateBakedGIEnabled, ::System::Nullable_1<::UnityEngine::SceneManagement::Scene> optionalEnvScene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightUtils*>(),
                                              { "ValidateLoadedEnvironmentScene", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::SceneManagement::Scene>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, validateBakedGIEnabled, optionalEnvScene);
}
inline void GlobalNamespace::BakedLightUtils::ValidateBakedLights(::UnityEngine::GameObject* activeSceneRootObject, ::UnityEngine::SceneManagement::Scene envScene, bool validateBakedGIEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightUtils*>(),
                          { "ValidateBakedLights", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, activeSceneRootObject, envScene, validateBakedGIEnabled);
}
inline void GlobalNamespace::BakedLightUtils::ValidateMirrors(::UnityEngine::GameObject* activeSceneRootObject, ::UnityEngine::SceneManagement::Scene envScene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightUtils*>(),
                                                           { "ValidateMirrors", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, activeSceneRootObject, envScene);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightUtils::BakedLightUtils() {}
