#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AngleUnit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AngleUnit)
// Forward declare root types
namespace UnityEngine::UIElements {
struct AngleUnit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::AngleUnit);
// Type: UnityEngine.UIElements::AngleUnit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::AngleUnit
struct CORDL_TYPE AngleUnit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AngleUnit_Unwrapped
  enum struct __AngleUnit_Unwrapped : int32_t {
    __E_Degree = static_cast<int32_t>(0x0),
    __E_Gradian = static_cast<int32_t>(0x1),
    __E_Radian = static_cast<int32_t>(0x2),
    __E_Turn = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AngleUnit_Unwrapped() const noexcept {
    return static_cast<__AngleUnit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AngleUnit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AngleUnit(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Degree value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::AngleUnit const Degree;

  /// @brief Field Gradian value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::AngleUnit const Gradian;

  /// @brief Field Radian value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::AngleUnit const Radian;

  /// @brief Field Turn value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::AngleUnit const Turn;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AngleUnit, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AngleUnit, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AngleUnit, "UnityEngine.UIElements", "AngleUnit");
