#pragma once
#include "System/Net/NetworkInformation/zzzz__LinuxArpHardware_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::LinuxArpHardware::LinuxArpHardware(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxArpHardware::LinuxArpHardware() {}
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::ETHER{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::EETHER{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::PRONET{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::ATM{ static_cast<int32_t>(0x13) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::SLIP{ static_cast<int32_t>(0x100) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::CSLIP{ static_cast<int32_t>(0x101) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::SLIP6{ static_cast<int32_t>(0x102) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::CSLIP6{ static_cast<int32_t>(0x103) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::PPP{ static_cast<int32_t>(0x200) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::LOOPBACK{ static_cast<int32_t>(0x304) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::FDDI{ static_cast<int32_t>(0x306) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::TUNNEL{ static_cast<int32_t>(0x300) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::TUNNEL6{ static_cast<int32_t>(0x301) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::SIT{ static_cast<int32_t>(0x308) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::IPDDP{ static_cast<int32_t>(0x309) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::IPGRE{ static_cast<int32_t>(0x30a) };
constexpr ::System::Net::NetworkInformation::LinuxArpHardware System::Net::NetworkInformation::LinuxArpHardware::IP6GRE{ static_cast<int32_t>(0x337) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
