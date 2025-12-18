#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugAction)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugAction);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugAction
struct CORDL_TYPE DebugAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugAction_Unwrapped
  enum struct __DebugAction_Unwrapped : int32_t {
    __E_EnableDebugMenu = static_cast<int32_t>(0x0),
    __E_PreviousDebugPanel = static_cast<int32_t>(0x1),
    __E_NextDebugPanel = static_cast<int32_t>(0x2),
    __E_Action = static_cast<int32_t>(0x3),
    __E_MakePersistent = static_cast<int32_t>(0x4),
    __E_MoveVertical = static_cast<int32_t>(0x5),
    __E_MoveHorizontal = static_cast<int32_t>(0x6),
    __E_Multiplier = static_cast<int32_t>(0x7),
    __E_ResetAll = static_cast<int32_t>(0x8),
    __E_DebugActionCount = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugAction_Unwrapped() const noexcept {
    return static_cast<__DebugAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugAction(int32_t value__) noexcept;

  /// @brief Field Action value: I32(3)
  static ::UnityEngine::Rendering::DebugAction const Action;

  /// @brief Field DebugActionCount value: I32(9)
  static ::UnityEngine::Rendering::DebugAction const DebugActionCount;

  /// @brief Field EnableDebugMenu value: I32(0)
  static ::UnityEngine::Rendering::DebugAction const EnableDebugMenu;

  /// @brief Field MakePersistent value: I32(4)
  static ::UnityEngine::Rendering::DebugAction const MakePersistent;

  /// @brief Field MoveHorizontal value: I32(6)
  static ::UnityEngine::Rendering::DebugAction const MoveHorizontal;

  /// @brief Field MoveVertical value: I32(5)
  static ::UnityEngine::Rendering::DebugAction const MoveVertical;

  /// @brief Field Multiplier value: I32(7)
  static ::UnityEngine::Rendering::DebugAction const Multiplier;

  /// @brief Field NextDebugPanel value: I32(2)
  static ::UnityEngine::Rendering::DebugAction const NextDebugPanel;

  /// @brief Field PreviousDebugPanel value: I32(1)
  static ::UnityEngine::Rendering::DebugAction const PreviousDebugPanel;

  /// @brief Field ResetAll value: I32(8)
  static ::UnityEngine::Rendering::DebugAction const ResetAll;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugAction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugAction, "UnityEngine.Rendering", "DebugAction");
