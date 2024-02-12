#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelScreenMatchMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelScreenMatchMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelScreenMatchMode);
// Type: UnityEngine.UIElements::PanelScreenMatchMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6283))
// CS Name: ::UnityEngine.UIElements::PanelScreenMatchMode
struct CORDL_TYPE PanelScreenMatchMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PanelScreenMatchMode_Unwrapped
  enum struct __PanelScreenMatchMode_Unwrapped : int32_t {
    __E_MatchWidthOrHeight = static_cast<int32_t>(0x0),
    __E_Shrink = static_cast<int32_t>(0x1),
    __E_Expand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PanelScreenMatchMode_Unwrapped() const noexcept {
    return static_cast<__PanelScreenMatchMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PanelScreenMatchMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelScreenMatchMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MatchWidthOrHeight value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::PanelScreenMatchMode const MatchWidthOrHeight;

  /// @brief Field Shrink value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::PanelScreenMatchMode const Shrink;

  /// @brief Field Expand value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::PanelScreenMatchMode const Expand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelScreenMatchMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelScreenMatchMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelScreenMatchMode, "UnityEngine.UIElements", "PanelScreenMatchMode");
