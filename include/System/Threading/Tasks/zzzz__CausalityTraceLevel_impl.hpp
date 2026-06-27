#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CausalityTraceLevel.hpp"
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::CausalityTraceLevel::CausalityTraceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::CausalityTraceLevel::CausalityTraceLevel()   {
}
constexpr ::System::Threading::Tasks::CausalityTraceLevel  System::Threading::Tasks::CausalityTraceLevel::Required{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::CausalityTraceLevel  System::Threading::Tasks::CausalityTraceLevel::Important{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::CausalityTraceLevel  System::Threading::Tasks::CausalityTraceLevel::Verbose{static_cast<int32_t>(0x2)};
