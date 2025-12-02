#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NudgeJobData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NudgeJobData_def.hpp"
// Ctor Parameters [CppParam { name: "headSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "headDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "headCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "tailDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty:
// "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::NudgeJobData::NudgeJobData(::System::IntPtr headSrc, ::System::IntPtr headDst, int32_t headCount, ::System::IntPtr tailSrc, ::System::IntPtr tailDst,
                                                                     int32_t tailCount, ::UnityEngine::Matrix4x4 transform) noexcept {
  this->headSrc = headSrc;
  this->headDst = headDst;
  this->headCount = headCount;
  this->tailSrc = tailSrc;
  this->tailDst = tailDst;
  this->tailCount = tailCount;
  this->transform = transform;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::NudgeJobData::NudgeJobData() {}
