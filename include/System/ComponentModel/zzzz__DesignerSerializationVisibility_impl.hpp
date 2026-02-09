#pragma once
// IWYU pragma private; include "System/ComponentModel/DesignerSerializationVisibility.hpp"
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::DesignerSerializationVisibility::DesignerSerializationVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignerSerializationVisibility::DesignerSerializationVisibility()   {
}
constexpr ::System::ComponentModel::DesignerSerializationVisibility  System::ComponentModel::DesignerSerializationVisibility::Hidden{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::DesignerSerializationVisibility  System::ComponentModel::DesignerSerializationVisibility::Visible{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::DesignerSerializationVisibility  System::ComponentModel::DesignerSerializationVisibility::Content{static_cast<int32_t>(0x2)};
