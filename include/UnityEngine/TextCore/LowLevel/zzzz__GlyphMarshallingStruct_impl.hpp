#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphMarshallingStruct.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "metrics", ty: "::UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: Some("{}") }, CppParam { name: "glyphRect", ty: "::UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "classDefinitionType", ty: "::UnityEngine::TextCore::GlyphClassDefinitionType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::GlyphMarshallingStruct(uint32_t  index, ::UnityEngine::TextCore::GlyphMetrics  metrics, ::UnityEngine::TextCore::GlyphRect  glyphRect, float_t  scale, int32_t  atlasIndex, ::UnityEngine::TextCore::GlyphClassDefinitionType  classDefinitionType) noexcept  {
this->index = index;
this->metrics = metrics;
this->glyphRect = glyphRect;
this->scale = scale;
this->atlasIndex = atlasIndex;
this->classDefinitionType = classDefinitionType;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::GlyphMarshallingStruct()   {
}
