#pragma once
// IWYU pragma private; include "Oculus/Platform/LaunchResult.hpp"
#include "Oculus/Platform/zzzz__LaunchResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LaunchResult::LaunchResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LaunchResult::LaunchResult()   {
}
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::Success{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedRoomFull{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedGameAlreadyStarted{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedRoomNotFound{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedUserDeclined{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::LaunchResult  Oculus::Platform::LaunchResult::FailedOtherReason{static_cast<int32_t>(0x6)};
