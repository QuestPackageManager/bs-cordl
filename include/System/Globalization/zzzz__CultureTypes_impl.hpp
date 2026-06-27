#pragma once
// IWYU pragma private; include "System/Globalization/CultureTypes.hpp"
#include "System/Globalization/zzzz__CultureTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::CultureTypes::CultureTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureTypes::CultureTypes()   {
}
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::NeutralCultures{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::SpecificCultures{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::InstalledWin32Cultures{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::AllCultures{static_cast<int32_t>(0x7)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::UserCustomCulture{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::ReplacementCultures{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::WindowsOnlyCultures{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::FrameworkCultures{static_cast<int32_t>(0x40)};
