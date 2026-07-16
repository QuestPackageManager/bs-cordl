#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/NoAvatarPoseRestriction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoAvatarPoseRestriction)
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class NoAvatarPoseRestriction;
}
// Write type traits
MARK_REF_T(::BeatSaber::AvatarCore::NoAvatarPoseRestriction*);
DEFINE_IL2CPP_CLASS(::BeatSaber::AvatarCore::NoAvatarPoseRestriction*, "BeatSaber.AvatarCore", "NoAvatarPoseRestriction");
// Dependencies System.Object
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.NoAvatarPoseRestriction
class CORDL_TYPE NoAvatarPoseRestriction : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarPoseRestriction*() noexcept;

  static inline ::BeatSaber::AvatarCore::NoAvatarPoseRestriction* New_ctor();

  /// @brief Method RestrictPose, addr 0x326f5b0, size 0x30, virtual true, abstract: false, final true
  inline void RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                           ::by_ref<::UnityEngine::Vector3> newHeadPosition, ::by_ref<::UnityEngine::Vector3> newLeftHandPosition, ::by_ref<::UnityEngine::Vector3> newRightHandPosition);

  /// @brief Method .ctor, addr 0x326f5e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* i___BeatSaber__AvatarCore__IAvatarPoseRestriction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoAvatarPoseRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoAvatarPoseRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoAvatarPoseRestriction(NoAvatarPoseRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoAvatarPoseRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoAvatarPoseRestriction(NoAvatarPoseRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::AvatarCore::NoAvatarPoseRestriction) == 0x10, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
