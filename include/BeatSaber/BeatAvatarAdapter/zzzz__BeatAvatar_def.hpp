#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatAvatar)
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarPoseController;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatar;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatar);
// Dependencies BeatSaber.AvatarCore.Avatar
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.BeatAvatar
class CORDL_TYPE BeatAvatar : public ::BeatSaber::AvatarCore::Avatar {
public:
  // Declarations
  /// @brief Field _avatarPoseController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarPoseController, put = __cordl_internal_set__avatarPoseController)) ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController>
      _avatarPoseController;

  /// @brief Field _avatarVisualController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarVisualController, put = __cordl_internal_set__avatarVisualController)) ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>
      _avatarVisualController;

  __declspec(property(get = get_bodyCenterWorldPosition)) ::UnityEngine::Vector3 bodyCenterWorldPosition;

  static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatar* New_ctor();

  /// @brief Method SetLightColor, addr 0x2254724, size 0x1c, virtual true, abstract: false, final false
  inline void SetLightColor(::UnityEngine::Color lightColor);

  /// @brief Method UpdateAvatarFromOptionalData, addr 0x2254964, size 0x4, virtual true, abstract: false, final false
  inline void UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data, float_t playbackDelaySeconds);

  /// @brief Method UpdateAvatarFromPose, addr 0x2254740, size 0x78, virtual true, abstract: false, final false
  inline void UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData currentPose);

  /// @brief Method UpdateAvatarFromVisualData, addr 0x22547b8, size 0x1ac, virtual true, abstract: false, final false
  inline void UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData visualData);

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController> const& __cordl_internal_get__avatarPoseController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController>& __cordl_internal_get__avatarPoseController();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> const& __cordl_internal_get__avatarVisualController() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>& __cordl_internal_get__avatarVisualController();

  constexpr void __cordl_internal_set__avatarPoseController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController> value);

  constexpr void __cordl_internal_set__avatarVisualController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> value);

  /// @brief Method .ctor, addr 0x2254968, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bodyCenterWorldPosition, addr 0x2254708, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyCenterWorldPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatar(BeatAvatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatar(BeatAvatar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17711 };

  /// @brief Field _avatarVisualController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> ____avatarVisualController;

  /// @brief Field _avatarPoseController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController> ____avatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatar, ____avatarVisualController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatar, ____avatarPoseController) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatar, 0x48>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatar);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatar*, "BeatSaber.BeatAvatarAdapter", "BeatAvatar");
