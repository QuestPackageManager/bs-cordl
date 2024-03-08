#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerGamePoseGeneratorMirror)
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataPacket;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
// Type: ::MockPlayerGamePoseGeneratorMirror
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPlayerGamePoseGeneratorMirror*
class CORDL_TYPE MockPlayerGamePoseGeneratorMirror : public ::GlobalNamespace::MockPlayerGamePoseGenerator {
public:
  // Declarations
  /// @brief Field _mirroredPlayer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredPlayer, put = __cordl_internal_set__mirroredPlayer))::GlobalNamespace::IConnectedPlayer* _mirroredPlayer;

  /// @brief Field _nodePoseSyncStateManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nodePoseSyncStateManager,
                      put = __cordl_internal_set__nodePoseSyncStateManager))::UnityW<::GlobalNamespace::NodePoseSyncStateManager> _nodePoseSyncStateManager;

  /// @brief Field _onSongFinished, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__onSongFinished, put = __cordl_internal_set__onSongFinished))::System::Action* _onSongFinished;

  /// @brief Method Dispose, addr 0x24d6b6c, size 0x4f0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method FindPlayerToMirror, addr 0x24d71cc, size 0x3a4, virtual false, abstract: false, final false
  inline void FindPlayerToMirror();

  /// @brief Method HandleLevelFinished, addr 0x24d80b4, size 0x1174, virtual false, abstract: false, final false
  inline void HandleLevelFinished(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method HandleNoteWasCut, addr 0x24d7b80, size 0x184, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x24d79fc, size 0x184, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);

  /// @brief Method HandleNoteWasSpawned, addr 0x24d7570, size 0x184, virtual false, abstract: false, final false
  inline void HandleNoteWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method HandleObstacleWasSpawned, addr 0x24d76f4, size 0x184, virtual false, abstract: false, final false
  inline void HandleObstacleWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method HandleOptionalAvatarDataReceived, addr 0x24d7edc, size 0x1d8, virtual false, abstract: false, final false
  inline void HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* optionalAvatarDataPacket, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleScoreSyncStateUpdate, addr 0x24d7d04, size 0x1d8, virtual false, abstract: false, final false
  inline void HandleScoreSyncStateUpdate(::GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleSliderWasSpawned, addr 0x24d7878, size 0x184, virtual false, abstract: false, final false
  inline void HandleSliderWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  /// @brief Method Init, addr 0x24d705c, size 0x8, virtual true, abstract: false, final false
  inline void Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Action* onSongFinished);

  static inline ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                               ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded,
                                                                               ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Tick, addr 0x24d7064, size 0x168, virtual true, abstract: false, final false
  inline void Tick();

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__mirroredPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__mirroredPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& __cordl_internal_get__nodePoseSyncStateManager() const;

  constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& __cordl_internal_get__nodePoseSyncStateManager();

  constexpr ::System::Action*& __cordl_internal_get__onSongFinished();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get__onSongFinished() const;

  constexpr void __cordl_internal_set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__nodePoseSyncStateManager(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value);

  constexpr void __cordl_internal_set__onSongFinished(::System::Action* value);

  /// @brief Method .ctor, addr 0x24d6158, size 0x6c8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded,
                    ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerGamePoseGeneratorMirror();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror const&) = delete;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> ____nodePoseSyncStateManager;

  /// @brief Field _mirroredPlayer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____mirroredPlayer;

  /// @brief Field _onSongFinished, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ____onSongFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror, ____nodePoseSyncStateManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror, ____mirroredPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror, ____onSongFinished) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*, "", "MockPlayerGamePoseGeneratorMirror");
