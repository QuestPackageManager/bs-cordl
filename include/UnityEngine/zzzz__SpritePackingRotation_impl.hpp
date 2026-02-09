#pragma once
// IWYU pragma private; include "UnityEngine/SpritePackingRotation.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpritePackingRotation::SpritePackingRotation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpritePackingRotation::SpritePackingRotation()   {
}
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::FlipHorizontal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::FlipVertical{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::Rotate180{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::SpritePackingRotation  UnityEngine::SpritePackingRotation::Any{static_cast<int32_t>(0xf)};
