#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/BeatLeaderboardsState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatLeaderboardsState)
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboardsState;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Main::Leaderboards::BeatLeaderboardsState);
// Dependencies
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboardsState
struct CORDL_TYPE BeatLeaderboardsState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatLeaderboardsState_Unwrapped
  enum struct __BeatLeaderboardsState_Unwrapped : int32_t {
    __E_ErroredOrUninitialized = static_cast<int32_t>(0x0),
    __E_Disabled = static_cast<int32_t>(0x1),
    __E_Ready = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatLeaderboardsState_Unwrapped() const noexcept {
    return static_cast<__BeatLeaderboardsState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboardsState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatLeaderboardsState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(1)
  static ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState const Disabled;

  /// @brief Field ErroredOrUninitialized value: I32(0)
  static ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState const ErroredOrUninitialized;

  /// @brief Field Ready value: I32(2)
  static ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState const Ready;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20928 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboardsState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboardsState, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboardsState, "BeatSaber.Main.Leaderboards", "BeatLeaderboardsState");
