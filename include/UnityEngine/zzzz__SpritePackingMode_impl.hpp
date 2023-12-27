#pragma once
#include "UnityEngine/zzzz__SpritePackingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpritePackingMode::SpritePackingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpritePackingMode::SpritePackingMode() {}
constexpr ::UnityEngine::SpritePackingMode UnityEngine::SpritePackingMode::Tight{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpritePackingMode UnityEngine::SpritePackingMode::Rectangle{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
