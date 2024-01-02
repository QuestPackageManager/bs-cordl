#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollViewMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ScrollViewMode);
// Type: UnityEngine.UIElements::ScrollViewMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7042))
// CS Name: ::UnityEngine.UIElements::ScrollViewMode
struct CORDL_TYPE ScrollViewMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScrollViewMode_Unwrapped
  enum struct __ScrollViewMode_Unwrapped : int32_t {
    __E_Vertical = static_cast<int32_t>(0x0),
    __E_Horizontal = static_cast<int32_t>(0x1),
    __E_VerticalAndHorizontal = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScrollViewMode_Unwrapped() const noexcept {
    return static_cast<__ScrollViewMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScrollViewMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Vertical value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::ScrollViewMode const Vertical;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::ScrollViewMode const Horizontal;

  /// @brief Field VerticalAndHorizontal value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::ScrollViewMode const VerticalAndHorizontal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollViewMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollViewMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollViewMode, "UnityEngine.UIElements", "ScrollViewMode");
