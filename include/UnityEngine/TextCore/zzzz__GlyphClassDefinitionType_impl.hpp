#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/GlyphClassDefinitionType.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType::GlyphClassDefinitionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType::GlyphClassDefinitionType()   {
}
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Undefined{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Base{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Ligature{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Mark{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Component{static_cast<int32_t>(0x4)};
