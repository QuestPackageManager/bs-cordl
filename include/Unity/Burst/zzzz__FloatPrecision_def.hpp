#pragma once
// IWYU pragma private; include "Unity/Burst/FloatPrecision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatPrecision)
// Forward declare root types
namespace Unity::Burst {
struct FloatPrecision;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::FloatPrecision);
// Type: Unity.Burst::FloatPrecision
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::FloatPrecision
struct CORDL_TYPE FloatPrecision {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatPrecision_Unwrapped
  enum struct __FloatPrecision_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_High = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_Low = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatPrecision_Unwrapped() const noexcept {
    return static_cast<__FloatPrecision_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatPrecision();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatPrecision(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::FloatPrecision const High;

  /// @brief Field Low value: static_cast<int32_t>(0x3)
  static ::Unity::Burst::FloatPrecision const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::FloatPrecision const Medium;

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::FloatPrecision const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::FloatPrecision, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::FloatPrecision, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::FloatPrecision, "Unity.Burst", "FloatPrecision");
