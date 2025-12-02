#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ClipMethod.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ClipMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::ClipMethod::ClipMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::ClipMethod::ClipMethod() {}
constexpr ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::ClipMethod::Undetermined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::ClipMethod::NotClipped{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::ClipMethod::Scissor{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::ClipMethod::ShaderDiscard{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::ClipMethod::Stencil{ static_cast<int32_t>(0x4) };
