#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CausalitySynchronousWork.hpp"
#include "System/Threading/Tasks/zzzz__CausalitySynchronousWork_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::CausalitySynchronousWork::CausalitySynchronousWork(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::CausalitySynchronousWork::CausalitySynchronousWork()   {
}
constexpr ::System::Threading::Tasks::CausalitySynchronousWork  System::Threading::Tasks::CausalitySynchronousWork::CompletionNotification{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::CausalitySynchronousWork  System::Threading::Tasks::CausalitySynchronousWork::ProgressNotification{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::CausalitySynchronousWork  System::Threading::Tasks::CausalitySynchronousWork::Execution{static_cast<int32_t>(0x2)};
