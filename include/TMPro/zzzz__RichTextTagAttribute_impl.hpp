#pragma once
// IWYU pragma private; include "TMPro/RichTextTagAttribute.hpp"
#include "TMPro/zzzz__TagUnitType_impl.hpp"
#include "TMPro/zzzz__TagValueType_impl.hpp"
#include "TMPro/zzzz__RichTextTagAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueType", ty: "::TMPro::TagValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unitType", ty: "::TMPro::TagUnitType", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::RichTextTagAttribute::RichTextTagAttribute(int32_t  nameHashCode, int32_t  valueHashCode, ::TMPro::TagValueType  valueType, int32_t  valueStartIndex, int32_t  valueLength, ::TMPro::TagUnitType  unitType) noexcept  {
this->nameHashCode = nameHashCode;
this->valueHashCode = valueHashCode;
this->valueType = valueType;
this->valueStartIndex = valueStartIndex;
this->valueLength = valueLength;
this->unitType = unitType;
}
// Ctor Parameters []
constexpr ::TMPro::RichTextTagAttribute::RichTextTagAttribute()   {
}
