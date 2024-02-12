#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerJoinBehavior)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct PlayerJoinBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::PlayerJoinBehavior);
// Type: UnityEngine.InputSystem::PlayerJoinBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5578))
// CS Name: ::UnityEngine.InputSystem::PlayerJoinBehavior
struct CORDL_TYPE PlayerJoinBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerJoinBehavior_Unwrapped
  enum struct __PlayerJoinBehavior_Unwrapped : int32_t {
    __E_JoinPlayersWhenButtonIsPressed = static_cast<int32_t>(0x0),
    __E_JoinPlayersWhenJoinActionIsTriggered = static_cast<int32_t>(0x1),
    __E_JoinPlayersManually = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerJoinBehavior_Unwrapped() const noexcept {
    return static_cast<__PlayerJoinBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerJoinBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerJoinBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field JoinPlayersWhenButtonIsPressed value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersWhenButtonIsPressed;

  /// @brief Field JoinPlayersWhenJoinActionIsTriggered value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersWhenJoinActionIsTriggered;

  /// @brief Field JoinPlayersManually value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersManually;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerJoinBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerJoinBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerJoinBehavior, "UnityEngine.InputSystem", "PlayerJoinBehavior");
