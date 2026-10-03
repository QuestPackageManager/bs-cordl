#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/NavigationDeviceType.hpp"
#include "UnityEngine/EventSystems/zzzz__NavigationDeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::EventSystems::NavigationDeviceType::NavigationDeviceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::NavigationDeviceType::NavigationDeviceType() {}
constexpr ::UnityEngine::EventSystems::NavigationDeviceType UnityEngine::EventSystems::NavigationDeviceType::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EventSystems::NavigationDeviceType UnityEngine::EventSystems::NavigationDeviceType::Keyboard{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::EventSystems::NavigationDeviceType UnityEngine::EventSystems::NavigationDeviceType::NonKeyboard{ static_cast<int32_t>(0x2) };
