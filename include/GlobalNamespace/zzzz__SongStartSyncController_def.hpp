#pragma once
// IWYU pragma private; include "GlobalNamespace/SongStartSyncController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongStartSyncController)
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class SongStartHandler;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SongStartSyncController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongStartSyncController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongStartSyncController
class CORDL_TYPE SongStartSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayRpcManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayRpcManager, put = __cordl_internal_set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _sessionGameId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionGameId, put = __cordl_internal_set__sessionGameId)) ::StringW _sessionGameId;

  /// @brief Field _songStartHandler, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songStartHandler, put = __cordl_internal_set__songStartHandler)) ::GlobalNamespace::SongStartHandler* _songStartHandler;

  /// @brief Field _songStarted, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__songStarted, put = __cordl_internal_set__songStarted)) bool _songStarted;

  /// @brief Field _startTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime, put = __cordl_internal_set__startTime)) float_t _startTime;

  /// @brief Field _waitStartTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__waitStartTime, put = __cordl_internal_set__waitStartTime)) float_t _waitStartTime;

  __declspec(property(get = get_isSongStarted)) bool isSongStarted;

  __declspec(property(get = get_songStartSyncTime)) int64_t songStartSyncTime;

  /// @brief Field syncResumeEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_syncResumeEvent, put = __cordl_internal_set_syncResumeEvent)) ::System::Action_1<int64_t>* syncResumeEvent;

  /// @brief Field syncStartFailedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_syncStartFailedEvent, put = __cordl_internal_set_syncStartFailedEvent)) ::System::Action* syncStartFailedEvent;

  /// @brief Field syncStartSuccessEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_syncStartSuccessEvent, put = __cordl_internal_set_syncStartSuccessEvent)) ::System::Action_1<int64_t>* syncStartSuccessEvent;

  /// @brief Method HandleSetSongStartSyncTime, addr 0x3e73958, size 0x2c, virtual false, abstract: false, final false
  inline void HandleSetSongStartSyncTime(int64_t songStartSyncTime);

  static inline ::GlobalNamespace::SongStartSyncController* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x3e737cc, size 0x44, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x3e73758, size 0x14, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3e7374c, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSong, addr 0x3e73810, size 0x148, virtual false, abstract: false, final false
  inline void StartSong(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel, ::StringW sessionGameId);

  /// @brief Method Update, addr 0x3e7376c, size 0x60, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IGameplayRpcManager* const& __cordl_internal_get__gameplayRpcManager() const;

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__gameplayRpcManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::StringW const& __cordl_internal_get__sessionGameId() const;

  constexpr ::StringW& __cordl_internal_get__sessionGameId();

  constexpr ::GlobalNamespace::SongStartHandler* const& __cordl_internal_get__songStartHandler() const;

  constexpr ::GlobalNamespace::SongStartHandler*& __cordl_internal_get__songStartHandler();

  constexpr bool const& __cordl_internal_get__songStarted() const;

  constexpr bool& __cordl_internal_get__songStarted();

  constexpr float_t const& __cordl_internal_get__startTime() const;

  constexpr float_t& __cordl_internal_get__startTime();

  constexpr float_t const& __cordl_internal_get__waitStartTime() const;

  constexpr float_t& __cordl_internal_get__waitStartTime();

  constexpr ::System::Action_1<int64_t>* const& __cordl_internal_get_syncResumeEvent() const;

  constexpr ::System::Action_1<int64_t>*& __cordl_internal_get_syncResumeEvent();

  constexpr ::System::Action* const& __cordl_internal_get_syncStartFailedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_syncStartFailedEvent();

  constexpr ::System::Action_1<int64_t>* const& __cordl_internal_get_syncStartSuccessEvent() const;

  constexpr ::System::Action_1<int64_t>*& __cordl_internal_get_syncStartSuccessEvent();

  constexpr void __cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__sessionGameId(::StringW value);

  constexpr void __cordl_internal_set__songStartHandler(::GlobalNamespace::SongStartHandler* value);

  constexpr void __cordl_internal_set__songStarted(bool value);

  constexpr void __cordl_internal_set__startTime(float_t value);

  constexpr void __cordl_internal_set__waitStartTime(float_t value);

  constexpr void __cordl_internal_set_syncResumeEvent(::System::Action_1<int64_t>* value);

  constexpr void __cordl_internal_set_syncStartFailedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_syncStartSuccessEvent(::System::Action_1<int64_t>* value);

  /// @brief Method .ctor, addr 0x3e73984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_syncResumeEvent, addr 0x3e735ec, size 0xb0, virtual false, abstract: false, final false
  inline void add_syncResumeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method add_syncStartFailedEvent, addr 0x3e73354, size 0x9c, virtual false, abstract: false, final false
  inline void add_syncStartFailedEvent(::System::Action* value);

  /// @brief Method add_syncStartSuccessEvent, addr 0x3e7348c, size 0xb0, virtual false, abstract: false, final false
  inline void add_syncStartSuccessEvent(::System::Action_1<int64_t>* value);

  /// @brief Method get_isSongStarted, addr 0x3e73330, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSongStarted();

  /// @brief Method get_songStartSyncTime, addr 0x3e73338, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_songStartSyncTime();

  /// @brief Method remove_syncResumeEvent, addr 0x3e7369c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_syncResumeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method remove_syncStartFailedEvent, addr 0x3e733f0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_syncStartFailedEvent(::System::Action* value);

  /// @brief Method remove_syncStartSuccessEvent, addr 0x3e7353c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_syncStartSuccessEvent(::System::Action_1<int64_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongStartSyncController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongStartSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongStartSyncController(SongStartSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongStartSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongStartSyncController(SongStartSyncController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17380 };

  /// @brief Field kAudioLoadTimeout offset 0xffffffff size 0x4
  static constexpr float_t kAudioLoadTimeout{ static_cast<float_t>(15.0f) };

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _waitStartTime, offset: 0x30, size: 0x4, def value: None
  float_t ____waitStartTime;

  /// @brief Field _songStarted, offset: 0x34, size: 0x1, def value: None
  bool ____songStarted;

  /// @brief Field _startTime, offset: 0x38, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _sessionGameId, offset: 0x40, size: 0x8, def value: None
  ::StringW ____sessionGameId;

  /// @brief Field _songStartHandler, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SongStartHandler* ____songStartHandler;

  /// @brief Field syncStartFailedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___syncStartFailedEvent;

  /// @brief Field syncStartSuccessEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<int64_t>* ___syncStartSuccessEvent;

  /// @brief Field syncResumeEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<int64_t>* ___syncResumeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____gameplayRpcManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____waitStartTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____songStarted) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____startTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____sessionGameId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ____songStartHandler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ___syncStartFailedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ___syncStartSuccessEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongStartSyncController, ___syncResumeEvent) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongStartSyncController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongStartSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongStartSyncController*, "", "SongStartSyncController");
