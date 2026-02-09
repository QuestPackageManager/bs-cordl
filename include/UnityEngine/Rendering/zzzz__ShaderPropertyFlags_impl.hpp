#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderPropertyFlags.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags::ShaderPropertyFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags::ShaderPropertyFlags()   {
}
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::HideInInspector{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::PerRendererData{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::NoScaleOffset{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::Normal{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::HDR{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::Gamma{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::NonModifiableTextureData{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::MainTexture{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  UnityEngine::Rendering::ShaderPropertyFlags::MainColor{static_cast<int32_t>(0x100)};
