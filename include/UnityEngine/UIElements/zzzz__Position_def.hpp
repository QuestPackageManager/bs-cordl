#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Position)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Position;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Position);
// Type: UnityEngine.UIElements::Position
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6886))
// CS Name: ::UnityEngine.UIElements::Position
struct CORDL_TYPE Position {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Position_Unwrapped
  enum struct __Position_Unwrapped : int32_t {
    __E_Relative = static_cast<int32_t>(0x0),
    __E_Absolute = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Position_Unwrapped() const noexcept {
    return static_cast<__Position_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Position(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Position();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Relative value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::Position const Relative;

  /// @brief Field Absolute value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::Position const Absolute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Position, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Position, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Position, "UnityEngine.UIElements", "Position");
