#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PseudoStates.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PseudoStates::PseudoStates(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PseudoStates::PseudoStates()   {
}
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Active{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Hover{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Checked{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Disabled{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Focus{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Root{static_cast<int32_t>(0x80)};
