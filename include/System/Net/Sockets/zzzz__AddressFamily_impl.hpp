#pragma once
// IWYU pragma private; include "System/Net/Sockets/AddressFamily.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::AddressFamily::AddressFamily(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::AddressFamily::AddressFamily()   {
}
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Unix{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::InterNetwork{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::ImpLink{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Pup{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Chaos{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::NS{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ipx{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Iso{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Osi{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ecma{static_cast<int32_t>(0x8)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::DataKit{static_cast<int32_t>(0x9)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ccitt{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Sna{static_cast<int32_t>(0xb)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::DecNet{static_cast<int32_t>(0xc)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::DataLink{static_cast<int32_t>(0xd)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Lat{static_cast<int32_t>(0xe)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::HyperChannel{static_cast<int32_t>(0xf)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::AppleTalk{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::NetBios{static_cast<int32_t>(0x11)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::VoiceView{static_cast<int32_t>(0x12)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::FireFox{static_cast<int32_t>(0x13)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Banyan{static_cast<int32_t>(0x15)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Atm{static_cast<int32_t>(0x16)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::InterNetworkV6{static_cast<int32_t>(0x17)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Cluster{static_cast<int32_t>(0x18)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ieee12844{static_cast<int32_t>(0x19)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Irda{static_cast<int32_t>(0x1a)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::NetworkDesigners{static_cast<int32_t>(0x1c)};
constexpr ::System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Max{static_cast<int32_t>(0x1d)};
