#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/CustomErrorsModes.hpp"
#include "System/Runtime/Remoting/zzzz__CustomErrorsModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::CustomErrorsModes::CustomErrorsModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::CustomErrorsModes::CustomErrorsModes()   {
}
constexpr ::System::Runtime::Remoting::CustomErrorsModes  System::Runtime::Remoting::CustomErrorsModes::On{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Remoting::CustomErrorsModes  System::Runtime::Remoting::CustomErrorsModes::Off{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Remoting::CustomErrorsModes  System::Runtime::Remoting::CustomErrorsModes::RemoteOnly{static_cast<int32_t>(0x2)};
