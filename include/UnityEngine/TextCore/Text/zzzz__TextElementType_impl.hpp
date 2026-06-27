#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextElementType.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextElementType::TextElementType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextElementType::TextElementType()   {
}
constexpr ::UnityEngine::TextCore::Text::TextElementType  UnityEngine::TextCore::Text::TextElementType::Character{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::TextCore::Text::TextElementType  UnityEngine::TextCore::Text::TextElementType::Sprite{static_cast<uint8_t>(0x2u)};
