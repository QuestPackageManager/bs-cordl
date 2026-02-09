#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CausalityRelation.hpp"
#include "System/Threading/Tasks/zzzz__CausalityRelation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::CausalityRelation::CausalityRelation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::CausalityRelation::CausalityRelation()   {
}
constexpr ::System::Threading::Tasks::CausalityRelation  System::Threading::Tasks::CausalityRelation::AssignDelegate{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::Tasks::CausalityRelation  System::Threading::Tasks::CausalityRelation::Join{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::Tasks::CausalityRelation  System::Threading::Tasks::CausalityRelation::Choice{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::Tasks::CausalityRelation  System::Threading::Tasks::CausalityRelation::Cancel{static_cast<int32_t>(0x3)};
constexpr ::System::Threading::Tasks::CausalityRelation  System::Threading::Tasks::CausalityRelation::Error{static_cast<int32_t>(0x4)};
