#pragma once
#include "UnityEngine/zzzz__RenderTextureCreationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderTextureCreationFlags::RenderTextureCreationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderTextureCreationFlags::RenderTextureCreationFlags() {}
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::MipMap{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::AutoGenerateMips{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::SRGB{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::EyeTexture{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::EnableRandomWrite{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::CreatedFromScript{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::AllowVerticalFlip{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::NoResolvedColorSurface{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::DynamicallyScalable{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::RenderTextureCreationFlags UnityEngine::RenderTextureCreationFlags::BindMS{ static_cast<int32_t>(0x800) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
