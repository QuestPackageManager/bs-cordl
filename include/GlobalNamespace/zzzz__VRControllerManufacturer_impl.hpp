#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllerManufacturer.hpp"
#include "GlobalNamespace/zzzz__VRControllerManufacturer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VRControllerManufacturer::VRControllerManufacturer(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllerManufacturer::VRControllerManufacturer() {}
constexpr ::GlobalNamespace::VRControllerManufacturer GlobalNamespace::VRControllerManufacturer::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::VRControllerManufacturer GlobalNamespace::VRControllerManufacturer::HTC{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::VRControllerManufacturer GlobalNamespace::VRControllerManufacturer::Oculus{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::VRControllerManufacturer GlobalNamespace::VRControllerManufacturer::Valve{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::VRControllerManufacturer GlobalNamespace::VRControllerManufacturer::Microsoft{ static_cast<int32_t>(0x4) };
