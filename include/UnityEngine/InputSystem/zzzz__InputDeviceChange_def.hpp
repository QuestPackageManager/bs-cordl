#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceChange)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputDeviceChange);
// Type: UnityEngine.InputSystem::InputDeviceChange
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6240))
// CS Name: ::UnityEngine.InputSystem::InputDeviceChange
struct CORDL_TYPE InputDeviceChange {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputDeviceChange_Unwrapped
  enum struct __InputDeviceChange_Unwrapped : int32_t {
    __E_Added = static_cast<int32_t>(0x0),
    __E_Removed = static_cast<int32_t>(0x1),
    __E_Disconnected = static_cast<int32_t>(0x2),
    __E_Reconnected = static_cast<int32_t>(0x3),
    __E_Enabled = static_cast<int32_t>(0x4),
    __E_Disabled = static_cast<int32_t>(0x5),
    __E_UsageChanged = static_cast<int32_t>(0x6),
    __E_ConfigurationChanged = static_cast<int32_t>(0x7),
    __E_SoftReset = static_cast<int32_t>(0x8),
    __E_HardReset = static_cast<int32_t>(0x9),
    __E_Destroyed = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputDeviceChange_Unwrapped() const noexcept {
    return static_cast<__InputDeviceChange_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputDeviceChange(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceChange();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Added value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::InputDeviceChange const Added;

  /// @brief Field Removed value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::InputDeviceChange const Removed;

  /// @brief Field Disconnected value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::InputDeviceChange const Disconnected;

  /// @brief Field Reconnected value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::InputDeviceChange const Reconnected;

  /// @brief Field Enabled value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::InputDeviceChange const Enabled;

  /// @brief Field Disabled value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::InputDeviceChange const Disabled;

  /// @brief Field UsageChanged value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::InputDeviceChange const UsageChanged;

  /// @brief Field ConfigurationChanged value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::InputDeviceChange const ConfigurationChanged;

  /// @brief Field SoftReset value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::InputDeviceChange const SoftReset;

  /// @brief Field HardReset value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::InputDeviceChange const HardReset;

  /// @brief Field Destroyed value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::InputDeviceChange const Destroyed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputDeviceChange, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputDeviceChange, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputDeviceChange, "UnityEngine.InputSystem", "InputDeviceChange");
