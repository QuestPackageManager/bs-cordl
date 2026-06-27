#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetworkInterfaceComponent.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceComponent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::NetworkInterfaceComponent::NetworkInterfaceComponent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::NetworkInterfaceComponent::NetworkInterfaceComponent()   {
}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceComponent  System::Net::NetworkInformation::NetworkInterfaceComponent::IPv4{static_cast<int32_t>(0x0)};
constexpr ::System::Net::NetworkInformation::NetworkInterfaceComponent  System::Net::NetworkInformation::NetworkInterfaceComponent::IPv6{static_cast<int32_t>(0x1)};
