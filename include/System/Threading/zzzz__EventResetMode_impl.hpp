#pragma once
// IWYU pragma private; include "System/Threading/EventResetMode.hpp"
#include "System/Threading/zzzz__EventResetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::EventResetMode::EventResetMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::EventResetMode::EventResetMode()   {
}
constexpr ::System::Threading::EventResetMode  System::Threading::EventResetMode::AutoReset{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::EventResetMode  System::Threading::EventResetMode::ManualReset{static_cast<int32_t>(0x1)};
