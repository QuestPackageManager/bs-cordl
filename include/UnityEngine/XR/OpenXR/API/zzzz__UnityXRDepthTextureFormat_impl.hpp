#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRDepthTextureFormat.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRDepthTextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat::UnityXRDepthTextureFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat::UnityXRDepthTextureFormat() {}
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat::kUnityXRDepthTextureFormat24bitOrGreater{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat::kUnityXRDepthTextureFormat16bit{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat::kUnityXRDepthTextureFormatReference{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat UnityEngine::XR::OpenXR::API::UnityXRDepthTextureFormat::kUnityXRDepthTextureFormatNone{ static_cast<int32_t>(0x3) };
