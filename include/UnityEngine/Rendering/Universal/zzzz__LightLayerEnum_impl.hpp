#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightLayerEnum.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightLayerEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum::LightLayerEnum(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum::LightLayerEnum() {}
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::Nothing{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayerDefault{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer1{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer2{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer3{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer4{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer5{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer6{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::LightLayer7{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::LightLayerEnum::Everything{ static_cast<int32_t>(0xff) };
