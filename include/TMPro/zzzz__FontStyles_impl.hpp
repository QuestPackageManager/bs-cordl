#pragma once
// IWYU pragma private; include "TMPro/FontStyles.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontStyles::FontStyles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::FontStyles::FontStyles()   {
}
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Normal{static_cast<int32_t>(0x0)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Bold{static_cast<int32_t>(0x1)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Italic{static_cast<int32_t>(0x2)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Underline{static_cast<int32_t>(0x4)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::LowerCase{static_cast<int32_t>(0x8)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::UpperCase{static_cast<int32_t>(0x10)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::SmallCaps{static_cast<int32_t>(0x20)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Strikethrough{static_cast<int32_t>(0x40)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Superscript{static_cast<int32_t>(0x80)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Subscript{static_cast<int32_t>(0x100)};
constexpr ::TMPro::FontStyles  TMPro::FontStyles::Highlight{static_cast<int32_t>(0x200)};
