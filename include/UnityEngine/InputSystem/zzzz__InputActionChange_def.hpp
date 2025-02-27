#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionChange)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionChange);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionChange
struct CORDL_TYPE InputActionChange {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputActionChange_Unwrapped
  enum struct __InputActionChange_Unwrapped : int32_t {
    __E_ActionEnabled = static_cast<int32_t>(0x0),
    __E_ActionDisabled = static_cast<int32_t>(0x1),
    __E_ActionMapEnabled = static_cast<int32_t>(0x2),
    __E_ActionMapDisabled = static_cast<int32_t>(0x3),
    __E_ActionStarted = static_cast<int32_t>(0x4),
    __E_ActionPerformed = static_cast<int32_t>(0x5),
    __E_ActionCanceled = static_cast<int32_t>(0x6),
    __E_BoundControlsAboutToChange = static_cast<int32_t>(0x7),
    __E_BoundControlsChanged = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputActionChange_Unwrapped() const noexcept {
    return static_cast<__InputActionChange_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionChange();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionChange(int32_t value__) noexcept;

  /// @brief Field ActionCanceled value: I32(6)
  static ::UnityEngine::InputSystem::InputActionChange const ActionCanceled;

  /// @brief Field ActionDisabled value: I32(1)
  static ::UnityEngine::InputSystem::InputActionChange const ActionDisabled;

  /// @brief Field ActionEnabled value: I32(0)
  static ::UnityEngine::InputSystem::InputActionChange const ActionEnabled;

  /// @brief Field ActionMapDisabled value: I32(3)
  static ::UnityEngine::InputSystem::InputActionChange const ActionMapDisabled;

  /// @brief Field ActionMapEnabled value: I32(2)
  static ::UnityEngine::InputSystem::InputActionChange const ActionMapEnabled;

  /// @brief Field ActionPerformed value: I32(5)
  static ::UnityEngine::InputSystem::InputActionChange const ActionPerformed;

  /// @brief Field ActionStarted value: I32(4)
  static ::UnityEngine::InputSystem::InputActionChange const ActionStarted;

  /// @brief Field BoundControlsAboutToChange value: I32(7)
  static ::UnityEngine::InputSystem::InputActionChange const BoundControlsAboutToChange;

  /// @brief Field BoundControlsChanged value: I32(8)
  static ::UnityEngine::InputSystem::InputActionChange const BoundControlsChanged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionChange, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionChange, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionChange, "UnityEngine.InputSystem", "InputActionChange");
