#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialCapabilityEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialCapabilityEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialCapabilityEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityEXT
struct CORDL_TYPE XrSpatialCapabilityEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialCapabilityEXT_Unwrapped
  enum struct __XrSpatialCapabilityEXT_Unwrapped : int32_t {
    __E_PlaneTracking = static_cast<int32_t>(0x3ba61888),
    __E_MarkerTrackingQRCode = static_cast<int32_t>(0x3ba62058),
    __E_MarkerTrackingMicroQRCode = static_cast<int32_t>(0x3ba62059),
    __E_MarkerTrackingArucoMarker = static_cast<int32_t>(0x3ba6205a),
    __E_MarkerTrackingAprilTag = static_cast<int32_t>(0x3ba6205b),
    __E_Anchor = static_cast<int32_t>(0x3ba66a90),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialCapabilityEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialCapabilityEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialCapabilityEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialCapabilityEXT(int32_t value__) noexcept;

  /// @brief Field Anchor value: I32(1000762000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT const Anchor;

  /// @brief Field MarkerTrackingAprilTag value: I32(1000743003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT const MarkerTrackingAprilTag;

  /// @brief Field MarkerTrackingArucoMarker value: I32(1000743002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT const MarkerTrackingArucoMarker;

  /// @brief Field MarkerTrackingMicroQRCode value: I32(1000743001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT const MarkerTrackingMicroQRCode;

  /// @brief Field MarkerTrackingQRCode value: I32(1000743000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT const MarkerTrackingQRCode;

  /// @brief Field PlaneTracking value: I32(1000741000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT const PlaneTracking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
