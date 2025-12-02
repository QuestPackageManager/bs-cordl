#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandType.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchDrawCommandType::BatchDrawCommandType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchDrawCommandType::BatchDrawCommandType() {}
constexpr ::UnityEngine::Rendering::BatchDrawCommandType UnityEngine::Rendering::BatchDrawCommandType::Direct{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandType UnityEngine::Rendering::BatchDrawCommandType::Indirect{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandType UnityEngine::Rendering::BatchDrawCommandType::Procedural{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::BatchDrawCommandType UnityEngine::Rendering::BatchDrawCommandType::ProceduralIndirect{ static_cast<int32_t>(0x3) };
