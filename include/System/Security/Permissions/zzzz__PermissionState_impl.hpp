#pragma once
// IWYU pragma private; include "System/Security/Permissions/PermissionState.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::PermissionState::PermissionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::PermissionState::PermissionState()   {
}
constexpr ::System::Security::Permissions::PermissionState  System::Security::Permissions::PermissionState::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Permissions::PermissionState  System::Security::Permissions::PermissionState::Unrestricted{static_cast<int32_t>(0x1)};
