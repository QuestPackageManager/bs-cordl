#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextProcessingElement.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElementType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElement_def.hpp"
// Ctor Parameters [CppParam { name: "elementType", ty: "::UnityEngine::TextCore::Text::TextProcessingElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextProcessingElement::TextProcessingElement(::UnityEngine::TextCore::Text::TextProcessingElementType  elementType, uint32_t  unicode, int32_t  stringIndex, int32_t  length) noexcept  {
this->elementType = elementType;
this->unicode = unicode;
this->stringIndex = stringIndex;
this->length = length;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextProcessingElement::TextProcessingElement()   {
}
