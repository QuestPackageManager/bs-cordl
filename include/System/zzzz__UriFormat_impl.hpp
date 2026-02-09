#pragma once
// IWYU pragma private; include "System/UriFormat.hpp"
#include "System/zzzz__UriFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriFormat::UriFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriFormat::UriFormat()   {
}
constexpr ::System::UriFormat  System::UriFormat::UriEscaped{static_cast<int32_t>(0x1)};
constexpr ::System::UriFormat  System::UriFormat::Unescaped{static_cast<int32_t>(0x2)};
constexpr ::System::UriFormat  System::UriFormat::SafeUnescaped{static_cast<int32_t>(0x3)};
