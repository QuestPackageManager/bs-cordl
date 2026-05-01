#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SubPassDescriptor.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentIndexArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SubPassFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SubPassDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "inputs", ty: "::UnityEngine::Rendering::AttachmentIndexArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorOutputs", ty:
// "::UnityEngine::Rendering::AttachmentIndexArray", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::Rendering::SubPassFlags", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::SubPassDescriptor::SubPassDescriptor(::UnityEngine::Rendering::AttachmentIndexArray inputs, ::UnityEngine::Rendering::AttachmentIndexArray colorOutputs,
                                                                         ::UnityEngine::Rendering::SubPassFlags flags) noexcept {
  this->inputs = inputs;
  this->colorOutputs = colorOutputs;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SubPassDescriptor::SubPassDescriptor() {}
