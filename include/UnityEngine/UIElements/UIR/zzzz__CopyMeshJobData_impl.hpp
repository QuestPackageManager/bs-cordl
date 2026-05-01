#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CopyMeshJobData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CopyMeshJobData_def.hpp"
// Ctor Parameters [CppParam { name: "vertSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "vertCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "indexDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexOffset", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::CopyMeshJobData::CopyMeshJobData(::System::IntPtr vertSrc, ::System::IntPtr vertDst, int32_t vertCount, ::System::IntPtr indexSrc, ::System::IntPtr indexDst,
                                                                           int32_t indexCount, int32_t indexOffset) noexcept {
  this->vertSrc = vertSrc;
  this->vertDst = vertDst;
  this->vertCount = vertCount;
  this->indexSrc = indexSrc;
  this->indexDst = indexDst;
  this->indexCount = indexCount;
  this->indexOffset = indexOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CopyMeshJobData::CopyMeshJobData() {}
