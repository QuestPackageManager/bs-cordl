#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/BundleOptions.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__BundleOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleOptions::BundleOptions(int16_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleOptions::BundleOptions() {}
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleOptions UnityEngine::ResourceManagement::Profiling::BundleOptions::None{ static_cast<int16_t>(0x0) };
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleOptions UnityEngine::ResourceManagement::Profiling::BundleOptions::CachingEnabled{ static_cast<int16_t>(0x1) };
constexpr ::UnityEngine::ResourceManagement::Profiling::BundleOptions UnityEngine::ResourceManagement::Profiling::BundleOptions::CheckSumEnabled{ static_cast<int16_t>(0x2) };
