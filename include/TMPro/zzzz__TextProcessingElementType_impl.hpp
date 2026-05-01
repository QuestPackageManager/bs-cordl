#pragma once
// IWYU pragma private; include "TMPro/TextProcessingElementType.hpp"
#include "TMPro/zzzz__TextProcessingElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextProcessingElementType::TextProcessingElementType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::TextProcessingElementType::TextProcessingElementType() {}
constexpr ::TMPro::TextProcessingElementType TMPro::TextProcessingElementType::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::TextProcessingElementType TMPro::TextProcessingElementType::TextCharacterElement{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::TextProcessingElementType TMPro::TextProcessingElementType::TextMarkupElement{ static_cast<int32_t>(0x2) };
