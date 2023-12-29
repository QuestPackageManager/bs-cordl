#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(AvatarPoseMirror)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class AvatarPoseController;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPoseMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarPoseMirror);
// Type: ::AvatarPoseMirror
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4080))
// CS Name: ::AvatarPoseMirror*
class CORDL_TYPE AvatarPoseMirror : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarPoseController, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarPoseController, put = __set__avatarPoseController))::GlobalNamespace::AvatarPoseController* _avatarPoseController;

  constexpr ::GlobalNamespace::AvatarPoseController*& __get__avatarPoseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPoseController*> const& __get__avatarPoseController() const;

  constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController* value);

  /// @brief Method Start addr 0x20d2e94 size 0xd0 virtual false final false
  inline void Start();

  /// @brief Method HandleAvatarPoseControllerPositionsWillBeSet addr 0x20d2f64 size 0x30 virtual false final false
  static inline void HandleAvatarPoseControllerPositionsWillBeSet(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                                                                  ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition,
                                                                  ByRef<::UnityEngine::Vector3> newRightHandPosition);

  /// @brief Method HandleAvatarPoseControllerRotationsWillBeSet addr 0x20d2f9c size 0x3c virtual false final false
  static inline void HandleAvatarPoseControllerRotationsWillBeSet(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation,
                                                                  ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation,
                                                                  ByRef<::UnityEngine::Quaternion> newRightHandRotation);

  /// @brief Method MirrorRotation addr 0x20d2fd8 size 0xc virtual false final false
  static inline ::UnityEngine::Quaternion MirrorRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method MirrorPosition addr 0x20d2f94 size 0x8 virtual false final false
  static inline ::UnityEngine::Vector3 MirrorPosition(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::AvatarPoseMirror* New_ctor();

  /// @brief Method .ctor addr 0x20d2fe4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPoseMirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPoseMirror(AvatarPoseMirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPoseMirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPoseMirror(AvatarPoseMirror const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPoseMirror();

public:
  /// @brief Field _avatarPoseController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPoseController* ____avatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarPoseMirror, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseMirror, ____avatarPoseController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarPoseMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseMirror*, "", "AvatarPoseMirror");
