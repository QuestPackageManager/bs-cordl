#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ATGMeshInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ATGMeshInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__NativeTextElementInfo_def.hpp"
// Ctor Parameters [CppParam { name: "textElementInfos", ty: "::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo,::Array<::UnityEngine::TextCore::Text::NativeTextElementInfo>*>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "fontAssetId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textElementCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::ATGMeshInfo::ATGMeshInfo(
    ::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo, ::Array<::UnityEngine::TextCore::Text::NativeTextElementInfo>*> textElementInfos, int32_t fontAssetId, int32_t textElementCount,
    ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept {
  this->textElementInfos = textElementInfos;
  this->fontAssetId = fontAssetId;
  this->textElementCount = textElementCount;
  this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::ATGMeshInfo::ATGMeshInfo() {}
