#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ConvertMeshJobData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ConvertMeshJobData_def.hpp"
// Ctor Parameters [CppParam { name: "vertSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertDst", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "vertCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") },
// CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "ids", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "addFlags", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "opacityPage", ty: "::UnityEngine::Color32", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "textCoreSettingsPage", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "usesTextCoreSettings", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gradientSettingsIndexOffset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "indexSrc", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexDst", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "flipIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "forceZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionZ", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remapUVs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasRect", ty: "::UnityEngine::Rect",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::ConvertMeshJobData::ConvertMeshJobData(::System::IntPtr vertSrc, ::System::IntPtr vertDst, int32_t vertCount, ::UnityEngine::Matrix4x4 transform,
                                                                                 ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 addFlags,
                                                                                 ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage, int32_t usesTextCoreSettings,
                                                                                 float_t textureId, int32_t gradientSettingsIndexOffset, ::System::IntPtr indexSrc, ::System::IntPtr indexDst,
                                                                                 int32_t indexCount, int32_t indexOffset, int32_t flipIndices, int32_t forceZ, float_t positionZ, int32_t remapUVs,
                                                                                 ::UnityEngine::Rect atlasRect) noexcept {
  this->vertSrc = vertSrc;
  this->vertDst = vertDst;
  this->vertCount = vertCount;
  this->transform = transform;
  this->xformClipPages = xformClipPages;
  this->ids = ids;
  this->addFlags = addFlags;
  this->opacityPage = opacityPage;
  this->textCoreSettingsPage = textCoreSettingsPage;
  this->usesTextCoreSettings = usesTextCoreSettings;
  this->textureId = textureId;
  this->gradientSettingsIndexOffset = gradientSettingsIndexOffset;
  this->indexSrc = indexSrc;
  this->indexDst = indexDst;
  this->indexCount = indexCount;
  this->indexOffset = indexOffset;
  this->flipIndices = flipIndices;
  this->forceZ = forceZ;
  this->positionZ = positionZ;
  this->remapUVs = remapUVs;
  this->atlasRect = atlasRect;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::ConvertMeshJobData::ConvertMeshJobData() {}
