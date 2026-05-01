#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsFenceType.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFenceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GraphicsFenceType::GraphicsFenceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GraphicsFenceType::GraphicsFenceType() {}
constexpr ::UnityEngine::Rendering::GraphicsFenceType UnityEngine::Rendering::GraphicsFenceType::AsyncQueueSynchronisation{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::GraphicsFenceType UnityEngine::Rendering::GraphicsFenceType::CPUSynchronisation{ static_cast<int32_t>(0x1) };
