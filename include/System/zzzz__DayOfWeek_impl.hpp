#pragma once
// IWYU pragma private; include "System/DayOfWeek.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DayOfWeek::DayOfWeek(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DayOfWeek::DayOfWeek()   {
}
constexpr ::System::DayOfWeek  System::DayOfWeek::Sunday{static_cast<int32_t>(0x0)};
constexpr ::System::DayOfWeek  System::DayOfWeek::Monday{static_cast<int32_t>(0x1)};
constexpr ::System::DayOfWeek  System::DayOfWeek::Tuesday{static_cast<int32_t>(0x2)};
constexpr ::System::DayOfWeek  System::DayOfWeek::Wednesday{static_cast<int32_t>(0x3)};
constexpr ::System::DayOfWeek  System::DayOfWeek::Thursday{static_cast<int32_t>(0x4)};
constexpr ::System::DayOfWeek  System::DayOfWeek::Friday{static_cast<int32_t>(0x5)};
constexpr ::System::DayOfWeek  System::DayOfWeek::Saturday{static_cast<int32_t>(0x6)};
