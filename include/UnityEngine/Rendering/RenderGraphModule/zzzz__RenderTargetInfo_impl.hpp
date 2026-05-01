#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderTargetInfo.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTargetInfo_def.hpp"
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "volumeDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "msaaSamples", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindMS", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo::RenderTargetInfo(int32_t width, int32_t height, int32_t volumeDepth, int32_t msaaSamples,
                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool bindMS) noexcept {
  this->width = width;
  this->height = height;
  this->volumeDepth = volumeDepth;
  this->msaaSamples = msaaSamples;
  this->format = format;
  this->bindMS = bindMS;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo::RenderTargetInfo() {}
