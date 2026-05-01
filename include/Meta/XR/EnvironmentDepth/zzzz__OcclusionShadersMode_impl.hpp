#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/OcclusionShadersMode.hpp"
#include "Meta/XR/EnvironmentDepth/zzzz__OcclusionShadersMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode::OcclusionShadersMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode::OcclusionShadersMode() {}
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode Meta::XR::EnvironmentDepth::OcclusionShadersMode::None{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode Meta::XR::EnvironmentDepth::OcclusionShadersMode::HardOcclusion{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::EnvironmentDepth::OcclusionShadersMode Meta::XR::EnvironmentDepth::OcclusionShadersMode::SoftOcclusion{ static_cast<int32_t>(0x2) };
