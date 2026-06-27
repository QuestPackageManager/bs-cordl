#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanStyles.hpp"
#include "System/Globalization/zzzz__TimeSpanStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::TimeSpanStyles::TimeSpanStyles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanStyles::TimeSpanStyles()   {
}
constexpr ::System::Globalization::TimeSpanStyles  System::Globalization::TimeSpanStyles::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::TimeSpanStyles  System::Globalization::TimeSpanStyles::AssumeNegative{static_cast<int32_t>(0x1)};
