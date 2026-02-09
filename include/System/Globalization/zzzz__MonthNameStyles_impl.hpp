#pragma once
// IWYU pragma private; include "System/Globalization/MonthNameStyles.hpp"
#include "System/Globalization/zzzz__MonthNameStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::MonthNameStyles::MonthNameStyles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::MonthNameStyles::MonthNameStyles()   {
}
constexpr ::System::Globalization::MonthNameStyles  System::Globalization::MonthNameStyles::Regular{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::MonthNameStyles  System::Globalization::MonthNameStyles::Genitive{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::MonthNameStyles  System::Globalization::MonthNameStyles::LeapYear{static_cast<int32_t>(0x2)};
