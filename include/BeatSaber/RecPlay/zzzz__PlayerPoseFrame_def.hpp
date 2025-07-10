#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseFrame.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerPoseFrame)
// Forward declare root types
namespace BeatSaber::RecPlay {
struct PlayerPoseFrame;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::PlayerPoseFrame);
// Dependencies BeatSaber.RecPlay.PlayerPose
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: BeatSaber.RecPlay.PlayerPoseFrame
struct CORDL_TYPE PlayerPoseFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPoseFrame();

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "::BeatSaber::RecPlay::PlayerPose", modifiers: "", def_value: None }]
  constexpr PlayerPoseFrame(float_t time, ::BeatSaber::RecPlay::PlayerPose pose) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18881 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field pose, offset: 0x4, size: 0x54, def value: None
  ::BeatSaber::RecPlay::PlayerPose pose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseFrame, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseFrame, pose) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PlayerPoseFrame, 0x58>, "Size mismatch!");

} // namespace BeatSaber::RecPlay
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PlayerPoseFrame, "BeatSaber.RecPlay", "PlayerPoseFrame");
