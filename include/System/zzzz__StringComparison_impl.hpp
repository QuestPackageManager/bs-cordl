#pragma once
// IWYU pragma private; include "System/StringComparison.hpp"
#include "System/zzzz__StringComparison_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::StringComparison::StringComparison(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::StringComparison::StringComparison()   {
}
constexpr ::System::StringComparison  System::StringComparison::CurrentCulture{static_cast<int32_t>(0x0)};
constexpr ::System::StringComparison  System::StringComparison::CurrentCultureIgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::StringComparison  System::StringComparison::InvariantCulture{static_cast<int32_t>(0x2)};
constexpr ::System::StringComparison  System::StringComparison::InvariantCultureIgnoreCase{static_cast<int32_t>(0x3)};
constexpr ::System::StringComparison  System::StringComparison::Ordinal{static_cast<int32_t>(0x4)};
constexpr ::System::StringComparison  System::StringComparison::OrdinalIgnoreCase{static_cast<int32_t>(0x5)};
