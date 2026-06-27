#pragma once
// IWYU pragma private; include "UnityEngine/UILineInfo.hpp"
#include "UnityEngine/zzzz__UILineInfo_def.hpp"
// Ctor Parameters [CppParam { name: "startCharIdx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leading", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UILineInfo::UILineInfo(int32_t  startCharIdx, int32_t  height, float_t  topY, float_t  leading) noexcept  {
this->startCharIdx = startCharIdx;
this->height = height;
this->topY = topY;
this->leading = leading;
}
// Ctor Parameters []
constexpr ::UnityEngine::UILineInfo::UILineInfo()   {
}
