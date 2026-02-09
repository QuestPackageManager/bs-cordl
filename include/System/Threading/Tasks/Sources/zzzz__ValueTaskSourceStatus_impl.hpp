#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/ValueTaskSourceStatus.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::ValueTaskSourceStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::ValueTaskSourceStatus()   {
}
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  System::Threading::Tasks::Sources::ValueTaskSourceStatus::Pending{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  System::Threading::Tasks::Sources::ValueTaskSourceStatus::Succeeded{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  System::Threading::Tasks::Sources::ValueTaskSourceStatus::Faulted{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  System::Threading::Tasks::Sources::ValueTaskSourceStatus::Canceled{static_cast<int32_t>(0x3)};
