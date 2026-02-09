#pragma once
// IWYU pragma private; include "TMPro/TextElementType.hpp"
#include "TMPro/zzzz__TextElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextElementType::TextElementType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TextElementType::TextElementType()   {
}
constexpr ::TMPro::TextElementType  TMPro::TextElementType::Character{static_cast<uint8_t>(0x1u)};
constexpr ::TMPro::TextElementType  TMPro::TextElementType::Sprite{static_cast<uint8_t>(0x2u)};
