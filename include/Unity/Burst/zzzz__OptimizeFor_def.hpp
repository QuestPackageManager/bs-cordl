#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OptimizeFor)
// Forward declare root types
namespace Unity::Burst {
struct OptimizeFor;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::OptimizeFor);
// Type: Unity.Burst::OptimizeFor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::OptimizeFor
struct CORDL_TYPE OptimizeFor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OptimizeFor_Unwrapped
  enum struct __OptimizeFor_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Performance = static_cast<int32_t>(0x1),
    __E_Size = static_cast<int32_t>(0x2),
    __E_FastCompilation = static_cast<int32_t>(0x3),
    __E_Balanced = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OptimizeFor_Unwrapped() const noexcept {
    return static_cast<__OptimizeFor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OptimizeFor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OptimizeFor(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Balanced value: static_cast<int32_t>(0x4)
  static ::Unity::Burst::OptimizeFor const Balanced;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::OptimizeFor const Default;

  /// @brief Field FastCompilation value: static_cast<int32_t>(0x3)
  static ::Unity::Burst::OptimizeFor const FastCompilation;

  /// @brief Field Performance value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::OptimizeFor const Performance;

  /// @brief Field Size value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::OptimizeFor const Size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::OptimizeFor, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::OptimizeFor, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::OptimizeFor, "Unity.Burst", "OptimizeFor");
