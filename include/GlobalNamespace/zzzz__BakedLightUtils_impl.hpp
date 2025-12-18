#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightUtils_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateLoadedEnvironmentScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::System::Nullable_1<::UnityEngine::SceneManagement::Scene>)>(
    &::GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x574f9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateLoadedEnvironmentScene", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::SceneManagement::Scene>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateBakedLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene, bool)>(
    &::GlobalNamespace::BakedLightUtils::ValidateBakedLights)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x574fc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateBakedLights", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateMirrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene)>(
    &::GlobalNamespace::BakedLightUtils::ValidateMirrors)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x575004c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateMirrors", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakedLightUtils::setStaticF__zWritePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_zWritePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__zWritePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_zWritePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilRefValuePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilRefValuePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilRefValuePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilRefValuePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilCompPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilCompPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilCompPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilCompPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::setStaticF__stencilPassOpPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stencilPassOpPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightUtils::getStaticF__stencilPassOpPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_stencilPassOpPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get>();
}
inline void GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene(bool validateBakedGIEnabled, ::System::Nullable_1<::UnityEngine::SceneManagement::Scene> optionalEnvScene) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateLoadedEnvironmentScene", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::SceneManagement::Scene>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validateBakedGIEnabled, optionalEnvScene);
}
inline void GlobalNamespace::BakedLightUtils::ValidateBakedLights(::UnityEngine::GameObject* activeSceneRootObject, ::UnityEngine::SceneManagement::Scene envScene, bool validateBakedGIEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateBakedLights", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, activeSceneRootObject, envScene, validateBakedGIEnabled);
}
inline void GlobalNamespace::BakedLightUtils::ValidateMirrors(::UnityEngine::GameObject* activeSceneRootObject, ::UnityEngine::SceneManagement::Scene envScene) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils*>::get(), "ValidateMirrors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, activeSceneRootObject, envScene);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightUtils::BakedLightUtils() {}
