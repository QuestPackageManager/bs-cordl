#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXSpawnerLoopState.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerLoopState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXSpawnerLoopState::VFXSpawnerLoopState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXSpawnerLoopState::VFXSpawnerLoopState() {}
constexpr ::UnityEngine::VFX::VFXSpawnerLoopState UnityEngine::VFX::VFXSpawnerLoopState::Finished{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::VFXSpawnerLoopState UnityEngine::VFX::VFXSpawnerLoopState::DelayingBeforeLoop{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::VFXSpawnerLoopState UnityEngine::VFX::VFXSpawnerLoopState::Looping{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::VFX::VFXSpawnerLoopState UnityEngine::VFX::VFXSpawnerLoopState::DelayingAfterLoop{ static_cast<int32_t>(0x3) };
