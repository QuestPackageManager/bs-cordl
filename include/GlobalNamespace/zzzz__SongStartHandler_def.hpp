#pragma once
// IWYU pragma private; include "GlobalNamespace/SongStartHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongStartHandler)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class SongStartHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongStartHandler);
// Type: ::SongStartHandler
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongStartHandler*
class CORDL_TYPE SongStartHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameplayRpcManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _playersAtGameStartModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playersAtGameStartModel,
                      put = __cordl_internal_set__playersAtGameStartModel))::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* _playersAtGameStartModel;

  /// @brief Field _readyPlayers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__readyPlayers, put = __cordl_internal_set__readyPlayers))::System::Collections::Generic::HashSet_1<::StringW>* _readyPlayers;

  /// @brief Field _startTime, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) int64_t _startTime;

  /// @brief Field _started, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__started, put = __cordl_internal_set__started)) bool _started;

  /// @brief Field setSongStartSyncTimeEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_setSongStartSyncTimeEvent, put = __cordl_internal_set_setSongStartSyncTimeEvent))::System::Action_1<int64_t>* setSongStartSyncTimeEvent;

  __declspec(property(get = get_songStartSyncTime)) int64_t songStartSyncTime;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x10bc964, size 0x244, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ForceStart, addr 0x10bcba8, size 0x6b0, virtual false, abstract: false, final false
  inline void ForceStart(::StringW sessionGameId);

  /// @brief Method GetLevelStartTimeOffset, addr 0x10bc478, size 0x4ec, virtual false, abstract: false, final false
  inline void GetLevelStartTimeOffset();

  /// @brief Method HandleGetGameplaySongReady, addr 0x10bd7a0, size 0xa4, virtual false, abstract: false, final false
  inline void HandleGetGameplaySongReady(::StringW user);

  /// @brief Method HandleSetGameplaySongReady, addr 0x10bd4f0, size 0x2b0, virtual false, abstract: false, final false
  inline void HandleSetGameplaySongReady(::StringW user);

  /// @brief Method HandleSetSongStartTime, addr 0x10bd844, size 0x30, virtual false, abstract: false, final false
  inline void HandleSetSongStartTime(::StringW user, int64_t time);

  /// @brief Method Log, addr 0x10bd874, size 0x58, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::SongStartHandler* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                              ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method StartSong, addr 0x10bd258, size 0x298, virtual false, abstract: false, final false
  inline void StartSong();

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& __cordl_internal_get__playersAtGameStartModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& __cordl_internal_get__playersAtGameStartModel() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__readyPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__readyPlayers() const;

  constexpr int64_t const& __cordl_internal_get__startTime() const;

  constexpr int64_t& __cordl_internal_get__startTime();

  constexpr bool const& __cordl_internal_get__started() const;

  constexpr bool& __cordl_internal_get__started();

  constexpr ::System::Action_1<int64_t>*& __cordl_internal_get_setSongStartSyncTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int64_t>*> const& __cordl_internal_get_setSongStartSyncTimeEvent() const;

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value);

  constexpr void __cordl_internal_set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__startTime(int64_t value);

  constexpr void __cordl_internal_set__started(bool value);

  constexpr void __cordl_internal_set_setSongStartSyncTimeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method .ctor, addr 0x10bc3d4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel);

  /// @brief Method add_setSongStartSyncTimeEvent, addr 0x10bc274, size 0xb0, virtual false, abstract: false, final false
  inline void add_setSongStartSyncTimeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method get_songStartSyncTime, addr 0x10bc26c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_songStartSyncTime();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_setSongStartSyncTimeEvent, addr 0x10bc324, size 0xb0, virtual false, abstract: false, final false
  inline void remove_setSongStartSyncTimeEvent(::System::Action_1<int64_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongStartHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongStartHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongStartHandler(SongStartHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongStartHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongStartHandler(SongStartHandler const&) = delete;

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _playersAtGameStartModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* ____playersAtGameStartModel;

  /// @brief Field _readyPlayers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____readyPlayers;

  /// @brief Field _started, offset: 0x30, size: 0x1, def value: None
  bool ____started;

  /// @brief Field _startTime, offset: 0x38, size: 0x8, def value: None
  int64_t ____startTime;

  /// @brief Field setSongStartSyncTimeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<int64_t>* ___setSongStartSyncTimeEvent;

  /// @brief Field kFixedStartDelayMs offset 0xffffffff size 0x8
  static constexpr int64_t kFixedStartDelayMs{ static_cast<int64_t>(0xfa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongStartHandler, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ____gameplayRpcManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ____playersAtGameStartModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ____readyPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ____started) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ____startTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartHandler, ___setSongStartSyncTimeEvent) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongStartHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongStartHandler*, "", "SongStartHandler");
