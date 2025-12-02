#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/VertexFlags.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::VertexFlags::VertexFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VertexFlags::VertexFlags() {}
constexpr ::UnityEngine::UIElements::UIR::VertexFlags UnityEngine::UIElements::UIR::VertexFlags::IsSolid{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::VertexFlags UnityEngine::UIElements::UIR::VertexFlags::IsText{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::VertexFlags UnityEngine::UIElements::UIR::VertexFlags::IsTextured{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::VertexFlags UnityEngine::UIElements::UIR::VertexFlags::IsDynamic{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::UIR::VertexFlags UnityEngine::UIElements::UIR::VertexFlags::IsSvgGradients{ static_cast<int32_t>(0x4) };
