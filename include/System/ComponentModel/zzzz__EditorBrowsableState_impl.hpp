#pragma once
// IWYU pragma private; include "System/ComponentModel/EditorBrowsableState.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::EditorBrowsableState::EditorBrowsableState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EditorBrowsableState::EditorBrowsableState()   {
}
constexpr ::System::ComponentModel::EditorBrowsableState  System::ComponentModel::EditorBrowsableState::Always{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::EditorBrowsableState  System::ComponentModel::EditorBrowsableState::Never{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::EditorBrowsableState  System::ComponentModel::EditorBrowsableState::Advanced{static_cast<int32_t>(0x2)};
