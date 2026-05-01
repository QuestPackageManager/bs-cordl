#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/SerializedCommand.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__SerializedCommandType_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__SerializedCommand_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::UIR::SerializedCommandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBuffer", ty:
// "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexBuffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstRange", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rangeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureName", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuDataOffset", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "gpuData0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuData1", ty: "::UnityEngine::Vector4", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::SerializedCommand::SerializedCommand(::UnityEngine::UIElements::UIR::SerializedCommandType type, ::System::IntPtr vertexBuffer, ::System::IntPtr indexBuffer,
                                                                               int32_t firstRange, int32_t rangeCount, int32_t textureName, ::UnityW<::UnityEngine::Texture> texture,
                                                                               int32_t gpuDataOffset, ::UnityEngine::Vector4 gpuData0, ::UnityEngine::Vector4 gpuData1) noexcept {
  this->type = type;
  this->vertexBuffer = vertexBuffer;
  this->indexBuffer = indexBuffer;
  this->firstRange = firstRange;
  this->rangeCount = rangeCount;
  this->textureName = textureName;
  this->texture = texture;
  this->gpuDataOffset = gpuDataOffset;
  this->gpuData0 = gpuData0;
  this->gpuData1 = gpuData1;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::SerializedCommand::SerializedCommand() {}
