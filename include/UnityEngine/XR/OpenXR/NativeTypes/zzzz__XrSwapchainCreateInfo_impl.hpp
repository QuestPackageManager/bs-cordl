#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSwapchainCreateInfo.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSwapchainCreateInfo_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Next", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "CreateFlags", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UsageFlags", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Format", ty:
// "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SampleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Width", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Height", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FaceCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ArraySize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MipCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo::XrSwapchainCreateInfo(uint32_t Type, void* Next, uint64_t CreateFlags, uint64_t UsageFlags, int64_t Format,
                                                                                               uint32_t SampleCount, uint32_t Width, uint32_t Height, uint32_t FaceCount, uint32_t ArraySize,
                                                                                               uint32_t MipCount) noexcept {
  this->Type = Type;
  this->Next = Next;
  this->CreateFlags = CreateFlags;
  this->UsageFlags = UsageFlags;
  this->Format = Format;
  this->SampleCount = SampleCount;
  this->Width = Width;
  this->Height = Height;
  this->FaceCount = FaceCount;
  this->ArraySize = ArraySize;
  this->MipCount = MipCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo::XrSwapchainCreateInfo() {}
