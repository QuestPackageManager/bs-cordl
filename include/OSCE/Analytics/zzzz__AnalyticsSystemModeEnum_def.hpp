#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsSystemModeEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsSystemModeEnum)
// Forward declare root types
namespace OSCE::Analytics {
struct AnalyticsSystemModeEnum;
}
// Write type traits
MARK_VAL_T(::OSCE::Analytics::AnalyticsSystemModeEnum);
// Dependencies
namespace OSCE::Analytics {
// Is value type: true
// CS Name: OSCE.Analytics.AnalyticsSystemModeEnum
struct CORDL_TYPE AnalyticsSystemModeEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnalyticsSystemModeEnum_Unwrapped
  enum struct __AnalyticsSystemModeEnum_Unwrapped : int32_t {
    __E_ACTIVE = static_cast<int32_t>(0x0),
    __E_PAUSED = static_cast<int32_t>(0x1),
    __E_DISABLED = static_cast<int32_t>(0x2),
    __E_UNINITIALIZED = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnalyticsSystemModeEnum_Unwrapped() const noexcept {
    return static_cast<__AnalyticsSystemModeEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsSystemModeEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnalyticsSystemModeEnum(int32_t value__) noexcept;

  /// @brief Field ACTIVE value: I32(0)
  static ::OSCE::Analytics::AnalyticsSystemModeEnum const ACTIVE;

  /// @brief Field DISABLED value: I32(2)
  static ::OSCE::Analytics::AnalyticsSystemModeEnum const DISABLED;

  /// @brief Field PAUSED value: I32(1)
  static ::OSCE::Analytics::AnalyticsSystemModeEnum const PAUSED;

  /// @brief Field UNINITIALIZED value: I32(3)
  static ::OSCE::Analytics::AnalyticsSystemModeEnum const UNINITIALIZED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::AnalyticsSystemModeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::AnalyticsSystemModeEnum, 0x4>, "Size mismatch!");

} // namespace OSCE::Analytics
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::AnalyticsSystemModeEnum, "OSCE.Analytics", "AnalyticsSystemModeEnum");
