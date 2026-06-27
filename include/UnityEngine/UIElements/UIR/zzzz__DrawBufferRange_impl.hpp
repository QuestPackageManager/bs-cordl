#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DrawBufferRange.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawBufferRange_def.hpp"
// Ctor Parameters [CppParam { name: "firstIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minIndexVal", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertsReferenced", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::DrawBufferRange::DrawBufferRange(int32_t  firstIndex, int32_t  indexCount, int32_t  minIndexVal, int32_t  vertsReferenced) noexcept  {
this->firstIndex = firstIndex;
this->indexCount = indexCount;
this->minIndexVal = minIndexVal;
this->vertsReferenced = vertsReferenced;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::DrawBufferRange::DrawBufferRange()   {
}
