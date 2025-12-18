#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseOffsets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PoseOffsets)
namespace BeatSaber::RecPlay {
struct PlayerPose;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
struct PoseOffsets;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::PoseOffsets);
// Dependencies UnityEngine.Pose
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: BeatSaber.RecPlay.PoseOffsets
struct CORDL_TYPE PoseOffsets {
public:
  // Declarations
  /// @brief Field kDefault, offset 0xffffffff, size 0x54
  __declspec(property(get = getStaticF_kDefault, put = setStaticF_kDefault)) ::BeatSaber::RecPlay::PoseOffsets kDefault;

  /// @brief Method Adjust, addr 0x31f0748, size 0x198, virtual false, abstract: false, final false
  inline void Adjust(::ByRef<::BeatSaber::RecPlay::PlayerPose> pose);

  static inline ::BeatSaber::RecPlay::PoseOffsets getStaticF_kDefault();

  static inline void setStaticF_kDefault(::BeatSaber::RecPlay::PoseOffsets value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseOffsets();

  // Ctor Parameters [CppParam { name: "room", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "leftController", ty: "::UnityEngine::Pose", modifiers: "", def_value: None
  // }, CppParam { name: "rightController", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
  constexpr PoseOffsets(::UnityEngine::Pose room, ::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22874 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  /// @brief Field room, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::Pose room;

  /// @brief Field leftController, offset: 0x1c, size: 0x1c, def value: None
  ::UnityEngine::Pose leftController;

  /// @brief Field rightController, offset: 0x38, size: 0x1c, def value: None
  ::UnityEngine::Pose rightController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::RecPlay::PoseOffsets, room) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseOffsets, leftController) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PoseOffsets, rightController) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PoseOffsets, 0x54>, "Size mismatch!");

} // namespace BeatSaber::RecPlay
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PoseOffsets, "BeatSaber.RecPlay", "PoseOffsets");
