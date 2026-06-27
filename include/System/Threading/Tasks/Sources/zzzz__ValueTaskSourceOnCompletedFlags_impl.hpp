#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/ValueTaskSourceOnCompletedFlags.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags::ValueTaskSourceOnCompletedFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags::ValueTaskSourceOnCompletedFlags()   {
}
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags::UseSchedulingContext{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags::FlowExecutionContext{static_cast<int32_t>(0x2)};
