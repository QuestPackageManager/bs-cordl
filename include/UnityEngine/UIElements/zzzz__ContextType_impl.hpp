#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextType.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ContextType::ContextType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextType::ContextType()   {
}
constexpr ::UnityEngine::UIElements::ContextType  UnityEngine::UIElements::ContextType::Player{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::ContextType  UnityEngine::UIElements::ContextType::Editor{static_cast<int32_t>(0x1)};
