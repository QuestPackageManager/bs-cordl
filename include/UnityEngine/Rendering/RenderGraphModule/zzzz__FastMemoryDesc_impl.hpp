#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/FastMemoryDesc.hpp"
#include "UnityEngine/Rendering/zzzz__FastMemoryFlags_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__FastMemoryDesc_def.hpp"
// Ctor Parameters [CppParam { name: "inFastMemory", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::Rendering::FastMemoryFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "residencyFraction", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc::FastMemoryDesc(bool inFastMemory, ::UnityEngine::Rendering::FastMemoryFlags flags, float_t residencyFraction) noexcept {
  this->inFastMemory = inFastMemory;
  this->flags = flags;
  this->residencyFraction = residencyFraction;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::FastMemoryDesc::FastMemoryDesc() {}
