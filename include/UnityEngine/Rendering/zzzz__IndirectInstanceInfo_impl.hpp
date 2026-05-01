#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectInstanceInfo.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectInstanceInfo_def.hpp"
// Ctor Parameters [CppParam { name: "drawOffsetAndSplitMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceIndexAndCrossFade", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectInstanceInfo::IndirectInstanceInfo(int32_t drawOffsetAndSplitMask, int32_t instanceIndexAndCrossFade) noexcept {
  this->drawOffsetAndSplitMask = drawOffsetAndSplitMask;
  this->instanceIndexAndCrossFade = instanceIndexAndCrossFade;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectInstanceInfo::IndirectInstanceInfo() {}
