#pragma once
// IWYU pragma private; include "System/ComponentModel/ListChangedType.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::ListChangedType::ListChangedType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListChangedType::ListChangedType()   {
}
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::Reset{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemAdded{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemDeleted{static_cast<int32_t>(0x2)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemMoved{static_cast<int32_t>(0x3)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemChanged{static_cast<int32_t>(0x4)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorAdded{static_cast<int32_t>(0x5)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorDeleted{static_cast<int32_t>(0x6)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorChanged{static_cast<int32_t>(0x7)};
