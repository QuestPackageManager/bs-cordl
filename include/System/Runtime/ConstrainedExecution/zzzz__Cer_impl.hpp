#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/Cer.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Cer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::ConstrainedExecution::Cer::Cer(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::Cer::Cer()   {
}
constexpr ::System::Runtime::ConstrainedExecution::Cer  System::Runtime::ConstrainedExecution::Cer::None{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::ConstrainedExecution::Cer  System::Runtime::ConstrainedExecution::Cer::MayFail{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::ConstrainedExecution::Cer  System::Runtime::ConstrainedExecution::Cer::Success{static_cast<int32_t>(0x2)};
