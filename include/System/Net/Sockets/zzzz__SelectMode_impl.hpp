#pragma once
// IWYU pragma private; include "System/Net/Sockets/SelectMode.hpp"
#include "System/Net/Sockets/zzzz__SelectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SelectMode::SelectMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SelectMode::SelectMode()   {
}
constexpr ::System::Net::Sockets::SelectMode  System::Net::Sockets::SelectMode::SelectRead{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Sockets::SelectMode  System::Net::Sockets::SelectMode::SelectWrite{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Sockets::SelectMode  System::Net::Sockets::SelectMode::SelectError{static_cast<int32_t>(0x2)};
