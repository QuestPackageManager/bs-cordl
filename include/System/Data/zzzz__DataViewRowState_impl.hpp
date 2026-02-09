#pragma once
// IWYU pragma private; include "System/Data/DataViewRowState.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataViewRowState::DataViewRowState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::DataViewRowState::DataViewRowState()   {
}
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::None{static_cast<int32_t>(0x0)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::Unchanged{static_cast<int32_t>(0x2)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::Added{static_cast<int32_t>(0x4)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::Deleted{static_cast<int32_t>(0x8)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::ModifiedCurrent{static_cast<int32_t>(0x10)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::ModifiedOriginal{static_cast<int32_t>(0x20)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::OriginalRows{static_cast<int32_t>(0x2a)};
constexpr ::System::Data::DataViewRowState  System::Data::DataViewRowState::CurrentRows{static_cast<int32_t>(0x16)};
