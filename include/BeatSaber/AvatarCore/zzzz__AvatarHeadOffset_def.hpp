#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarHeadOffset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(AvatarHeadOffset)
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarPoseController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarHeadOffset;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarHeadOffset);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AvatarHeadOffset
class CORDL_TYPE AvatarHeadOffset : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarPoseController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPoseController, put = __cordl_internal_set__avatarPoseController)) ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController>
      _avatarPoseController;

  /// @brief Field _positionOffset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset)) ::UnityEngine::Vector3 _positionOffset;

  /// @brief Method HandleMultiplayerAvatarPoseControllerDidUpdatePose, addr 0x224bcc0, size 0x54, virtual false, abstract: false, final false
  inline void HandleMultiplayerAvatarPoseControllerDidUpdatePose(::UnityEngine::Vector3 headLocalPosition);

  static inline ::BeatSaber::AvatarCore::AvatarHeadOffset* New_ctor();

  /// @brief Method OnDestroy, addr 0x224bb44, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x224ba08, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> const& __cordl_internal_get__avatarPoseController() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController>& __cordl_internal_get__avatarPoseController();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionOffset();

  constexpr void __cordl_internal_set__avatarPoseController(::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> value);

  constexpr void __cordl_internal_set__positionOffset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x224bd14, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarHeadOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarHeadOffset(AvatarHeadOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarHeadOffset(AvatarHeadOffset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17565 };

  /// @brief Field _positionOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _avatarPoseController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> ____avatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarHeadOffset, ____positionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarHeadOffset, ____avatarPoseController) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarHeadOffset, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarHeadOffset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarHeadOffset*, "BeatSaber.AvatarCore", "AvatarHeadOffset");
