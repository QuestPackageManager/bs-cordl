#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CopyTextureSupport.hpp"
#include "UnityEngine/Rendering/zzzz__CopyTextureSupport_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CopyTextureSupport::CopyTextureSupport(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CopyTextureSupport::CopyTextureSupport() {}
constexpr ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::Rendering::CopyTextureSupport::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::Rendering::CopyTextureSupport::Basic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::Rendering::CopyTextureSupport::Copy3D{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::Rendering::CopyTextureSupport::DifferentTypes{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::Rendering::CopyTextureSupport::TextureToRT{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::CopyTextureSupport UnityEngine::Rendering::CopyTextureSupport::RTToTexture{ static_cast<int32_t>(0x10) };
