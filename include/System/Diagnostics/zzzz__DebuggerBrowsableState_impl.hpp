#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerBrowsableState.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::DebuggerBrowsableState::DebuggerBrowsableState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerBrowsableState::DebuggerBrowsableState()   {
}
constexpr ::System::Diagnostics::DebuggerBrowsableState  System::Diagnostics::DebuggerBrowsableState::Never{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::DebuggerBrowsableState  System::Diagnostics::DebuggerBrowsableState::Collapsed{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::DebuggerBrowsableState  System::Diagnostics::DebuggerBrowsableState::RootHidden{static_cast<int32_t>(0x3)};
