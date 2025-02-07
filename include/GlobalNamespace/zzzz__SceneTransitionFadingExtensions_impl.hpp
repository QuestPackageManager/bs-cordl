#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionFadingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneTransitionFadingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionFadingExtensions.ShouldFadeOnSceneTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::GameScenesManager_SceneTransitionType)>(
    &::GlobalNamespace::SceneTransitionFadingExtensions::ShouldFadeOnSceneTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x408a510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionFadingExtensions*>::get(), "ShouldFadeOnSceneTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SceneTransitionFadingExtensions::ShouldFadeOnSceneTransition(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionFadingExtensions*>::get(), "ShouldFadeOnSceneTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sceneTransitionType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneTransitionFadingExtensions::SceneTransitionFadingExtensions() {}
