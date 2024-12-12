#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/IAvatarPoseRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAvatarPoseRestriction)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::IAvatarPoseRestriction);
// Dependencies
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.IAvatarPoseRestriction
class CORDL_TYPE IAvatarPoseRestriction {
public:
  // Declarations
  /// @brief Method RestrictPose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                           ::ByRef<::UnityEngine::Vector3> newHeadPosition, ::ByRef<::UnityEngine::Vector3> newLeftHandPosition, ::ByRef<::UnityEngine::Vector3> newRightHandPosition);

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarPoseRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarPoseRestriction(IAvatarPoseRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::IAvatarPoseRestriction);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::IAvatarPoseRestriction*, "BeatSaber.AvatarCore", "IAvatarPoseRestriction");
