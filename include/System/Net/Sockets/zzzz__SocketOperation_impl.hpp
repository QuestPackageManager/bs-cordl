#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketOperation.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketOperation::SocketOperation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketOperation::SocketOperation()   {
}
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Accept{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Connect{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Receive{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::ReceiveFrom{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Send{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendTo{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::RecvJustCallback{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendJustCallback{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Disconnect{static_cast<int32_t>(0x8)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::AcceptReceive{static_cast<int32_t>(0x9)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::ReceiveGeneric{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendGeneric{static_cast<int32_t>(0xb)};
