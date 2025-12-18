#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameplayRpcManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IGameplayRpcManager)
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
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
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameplayRpcManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IGameplayRpcManager);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameplayRpcManager
class CORDL_TYPE IGameplayRpcManager {
public:
  // Declarations
  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method GetGameplaySceneReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetGameplaySceneReady();

  /// @brief Method GetGameplaySongReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetGameplaySongReady();

  /// @brief Method LevelFinished, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method NoteCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable);

  /// @brief Method NoteMissed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable);

  /// @brief Method NoteSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method ObstacleSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method RequestReturnToMenu, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RequestReturnToMenu();

  /// @brief Method ReturnToMenu, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReturnToMenu();

  /// @brief Method SetGameplaySceneReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);

  /// @brief Method SetGameplaySceneSyncFinished, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method SetGameplaySongReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetGameplaySongReady();

  /// @brief Method SetPlayerDidConnectLate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetPlayerDidConnectLate(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method SetSongStartTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetSongStartTime(int64_t startTime);

  /// @brief Method SliderSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  /// @brief Method add_getGameplaySceneReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_getGameplaySongReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_levelFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_noteWasCutEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method add_noteWasMissedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method add_noteWasSpawnedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method add_obstacleWasSpawnedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method add_requestReturnToMenuEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_returnToMenuEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_setGameplaySceneReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method add_setGameplaySceneSyncFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method add_setGameplaySongReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_setPlayerDidConnectLateEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method add_setSongStartTimeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method add_sliderWasSpawnedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method get_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_enabled();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_getGameplaySceneReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getGameplaySongReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_levelFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_noteWasCutEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasMissedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasSpawnedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_obstacleWasSpawnedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_requestReturnToMenuEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_returnToMenuEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setGameplaySceneReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method remove_setGameplaySceneSyncFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setGameplaySongReadyEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setPlayerDidConnectLateEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setSongStartTimeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_sliderWasSpawnedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method set_enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_enabled(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IGameplayRpcManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameplayRpcManager(IGameplayRpcManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameplayRpcManager*, "", "IGameplayRpcManager");
