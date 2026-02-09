#pragma once
// IWYU pragma private; include "UnityEngine/CollisionFlags.hpp"
#include "UnityEngine/zzzz__CollisionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionFlags::CollisionFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CollisionFlags::CollisionFlags()   {
}
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::Sides{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::Above{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::Below{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::CollidedSides{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::CollidedAbove{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CollisionFlags  UnityEngine::CollisionFlags::CollidedBelow{static_cast<int32_t>(0x4)};
