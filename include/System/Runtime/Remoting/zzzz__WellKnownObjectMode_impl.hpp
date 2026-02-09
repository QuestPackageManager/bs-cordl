#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::WellKnownObjectMode::WellKnownObjectMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::WellKnownObjectMode::WellKnownObjectMode()   {
}
constexpr ::System::Runtime::Remoting::WellKnownObjectMode  System::Runtime::Remoting::WellKnownObjectMode::Singleton{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Remoting::WellKnownObjectMode  System::Runtime::Remoting::WellKnownObjectMode::SingleCall{static_cast<int32_t>(0x2)};
