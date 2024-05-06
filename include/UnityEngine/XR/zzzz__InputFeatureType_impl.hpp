#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputFeatureType.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputFeatureType::InputFeatureType(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputFeatureType::InputFeatureType() {}
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Custom{ static_cast<uint32_t>(0x3020100u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Binary{ static_cast<uint32_t>(0x4030201u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::DiscreteStates{ static_cast<uint32_t>(0x5040302u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Axis1D{ static_cast<uint32_t>(0x6050403u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Axis2D{ static_cast<uint32_t>(0x7060504u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Axis3D{ static_cast<uint32_t>(0x8070605u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Rotation{ static_cast<uint32_t>(0x9080706u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Hand{ static_cast<uint32_t>(0xff090807u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Bone{ static_cast<uint32_t>(0xff0908u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::Eyes{ static_cast<uint32_t>(0x100ff09u) };
constexpr ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureType::kUnityXRInputFeatureTypeInvalid{ static_cast<uint32_t>(0x20100ffu) };
