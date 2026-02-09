#pragma once
// IWYU pragma private; include "System/ComponentModel/CollectionChangeAction.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::CollectionChangeAction::CollectionChangeAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CollectionChangeAction::CollectionChangeAction()   {
}
constexpr ::System::ComponentModel::CollectionChangeAction  System::ComponentModel::CollectionChangeAction::Add{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::CollectionChangeAction  System::ComponentModel::CollectionChangeAction::Remove{static_cast<int32_t>(0x2)};
constexpr ::System::ComponentModel::CollectionChangeAction  System::ComponentModel::CollectionChangeAction::Refresh{static_cast<int32_t>(0x3)};
