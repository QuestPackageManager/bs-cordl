#pragma once
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod::ClipMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod::ClipMethod() {}
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod UnityEngine::UIElements::UIR::Implementation::ClipMethod::Undetermined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod UnityEngine::UIElements::UIR::Implementation::ClipMethod::NotClipped{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod UnityEngine::UIElements::UIR::Implementation::ClipMethod::Scissor{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod UnityEngine::UIElements::UIR::Implementation::ClipMethod::ShaderDiscard{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod UnityEngine::UIElements::UIR::Implementation::ClipMethod::Stencil{ static_cast<int32_t>(0x4) };
