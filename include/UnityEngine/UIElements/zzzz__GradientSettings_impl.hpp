#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GradientSettings.hpp"
#include "UnityEngine/UIElements/zzzz__AddressMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
// Ctor Parameters [CppParam { name: "gradientType", ty: "::UnityEngine::UIElements::GradientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "addressMode", ty: "::UnityEngine::UIElements::AddressMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "radialFocus", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "location", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::GradientSettings::GradientSettings(::UnityEngine::UIElements::GradientType  gradientType, ::UnityEngine::UIElements::AddressMode  addressMode, ::UnityEngine::Vector2  radialFocus, ::UnityEngine::RectInt  location) noexcept  {
this->gradientType = gradientType;
this->addressMode = addressMode;
this->radialFocus = radialFocus;
this->location = location;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GradientSettings::GradientSettings()   {
}
