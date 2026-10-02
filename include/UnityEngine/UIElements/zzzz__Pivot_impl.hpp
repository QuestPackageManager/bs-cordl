#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Pivot.hpp"
#include "UnityEngine/UIElements/zzzz__Pivot_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Pivot::Pivot(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Pivot::Pivot() {}
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::Center{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::TopLeft{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::TopCenter{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::TopRight{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::LeftCenter{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::RightCenter{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::BottomLeft{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::BottomCenter{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::Pivot::BottomRight{ static_cast<int32_t>(0x8) };
