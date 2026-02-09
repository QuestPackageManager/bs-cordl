#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshUpdateFlags.hpp"
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MeshUpdateFlags::MeshUpdateFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MeshUpdateFlags::MeshUpdateFlags()   {
}
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontValidateIndices{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontResetBoneBounds{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontNotifyMeshUsers{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::MeshUpdateFlags  UnityEngine::Rendering::MeshUpdateFlags::DontRecalculateBounds{static_cast<int32_t>(0x8)};
