#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueFunction.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StyleValueFunction::StyleValueFunction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueFunction::StyleValueFunction() {}
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::Var{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::Env{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::LinearGradient{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::NoneFilter{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::CustomFilter{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterTint{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterOpacity{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterInvert{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterGrayscale{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterSepia{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterBlur{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterContrast{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::FilterHueRotate{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::UIElements::StyleValueFunction UnityEngine::UIElements::StyleValueFunction::MaterialProperty{ static_cast<int32_t>(0xe) };
