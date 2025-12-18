#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputInteractionContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputInteractionContext)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputInteractionContext_Flags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputInteractionContext_Flags);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputInteractionContext/Flags
struct CORDL_TYPE InputInteractionContext_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputInteractionContext_Flags_Unwrapped
  enum struct __InputInteractionContext_Flags_Unwrapped : int32_t {
    __E_TimerHasExpired = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputInteractionContext_Flags_Unwrapped() const noexcept {
    return static_cast<__InputInteractionContext_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputInteractionContext_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputInteractionContext_Flags(int32_t value__) noexcept;

  /// @brief Field TimerHasExpired value: I32(2)
  static ::UnityEngine::InputSystem::InputInteractionContext_Flags const TimerHasExpired;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputInteractionContext_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputInteractionContext_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputInteractionContext_Flags, "UnityEngine.InputSystem", "InputInteractionContext/Flags");
