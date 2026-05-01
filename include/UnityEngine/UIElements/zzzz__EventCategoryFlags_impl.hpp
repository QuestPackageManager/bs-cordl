#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategoryFlags.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategoryFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventCategoryFlags::EventCategoryFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCategoryFlags::EventCategoryFlags() {}
constexpr ::UnityEngine::UIElements::EventCategoryFlags UnityEngine::UIElements::EventCategoryFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::EventCategoryFlags UnityEngine::UIElements::EventCategoryFlags::All{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::UIElements::EventCategoryFlags UnityEngine::UIElements::EventCategoryFlags::TriggeredByOS{ static_cast<int32_t>(0x6806e) };
constexpr ::UnityEngine::UIElements::EventCategoryFlags UnityEngine::UIElements::EventCategoryFlags::TargetOnly{ static_cast<int32_t>(0x15a0) };
