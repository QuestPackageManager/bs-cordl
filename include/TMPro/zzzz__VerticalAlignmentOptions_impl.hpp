#pragma once
// IWYU pragma private; include "TMPro/VerticalAlignmentOptions.hpp"
#include "TMPro/zzzz__VerticalAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::VerticalAlignmentOptions::VerticalAlignmentOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::VerticalAlignmentOptions::VerticalAlignmentOptions()   {
}
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Top{static_cast<int32_t>(0x100)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Middle{static_cast<int32_t>(0x200)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Bottom{static_cast<int32_t>(0x400)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Baseline{static_cast<int32_t>(0x800)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Geometry{static_cast<int32_t>(0x1000)};
constexpr ::TMPro::VerticalAlignmentOptions  TMPro::VerticalAlignmentOptions::Capline{static_cast<int32_t>(0x2000)};
