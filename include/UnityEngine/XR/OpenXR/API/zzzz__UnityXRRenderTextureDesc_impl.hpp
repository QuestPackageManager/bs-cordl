#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRRenderTextureDesc.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRDepthTextureFormat_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRRenderTextureFormat_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRShadingRateFormat_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRTextureData_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRRenderTextureDesc_def.hpp"
// Ctor Parameters [CppParam { name: "colorFormat", ty: "::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty:
// "::UnityEngine::XR::OpenXR::API::UnityXRTextureData", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthFormat", ty: "::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "::UnityEngine::XR::OpenXR::API::UnityXRTextureData", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "shadingRateFormat", ty: "::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadingRate", ty:
// "::UnityEngine::XR::OpenXR::API::UnityXRTextureData", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "height", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureArrayLength", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc::UnityXRRenderTextureDesc(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureFormat colorFormat,
                                                                                             ::UnityEngine::XR::OpenXR::API::UnityXRTextureData color,
                                                                                             ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat depthFormat,
                                                                                             ::UnityEngine::XR::OpenXR::API::UnityXRTextureData depth,
                                                                                             ::UnityEngine::XR::OpenXR::API::UnityXRShadingRateFormat shadingRateFormat,
                                                                                             ::UnityEngine::XR::OpenXR::API::UnityXRTextureData shadingRate, uint32_t width, uint32_t height,
                                                                                             uint32_t textureArrayLength, uint32_t flags) noexcept {
  this->colorFormat = colorFormat;
  this->color = color;
  this->depthFormat = depthFormat;
  this->depth = depth;
  this->shadingRateFormat = shadingRateFormat;
  this->shadingRate = shadingRate;
  this->width = width;
  this->height = height;
  this->textureArrayLength = textureArrayLength;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc::UnityXRRenderTextureDesc() {}
