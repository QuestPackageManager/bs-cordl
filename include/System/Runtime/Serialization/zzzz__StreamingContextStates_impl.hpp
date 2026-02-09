#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/StreamingContextStates.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContextStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::StreamingContextStates::StreamingContextStates(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::StreamingContextStates::StreamingContextStates()   {
}
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::CrossProcess{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::CrossMachine{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::File{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Persistence{static_cast<int32_t>(0x8)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Remoting{static_cast<int32_t>(0x10)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Other{static_cast<int32_t>(0x20)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Clone{static_cast<int32_t>(0x40)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::CrossAppDomain{static_cast<int32_t>(0x80)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::All{static_cast<int32_t>(0xff)};
