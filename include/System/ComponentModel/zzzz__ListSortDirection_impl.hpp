#pragma once
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::ListSortDirection::ListSortDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListSortDirection::ListSortDirection() {}
constexpr ::System::ComponentModel::ListSortDirection System::ComponentModel::ListSortDirection::Ascending{ static_cast<int32_t>(0x0) };
constexpr ::System::ComponentModel::ListSortDirection System::ComponentModel::ListSortDirection::Descending{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
