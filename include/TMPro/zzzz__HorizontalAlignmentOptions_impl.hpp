#pragma once
// IWYU pragma private; include "TMPro/HorizontalAlignmentOptions.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::HorizontalAlignmentOptions::HorizontalAlignmentOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::HorizontalAlignmentOptions::HorizontalAlignmentOptions()   {
}
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Left{static_cast<int32_t>(0x1)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Center{static_cast<int32_t>(0x2)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Right{static_cast<int32_t>(0x4)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Justified{static_cast<int32_t>(0x8)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Flush{static_cast<int32_t>(0x10)};
constexpr ::TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Geometry{static_cast<int32_t>(0x20)};
