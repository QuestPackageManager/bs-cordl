#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(AvatarHeadOffset)
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarHeadOffset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarHeadOffset);
// Type: ::AvatarHeadOffset
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4075))
// CS Name: ::AvatarHeadOffset*
class CORDL_TYPE AvatarHeadOffset : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _positionOffset, offset 0x18, size 0xc
  __declspec(property(get = __get__positionOffset, put = __set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _avatarPoseController, offset 0x28, size 0x8
  __declspec(property(get = __get__avatarPoseController, put = __set__avatarPoseController))::GlobalNamespace::AvatarPoseController* _avatarPoseController;

  constexpr ::UnityEngine::Vector3& __get__positionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

  constexpr void __set__positionOffset(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::AvatarPoseController*& __get__avatarPoseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPoseController*> const& __get__avatarPoseController() const;

  constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController* value);

  /// @brief Method Start addr 0x20d22d0 size 0x88 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20d2408 size 0xd0 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleMultiplayerAvatarPoseControllerDidUpdatePose addr 0x20d2588 size 0x54 virtual false final false
  inline void HandleMultiplayerAvatarPoseControllerDidUpdatePose(::UnityEngine::Vector3 headLocalPosition);

  static inline ::GlobalNamespace::AvatarHeadOffset* New_ctor();

  /// @brief Method .ctor addr 0x20d25dc size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarHeadOffset(AvatarHeadOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarHeadOffset(AvatarHeadOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarHeadOffset();

public:
  /// @brief Field _positionOffset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _avatarPoseController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPoseController* ____avatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarHeadOffset, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHeadOffset, ____positionOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarHeadOffset, ____avatarPoseController) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarHeadOffset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarHeadOffset*, "", "AvatarHeadOffset");
