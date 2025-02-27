#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayState)
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayState);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayState
struct CORDL_TYPE PlayState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayState_Unwrapped
  enum struct __PlayState_Unwrapped : int32_t {
    __E_Paused = static_cast<int32_t>(0x0),
    __E_Playing = static_cast<int32_t>(0x1),
    __E_Delayed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayState_Unwrapped() const noexcept {
    return static_cast<__PlayState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayState(int32_t value__) noexcept;

  /// @brief Field Delayed value: I32(2)
  static ::UnityEngine::Playables::PlayState const Delayed;

  /// @brief Field Paused value: I32(0)
  static ::UnityEngine::Playables::PlayState const Paused;

  /// @brief Field Playing value: I32(1)
  static ::UnityEngine::Playables::PlayState const Playing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11285 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayState, "UnityEngine.Playables", "PlayState");
