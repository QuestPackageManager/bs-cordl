#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketFlags.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketFlags::SocketFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketFlags::SocketFlags()   {
}
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::OutOfBand{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Peek{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::DontRoute{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::MaxIOVectorLength{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Truncated{static_cast<int32_t>(0x100)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::ControlDataTruncated{static_cast<int32_t>(0x200)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Broadcast{static_cast<int32_t>(0x400)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Multicast{static_cast<int32_t>(0x800)};
constexpr ::System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Partial{static_cast<int32_t>(0x8000)};
