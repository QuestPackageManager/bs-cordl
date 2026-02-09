#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UsageHints.hpp"
#include "UnityEngine/UIElements/zzzz__UsageHints_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UsageHints::UsageHints(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UsageHints::UsageHints()   {
}
constexpr ::UnityEngine::UIElements::UsageHints  UnityEngine::UIElements::UsageHints::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::UsageHints  UnityEngine::UIElements::UsageHints::DynamicTransform{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::UsageHints  UnityEngine::UIElements::UsageHints::GroupTransform{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::UsageHints  UnityEngine::UIElements::UsageHints::MaskContainer{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::UsageHints  UnityEngine::UIElements::UsageHints::DynamicColor{static_cast<int32_t>(0x8)};
