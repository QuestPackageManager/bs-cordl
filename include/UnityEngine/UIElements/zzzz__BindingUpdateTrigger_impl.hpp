#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingUpdateTrigger.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateTrigger_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger::BindingUpdateTrigger(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger::BindingUpdateTrigger() {}
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger UnityEngine::UIElements::BindingUpdateTrigger::WhenDirty{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger UnityEngine::UIElements::BindingUpdateTrigger::OnSourceChanged{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::BindingUpdateTrigger UnityEngine::UIElements::BindingUpdateTrigger::EveryUpdate{ static_cast<int32_t>(0x2) };
