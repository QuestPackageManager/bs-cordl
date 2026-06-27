#pragma once
// IWYU pragma private; include "System/Data/MissingSchemaAction.hpp"
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::MissingSchemaAction::MissingSchemaAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::MissingSchemaAction::MissingSchemaAction()   {
}
constexpr ::System::Data::MissingSchemaAction  System::Data::MissingSchemaAction::Add{static_cast<int32_t>(0x1)};
constexpr ::System::Data::MissingSchemaAction  System::Data::MissingSchemaAction::Ignore{static_cast<int32_t>(0x2)};
constexpr ::System::Data::MissingSchemaAction  System::Data::MissingSchemaAction::Error{static_cast<int32_t>(0x3)};
constexpr ::System::Data::MissingSchemaAction  System::Data::MissingSchemaAction::AddWithKey{static_cast<int32_t>(0x4)};
