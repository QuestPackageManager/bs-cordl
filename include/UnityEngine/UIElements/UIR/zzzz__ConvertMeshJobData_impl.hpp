#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ConvertMeshJobData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ConvertMeshJobData_def.hpp"
// Ctor Parameters [CppParam { name: "vertSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "vertCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") },
// CppParam { name: "transformUVs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ids", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "addFlags", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") },
// CppParam { name: "opacityPage", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "textCoreSettingsPage", ty: "::UnityEngine::Color32", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "isText", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "indexSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flipIndices", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::ConvertMeshJobData::ConvertMeshJobData(::System::IntPtr vertSrc, ::System::IntPtr vertDst, int32_t vertCount, ::UnityEngine::Matrix4x4 transform,
                                                                                 int32_t transformUVs, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids,
                                                                                 ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage,
                                                                                 int32_t isText, float_t textureId, ::System::IntPtr indexSrc, ::System::IntPtr indexDst, int32_t indexCount,
                                                                                 int32_t indexOffset, int32_t flipIndices) noexcept {
  this->vertSrc = vertSrc;
  this->vertDst = vertDst;
  this->vertCount = vertCount;
  this->transform = transform;
  this->transformUVs = transformUVs;
  this->xformClipPages = xformClipPages;
  this->ids = ids;
  this->addFlags = addFlags;
  this->opacityPage = opacityPage;
  this->textCoreSettingsPage = textCoreSettingsPage;
  this->isText = isText;
  this->textureId = textureId;
  this->indexSrc = indexSrc;
  this->indexDst = indexDst;
  this->indexCount = indexCount;
  this->indexOffset = indexOffset;
  this->flipIndices = flipIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::ConvertMeshJobData::ConvertMeshJobData() {}
