#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceContextResultEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceContextResultEXT_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT::XrSpatialPersistenceContextResultEXT(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT::XrSpatialPersistenceContextResultEXT() {}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT::Success{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT::EntityNotTracking{
  static_cast<int32_t>(0xc4594b37)
};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT::PersistUuidNotFound{
  static_cast<int32_t>(0xc4594b36)
};
