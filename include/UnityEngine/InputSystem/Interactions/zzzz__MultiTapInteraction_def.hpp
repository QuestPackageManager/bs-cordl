#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Interactions/MultiTapInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTapInteraction)
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
struct MultiTapInteraction_TapPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase);
// Dependencies
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Interactions.MultiTapInteraction/TapPhase
struct CORDL_TYPE MultiTapInteraction_TapPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiTapInteraction_TapPhase_Unwrapped
  enum struct __MultiTapInteraction_TapPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WaitingForNextRelease = static_cast<int32_t>(0x1),
    __E_WaitingForNextPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiTapInteraction_TapPhase_Unwrapped() const noexcept {
    return static_cast<__MultiTapInteraction_TapPhase_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiTapInteraction_TapPhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiTapInteraction_TapPhase(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase const None;

  /// @brief Field WaitingForNextPress value: I32(2)
  static ::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase const WaitingForNextPress;

  /// @brief Field WaitingForNextRelease value: I32(1)
  static ::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase const WaitingForNextRelease;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9115 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::MultiTapInteraction_TapPhase, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction/TapPhase");
