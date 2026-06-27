#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HelpBoxMessageType.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::HelpBoxMessageType::HelpBoxMessageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBoxMessageType::HelpBoxMessageType()   {
}
constexpr ::UnityEngine::UIElements::HelpBoxMessageType  UnityEngine::UIElements::HelpBoxMessageType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::HelpBoxMessageType  UnityEngine::UIElements::HelpBoxMessageType::Info{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::HelpBoxMessageType  UnityEngine::UIElements::HelpBoxMessageType::Warning{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::HelpBoxMessageType  UnityEngine::UIElements::HelpBoxMessageType::Error{static_cast<int32_t>(0x3)};
