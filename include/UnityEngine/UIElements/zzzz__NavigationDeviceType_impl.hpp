#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationDeviceType.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationDeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::NavigationDeviceType::NavigationDeviceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationDeviceType::NavigationDeviceType()   {
}
constexpr ::UnityEngine::UIElements::NavigationDeviceType  UnityEngine::UIElements::NavigationDeviceType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::NavigationDeviceType  UnityEngine::UIElements::NavigationDeviceType::Keyboard{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::NavigationDeviceType  UnityEngine::UIElements::NavigationDeviceType::NonKeyboard{static_cast<int32_t>(0x2)};
