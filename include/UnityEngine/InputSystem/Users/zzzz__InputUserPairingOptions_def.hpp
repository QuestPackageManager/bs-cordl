#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUserPairingOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUserPairingOptions)
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUserPairingOptions);
// Type: UnityEngine.InputSystem.Users::InputUserPairingOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Users::InputUserPairingOptions
struct CORDL_TYPE InputUserPairingOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputUserPairingOptions_Unwrapped
  enum struct __InputUserPairingOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ForcePlatformUserAccountSelection = static_cast<int32_t>(0x1),
    __E_ForceNoPlatformUserAccountSelection = static_cast<int32_t>(0x2),
    __E_UnpairCurrentDevicesFromUser = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputUserPairingOptions_Unwrapped() const noexcept {
    return static_cast<__InputUserPairingOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUserPairingOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputUserPairingOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ForceNoPlatformUserAccountSelection value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const ForceNoPlatformUserAccountSelection;

  /// @brief Field ForcePlatformUserAccountSelection value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const ForcePlatformUserAccountSelection;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const None;

  /// @brief Field UnpairCurrentDevicesFromUser value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const UnpairCurrentDevicesFromUser;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserPairingOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUserPairingOptions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserPairingOptions, "UnityEngine.InputSystem.Users", "InputUserPairingOptions");
