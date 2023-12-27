#pragma once
#include "UnityEngine/XR/zzzz__TrackingSpaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::TrackingSpaceType::TrackingSpaceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::TrackingSpaceType::TrackingSpaceType() {}
constexpr ::UnityEngine::XR::TrackingSpaceType UnityEngine::XR::TrackingSpaceType::Stationary{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::TrackingSpaceType UnityEngine::XR::TrackingSpaceType::RoomScale{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
