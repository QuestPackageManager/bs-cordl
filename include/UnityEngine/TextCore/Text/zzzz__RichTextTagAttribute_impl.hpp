#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/RichTextTagAttribute.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TagUnitType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TagValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RichTextTagAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueType", ty: "::UnityEngine::TextCore::Text::TagValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitType", ty: "::UnityEngine::TextCore::Text::TagUnitType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::RichTextTagAttribute::RichTextTagAttribute(int32_t  nameHashCode, int32_t  valueHashCode, ::UnityEngine::TextCore::Text::TagValueType  valueType, int32_t  valueStartIndex, int32_t  valueLength, ::UnityEngine::TextCore::Text::TagUnitType  unitType) noexcept  {
this->nameHashCode = nameHashCode;
this->valueHashCode = valueHashCode;
this->valueType = valueType;
this->valueStartIndex = valueStartIndex;
this->valueLength = valueLength;
this->unitType = unitType;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::RichTextTagAttribute::RichTextTagAttribute()   {
}
