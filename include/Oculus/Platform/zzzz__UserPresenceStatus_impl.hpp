#pragma once
// IWYU pragma private; include "Oculus/Platform/UserPresenceStatus.hpp"
#include "Oculus/Platform/zzzz__UserPresenceStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::UserPresenceStatus::UserPresenceStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::UserPresenceStatus::UserPresenceStatus()   {
}
constexpr ::Oculus::Platform::UserPresenceStatus  Oculus::Platform::UserPresenceStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::UserPresenceStatus  Oculus::Platform::UserPresenceStatus::Online{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::UserPresenceStatus  Oculus::Platform::UserPresenceStatus::Offline{static_cast<int32_t>(0x2)};
