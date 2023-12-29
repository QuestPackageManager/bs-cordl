#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBeatmapObjectEventManager)
namespace GlobalNamespace {
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IPoolableSerializable;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5221))
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData
struct CORDL_TYPE __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData {
public:
  // Declarations
  /// @brief Method .ctor addr 0x20f10a0 size 0xc virtual false final false
  inline void _ctor(float_t time, ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData);

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapObjectEventData", ty: "::GlobalNamespace::IPoolableSerializable*", modifiers:
  // "", def_value: None }]
  constexpr __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(float_t time, ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData();

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field beatmapObjectEventData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData;

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
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5222))
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectEventManager*
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectEventManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TimestampedBeatmapObjectEventData = ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;

  /// @brief Field _connectedPlayer, offset 0x18, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _gameplayRpcManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayRpcManager, put = __set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _songTimeController, offset 0x28, size 0x8
  __declspec(property(get = __get__songTimeController, put = __set__songTimeController))::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* _songTimeController;

  /// @brief Field connectedPlayerNoteWasSpawnedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_connectedPlayerNoteWasSpawnedEvent,
                      put = __set_connectedPlayerNoteWasSpawnedEvent))::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* connectedPlayerNoteWasSpawnedEvent;

  /// @brief Field connectedPlayerObstacleWasSpawnedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_connectedPlayerObstacleWasSpawnedEvent,
                      put = __set_connectedPlayerObstacleWasSpawnedEvent))::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* connectedPlayerObstacleWasSpawnedEvent;

  /// @brief Field connectedPlayerSliderWasSpawnedEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_connectedPlayerSliderWasSpawnedEvent,
                      put = __set_connectedPlayerSliderWasSpawnedEvent))::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* connectedPlayerSliderWasSpawnedEvent;

  /// @brief Field connectedPlayerNoteWasCutEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_connectedPlayerNoteWasCutEvent,
                      put = __set_connectedPlayerNoteWasCutEvent))::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent;

  /// @brief Field connectedPlayerNoteWasMissedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_connectedPlayerNoteWasMissedEvent,
                      put = __set_connectedPlayerNoteWasMissedEvent))::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent;

  /// @brief Field _beatmapObjectEventQueue, offset 0x58, size 0x8
  __declspec(property(get = __get__beatmapObjectEventQueue, put = __set__beatmapObjectEventQueue))::System::Collections::Generic::Queue_1<
      ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* _beatmapObjectEventQueue;

  /// @brief Field _paused, offset 0x60, size 0x1
  __declspec(property(get = __get__paused, put = __set__paused)) bool _paused;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
  constexpr operator ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*() noexcept;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__gameplayRpcManager() const;

  constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& __get__songTimeController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*> const& __get__songTimeController() const;

  constexpr void __set__songTimeController(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& __get_connectedPlayerNoteWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> const& __get_connectedPlayerNoteWasSpawnedEvent() const;

  constexpr void __set_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& __get_connectedPlayerObstacleWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> const& __get_connectedPlayerObstacleWasSpawnedEvent() const;

  constexpr void __set_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& __get_connectedPlayerSliderWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> const& __get_connectedPlayerSliderWasSpawnedEvent() const;

  constexpr void __set_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*& __get_connectedPlayerNoteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*> const& __get_connectedPlayerNoteWasCutEvent() const;

  constexpr void __set_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*& __get_connectedPlayerNoteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*> const& __get_connectedPlayerNoteWasMissedEvent() const;

  constexpr void __set_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*& __get__beatmapObjectEventQueue();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> const&
  __get__beatmapObjectEventQueue() const;

  constexpr void
  __set__beatmapObjectEventQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* value);

  constexpr bool& __get__paused();

  constexpr bool const& __get__paused() const;

  constexpr void __set__paused(bool value);

  /// @brief Method add_connectedPlayerNoteWasSpawnedEvent addr 0x20efee0 size 0xb0 virtual true final true
  inline void add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasSpawnedEvent addr 0x20eff90 size 0xb0 virtual true final true
  inline void remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerObstacleWasSpawnedEvent addr 0x20f0040 size 0xb0 virtual true final true
  inline void add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerObstacleWasSpawnedEvent addr 0x20f00f0 size 0xb0 virtual true final true
  inline void remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerSliderWasSpawnedEvent addr 0x20f01a0 size 0xb0 virtual true final true
  inline void add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerSliderWasSpawnedEvent addr 0x20f0250 size 0xb0 virtual true final true
  inline void remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerNoteWasCutEvent addr 0x20f0300 size 0xb0 virtual true final true
  inline void add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasCutEvent addr 0x20f03b0 size 0xb0 virtual true final true
  inline void remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerNoteWasMissedEvent addr 0x20f0460 size 0xb0 virtual true final true
  inline void add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasMissedEvent addr 0x20f0510 size 0xb0 virtual true final true
  inline void remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method Start addr 0x20f05c0 size 0x3b8 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20f0978 size 0x3c8 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x20f0d40 size 0xc0 virtual false final false
  inline void Update();

  /// @brief Method Pause addr 0x20f1010 size 0xc virtual true final true
  inline void Pause();

  /// @brief Method Resume addr 0x20f101c size 0x8 virtual true final true
  inline void Resume();

  /// @brief Method HandleBeatmapObjectEventData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void HandleBeatmapObjectEventData(::StringW userId, float_t syncTime, float_t songTime, T beatmapObjectEventData);

  /// @brief Method InvokeCallback addr 0x20f0e00 size 0x210 virtual false final false
  inline void InvokeCallback(::GlobalNamespace::IPoolableSerializable* noteEventData);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* New_ctor();

  /// @brief Method .ctor addr 0x20f1024 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager();

public:
  /// @brief Field _connectedPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _gameplayRpcManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _songTimeController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* ____songTimeController;

  /// @brief Field connectedPlayerNoteWasSpawnedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* ___connectedPlayerNoteWasSpawnedEvent;

  /// @brief Field connectedPlayerObstacleWasSpawnedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* ___connectedPlayerObstacleWasSpawnedEvent;

  /// @brief Field connectedPlayerSliderWasSpawnedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* ___connectedPlayerSliderWasSpawnedEvent;

  /// @brief Field connectedPlayerNoteWasCutEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* ___connectedPlayerNoteWasCutEvent;

  /// @brief Field connectedPlayerNoteWasMissedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* ___connectedPlayerNoteWasMissedEvent;

  /// @brief Field _beatmapObjectEventQueue, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* ____beatmapObjectEventQueue;

  /// @brief Field _paused, offset: 0x60, size: 0x1, def value: None
  bool ____paused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____connectedPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____gameplayRpcManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____songTimeController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerNoteWasSpawnedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerObstacleWasSpawnedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerSliderWasSpawnedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerNoteWasCutEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ___connectedPlayerNoteWasMissedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____beatmapObjectEventQueue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, ____paused) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, "",
                       "MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData");
