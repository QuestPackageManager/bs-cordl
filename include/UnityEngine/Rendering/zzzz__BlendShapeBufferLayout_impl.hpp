#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendShapeBufferLayout.hpp"
#include "UnityEngine/Rendering/zzzz__BlendShapeBufferLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BlendShapeBufferLayout::BlendShapeBufferLayout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BlendShapeBufferLayout::BlendShapeBufferLayout() {}
constexpr ::UnityEngine::Rendering::BlendShapeBufferLayout UnityEngine::Rendering::BlendShapeBufferLayout::PerShape{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BlendShapeBufferLayout UnityEngine::Rendering::BlendShapeBufferLayout::PerVertex{ static_cast<int32_t>(0x1) };
