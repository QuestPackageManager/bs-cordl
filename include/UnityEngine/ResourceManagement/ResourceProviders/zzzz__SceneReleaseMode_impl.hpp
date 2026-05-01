#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/SceneReleaseMode.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode::SceneReleaseMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode::SceneReleaseMode() {}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode::ReleaseSceneWhenSceneUnloaded{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode::OnlyReleaseSceneOnHandleRelease{
  static_cast<int32_t>(0x1)
};
