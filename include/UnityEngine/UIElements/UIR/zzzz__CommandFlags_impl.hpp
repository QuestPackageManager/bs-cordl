#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandFlags.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIR::CommandFlags::CommandFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CommandFlags::CommandFlags() {}
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::IsPremultiplied{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceRenderTypeBitOffset{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceRenderTypeSolid{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceRenderTypeTextured{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceRenderTypeText{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceRenderTypeSvgGradient{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceRenderTypeBits{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::UIElements::UIR::CommandFlags UnityEngine::UIElements::UIR::CommandFlags::ForceSingleTextureSlot{ static_cast<int32_t>(0x10) };
