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
// Dependencies MockPlayerLobbyPoseGenerator
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerLobbyPoseGeneratorMirror
class CORDL_TYPE MockPlayerLobbyPoseGeneratorMirror : public ::GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
  // Declarations
  /// @brief Field _mirroredPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredPlayer, put = __cordl_internal_set__mirroredPlayer)) ::GlobalNamespace::IConnectedPlayer* _mirroredPlayer;

  /// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager, put = __cordl_internal_set__nodePoseSyncStateManager)) ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>
      _nodePoseSyncStateManager;

  /// @brief Method Dispose, addr 0x3bd01e0, size 0xd0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method FindPlayerToMirror, addr 0x3bd0400, size 0x39c, virtual false, abstract: false, final false
  inline void FindPlayerToMirror();

  /// @brief Method HandleOptionalAvatarDataReceived, addr 0x3bd079c, size 0x1dc, virtual false, abstract: false, final false
  inline void HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* optionalAvatarDataPacket, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method Init, addr 0x3bd01dc, size 0x4, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Tick, addr 0x3bd02b0, size 0x150, virtual true, abstract: false, final false
  inline void Tick();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__mirroredPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__mirroredPlayer();

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr void __cordl_internal_set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value);

  /// @brief Method .ctor, addr 0x3bd0064, size 0x178, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4545 };

  /// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> ____nodePoseSyncStateManager;

  /// @brief Field _mirroredPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____mirroredPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, ____mirroredPlayer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*, "", "MockPlayerLobbyPoseGeneratorMirror");
