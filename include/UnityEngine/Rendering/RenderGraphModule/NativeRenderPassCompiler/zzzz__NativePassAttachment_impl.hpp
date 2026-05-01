#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassAttachment.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "loadAction", ty:
// "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "storeAction", ty: "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "depthSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::NativePassAttachment(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle,
                                                                                                                            ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                                                                                                            ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                                                                                            bool memoryless, int32_t mipLevel, int32_t depthSlice) noexcept {
  this->handle = handle;
  this->loadAction = loadAction;
  this->storeAction = storeAction;
  this->memoryless = memoryless;
  this->mipLevel = mipLevel;
  this->depthSlice = depthSlice;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment::NativePassAttachment() {}
