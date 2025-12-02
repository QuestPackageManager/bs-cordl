#pragma once
// IWYU pragma private; include "Meta/XR/Util/Feature.hpp"
#include "Meta/XR/Util/zzzz__Feature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::Util::Feature::Feature(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::Util::Feature::Feature() {}
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::Anchors{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::BodyTracking{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::EyeTracking{ static_cast<int32_t>(0x2) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::FaceTracking{ static_cast<int32_t>(0x3) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::Hands{ static_cast<int32_t>(0x4) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::Interaction{ static_cast<int32_t>(0x5) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::Passthrough{ static_cast<int32_t>(0x6) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::Scene{ static_cast<int32_t>(0x7) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::TrackedKeyboard{ static_cast<int32_t>(0x8) };
constexpr ::Meta::XR::Util::Feature Meta::XR::Util::Feature::VirtualKeyboard{ static_cast<int32_t>(0x9) };
