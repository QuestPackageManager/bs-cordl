#pragma once
// IWYU pragma private; include "TMPro/TextOverflowModes.hpp"
#include "TMPro/zzzz__TextOverflowModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextOverflowModes::TextOverflowModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TextOverflowModes::TextOverflowModes()   {
}
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Overflow{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Ellipsis{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Masking{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Truncate{static_cast<int32_t>(0x3)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::ScrollRect{static_cast<int32_t>(0x4)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Page{static_cast<int32_t>(0x5)};
constexpr ::TMPro::TextOverflowModes  TMPro::TextOverflowModes::Linked{static_cast<int32_t>(0x6)};
