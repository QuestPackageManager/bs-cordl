#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ArgInfoType.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfoType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::Messaging::ArgInfoType::ArgInfoType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ArgInfoType::ArgInfoType()   {
}
constexpr ::System::Runtime::Remoting::Messaging::ArgInfoType  System::Runtime::Remoting::Messaging::ArgInfoType::In{static_cast<uint8_t>(0x0u)};
constexpr ::System::Runtime::Remoting::Messaging::ArgInfoType  System::Runtime::Remoting::Messaging::ArgInfoType::Out{static_cast<uint8_t>(0x1u)};
