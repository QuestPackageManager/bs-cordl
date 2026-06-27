#pragma once
// IWYU pragma private; include "TMPro/TextRenderFlags.hpp"
#include "TMPro/zzzz__TextRenderFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextRenderFlags::TextRenderFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TextRenderFlags::TextRenderFlags()   {
}
constexpr ::TMPro::TextRenderFlags  TMPro::TextRenderFlags::DontRender{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TextRenderFlags  TMPro::TextRenderFlags::Render{static_cast<int32_t>(0xff)};
