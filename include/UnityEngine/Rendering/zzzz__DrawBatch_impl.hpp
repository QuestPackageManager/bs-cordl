#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawBatch.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MeshProceduralInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Rendering::DrawKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "instanceOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "procInfo", ty: "::UnityEngine::Rendering::MeshProceduralInfo", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawBatch::DrawBatch(::UnityEngine::Rendering::DrawKey key, int32_t instanceCount, int32_t instanceOffset,
                                                         ::UnityEngine::Rendering::MeshProceduralInfo procInfo) noexcept {
  this->key = key;
  this->instanceCount = instanceCount;
  this->instanceOffset = instanceOffset;
  this->procInfo = procInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawBatch::DrawBatch() {}
