#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixArpHardware.hpp"
#include "System/Net/NetworkInformation/zzzz__AixArpHardware_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixArpHardware::AixArpHardware(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixArpHardware::AixArpHardware() {}
constexpr ::System::Net::NetworkInformation::AixArpHardware System::Net::NetworkInformation::AixArpHardware::ETHER{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::NetworkInformation::AixArpHardware System::Net::NetworkInformation::AixArpHardware::ATM{ static_cast<int32_t>(0x25) };
constexpr ::System::Net::NetworkInformation::AixArpHardware System::Net::NetworkInformation::AixArpHardware::SLIP{ static_cast<int32_t>(0x1c) };
constexpr ::System::Net::NetworkInformation::AixArpHardware System::Net::NetworkInformation::AixArpHardware::PPP{ static_cast<int32_t>(0x17) };
constexpr ::System::Net::NetworkInformation::AixArpHardware System::Net::NetworkInformation::AixArpHardware::LOOPBACK{ static_cast<int32_t>(0x18) };
constexpr ::System::Net::NetworkInformation::AixArpHardware System::Net::NetworkInformation::AixArpHardware::FDDI{ static_cast<int32_t>(0xf) };
