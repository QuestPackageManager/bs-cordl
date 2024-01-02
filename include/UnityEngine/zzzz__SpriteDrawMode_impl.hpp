#pragma once
#include "UnityEngine/zzzz__SpriteDrawMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpriteDrawMode::SpriteDrawMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpriteDrawMode::SpriteDrawMode() {}
constexpr ::UnityEngine::SpriteDrawMode UnityEngine::SpriteDrawMode::Simple{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpriteDrawMode UnityEngine::SpriteDrawMode::Sliced{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpriteDrawMode UnityEngine::SpriteDrawMode::Tiled{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
