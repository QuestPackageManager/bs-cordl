#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBytesCharsState.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBytesCharsState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlBytesCharsState::SqlBytesCharsState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlBytesCharsState::SqlBytesCharsState()   {
}
constexpr ::System::Data::SqlTypes::SqlBytesCharsState  System::Data::SqlTypes::SqlBytesCharsState::Null{static_cast<int32_t>(0x0)};
constexpr ::System::Data::SqlTypes::SqlBytesCharsState  System::Data::SqlTypes::SqlBytesCharsState::Buffer{static_cast<int32_t>(0x1)};
constexpr ::System::Data::SqlTypes::SqlBytesCharsState  System::Data::SqlTypes::SqlBytesCharsState::Stream{static_cast<int32_t>(0x3)};
