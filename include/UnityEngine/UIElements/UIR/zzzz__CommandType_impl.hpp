#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandType.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::CommandType::CommandType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CommandType::CommandType() {}
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::Draw{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::ImmediateCull{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::Immediate{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PushView{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PopView{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PushScissor{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PopScissor{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PushRenderTexture{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PopRenderTexture{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::BlitToPreviousRT{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PushDefaultMaterial{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::UIElements::UIR::CommandType UnityEngine::UIElements::UIR::CommandType::PopDefaultMaterial{ static_cast<int32_t>(0xb) };
