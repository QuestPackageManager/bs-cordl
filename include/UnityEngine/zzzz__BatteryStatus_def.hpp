#pragma once
// IWYU pragma private; include "UnityEngine/BatteryStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryStatus)
// Forward declare root types
namespace UnityEngine {
struct BatteryStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BatteryStatus);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BatteryStatus
struct CORDL_TYPE BatteryStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BatteryStatus_Unwrapped
  enum struct __BatteryStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Charging = static_cast<int32_t>(0x1),
    __E_Discharging = static_cast<int32_t>(0x2),
    __E_NotCharging = static_cast<int32_t>(0x3),
    __E_Full = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BatteryStatus_Unwrapped() const noexcept {
    return static_cast<__BatteryStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatteryStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BatteryStatus(int32_t value__) noexcept;

  /// @brief Field Charging value: I32(1)
  static ::UnityEngine::BatteryStatus const Charging;

  /// @brief Field Discharging value: I32(2)
  static ::UnityEngine::BatteryStatus const Discharging;

  /// @brief Field Full value: I32(4)
  static ::UnityEngine::BatteryStatus const Full;

  /// @brief Field NotCharging value: I32(3)
  static ::UnityEngine::BatteryStatus const NotCharging;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::BatteryStatus const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10377 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BatteryStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BatteryStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BatteryStatus, "UnityEngine", "BatteryStatus");
