#pragma once
// IWYU pragma private; include "TMPro/TMP_PageInfo.hpp"
#include "TMPro/zzzz__TMP_PageInfo_def.hpp"
// Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_PageInfo::TMP_PageInfo(int32_t  firstCharacterIndex, int32_t  lastCharacterIndex, float_t  ascender, float_t  baseLine, float_t  descender) noexcept  {
this->firstCharacterIndex = firstCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->ascender = ascender;
this->baseLine = baseLine;
this->descender = descender;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_PageInfo::TMP_PageInfo()   {
}
