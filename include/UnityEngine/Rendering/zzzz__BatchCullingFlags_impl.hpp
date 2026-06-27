#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingFlags.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchCullingFlags::BatchCullingFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchCullingFlags::BatchCullingFlags()   {
}
constexpr ::UnityEngine::Rendering::BatchCullingFlags  UnityEngine::Rendering::BatchCullingFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::BatchCullingFlags  UnityEngine::Rendering::BatchCullingFlags::CullLightmappedShadowCasters{static_cast<int32_t>(0x1)};
