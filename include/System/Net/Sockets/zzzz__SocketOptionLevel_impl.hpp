#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketOptionLevel.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketOptionLevel::SocketOptionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketOptionLevel::SocketOptionLevel()   {
}
constexpr ::System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::Socket{static_cast<int32_t>(0xffff)};
constexpr ::System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::IP{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::IPv6{static_cast<int32_t>(0x29)};
constexpr ::System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::Tcp{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::Udp{static_cast<int32_t>(0x11)};
