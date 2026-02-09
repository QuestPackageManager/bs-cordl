#pragma once
// IWYU pragma private; include "Oculus/Platform/PermissionGrantStatus.hpp"
#include "Oculus/Platform/zzzz__PermissionGrantStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PermissionGrantStatus::PermissionGrantStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PermissionGrantStatus::PermissionGrantStatus()   {
}
constexpr ::Oculus::Platform::PermissionGrantStatus  Oculus::Platform::PermissionGrantStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::PermissionGrantStatus  Oculus::Platform::PermissionGrantStatus::Granted{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::PermissionGrantStatus  Oculus::Platform::PermissionGrantStatus::Denied{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::PermissionGrantStatus  Oculus::Platform::PermissionGrantStatus::Blocked{static_cast<int32_t>(0x3)};
