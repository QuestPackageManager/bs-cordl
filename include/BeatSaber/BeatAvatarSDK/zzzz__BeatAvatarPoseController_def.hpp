#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/BeatAvatarPoseController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarPoseController)
namespace BeatSaber::BeatAvatarSDK {
class HeadBodyOffsetSO;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarPoseController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController);
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.BeatAvatarPoseController
class CORDL_TYPE BeatAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bodyTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bodyTransform, put = __cordl_internal_set__bodyTransform)) ::UnityW<::UnityEngine::Transform> _bodyTransform;

  /// @brief Field _headBodyOffset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__headBodyOffset, put = __cordl_internal_set__headBodyOffset)) ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> _headBodyOffset;

  /// @brief Field _headTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform)) ::UnityW<::UnityEngine::Transform> _headTransform;

  /// @brief Field _leftHandTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandTransform, put = __cordl_internal_set__leftHandTransform)) ::UnityW<::UnityEngine::Transform> _leftHandTransform;

  /// @brief Field _rightHandTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandTransform, put = __cordl_internal_set__rightHandTransform)) ::UnityW<::UnityEngine::Transform> _rightHandTransform;

  __declspec(property(get = get_bodyWorldPosition)) ::UnityEngine::Vector3 bodyWorldPosition;

  static inline ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* New_ctor();

  /// @brief Method UpdateBodyPosition, addr 0x225c4e4, size 0x1ac, virtual false, abstract: false, final false
  inline void UpdateBodyPosition();

  /// @brief Method UpdateTransforms, addr 0x225c410, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateTransforms(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ::UnityEngine::Quaternion headRotation,
                               ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__bodyTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__bodyTransform();

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> const& __cordl_internal_get__headBodyOffset() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO>& __cordl_internal_get__headBodyOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandTransform();

  constexpr void __cordl_internal_set__bodyTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__headBodyOffset(::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> value);

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__rightHandTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x225c690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bodyWorldPosition, addr 0x225c3f4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyWorldPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarPoseController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarPoseController(BeatAvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarPoseController(BeatAvatarPoseController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18167 };

  /// @brief Field _headTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  /// @brief Field _leftHandTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rightHandTransform;

  /// @brief Field _bodyTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____bodyTransform;

  /// @brief Field _headBodyOffset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO> ____headBodyOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____headTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____leftHandTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____rightHandTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____bodyTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____headBodyOffset) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, 0x48>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*, "BeatSaber.BeatAvatarSDK", "BeatAvatarPoseController");
