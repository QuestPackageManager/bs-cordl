#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderDataDirtyTypes.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes::RenderDataDirtyTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes::RenderDataDirtyTypes()   {
}
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Transform{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::ClipRectSize{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Clipping{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::ClippingHierarchy{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Visuals{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::VisualsHierarchy{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::VisualsOpacityId{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Opacity{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::OpacityHierarchy{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::Color{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  UnityEngine::UIElements::UIR::RenderDataDirtyTypes::AllVisuals{static_cast<int32_t>(0x70)};
