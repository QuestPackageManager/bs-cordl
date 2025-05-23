#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragVisualMode.hpp"
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
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DragVisualMode
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DragVisualMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DragVisualMode(int32_t value__) noexcept;

  /// @brief Field Copy value: I32(1)
  static ::UnityEngine::UIElements::DragVisualMode const Copy;

  /// @brief Field Move value: I32(2)
  static ::UnityEngine::UIElements::DragVisualMode const Move;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::DragVisualMode const None;

  /// @brief Field Rejected value: I32(3)
  static ::UnityEngine::UIElements::DragVisualMode const Rejected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DragVisualMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DragVisualMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragVisualMode, "UnityEngine.UIElements", "DragVisualMode");
