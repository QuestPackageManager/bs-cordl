#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsMetricUnit)
// Forward declare root types
namespace BGNet::Core {
struct AnalyticsMetricUnit;
}
// Write type traits
MARK_VAL_T(::BGNet::Core::AnalyticsMetricUnit);
// Type: BGNet.Core::AnalyticsMetricUnit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12933))
// CS Name: ::BGNet.Core::AnalyticsMetricUnit
struct CORDL_TYPE AnalyticsMetricUnit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnalyticsMetricUnit_Unwrapped
  enum struct __AnalyticsMetricUnit_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Percent = static_cast<int32_t>(0x2),
    __E_Seconds = static_cast<int32_t>(0x3),
    __E_Milliseconds = static_cast<int32_t>(0x4),
    __E_Microseconds = static_cast<int32_t>(0x5),
    __E_Bytes = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnalyticsMetricUnit_Unwrapped() const noexcept {
    return static_cast<__AnalyticsMetricUnit_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnalyticsMetricUnit(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsMetricUnit();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::BGNet::Core::AnalyticsMetricUnit const None;

  /// @brief Field Count value: static_cast<int32_t>(0x1)
  static ::BGNet::Core::AnalyticsMetricUnit const Count;

  /// @brief Field Percent value: static_cast<int32_t>(0x2)
  static ::BGNet::Core::AnalyticsMetricUnit const Percent;

  /// @brief Field Seconds value: static_cast<int32_t>(0x3)
  static ::BGNet::Core::AnalyticsMetricUnit const Seconds;

  /// @brief Field Milliseconds value: static_cast<int32_t>(0x4)
  static ::BGNet::Core::AnalyticsMetricUnit const Milliseconds;

  /// @brief Field Microseconds value: static_cast<int32_t>(0x5)
  static ::BGNet::Core::AnalyticsMetricUnit const Microseconds;

  /// @brief Field Bytes value: static_cast<int32_t>(0x6)
  static ::BGNet::Core::AnalyticsMetricUnit const Bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::AnalyticsMetricUnit, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGNet::Core::AnalyticsMetricUnit, value__) == 0x0, "Offset mismatch!");

} // namespace BGNet::Core
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::AnalyticsMetricUnit, "BGNet.Core", "AnalyticsMetricUnit");
