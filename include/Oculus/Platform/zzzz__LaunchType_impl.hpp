#pragma once
// IWYU pragma private; include "Oculus/Platform/LaunchType.hpp"
#include "Oculus/Platform/zzzz__LaunchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LaunchType::LaunchType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LaunchType::LaunchType()   {
}
constexpr ::Oculus::Platform::LaunchType  Oculus::Platform::LaunchType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LaunchType  Oculus::Platform::LaunchType::Normal{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LaunchType  Oculus::Platform::LaunchType::Invite{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::LaunchType  Oculus::Platform::LaunchType::Coordinated{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::LaunchType  Oculus::Platform::LaunchType::Deeplink{static_cast<int32_t>(0x4)};
