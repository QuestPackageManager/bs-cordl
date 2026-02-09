#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::RegexOptions::RegexOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexOptions::RegexOptions()   {
}
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Multiline{static_cast<int32_t>(0x2)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::ExplicitCapture{static_cast<int32_t>(0x4)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Compiled{static_cast<int32_t>(0x8)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Singleline{static_cast<int32_t>(0x10)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::IgnorePatternWhitespace{static_cast<int32_t>(0x20)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::RightToLeft{static_cast<int32_t>(0x40)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::ECMAScript{static_cast<int32_t>(0x100)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::CultureInvariant{static_cast<int32_t>(0x200)};
