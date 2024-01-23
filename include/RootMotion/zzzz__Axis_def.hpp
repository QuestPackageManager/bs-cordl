#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis)
// Forward declare root types
namespace RootMotion {
struct Axis;
}
// Write type traits
MARK_VAL_T(::RootMotion::Axis);
// Type: RootMotion::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12480))
// CS Name: ::RootMotion::Axis
struct CORDL_TYPE Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Axis_Unwrapped
  enum struct __Axis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Z = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Axis_Unwrapped() const noexcept {
    return static_cast<__Axis_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Axis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Axis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field X value: static_cast<int32_t>(0x0)
  static ::RootMotion::Axis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x1)
  static ::RootMotion::Axis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x2)
  static ::RootMotion::Axis const Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::Axis, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Axis, "RootMotion", "Axis");
