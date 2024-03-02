#pragma once
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::OperationalStatus::OperationalStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::OperationalStatus::OperationalStatus() {}
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::Up{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::Down{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::Testing{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::Unknown{ static_cast<int32_t>(0x4) };
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::Dormant{ static_cast<int32_t>(0x5) };
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::NotPresent{ static_cast<int32_t>(0x6) };
constexpr ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::OperationalStatus::LowerLayerDown{ static_cast<int32_t>(0x7) };
