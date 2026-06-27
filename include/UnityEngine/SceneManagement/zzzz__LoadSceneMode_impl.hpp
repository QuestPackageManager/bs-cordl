#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::LoadSceneMode::LoadSceneMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::LoadSceneMode::LoadSceneMode()   {
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode  UnityEngine::SceneManagement::LoadSceneMode::Single{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SceneManagement::LoadSceneMode  UnityEngine::SceneManagement::LoadSceneMode::Additive{static_cast<int32_t>(0x1)};
