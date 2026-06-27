#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SelectionType.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::SelectionType::SelectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SelectionType::SelectionType()   {
}
constexpr ::UnityEngine::UIElements::SelectionType  UnityEngine::UIElements::SelectionType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::SelectionType  UnityEngine::UIElements::SelectionType::Single{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::SelectionType  UnityEngine::UIElements::SelectionType::Multiple{static_cast<int32_t>(0x2)};
