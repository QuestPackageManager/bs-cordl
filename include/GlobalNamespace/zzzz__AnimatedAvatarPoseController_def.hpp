#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimatedAvatarPoseController)
namespace GlobalNamespace {
class AvatarPoseController;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatedAvatarPoseController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnimatedAvatarPoseController);
// Type: ::AnimatedAvatarPoseController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4073))
// CS Name: ::AnimatedAvatarPoseController*
class CORDL_TYPE AnimatedAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarPoseController, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarPoseController, put = __set__avatarPoseController))::GlobalNamespace::AvatarPoseController* _avatarPoseController;

  constexpr ::GlobalNamespace::AvatarPoseController*& __get__avatarPoseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPoseController*> const& __get__avatarPoseController() const;

  constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController* value);

  /// @brief Method LateUpdate addr 0x20d1fd8 size 0x18 virtual false final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::AnimatedAvatarPoseController* New_ctor();

  /// @brief Method .ctor addr 0x20d21a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedAvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimatedAvatarPoseController(AnimatedAvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimatedAvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimatedAvatarPoseController(AnimatedAvatarPoseController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatedAvatarPoseController();

public:
  /// @brief Field _avatarPoseController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPoseController* ____avatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnimatedAvatarPoseController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatedAvatarPoseController, ____avatarPoseController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnimatedAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnimatedAvatarPoseController*, "", "AnimatedAvatarPoseController");
