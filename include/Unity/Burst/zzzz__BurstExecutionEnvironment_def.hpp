#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstExecutionEnvironment)
// Forward declare root types
namespace Unity::Burst {
struct BurstExecutionEnvironment;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::BurstExecutionEnvironment);
// Type: Unity.Burst::BurstExecutionEnvironment
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::BurstExecutionEnvironment
struct CORDL_TYPE BurstExecutionEnvironment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BurstExecutionEnvironment_Unwrapped
  enum struct __BurstExecutionEnvironment_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_NonDeterministic = static_cast<int32_t>(0x0),
    __E_Deterministic = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BurstExecutionEnvironment_Unwrapped() const noexcept {
    return static_cast<__BurstExecutionEnvironment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstExecutionEnvironment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BurstExecutionEnvironment(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::BurstExecutionEnvironment const Default;

  /// @brief Field Deterministic value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::BurstExecutionEnvironment const Deterministic;

  /// @brief Field NonDeterministic value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::BurstExecutionEnvironment const NonDeterministic;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstExecutionEnvironment, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::BurstExecutionEnvironment, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstExecutionEnvironment, "Unity.Burst", "BurstExecutionEnvironment");
