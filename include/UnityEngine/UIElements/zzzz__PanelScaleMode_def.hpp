#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelScaleMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelScaleMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelScaleMode);
// Type: UnityEngine.UIElements::PanelScaleMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7023))
// CS Name: ::UnityEngine.UIElements::PanelScaleMode
struct CORDL_TYPE PanelScaleMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PanelScaleMode_Unwrapped
  enum struct __PanelScaleMode_Unwrapped : int32_t {
    __E_ConstantPixelSize = static_cast<int32_t>(0x0),
    __E_ConstantPhysicalSize = static_cast<int32_t>(0x1),
    __E_ScaleWithScreenSize = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PanelScaleMode_Unwrapped() const noexcept {
    return static_cast<__PanelScaleMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PanelScaleMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelScaleMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ConstantPixelSize value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::PanelScaleMode const ConstantPixelSize;

  /// @brief Field ConstantPhysicalSize value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::PanelScaleMode const ConstantPhysicalSize;

  /// @brief Field ScaleWithScreenSize value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::PanelScaleMode const ScaleWithScreenSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelScaleMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelScaleMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelScaleMode, "UnityEngine.UIElements", "PanelScaleMode");
