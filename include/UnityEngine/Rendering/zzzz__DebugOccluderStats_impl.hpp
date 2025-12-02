#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugOccluderStats.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugOccluderStats_def.hpp"
// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subviewCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "occluderMipLayoutSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DebugOccluderStats::DebugOccluderStats(int32_t viewInstanceID, int32_t subviewCount, ::UnityEngine::Vector2Int occluderMipLayoutSize) noexcept {
  this->viewInstanceID = viewInstanceID;
  this->subviewCount = subviewCount;
  this->occluderMipLayoutSize = occluderMipLayoutSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugOccluderStats::DebugOccluderStats() {}
