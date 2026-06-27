#pragma once
// IWYU pragma private; include "UnityEngine/XR/MeshGenerationStatus.hpp"
#include "UnityEngine/XR/zzzz__MeshGenerationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::MeshGenerationStatus::MeshGenerationStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::MeshGenerationStatus::MeshGenerationStatus()   {
}
constexpr ::UnityEngine::XR::MeshGenerationStatus  UnityEngine::XR::MeshGenerationStatus::Success{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::MeshGenerationStatus  UnityEngine::XR::MeshGenerationStatus::InvalidMeshId{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::MeshGenerationStatus  UnityEngine::XR::MeshGenerationStatus::GenerationAlreadyInProgress{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::MeshGenerationStatus  UnityEngine::XR::MeshGenerationStatus::Canceled{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::XR::MeshGenerationStatus  UnityEngine::XR::MeshGenerationStatus::UnknownError{static_cast<int32_t>(0x4)};
