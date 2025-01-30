#pragma once
// IWYU pragma private; include "UnityEngine/XR/AvailableTrackingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvailableTrackingData)
// Forward declare root types
namespace UnityEngine::XR {
struct AvailableTrackingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::AvailableTrackingData);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.AvailableTrackingData
struct CORDL_TYPE AvailableTrackingData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvailableTrackingData_Unwrapped
  enum struct __AvailableTrackingData_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PositionAvailable = static_cast<int32_t>(0x1),
    __E_RotationAvailable = static_cast<int32_t>(0x2),
    __E_VelocityAvailable = static_cast<int32_t>(0x4),
    __E_AngularVelocityAvailable = static_cast<int32_t>(0x8),
    __E_AccelerationAvailable = static_cast<int32_t>(0x10),
    __E_AngularAccelerationAvailable = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvailableTrackingData_Unwrapped() const noexcept {
    return static_cast<__AvailableTrackingData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvailableTrackingData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvailableTrackingData(int32_t value__) noexcept;

  /// @brief Field AccelerationAvailable value: I32(16)
  static ::UnityEngine::XR::AvailableTrackingData const AccelerationAvailable;

  /// @brief Field AngularAccelerationAvailable value: I32(32)
  static ::UnityEngine::XR::AvailableTrackingData const AngularAccelerationAvailable;

  /// @brief Field AngularVelocityAvailable value: I32(8)
  static ::UnityEngine::XR::AvailableTrackingData const AngularVelocityAvailable;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::XR::AvailableTrackingData const None;

  /// @brief Field PositionAvailable value: I32(1)
  static ::UnityEngine::XR::AvailableTrackingData const PositionAvailable;

  /// @brief Field RotationAvailable value: I32(2)
  static ::UnityEngine::XR::AvailableTrackingData const RotationAvailable;

  /// @brief Field VelocityAvailable value: I32(4)
  static ::UnityEngine::XR::AvailableTrackingData const VelocityAvailable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18265 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::AvailableTrackingData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::AvailableTrackingData, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::AvailableTrackingData, "UnityEngine.XR", "AvailableTrackingData");
