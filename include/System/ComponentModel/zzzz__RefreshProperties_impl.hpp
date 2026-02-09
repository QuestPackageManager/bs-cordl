#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshProperties.hpp"
#include "System/ComponentModel/zzzz__RefreshProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::RefreshProperties::RefreshProperties(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RefreshProperties::RefreshProperties()   {
}
constexpr ::System::ComponentModel::RefreshProperties  System::ComponentModel::RefreshProperties::None{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::RefreshProperties  System::ComponentModel::RefreshProperties::All{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::RefreshProperties  System::ComponentModel::RefreshProperties::Repaint{static_cast<int32_t>(0x2)};
