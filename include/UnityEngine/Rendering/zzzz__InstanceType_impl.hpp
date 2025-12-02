#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceType.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceType::InstanceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceType::InstanceType() {}
constexpr ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceType::MeshRenderer{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceType::SpeedTree{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceType::Count{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::InstanceType UnityEngine::Rendering::InstanceType::LODGroup{ static_cast<int32_t>(0x0) };
