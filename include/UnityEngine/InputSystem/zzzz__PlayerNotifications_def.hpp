#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNotifications)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct PlayerNotifications;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::PlayerNotifications);
// Type: UnityEngine.InputSystem::PlayerNotifications
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6320))
// CS Name: ::UnityEngine.InputSystem::PlayerNotifications
struct CORDL_TYPE PlayerNotifications {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerNotifications_Unwrapped
  enum struct __PlayerNotifications_Unwrapped : int32_t {
    __E_SendMessages = static_cast<int32_t>(0x0),
    __E_BroadcastMessages = static_cast<int32_t>(0x1),
    __E_InvokeUnityEvents = static_cast<int32_t>(0x2),
    __E_InvokeCSharpEvents = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerNotifications_Unwrapped() const noexcept {
    return static_cast<__PlayerNotifications_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerNotifications(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerNotifications();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SendMessages value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::PlayerNotifications const SendMessages;

  /// @brief Field BroadcastMessages value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::PlayerNotifications const BroadcastMessages;

  /// @brief Field InvokeUnityEvents value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::PlayerNotifications const InvokeUnityEvents;

  /// @brief Field InvokeCSharpEvents value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::PlayerNotifications const InvokeCSharpEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerNotifications, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerNotifications, "UnityEngine.InputSystem", "PlayerNotifications");
