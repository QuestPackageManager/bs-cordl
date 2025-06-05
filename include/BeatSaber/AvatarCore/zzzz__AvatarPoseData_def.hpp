#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarPoseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AvatarPoseData)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarPoseData);
// Dependencies UnityEngine.Pose
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: BeatSaber.AvatarCore.AvatarPoseData
struct CORDL_TYPE AvatarPoseData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x224bc9c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPoseData();

  // Ctor Parameters [CppParam { name: "headPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "leftHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value:
  // None }, CppParam { name: "rightHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
  constexpr AvatarPoseData(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  /// @brief Field headPose, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::Pose headPose;

  /// @brief Field leftHandPose, offset: 0x1c, size: 0x1c, def value: None
  ::UnityEngine::Pose leftHandPose;

  /// @brief Field rightHandPose, offset: 0x38, size: 0x1c, def value: None
  ::UnityEngine::Pose rightHandPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarPoseData, headPose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarPoseData, leftHandPose) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarPoseData, rightHandPose) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarPoseData, 0x54>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarPoseData, "BeatSaber.AvatarCore", "AvatarPoseData");
