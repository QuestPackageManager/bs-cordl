#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/ContentStatus.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus::ContentStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus::ContentStatus() {}
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus UnityEngine::ResourceManagement::Profiling::ContentStatus::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus UnityEngine::ResourceManagement::Profiling::ContentStatus::Queue{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus UnityEngine::ResourceManagement::Profiling::ContentStatus::Downloading{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus UnityEngine::ResourceManagement::Profiling::ContentStatus::Released{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus UnityEngine::ResourceManagement::Profiling::ContentStatus::Loading{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::ResourceManagement::Profiling::ContentStatus UnityEngine::ResourceManagement::Profiling::ContentStatus::Active{ static_cast<int32_t>(0x100) };
