#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawRange.hpp"
#include "UnityEngine/Rendering/zzzz__BatchFilterSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchFilterSettings_def.hpp"
// Ctor Parameters [CppParam { name: "drawCommandsBegin", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCommandsCount", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "filterSettings", ty: "::UnityEngine::Rendering::BatchFilterSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchDrawRange::BatchDrawRange(uint32_t drawCommandsBegin, uint32_t drawCommandsCount, ::UnityEngine::Rendering::BatchFilterSettings filterSettings) noexcept {
  this->drawCommandsBegin = drawCommandsBegin;
  this->drawCommandsCount = drawCommandsCount;
  this->filterSettings = filterSettings;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchDrawRange::BatchDrawRange() {}
