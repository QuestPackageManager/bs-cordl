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
struct __MultiTapInteraction__TapPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase);
// Type: ::TapPhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// CS Name: ::MultiTapInteraction::TapPhase
struct CORDL_TYPE __MultiTapInteraction__TapPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiTapInteraction__TapPhase_Unwrapped
  enum struct ____MultiTapInteraction__TapPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WaitingForNextRelease = static_cast<int32_t>(0x1),
    __E_WaitingForNextPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiTapInteraction__TapPhase_Unwrapped() const noexcept {
    return static_cast<____MultiTapInteraction__TapPhase_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiTapInteraction__TapPhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiTapInteraction__TapPhase(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const None;

  /// @brief Field WaitingForNextPress value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const WaitingForNextPress;

  /// @brief Field WaitingForNextRelease value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const WaitingForNextRelease;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction/TapPhase");
