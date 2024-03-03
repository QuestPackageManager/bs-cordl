#pragma once
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ThreadPriority::ThreadPriority(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPriority::ThreadPriority() {}
constexpr ::System::Threading::ThreadPriority System::Threading::ThreadPriority::Lowest{ static_cast<int32_t>(0x0) };
constexpr ::System::Threading::ThreadPriority System::Threading::ThreadPriority::BelowNormal{ static_cast<int32_t>(0x1) };
constexpr ::System::Threading::ThreadPriority System::Threading::ThreadPriority::Normal{ static_cast<int32_t>(0x2) };
constexpr ::System::Threading::ThreadPriority System::Threading::ThreadPriority::AboveNormal{ static_cast<int32_t>(0x3) };
constexpr ::System::Threading::ThreadPriority System::Threading::ThreadPriority::Highest{ static_cast<int32_t>(0x4) };
