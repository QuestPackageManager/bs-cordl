#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskCreationOptions.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::TaskCreationOptions::TaskCreationOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskCreationOptions::TaskCreationOptions()   {
}
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::PreferFairness{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::LongRunning{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::AttachedToParent{static_cast<int32_t>(0x4)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::DenyChildAttach{static_cast<int32_t>(0x8)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::HideScheduler{static_cast<int32_t>(0x10)};
constexpr ::System::Threading::Tasks::TaskCreationOptions  System::Threading::Tasks::TaskCreationOptions::RunContinuationsAsynchronously{static_cast<int32_t>(0x40)};
