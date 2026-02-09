#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/Consistency.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Consistency_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::ConstrainedExecution::Consistency::Consistency(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::Consistency::Consistency()   {
}
constexpr ::System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::MayCorruptProcess{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::MayCorruptAppDomain{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::MayCorruptInstance{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::WillNotCorruptState{static_cast<int32_t>(0x3)};
