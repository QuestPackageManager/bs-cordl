#pragma once
#include "UnityEngine/AI/zzzz__NavMeshPathStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AI::NavMeshPathStatus::NavMeshPathStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshPathStatus::NavMeshPathStatus() {}
constexpr ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshPathStatus::PathComplete{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshPathStatus::PathPartial{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshPathStatus::PathInvalid{ static_cast<int32_t>(0x2) };
