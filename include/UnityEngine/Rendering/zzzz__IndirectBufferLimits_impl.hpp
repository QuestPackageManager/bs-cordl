#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferLimits.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
// Ctor Parameters [CppParam { name: "maxInstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDrawCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferLimits::IndirectBufferLimits(int32_t maxInstanceCount, int32_t maxDrawCount) noexcept {
  this->maxInstanceCount = maxInstanceCount;
  this->maxDrawCount = maxDrawCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferLimits::IndirectBufferLimits() {}
