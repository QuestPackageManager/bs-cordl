#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SelectMode.hpp"
#include "UnityEngine/ProBuilder/zzzz__SelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::SelectMode::SelectMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectMode::SelectMode() {}
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::Object{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::Vertex{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::Edge{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::Face{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::TextureFace{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::TextureEdge{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::TextureVertex{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::InputTool{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::ProBuilder::SelectMode UnityEngine::ProBuilder::SelectMode::Any{ static_cast<int32_t>(0xffff) };
