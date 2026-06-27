#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketOptionName.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketOptionName::SocketOptionName(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketOptionName::SocketOptionName()   {
}
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Debug{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::AcceptConnection{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReuseAddress{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::KeepAlive{static_cast<int32_t>(0x8)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DontRoute{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Broadcast{static_cast<int32_t>(0x20)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UseLoopback{static_cast<int32_t>(0x40)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Linger{static_cast<int32_t>(0x80)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::OutOfBandInline{static_cast<int32_t>(0x100)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DontLinger{static_cast<int32_t>(0xffffff7f)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ExclusiveAddressUse{static_cast<int32_t>(0xfffffffb)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::SendBuffer{static_cast<int32_t>(0x1001)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReceiveBuffer{static_cast<int32_t>(0x1002)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::SendLowWater{static_cast<int32_t>(0x1003)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReceiveLowWater{static_cast<int32_t>(0x1004)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::SendTimeout{static_cast<int32_t>(0x1005)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReceiveTimeout{static_cast<int32_t>(0x1006)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Error{static_cast<int32_t>(0x1007)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Type{static_cast<int32_t>(0x1008)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReuseUnicastPort{static_cast<int32_t>(0x3007)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MaxConnections{static_cast<int32_t>(0x7fffffff)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IPOptions{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::HeaderIncluded{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::TypeOfService{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IpTimeToLive{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MulticastInterface{static_cast<int32_t>(0x9)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MulticastTimeToLive{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MulticastLoopback{static_cast<int32_t>(0xb)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::AddMembership{static_cast<int32_t>(0xc)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DropMembership{static_cast<int32_t>(0xd)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DontFragment{static_cast<int32_t>(0xe)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::AddSourceMembership{static_cast<int32_t>(0xf)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DropSourceMembership{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::BlockSource{static_cast<int32_t>(0x11)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UnblockSource{static_cast<int32_t>(0x12)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::PacketInformation{static_cast<int32_t>(0x13)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::HopLimit{static_cast<int32_t>(0x15)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IPProtectionLevel{static_cast<int32_t>(0x17)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IPv6Only{static_cast<int32_t>(0x1b)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::NoDelay{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::BsdUrgent{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Expedited{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::NoChecksum{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ChecksumCoverage{static_cast<int32_t>(0x14)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UpdateAcceptContext{static_cast<int32_t>(0x700b)};
constexpr ::System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UpdateConnectContext{static_cast<int32_t>(0x7010)};
