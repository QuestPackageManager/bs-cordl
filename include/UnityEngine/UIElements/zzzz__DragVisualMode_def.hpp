#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DragVisualMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DragVisualMode);
// Type: UnityEngine.UIElements::DragVisualMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6956))
// CS Name: ::UnityEngine.UIElements::DragVisualMode
struct CORDL_TYPE DragVisualMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DragVisualMode_Unwrapped
  enum struct __DragVisualMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Copy = static_cast<int32_t>(0x1),
    __E_Move = static_cast<int32_t>(0x2),
    __E_Rejected = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DragVisualMode_Unwrapped() const noexcept {
    return static_cast<__DragVisualMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DragVisualMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DragVisualMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::DragVisualMode const None;

  /// @brief Field Copy value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::DragVisualMode const Copy;

  /// @brief Field Move value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::DragVisualMode const Move;

  /// @brief Field Rejected value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::DragVisualMode const Rejected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragVisualMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragVisualMode, "UnityEngine.UIElements", "DragVisualMode");
