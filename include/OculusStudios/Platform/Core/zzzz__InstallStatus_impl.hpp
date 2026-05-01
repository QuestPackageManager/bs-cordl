#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/InstallStatus.hpp"
#include "OculusStudios/Platform/Core/zzzz__InstallStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::InstallStatus::InstallStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::InstallStatus::InstallStatus() {}
constexpr ::OculusStudios::Platform::Core::InstallStatus OculusStudios::Platform::Core::InstallStatus::NotInstalled{ static_cast<int32_t>(0x0) };
constexpr ::OculusStudios::Platform::Core::InstallStatus OculusStudios::Platform::Core::InstallStatus::Downloading{ static_cast<int32_t>(0x1) };
constexpr ::OculusStudios::Platform::Core::InstallStatus OculusStudios::Platform::Core::InstallStatus::Installed{ static_cast<int32_t>(0x2) };
