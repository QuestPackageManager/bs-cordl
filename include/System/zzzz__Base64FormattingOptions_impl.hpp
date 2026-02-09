#pragma once
// IWYU pragma private; include "System/Base64FormattingOptions.hpp"
#include "System/zzzz__Base64FormattingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Base64FormattingOptions::Base64FormattingOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Base64FormattingOptions::Base64FormattingOptions()   {
}
constexpr ::System::Base64FormattingOptions  System::Base64FormattingOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Base64FormattingOptions  System::Base64FormattingOptions::InsertLineBreaks{static_cast<int32_t>(0x1)};
