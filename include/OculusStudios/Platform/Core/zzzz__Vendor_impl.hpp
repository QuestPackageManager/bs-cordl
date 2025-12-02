#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/Vendor.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::Vendor::Vendor(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::Vendor::Vendor() {}
constexpr ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::Vendor::Unknown{ static_cast<uint8_t>(0x0u) };
constexpr ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::Vendor::Valve{ static_cast<uint8_t>(0x1u) };
constexpr ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::Vendor::Meta{ static_cast<uint8_t>(0x2u) };
constexpr ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::Vendor::Sony{ static_cast<uint8_t>(0x3u) };
