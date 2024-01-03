#pragma once
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
// Type: BeatSaber.BeatAvatarSDK::BeatAvatarPoseController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15693))
// CS Name: ::BeatSaber.BeatAvatarSDK::BeatAvatarPoseController*
class CORDL_TYPE BeatAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _headTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  /// @brief Field _leftHandTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__leftHandTransform, put = __set__leftHandTransform))::UnityEngine::Transform* _leftHandTransform;

  /// @brief Field _rightHandTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__rightHandTransform, put = __set__rightHandTransform))::UnityEngine::Transform* _rightHandTransform;

  /// @brief Field _bodyTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__bodyTransform, put = __set__bodyTransform))::UnityEngine::Transform* _bodyTransform;

  /// @brief Field _headBodyOffset, offset 0x38, size 0x8
  __declspec(property(get = __get__headBodyOffset, put = __set__headBodyOffset))::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* _headBodyOffset;

  __declspec(property(get = get_bodyWorldPosition))::UnityEngine::Vector3 bodyWorldPosition;

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__leftHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftHandTransform() const;

  constexpr void __set__leftHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightHandTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightHandTransform() const;

  constexpr void __set__rightHandTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__bodyTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__bodyTransform() const;

  constexpr void __set__bodyTransform(::UnityEngine::Transform* value);

  constexpr ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*& __get__headBodyOffset();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*> const& __get__headBodyOffset() const;

  constexpr void __set__headBodyOffset(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* value);

  /// @brief Method get_bodyWorldPosition, addr 0xe1b04c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyWorldPosition();

  /// @brief Method UpdateTransforms, addr 0xe1b068, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateTransforms(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ::UnityEngine::Quaternion headRotation,
                               ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation);

  /// @brief Method UpdateBodyPosition, addr 0xe1b144, size 0x1b0, virtual false, abstract: false, final false
  inline void UpdateBodyPosition();

  static inline ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* New_ctor();

  /// @brief Method .ctor, addr 0xe1b2f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarPoseController(BeatAvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarPoseController(BeatAvatarPoseController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarPoseController();

public:
  /// @brief Field _headTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  /// @brief Field _leftHandTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftHandTransform;

  /// @brief Field _rightHandTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightHandTransform;

  /// @brief Field _bodyTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____bodyTransform;

  /// @brief Field _headBodyOffset, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* ____headBodyOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____headTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____leftHandTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____rightHandTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____bodyTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, ____headBodyOffset) == 0x38, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*, "BeatSaber.BeatAvatarSDK", "BeatAvatarPoseController");
