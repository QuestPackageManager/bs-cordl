#pragma once
// IWYU pragma private; include "UnityEngine/RenderTargetSetup.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/zzzz__CubemapFace_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_impl.hpp"
#include "UnityEngine/zzzz__RenderTargetSetup_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "color", ty: "::ArrayW<::UnityEngine::RenderBuffer,::Array<::UnityEngine::RenderBuffer>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty:
// "::UnityEngine::RenderBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cubemapFace", ty:
// "::UnityEngine::CubemapFace", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorLoad", ty:
// "::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction,::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorStore", ty:
// "::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction,::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthLoad", ty:
// "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthStore", ty: "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::RenderTargetSetup::RenderTargetSetup(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ::UnityEngine::RenderBuffer depth, int32_t mipLevel,
                                                              ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoad,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStore,
                                                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore) noexcept {
  this->color = color;
  this->depth = depth;
  this->mipLevel = mipLevel;
  this->cubemapFace = cubemapFace;
  this->depthSlice = depthSlice;
  this->colorLoad = colorLoad;
  this->colorStore = colorStore;
  this->depthLoad = depthLoad;
  this->depthStore = depthStore;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderTargetSetup::RenderTargetSetup() {}
