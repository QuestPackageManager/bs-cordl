#pragma once
// IWYU pragma private; include "GlobalNamespace\SceneTransitionFadingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneTransitionFadingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionFadingExtensions.ShouldFadeOnSceneTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameScenesManager_SceneTransitionType)>(
    &::GlobalNamespace::SceneTransitionFadingExtensions::ShouldFadeOnSceneTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4b8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionFadingExtensions*>(),
                                                             { "ShouldFadeOnSceneTransition", {}, { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SceneTransitionFadingExtensions::ShouldFadeOnSceneTransition(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneTransitionFadingExtensions*>(),
                                                           { "ShouldFadeOnSceneTransition", {}, { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sceneTransitionType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneTransitionFadingExtensions::SceneTransitionFadingExtensions() {}
