#pragma once
// IWYU pragma private; include "System/Threading/Tasks/InternalTaskOptions.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::InternalTaskOptions::InternalTaskOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::InternalTaskOptions::InternalTaskOptions()   {
}
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::InternalOptionsMask{static_cast<int32_t>(0xff00)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::ContinuationTask{static_cast<int32_t>(0x200)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::PromiseTask{static_cast<int32_t>(0x400)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::LazyCancellation{static_cast<int32_t>(0x1000)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::QueuedByRuntime{static_cast<int32_t>(0x2000)};
constexpr ::System::Threading::Tasks::InternalTaskOptions  System::Threading::Tasks::InternalTaskOptions::DoNotDispose{static_cast<int32_t>(0x4000)};
