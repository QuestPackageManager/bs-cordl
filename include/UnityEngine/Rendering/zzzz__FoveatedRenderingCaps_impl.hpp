#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FoveatedRenderingCaps.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingCaps_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FoveatedRenderingCaps::FoveatedRenderingCaps(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FoveatedRenderingCaps::FoveatedRenderingCaps() {}
constexpr ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Rendering::FoveatedRenderingCaps::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Rendering::FoveatedRenderingCaps::FoveationImage{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Rendering::FoveatedRenderingCaps::NonUniformRaster{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Rendering::FoveatedRenderingCaps::ModeChangeOnlyBeforeRenderTargetSet{ static_cast<int32_t>(0x4) };
