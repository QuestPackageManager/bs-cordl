#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketAsyncOperation.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketAsyncOperation::SocketAsyncOperation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketAsyncOperation::SocketAsyncOperation()   {
}
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Accept{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Connect{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Disconnect{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Receive{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::ReceiveFrom{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::ReceiveMessageFrom{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::Send{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::SendPackets{static_cast<int32_t>(0x8)};
constexpr ::System::Net::Sockets::SocketAsyncOperation  System::Net::Sockets::SocketAsyncOperation::SendTo{static_cast<int32_t>(0x9)};
