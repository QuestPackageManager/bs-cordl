#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/LocalPhysicsMode.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode::LocalPhysicsMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode::LocalPhysicsMode()   {
}
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode  UnityEngine::SceneManagement::LocalPhysicsMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode  UnityEngine::SceneManagement::LocalPhysicsMode::Physics2D{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode  UnityEngine::SceneManagement::LocalPhysicsMode::Physics3D{static_cast<int32_t>(0x2)};
