#pragma once
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType::NetworkInterfaceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType::NetworkInterfaceType() {}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Unknown{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Ethernet{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::TokenRing{ static_cast<int32_t>(0x9) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Fddi{ static_cast<int32_t>(0xf) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::BasicIsdn{ static_cast<int32_t>(0x14) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::PrimaryIsdn{ static_cast<int32_t>(0x15) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Ppp{ static_cast<int32_t>(0x17) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Loopback{ static_cast<int32_t>(0x18) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Ethernet3Megabit{ static_cast<int32_t>(0x1a) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Slip{ static_cast<int32_t>(0x1c) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Atm{ static_cast<int32_t>(0x25) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::GenericModem{ static_cast<int32_t>(0x30) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::FastEthernetT{ static_cast<int32_t>(0x3e) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Isdn{ static_cast<int32_t>(0x3f) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::FastEthernetFx{ static_cast<int32_t>(0x45) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Wireless80211{ static_cast<int32_t>(0x47) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::AsymmetricDsl{ static_cast<int32_t>(0x5e) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::RateAdaptDsl{ static_cast<int32_t>(0x5f) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::SymmetricDsl{ static_cast<int32_t>(0x60) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::VeryHighSpeedDsl{ static_cast<int32_t>(0x61) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::IPOverAtm{ static_cast<int32_t>(0x72) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::GigabitEthernet{ static_cast<int32_t>(0x75) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Tunnel{ static_cast<int32_t>(0x83) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::MultiRateSymmetricDsl{ static_cast<int32_t>(0x8f) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::HighPerformanceSerialBus{ static_cast<int32_t>(0x90) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Wman{ static_cast<int32_t>(0xed) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Wwanpp{ static_cast<int32_t>(0xf3) };
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterfaceType::Wwanpp2{ static_cast<int32_t>(0xf4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
