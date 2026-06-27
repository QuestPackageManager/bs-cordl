#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskStatus.hpp"
#include "System/Threading/Tasks/zzzz__TaskStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::TaskStatus::TaskStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskStatus::TaskStatus()   {
}
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::Created{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::WaitingForActivation{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::WaitingToRun{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::Running{static_cast<int32_t>(0x3)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::WaitingForChildrenToComplete{static_cast<int32_t>(0x4)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::RanToCompletion{static_cast<int32_t>(0x5)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::Canceled{static_cast<int32_t>(0x6)};
constexpr ::System::Threading::Tasks::TaskStatus  System::Threading::Tasks::TaskStatus::Faulted{static_cast<int32_t>(0x7)};
