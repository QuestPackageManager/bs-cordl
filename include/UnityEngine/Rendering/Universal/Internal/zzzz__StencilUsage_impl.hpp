#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/StencilUsage.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__StencilUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage::StencilUsage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage::StencilUsage() {}
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage UnityEngine::Rendering::Universal::Internal::StencilUsage::UserMask{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage UnityEngine::Rendering::Universal::Internal::StencilUsage::StencilLight{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage UnityEngine::Rendering::Universal::Internal::StencilUsage::MaterialMask{ static_cast<int32_t>(0x60) };
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage UnityEngine::Rendering::Universal::Internal::StencilUsage::MaterialUnlit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage UnityEngine::Rendering::Universal::Internal::StencilUsage::MaterialLit{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::Universal::Internal::StencilUsage UnityEngine::Rendering::Universal::Internal::StencilUsage::MaterialSimpleLit{ static_cast<int32_t>(0x40) };
