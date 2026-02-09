#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/FeatureType.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::FeatureType::FeatureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::FeatureType::FeatureType()   {
}
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Custom{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Binary{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::DiscreteStates{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Axis1D{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Axis2D{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Axis3D{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Rotation{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Hand{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Bone{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Eyes{static_cast<int32_t>(0x9)};
