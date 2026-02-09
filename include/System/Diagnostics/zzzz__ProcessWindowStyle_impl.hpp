#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessWindowStyle.hpp"
#include "System/Diagnostics/zzzz__ProcessWindowStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::ProcessWindowStyle::ProcessWindowStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ProcessWindowStyle::ProcessWindowStyle()   {
}
constexpr ::System::Diagnostics::ProcessWindowStyle  System::Diagnostics::ProcessWindowStyle::Hidden{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::ProcessWindowStyle  System::Diagnostics::ProcessWindowStyle::Maximized{static_cast<int32_t>(0x3)};
constexpr ::System::Diagnostics::ProcessWindowStyle  System::Diagnostics::ProcessWindowStyle::Minimized{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::ProcessWindowStyle  System::Diagnostics::ProcessWindowStyle::Normal{static_cast<int32_t>(0x0)};
