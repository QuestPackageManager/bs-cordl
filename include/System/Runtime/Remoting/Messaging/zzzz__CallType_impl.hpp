#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CallType.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::Messaging::CallType::CallType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CallType::CallType()   {
}
constexpr ::System::Runtime::Remoting::Messaging::CallType  System::Runtime::Remoting::Messaging::CallType::Sync{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Remoting::Messaging::CallType  System::Runtime::Remoting::Messaging::CallType::BeginInvoke{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Remoting::Messaging::CallType  System::Runtime::Remoting::Messaging::CallType::EndInvoke{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Remoting::Messaging::CallType  System::Runtime::Remoting::Messaging::CallType::OneWay{static_cast<int32_t>(0x3)};
