#pragma once
// IWYU pragma private; include "System/Data/Aggregate.hpp"
#include "System/Data/zzzz__Aggregate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Aggregate::Aggregate(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Aggregate::Aggregate()   {
}
constexpr ::System::Data::Aggregate  System::Data::Aggregate::None{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::Sum{static_cast<int32_t>(0x1e)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::Avg{static_cast<int32_t>(0x1f)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::Min{static_cast<int32_t>(0x20)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::Max{static_cast<int32_t>(0x21)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::Count{static_cast<int32_t>(0x22)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::StDev{static_cast<int32_t>(0x23)};
constexpr ::System::Data::Aggregate  System::Data::Aggregate::Var{static_cast<int32_t>(0x25)};
