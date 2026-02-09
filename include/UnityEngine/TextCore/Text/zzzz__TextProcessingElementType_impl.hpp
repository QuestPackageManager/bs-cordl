#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextProcessingElementType.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextProcessingElementType::TextProcessingElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextProcessingElementType::TextProcessingElementType()   {
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingElementType  UnityEngine::TextCore::Text::TextProcessingElementType::Undefined{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::Text::TextProcessingElementType  UnityEngine::TextCore::Text::TextProcessingElementType::TextCharacterElement{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::Text::TextProcessingElementType  UnityEngine::TextCore::Text::TextProcessingElementType::TextMarkupElement{static_cast<int32_t>(0x2)};
