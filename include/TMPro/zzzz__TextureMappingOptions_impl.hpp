#pragma once
// IWYU pragma private; include "TMPro/TextureMappingOptions.hpp"
#include "TMPro/zzzz__TextureMappingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextureMappingOptions::TextureMappingOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TextureMappingOptions::TextureMappingOptions()   {
}
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::Character{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::Line{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::Paragraph{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TextureMappingOptions  TMPro::TextureMappingOptions::MatchAspect{static_cast<int32_t>(0x3)};
