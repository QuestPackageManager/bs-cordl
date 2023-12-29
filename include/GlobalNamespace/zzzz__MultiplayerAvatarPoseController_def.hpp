#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerAvatarPoseController)
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class AvatarPoseController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerAvatarPoseController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerAvatarPoseController);
// Type: ::MultiplayerAvatarPoseController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4097))
// CS Name: ::MultiplayerAvatarPoseController*
class CORDL_TYPE MultiplayerAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _avatarPoseController, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarPoseController, put = __set__avatarPoseController))::GlobalNamespace::AvatarPoseController* _avatarPoseController;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _connectedPlayer, offset 0x28, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  __declspec(property(put = set_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  constexpr ::GlobalNamespace::AvatarPoseController*& __get__avatarPoseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPoseController*> const& __get__avatarPoseController() const;

  constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method set_connectedPlayer addr 0x20d6100 size 0x8 virtual false final false
  inline void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method Start addr 0x20d6108 size 0x18 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x20d6120 size 0x3b8 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::MultiplayerAvatarPoseController* New_ctor();

  /// @brief Method .ctor addr 0x20d64d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerAvatarPoseController(MultiplayerAvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerAvatarPoseController(MultiplayerAvatarPoseController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarPoseController();

public:
  /// @brief Field _avatarPoseController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPoseController* ____avatarPoseController;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _connectedPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarPoseController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarPoseController, ____avatarPoseController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarPoseController, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerAvatarPoseController, ____connectedPlayer) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarPoseController*, "", "MultiplayerAvatarPoseController");
