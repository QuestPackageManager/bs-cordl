#pragma once
// IWYU pragma private; include "System/ParseFailureKind.hpp"
#include "System/zzzz__ParseFailureKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParseFailureKind::ParseFailureKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ParseFailureKind::ParseFailureKind()   {
}
constexpr ::System::ParseFailureKind  System::ParseFailureKind::None{static_cast<int32_t>(0x0)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::ArgumentNull{static_cast<int32_t>(0x1)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::Format{static_cast<int32_t>(0x2)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithParameter{static_cast<int32_t>(0x3)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithOriginalDateTime{static_cast<int32_t>(0x4)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithFormatSpecifier{static_cast<int32_t>(0x5)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatWithOriginalDateTimeAndParameter{static_cast<int32_t>(0x6)};
constexpr ::System::ParseFailureKind  System::ParseFailureKind::FormatBadDateTimeCalendar{static_cast<int32_t>(0x7)};
