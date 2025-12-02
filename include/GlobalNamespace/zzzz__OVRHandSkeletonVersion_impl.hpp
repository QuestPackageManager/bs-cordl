#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHandSkeletonVersion.hpp"
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRHandSkeletonVersion::OVRHandSkeletonVersion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHandSkeletonVersion::OVRHandSkeletonVersion() {}
constexpr ::GlobalNamespace::OVRHandSkeletonVersion GlobalNamespace::OVRHandSkeletonVersion::Uninitialized{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRHandSkeletonVersion GlobalNamespace::OVRHandSkeletonVersion::OVR{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRHandSkeletonVersion GlobalNamespace::OVRHandSkeletonVersion::OpenXR{ static_cast<int32_t>(0x1) };
