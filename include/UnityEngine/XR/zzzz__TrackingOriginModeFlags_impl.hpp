#pragma once
// IWYU pragma private; include "UnityEngine/XR/TrackingOriginModeFlags.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::TrackingOriginModeFlags::TrackingOriginModeFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::TrackingOriginModeFlags::TrackingOriginModeFlags() {}
constexpr ::UnityEngine::XR::TrackingOriginModeFlags UnityEngine::XR::TrackingOriginModeFlags::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::TrackingOriginModeFlags UnityEngine::XR::TrackingOriginModeFlags::Device{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::TrackingOriginModeFlags UnityEngine::XR::TrackingOriginModeFlags::Floor{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::TrackingOriginModeFlags UnityEngine::XR::TrackingOriginModeFlags::TrackingReference{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::TrackingOriginModeFlags UnityEngine::XR::TrackingOriginModeFlags::Unbounded{ static_cast<int32_t>(0x8) };
