#pragma once
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
// Type: BeatSaber.AvatarCore::AvatarPoseData
// SizeInfo { instance_size: 84, native_size: 84, calculated_instance_size: 84, calculated_native_size: 100, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10057))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15174))
// CS Name: ::BeatSaber.AvatarCore::AvatarPoseData
struct CORDL_TYPE AvatarPoseData {
public:
  // Declarations
  /// @brief Method .ctor addr 0xe0bd6c size 0x4c virtual false final false
  inline void _ctor(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose);

  // Ctor Parameters [CppParam { name: "headPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "leftHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value:
  // None }, CppParam { name: "rightHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
  constexpr AvatarPoseData(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPoseData();

  /// @brief Field headPose, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::Pose headPose;

  /// @brief Field leftHandPose, offset: 0x1c, size: 0x1c, def value: None
  ::UnityEngine::Pose leftHandPose;

  /// @brief Field rightHandPose, offset: 0x38, size: 0x1c, def value: None
  ::UnityEngine::Pose rightHandPose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarPoseData, 0x54>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarPoseData, "BeatSaber.AvatarCore", "AvatarPoseData");
