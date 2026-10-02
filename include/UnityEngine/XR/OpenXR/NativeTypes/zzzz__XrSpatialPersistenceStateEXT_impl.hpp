#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceStateEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceStateEXT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT::XrSpatialPersistenceStateEXT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT::XrSpatialPersistenceStateEXT() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT::Loaded{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT::NotFound{ static_cast<int32_t>(0x2) };
