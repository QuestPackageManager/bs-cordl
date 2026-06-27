#pragma once
// IWYU pragma private; include "System/Data/DataRowState.hpp"
#include "System/Data/zzzz__DataRowState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataRowState::DataRowState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::DataRowState::DataRowState()   {
}
constexpr ::System::Data::DataRowState  System::Data::DataRowState::Detached{static_cast<int32_t>(0x1)};
constexpr ::System::Data::DataRowState  System::Data::DataRowState::Unchanged{static_cast<int32_t>(0x2)};
constexpr ::System::Data::DataRowState  System::Data::DataRowState::Added{static_cast<int32_t>(0x4)};
constexpr ::System::Data::DataRowState  System::Data::DataRowState::Deleted{static_cast<int32_t>(0x8)};
constexpr ::System::Data::DataRowState  System::Data::DataRowState::Modified{static_cast<int32_t>(0x10)};
