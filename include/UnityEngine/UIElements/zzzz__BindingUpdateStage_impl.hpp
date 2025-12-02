#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingUpdateStage.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingUpdateStage::BindingUpdateStage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingUpdateStage::BindingUpdateStage() {}
constexpr ::UnityEngine::UIElements::BindingUpdateStage UnityEngine::UIElements::BindingUpdateStage::UpdateUI{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::BindingUpdateStage UnityEngine::UIElements::BindingUpdateStage::UpdateSource{ static_cast<int32_t>(0x1) };
