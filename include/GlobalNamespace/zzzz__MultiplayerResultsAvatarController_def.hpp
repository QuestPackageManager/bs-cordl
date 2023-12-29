#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerResultsAvatarController)
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace GlobalNamespace {
class MultiplayerAvatarPoseController;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsAvatarController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsAvatarController);
// Type: ::MultiplayerResultsAvatarController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5336))
// CS Name: ::MultiplayerResultsAvatarController*
class CORDL_TYPE MultiplayerResultsAvatarController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarVisualController, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarVisualController, put = __set__avatarVisualController))::GlobalNamespace::AvatarVisualController* _avatarVisualController;

  /// @brief Field _multiplayerAvatarPoseController, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerAvatarPoseController, put = __set__multiplayerAvatarPoseController))::GlobalNamespace::MultiplayerAvatarPoseController* _multiplayerAvatarPoseController;

  constexpr ::GlobalNamespace::AvatarVisualController*& __get__avatarVisualController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarVisualController*> const& __get__avatarVisualController() const;

  constexpr void __set__avatarVisualController(::GlobalNamespace::AvatarVisualController* value);

  constexpr ::GlobalNamespace::MultiplayerAvatarPoseController*& __get__multiplayerAvatarPoseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerAvatarPoseController*> const& __get__multiplayerAvatarPoseController() const;

  constexpr void __set__multiplayerAvatarPoseController(::GlobalNamespace::MultiplayerAvatarPoseController* value);

  /// @brief Method SetScale addr 0x21149a8 size 0x38 virtual false final false
  inline void SetScale(float_t scale);

  /// @brief Method Setup addr 0x21149e0 size 0x134 virtual false final false
  inline void Setup(::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  static inline ::GlobalNamespace::MultiplayerResultsAvatarController* New_ctor();

  /// @brief Method .ctor addr 0x2114b14 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsAvatarController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsAvatarController(MultiplayerResultsAvatarController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsAvatarController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsAvatarController(MultiplayerResultsAvatarController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsAvatarController();

public:
  /// @brief Field _avatarVisualController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarVisualController* ____avatarVisualController;

  /// @brief Field _multiplayerAvatarPoseController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerAvatarPoseController* ____multiplayerAvatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsAvatarController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsAvatarController, ____avatarVisualController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsAvatarController, ____multiplayerAvatarPoseController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsAvatarController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsAvatarController*, "", "MultiplayerResultsAvatarController");
