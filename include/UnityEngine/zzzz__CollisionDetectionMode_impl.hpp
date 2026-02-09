#pragma once
// IWYU pragma private; include "UnityEngine/CollisionDetectionMode.hpp"
#include "UnityEngine/zzzz__CollisionDetectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionDetectionMode::CollisionDetectionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CollisionDetectionMode::CollisionDetectionMode()   {
}
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::Discrete{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::Continuous{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::ContinuousDynamic{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CollisionDetectionMode  UnityEngine::CollisionDetectionMode::ContinuousSpeculative{static_cast<int32_t>(0x3)};
