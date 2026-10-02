#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceScopeEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceScopeEXT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT::XrSpatialPersistenceScopeEXT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT::XrSpatialPersistenceScopeEXT() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT::SystemManaged{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT::LocalAnchors{ static_cast<int32_t>(0x3ba6b4c8) };
