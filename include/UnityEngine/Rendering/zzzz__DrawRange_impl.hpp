#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawRange.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Rendering::RangeKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "drawOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawRange::DrawRange(::UnityEngine::Rendering::RangeKey key, int32_t drawCount, int32_t drawOffset) noexcept {
  this->key = key;
  this->drawCount = drawCount;
  this->drawOffset = drawOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawRange::DrawRange() {}
