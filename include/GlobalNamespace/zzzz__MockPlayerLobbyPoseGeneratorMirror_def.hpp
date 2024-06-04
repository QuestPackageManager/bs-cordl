#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerLobbyPoseGeneratorMirror.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
CORDL_MODULE_EXPORT(MockPlayerLobbyPoseGeneratorMirror)
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataPacket;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror);
// Type: ::MockPlayerLobbyPoseGeneratorMirror
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPlayerLobbyPoseGeneratorMirror*
class CORDL_TYPE MockPlayerLobbyPoseGeneratorMirror : public ::GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
  // Declarations
  /// @brief Field _mirroredPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredPlayer, put = __cordl_internal_set__mirroredPlayer))::GlobalNamespace::IConnectedPlayer* _mirroredPlayer;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager))::UnityW<::GlobalNamespace::NodePoseSyncStateManager> _nodePoseSyncStateManager;

  /// @brief Method Dispose, addr 0x271be40, size 0xd0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method FindPlayerToMirror, addr 0x271c078, size 0x3a4, virtual false, abstract: false, final false
  inline void FindPlayerToMirror();

  /// @brief Method HandleOptionalAvatarDataReceived, addr 0x271c41c, size 0x1d8, virtual false, abstract: false, final false
  inline void HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* optionalAvatarDataPacket, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method Init, addr 0x271be3c, size 0x4, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Tick, addr 0x271bf10, size 0x168, virtual true, abstract: false, final false
  inline void Tick();

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__mirroredPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__mirroredPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr void __cordl_internal_set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value);

  /// @brief Method .ctor, addr 0x271bcb8, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerLobbyPoseGeneratorMirror();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorMirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerLobbyPoseGeneratorMirror(MockPlayerLobbyPoseGeneratorMirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorMirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerLobbyPoseGeneratorMirror(MockPlayerLobbyPoseGeneratorMirror const&) = delete;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> ____nodePoseSyncStateManager;

  /// @brief Field _mirroredPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____mirroredPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, ____mirroredPlayer) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*, "", "MockPlayerLobbyPoseGeneratorMirror");
