#pragma once
#include "UnityEngine/ProBuilder/zzzz__SelectionModifierBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::SelectionModifierBehavior::SelectionModifierBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionModifierBehavior::SelectionModifierBehavior() {}
constexpr ::UnityEngine::ProBuilder::SelectionModifierBehavior UnityEngine::ProBuilder::SelectionModifierBehavior::Add{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::SelectionModifierBehavior UnityEngine::ProBuilder::SelectionModifierBehavior::Subtract{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::SelectionModifierBehavior UnityEngine::ProBuilder::SelectionModifierBehavior::Difference{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
