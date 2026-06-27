#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketType.hpp"
#include "System/Net/Sockets/zzzz__SocketType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketType::SocketType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketType::SocketType()   {
}
constexpr ::System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Stream{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Dgram{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Raw{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Rdm{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Seqpacket{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Unknown{static_cast<int32_t>(0xffffffff)};
