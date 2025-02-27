#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUserChange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUserChange)
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUserChange);
// Dependencies
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUserChange
struct CORDL_TYPE InputUserChange {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputUserChange_Unwrapped
  enum struct __InputUserChange_Unwrapped : int32_t {
    __E_Added = static_cast<int32_t>(0x0),
    __E_Removed = static_cast<int32_t>(0x1),
    __E_DevicePaired = static_cast<int32_t>(0x2),
    __E_DeviceUnpaired = static_cast<int32_t>(0x3),
    __E_DeviceLost = static_cast<int32_t>(0x4),
    __E_DeviceRegained = static_cast<int32_t>(0x5),
    __E_AccountChanged = static_cast<int32_t>(0x6),
    __E_AccountNameChanged = static_cast<int32_t>(0x7),
    __E_AccountSelectionInProgress = static_cast<int32_t>(0x8),
    __E_AccountSelectionCanceled = static_cast<int32_t>(0x9),
    __E_AccountSelectionComplete = static_cast<int32_t>(0xa),
    __E_ControlSchemeChanged = static_cast<int32_t>(0xb),
    __E_ControlsChanged = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputUserChange_Unwrapped() const noexcept {
    return static_cast<__InputUserChange_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUserChange();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputUserChange(int32_t value__) noexcept;

  /// @brief Field AccountChanged value: I32(6)
  static ::UnityEngine::InputSystem::Users::InputUserChange const AccountChanged;

  /// @brief Field AccountNameChanged value: I32(7)
  static ::UnityEngine::InputSystem::Users::InputUserChange const AccountNameChanged;

  /// @brief Field AccountSelectionCanceled value: I32(9)
  static ::UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionCanceled;

  /// @brief Field AccountSelectionComplete value: I32(10)
  static ::UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionComplete;

  /// @brief Field AccountSelectionInProgress value: I32(8)
  static ::UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionInProgress;

  /// @brief Field Added value: I32(0)
  static ::UnityEngine::InputSystem::Users::InputUserChange const Added;

  /// @brief Field ControlSchemeChanged value: I32(11)
  static ::UnityEngine::InputSystem::Users::InputUserChange const ControlSchemeChanged;

  /// @brief Field ControlsChanged value: I32(12)
  static ::UnityEngine::InputSystem::Users::InputUserChange const ControlsChanged;

  /// @brief Field DeviceLost value: I32(4)
  static ::UnityEngine::InputSystem::Users::InputUserChange const DeviceLost;

  /// @brief Field DevicePaired value: I32(2)
  static ::UnityEngine::InputSystem::Users::InputUserChange const DevicePaired;

  /// @brief Field DeviceRegained value: I32(5)
  static ::UnityEngine::InputSystem::Users::InputUserChange const DeviceRegained;

  /// @brief Field DeviceUnpaired value: I32(3)
  static ::UnityEngine::InputSystem::Users::InputUserChange const DeviceUnpaired;

  /// @brief Field Removed value: I32(1)
  static ::UnityEngine::InputSystem::Users::InputUserChange const Removed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6775 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUserChange, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserChange, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserChange, "UnityEngine.InputSystem.Users", "InputUserChange");
