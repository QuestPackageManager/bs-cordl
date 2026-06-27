#pragma once
// IWYU pragma private; include "System/Net/Sockets/ProtocolType.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::ProtocolType::ProtocolType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::ProtocolType::ProtocolType()   {
}
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IP{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv6HopByHopOptions{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Icmp{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Igmp{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Ggp{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv4{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Tcp{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Pup{static_cast<int32_t>(0xc)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Udp{static_cast<int32_t>(0x11)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Idp{static_cast<int32_t>(0x16)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv6{static_cast<int32_t>(0x29)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv6RoutingHeader{static_cast<int32_t>(0x2b)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv6FragmentHeader{static_cast<int32_t>(0x2c)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPSecEncapsulatingSecurityPayload{static_cast<int32_t>(0x32)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPSecAuthenticationHeader{static_cast<int32_t>(0x33)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IcmpV6{static_cast<int32_t>(0x3a)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv6NoNextHeader{static_cast<int32_t>(0x3b)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::IPv6DestinationOptions{static_cast<int32_t>(0x3c)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::ND{static_cast<int32_t>(0x4d)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Raw{static_cast<int32_t>(0xff)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Ipx{static_cast<int32_t>(0x3e8)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Spx{static_cast<int32_t>(0x4e8)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::SpxII{static_cast<int32_t>(0x4e9)};
constexpr ::System::Net::Sockets::ProtocolType  System::Net::Sockets::ProtocolType::Unknown{static_cast<int32_t>(0xffffffff)};
