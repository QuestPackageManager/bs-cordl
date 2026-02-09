#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputFeatureType.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputFeatureType::InputFeatureType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputFeatureType::InputFeatureType()   {
}
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Custom{static_cast<uint32_t>(0x0u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Binary{static_cast<uint32_t>(0x1u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::DiscreteStates{static_cast<uint32_t>(0x2u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Axis1D{static_cast<uint32_t>(0x3u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Axis2D{static_cast<uint32_t>(0x4u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Axis3D{static_cast<uint32_t>(0x5u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Rotation{static_cast<uint32_t>(0x6u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Hand{static_cast<uint32_t>(0x7u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Bone{static_cast<uint32_t>(0x8u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::Eyes{static_cast<uint32_t>(0x9u)};
constexpr ::UnityEngine::XR::InputFeatureType  UnityEngine::XR::InputFeatureType::kUnityXRInputFeatureTypeInvalid{static_cast<uint32_t>(0xffffffffu)};
