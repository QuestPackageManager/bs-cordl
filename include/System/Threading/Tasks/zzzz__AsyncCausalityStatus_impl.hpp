#pragma once
// IWYU pragma private; include "System/Threading/Tasks/AsyncCausalityStatus.hpp"
#include "System/Threading/Tasks/zzzz__AsyncCausalityStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::AsyncCausalityStatus::AsyncCausalityStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::AsyncCausalityStatus::AsyncCausalityStatus()   {
}
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Started{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Completed{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Canceled{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Error{static_cast<int32_t>(0x3)};
