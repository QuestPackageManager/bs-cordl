#pragma once
// IWYU pragma private; include "System/Threading/ThreadState.hpp"
#include "System/Threading/zzzz__ThreadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ThreadState::ThreadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadState::ThreadState()   {
}
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Running{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::StopRequested{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::SuspendRequested{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Background{static_cast<int32_t>(0x4)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Unstarted{static_cast<int32_t>(0x8)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Stopped{static_cast<int32_t>(0x10)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::WaitSleepJoin{static_cast<int32_t>(0x20)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Suspended{static_cast<int32_t>(0x40)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::AbortRequested{static_cast<int32_t>(0x80)};
constexpr ::System::Threading::ThreadState  System::Threading::ThreadState::Aborted{static_cast<int32_t>(0x100)};
