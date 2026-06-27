#pragma once
// IWYU pragma private; include "System/Globalization/CompareOptions.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::CompareOptions::CompareOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Globalization::CompareOptions::CompareOptions()   {
}
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreNonSpace{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreSymbols{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreKanaType{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::IgnoreWidth{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::OrdinalIgnoreCase{static_cast<int32_t>(0x10000000)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::StringSort{static_cast<int32_t>(0x20000000)};
constexpr ::System::Globalization::CompareOptions  System::Globalization::CompareOptions::Ordinal{static_cast<int32_t>(0x40000000)};
