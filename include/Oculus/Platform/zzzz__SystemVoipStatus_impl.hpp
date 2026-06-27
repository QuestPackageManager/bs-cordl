#pragma once
// IWYU pragma private; include "Oculus/Platform/SystemVoipStatus.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::SystemVoipStatus::SystemVoipStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::SystemVoipStatus::SystemVoipStatus()   {
}
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Unavailable{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Suppressed{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Active{static_cast<int32_t>(0x3)};
