#pragma once
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::InvokePolicy::InvokePolicy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InvokePolicy::InvokePolicy() {}
constexpr ::UnityEngine::UIElements::InvokePolicy UnityEngine::UIElements::InvokePolicy::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::InvokePolicy UnityEngine::UIElements::InvokePolicy::IncludeDisabled{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
