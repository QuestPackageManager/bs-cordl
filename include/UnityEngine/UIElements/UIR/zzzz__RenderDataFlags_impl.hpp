#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderDataFlags.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags::RenderDataFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags::RenderDataFlags() {}
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags UnityEngine::UIElements::UIR::RenderDataFlags::IsInChain{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags UnityEngine::UIElements::UIR::RenderDataFlags::IsGroupTransform{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags UnityEngine::UIElements::UIR::RenderDataFlags::IsIgnoringDynamicColorHint{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags UnityEngine::UIElements::UIR::RenderDataFlags::HasExtraData{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::UIR::RenderDataFlags UnityEngine::UIElements::UIR::RenderDataFlags::HasExtraMeshes{ static_cast<int32_t>(0x10) };
