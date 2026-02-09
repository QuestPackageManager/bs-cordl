#pragma once
// IWYU pragma private; include "System/Data/AggregateType.hpp"
#include "System/Data/zzzz__AggregateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::AggregateType::AggregateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::AggregateType::AggregateType()   {
}
constexpr ::System::Data::AggregateType  System::Data::AggregateType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::Sum{static_cast<int32_t>(0x4)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::Mean{static_cast<int32_t>(0x5)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::Min{static_cast<int32_t>(0x6)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::Max{static_cast<int32_t>(0x7)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::First{static_cast<int32_t>(0x8)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::Count{static_cast<int32_t>(0x9)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::Var{static_cast<int32_t>(0xa)};
constexpr ::System::Data::AggregateType  System::Data::AggregateType::StDev{static_cast<int32_t>(0xb)};
