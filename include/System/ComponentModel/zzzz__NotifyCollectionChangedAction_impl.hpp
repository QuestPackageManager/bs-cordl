#pragma once
#include "System/ComponentModel/zzzz__NotifyCollectionChangedAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::NotifyCollectionChangedAction::NotifyCollectionChangedAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::NotifyCollectionChangedAction::NotifyCollectionChangedAction() {}
constexpr ::System::ComponentModel::NotifyCollectionChangedAction System::ComponentModel::NotifyCollectionChangedAction::Add{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::NotifyCollectionChangedAction System::ComponentModel::NotifyCollectionChangedAction::Remove{ static_cast<int32_t>(0x1) };
constexpr ::System::ComponentModel::NotifyCollectionChangedAction System::ComponentModel::NotifyCollectionChangedAction::Replace{ static_cast<int32_t>(0x2) };
constexpr ::System::ComponentModel::NotifyCollectionChangedAction System::ComponentModel::NotifyCollectionChangedAction::Move{ static_cast<int32_t>(0x3) };
constexpr ::System::ComponentModel::NotifyCollectionChangedAction System::ComponentModel::NotifyCollectionChangedAction::Reset{ static_cast<int32_t>(0x4) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
