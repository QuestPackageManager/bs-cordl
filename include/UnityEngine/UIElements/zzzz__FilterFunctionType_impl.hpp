#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunctionType.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::FilterFunctionType::FilterFunctionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterFunctionType::FilterFunctionType() {}
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Custom{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Tint{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Opacity{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Invert{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Grayscale{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Sepia{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Blur{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Contrast{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::HueRotate{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunctionType::Count{ static_cast<int32_t>(0xa) };
