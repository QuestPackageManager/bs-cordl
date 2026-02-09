#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketShutdown.hpp"
#include "System/Net/Sockets/zzzz__SocketShutdown_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketShutdown::SocketShutdown(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketShutdown::SocketShutdown()   {
}
constexpr ::System::Net::Sockets::SocketShutdown  System::Net::Sockets::SocketShutdown::Receive{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketShutdown  System::Net::Sockets::SocketShutdown::Send{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketShutdown  System::Net::Sockets::SocketShutdown::Both{static_cast<int32_t>(0x2)};
