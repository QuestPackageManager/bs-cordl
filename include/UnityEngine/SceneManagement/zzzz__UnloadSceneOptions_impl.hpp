#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/UnloadSceneOptions.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions::UnloadSceneOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions::UnloadSceneOptions()   {
}
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions  UnityEngine::SceneManagement::UnloadSceneOptions::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions  UnityEngine::SceneManagement::UnloadSceneOptions::UnloadAllEmbeddedSceneObjects{static_cast<int32_t>(0x1)};
