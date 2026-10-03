#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialCapabilityFeatureEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialCapabilityFeatureEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityFeatureEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialCapabilityFeatureEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityFeatureEXT
struct CORDL_TYPE XrSpatialCapabilityFeatureEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialCapabilityFeatureEXT_Unwrapped
  enum struct __XrSpatialCapabilityFeatureEXT_Unwrapped : int32_t {
    __E_MarkerTrackingFixedSizeMarkers = static_cast<int32_t>(0x3ba62058),
    __E_MarkerTrackingStaticMarkers = static_cast<int32_t>(0x3ba62059),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialCapabilityFeatureEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialCapabilityFeatureEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialCapabilityFeatureEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialCapabilityFeatureEXT(int32_t value__) noexcept;

  /// @brief Field MarkerTrackingFixedSizeMarkers value: I32(1000743000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT const MarkerTrackingFixedSizeMarkers;

  /// @brief Field MarkerTrackingStaticMarkers value: I32(1000743001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT const MarkerTrackingStaticMarkers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17540 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityFeatureEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
