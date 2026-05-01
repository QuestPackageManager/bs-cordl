#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SendEventOptions.hpp"
#include "UnityEngine/Analytics/zzzz__SendEventOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Analytics::SendEventOptions::SendEventOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SendEventOptions::SendEventOptions() {}
constexpr ::UnityEngine::Analytics::SendEventOptions UnityEngine::Analytics::SendEventOptions::kAppendNone{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Analytics::SendEventOptions UnityEngine::Analytics::SendEventOptions::kAppendBuildGuid{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Analytics::SendEventOptions UnityEngine::Analytics::SendEventOptions::kAppendBuildTarget{ static_cast<int32_t>(0x2) };
