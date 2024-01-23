#pragma once
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
// Type: UnityEngine.XR::AvailableTrackingData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15628))
// CS Name: ::UnityEngine.XR::AvailableTrackingData
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvailableTrackingData(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvailableTrackingData();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::AvailableTrackingData const None;

  /// @brief Field PositionAvailable value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::AvailableTrackingData const PositionAvailable;

  /// @brief Field RotationAvailable value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::AvailableTrackingData const RotationAvailable;

  /// @brief Field VelocityAvailable value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::AvailableTrackingData const VelocityAvailable;

  /// @brief Field AngularVelocityAvailable value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::AvailableTrackingData const AngularVelocityAvailable;

  /// @brief Field AccelerationAvailable value: static_cast<int32_t>(0x10)
  static ::UnityEngine::XR::AvailableTrackingData const AccelerationAvailable;

  /// @brief Field AngularAccelerationAvailable value: static_cast<int32_t>(0x20)
  static ::UnityEngine::XR::AvailableTrackingData const AngularAccelerationAvailable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::AvailableTrackingData, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::AvailableTrackingData, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::AvailableTrackingData, "UnityEngine.XR", "AvailableTrackingData");
