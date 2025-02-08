#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PlayerJoinBehavior.hpp"
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
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.PlayerJoinBehavior
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerJoinBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerJoinBehavior(int32_t value__) noexcept;

  /// @brief Field JoinPlayersManually value: I32(2)
  static ::UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersManually;

  /// @brief Field JoinPlayersWhenButtonIsPressed value: I32(0)
  static ::UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersWhenButtonIsPressed;

  /// @brief Field JoinPlayersWhenJoinActionIsTriggered value: I32(1)
  static ::UnityEngine::InputSystem::PlayerJoinBehavior const JoinPlayersWhenJoinActionIsTriggered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::PlayerJoinBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerJoinBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerJoinBehavior, "UnityEngine.InputSystem", "PlayerJoinBehavior");
