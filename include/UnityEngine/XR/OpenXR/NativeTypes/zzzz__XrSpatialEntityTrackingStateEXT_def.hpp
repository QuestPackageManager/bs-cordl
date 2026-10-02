#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialEntityTrackingStateEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialEntityTrackingStateEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityTrackingStateEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialEntityTrackingStateEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialEntityTrackingStateEXT
struct CORDL_TYPE XrSpatialEntityTrackingStateEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialEntityTrackingStateEXT_Unwrapped
  enum struct __XrSpatialEntityTrackingStateEXT_Unwrapped : int32_t {
    __E_Stopped = static_cast<int32_t>(0x1),
    __E_Paused = static_cast<int32_t>(0x2),
    __E_Tracking = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialEntityTrackingStateEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialEntityTrackingStateEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialEntityTrackingStateEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialEntityTrackingStateEXT(int32_t value__) noexcept;

  /// @brief Field Paused value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT const Paused;

  /// @brief Field Stopped value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT const Stopped;

  /// @brief Field Tracking value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT const Tracking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
