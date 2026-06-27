#pragma once
// IWYU pragma private; include "System/Data/DataRowAction.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::DataRowAction::DataRowAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::DataRowAction::DataRowAction()   {
}
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::Nothing{static_cast<int32_t>(0x0)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::Delete{static_cast<int32_t>(0x1)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::Change{static_cast<int32_t>(0x2)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::Rollback{static_cast<int32_t>(0x4)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::Commit{static_cast<int32_t>(0x8)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::Add{static_cast<int32_t>(0x10)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::ChangeOriginal{static_cast<int32_t>(0x20)};
constexpr ::System::Data::DataRowAction  System::Data::DataRowAction::ChangeCurrentAndOriginal{static_cast<int32_t>(0x40)};
