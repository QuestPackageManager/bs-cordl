#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerBeatmapObjectEventManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBeatmapObjectEventManager)
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IPoolableSerializable;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
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
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
MARK_VAL_T(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData);
// Type: ::TimestampedBeatmapObjectEventData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData
struct CORDL_TYPE __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3b51054, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData();

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapObjectEventData", ty: "::GlobalNamespace::IPoolableSerializable*", modifiers:
  // "", def_value: None }]
  constexpr __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(float_t time, ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData) noexcept;

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field beatmapObjectEventData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, beatmapObjectEventData) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConnectedPlayerBeatmapObjectEventManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectEventManager*
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectEventManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TimestampedBeatmapObjectEventData = ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;

  /// @brief Field _beatmapObjectEventQueue, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectEventQueue, put = __cordl_internal_set__beatmapObjectEventQueue)) ::System::Collections::Generic::Queue_1<
      ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* _beatmapObjectEventQueue;

  /// @brief Field _connectedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _gameplayRpcManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _paused, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) bool _paused;

  /// @brief Field _songTimeController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songTimeController, put = __cordl_internal_set__songTimeController)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>
      _songTimeController;

  /// @brief Field connectedPlayerNoteWasCutEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerNoteWasCutEvent,
                      put = __cordl_internal_set_connectedPlayerNoteWasCutEvent)) ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent;

  /// @brief Field connectedPlayerNoteWasMissedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerNoteWasMissedEvent,
                      put = __cordl_internal_set_connectedPlayerNoteWasMissedEvent)) ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent;

  /// @brief Field connectedPlayerNoteWasSpawnedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerNoteWasSpawnedEvent,
                      put = __cordl_internal_set_connectedPlayerNoteWasSpawnedEvent)) ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* connectedPlayerNoteWasSpawnedEvent;

  /// @brief Field connectedPlayerObstacleWasSpawnedEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_connectedPlayerObstacleWasSpawnedEvent,
      put = __cordl_internal_set_connectedPlayerObstacleWasSpawnedEvent)) ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* connectedPlayerObstacleWasSpawnedEvent;

  /// @brief Field connectedPlayerSliderWasSpawnedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerSliderWasSpawnedEvent,
                      put = __cordl_internal_set_connectedPlayerSliderWasSpawnedEvent)) ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* connectedPlayerSliderWasSpawnedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
  constexpr operator ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*() noexcept;

  /// @brief Method HandleBeatmapObjectEventData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void HandleBeatmapObjectEventData(::StringW userId, int64_t syncTime, float_t songTime, T beatmapObjectEventData);

  /// @brief Method InvokeCallback, addr 0x3b50db4, size 0x210, virtual false, abstract: false, final false
  inline void InvokeCallback(::GlobalNamespace::IPoolableSerializable* noteEventData);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b50934, size 0x3c0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3b50fc4, size 0xc, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method Resume, addr 0x3b50fd0, size 0x8, virtual true, abstract: false, final true
  inline void Resume();

  /// @brief Method Start, addr 0x3b50588, size 0x3ac, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b50cf4, size 0xc0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*&
  __cordl_internal_get__beatmapObjectEventQueue();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> const&
  __cordl_internal_get__beatmapObjectEventQueue() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr bool const& __cordl_internal_get__paused() const;

  constexpr bool& __cordl_internal_get__paused();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const& __cordl_internal_get__songTimeController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>& __cordl_internal_get__songTimeController();

  constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*& __cordl_internal_get_connectedPlayerNoteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*> const& __cordl_internal_get_connectedPlayerNoteWasCutEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*& __cordl_internal_get_connectedPlayerNoteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*> const& __cordl_internal_get_connectedPlayerNoteWasMissedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& __cordl_internal_get_connectedPlayerNoteWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> const& __cordl_internal_get_connectedPlayerNoteWasSpawnedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& __cordl_internal_get_connectedPlayerObstacleWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> const& __cordl_internal_get_connectedPlayerObstacleWasSpawnedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& __cordl_internal_get_connectedPlayerSliderWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> const& __cordl_internal_get_connectedPlayerSliderWasSpawnedEvent() const;

  constexpr void __cordl_internal_set__beatmapObjectEventQueue(
      ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__paused(bool value);

  constexpr void __cordl_internal_set__songTimeController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value);

  constexpr void __cordl_internal_set_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  constexpr void __cordl_internal_set_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method .ctor, addr 0x3b50fd8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_connectedPlayerNoteWasCutEvent, addr 0x3b502c8, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerNoteWasMissedEvent, addr 0x3b50428, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerNoteWasSpawnedEvent, addr 0x3b4fea8, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerObstacleWasSpawnedEvent, addr 0x3b50008, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerSliderWasSpawnedEvent, addr 0x3b50168, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Convert to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* i___GlobalNamespace__IConnectedPlayerBeatmapObjectEventManager() noexcept;

  /// @brief Method remove_connectedPlayerNoteWasCutEvent, addr 0x3b50378, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasMissedEvent, addr 0x3b504d8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasSpawnedEvent, addr 0x3b4ff58, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerObstacleWasSpawnedEvent, addr 0x3b500b8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerSliderWasSpawnedEvent, addr 0x3b50218, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager const&) = delete;

  /// @brief Field _connectedPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _gameplayRpcManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _songTimeController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> ____songTimeController;

  /// @brief Field connectedPlayerNoteWasSpawnedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* ___connectedPlayerNoteWasSpawnedEvent;

  /// @brief Field connectedPlayerObstacleWasSpawnedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* ___connectedPlayerObstacleWasSpawnedEvent;

  /// @brief Field connectedPlayerSliderWasSpawnedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* ___connectedPlayerSliderWasSpawnedEvent;

  /// @brief Field connectedPlayerNoteWasCutEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* ___connectedPlayerNoteWasCutEvent;

  /// @brief Field connectedPlayerNoteWasMissedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* ___connectedPlayerNoteWasMissedEvent;

  /// @brief Field _beatmapObjectEventQueue, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* ____beatmapObjectEventQueue;

  /// @brief Field _paused, offset: 0x68, size: 0x1, def value: None
  bool ____paused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____connectedPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____gameplayRpcManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____songTimeController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerNoteWasSpawnedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerObstacleWasSpawnedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerSliderWasSpawnedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerNoteWasCutEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerNoteWasMissedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____beatmapObjectEventQueue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____paused) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, "",
                       "MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData");
