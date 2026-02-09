#pragma once
// IWYU pragma private; include "System/Net/Sockets/TransmitFileOptions.hpp"
#include "System/Net/Sockets/zzzz__TransmitFileOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::TransmitFileOptions::TransmitFileOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::TransmitFileOptions::TransmitFileOptions()   {
}
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseDefaultWorkerThread{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::Disconnect{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::ReuseSocket{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::WriteBehind{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseSystemThread{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseKernelApc{static_cast<int32_t>(0x20)};
