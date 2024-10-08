#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NudgeJobData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NudgeJobData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "src", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "dst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") },
// CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "closingSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "closingDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "closingCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform",
// ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertsBeforeUVDisplacement", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "vertsAfterUVDisplacement", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::NudgeJobData::NudgeJobData(::System::IntPtr src, ::System::IntPtr dst, int32_t count, ::System::IntPtr closingSrc, ::System::IntPtr closingDst,
                                                                     int32_t closingCount, ::UnityEngine::Matrix4x4 transform, int32_t vertsBeforeUVDisplacement,
                                                                     int32_t vertsAfterUVDisplacement) noexcept {
  this->src = src;
  this->dst = dst;
  this->count = count;
  this->closingSrc = closingSrc;
  this->closingDst = closingDst;
  this->closingCount = closingCount;
  this->transform = transform;
  this->vertsBeforeUVDisplacement = vertsBeforeUVDisplacement;
  this->vertsAfterUVDisplacement = vertsAfterUVDisplacement;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::NudgeJobData::NudgeJobData() {}
