#pragma once
// IWYU pragma private; include "UnityEngine/LineTextureMode.hpp"
#include "UnityEngine/zzzz__LineTextureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LineTextureMode::LineTextureMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LineTextureMode::LineTextureMode() {}
constexpr ::UnityEngine::LineTextureMode UnityEngine::LineTextureMode::Stretch{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LineTextureMode UnityEngine::LineTextureMode::Tile{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LineTextureMode UnityEngine::LineTextureMode::DistributePerSegment{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LineTextureMode UnityEngine::LineTextureMode::RepeatPerSegment{ static_cast<int32_t>(0x3) };
