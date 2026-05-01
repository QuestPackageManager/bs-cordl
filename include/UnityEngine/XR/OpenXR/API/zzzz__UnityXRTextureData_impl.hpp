#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/API/UnityXRTextureData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRTextureData_def.hpp"
// Ctor Parameters [CppParam { name: "nativePtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "referenceTextureId", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRTextureData::UnityXRTextureData(::System::IntPtr nativePtr, uint32_t referenceTextureId) noexcept {
  this->nativePtr = nativePtr;
  this->referenceTextureId = referenceTextureId;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRTextureData::UnityXRTextureData() {}
