#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILobbyGameStateController)
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateControllerBase;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyGameStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILobbyGameStateController);
// Type: ::ILobbyGameStateController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ILobbyGameStateController*
class CORDL_TYPE ILobbyGameStateController {
public:
  // Declarations
  __declspec(property(get = get_cannotStartGameReason))::GlobalNamespace::CannotStartGameReason cannotStartGameReason;

  __declspec(property(get = get_countdownEndTime)) int64_t countdownEndTime;

  __declspec(property(get = get_countdownStarted)) bool countdownStarted;

  __declspec(property(get = get_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_isDisconnected)) bool isDisconnected;

  __declspec(property(get = get_levelStartInitiated)) bool levelStartInitiated;

  __declspec(property(get = get_predictedCountdownEndTime)) int64_t predictedCountdownEndTime;

  __declspec(property(get = get_selectedLevelGameplaySetupData))::GlobalNamespace::ILevelGameplaySetupData* selectedLevelGameplaySetupData;

  __declspec(property(get = get_startTime)) int64_t startTime;

  __declspec(property(get = get_state, put = set_state))::GlobalNamespace::MultiplayerLobbyState state;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateControllerBase"
  constexpr operator ::GlobalNamespace::ILobbyGameStateControllerBase*() noexcept;

  /// @brief Method ClearDisconnectedState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearDisconnectedState();

  /// @brief Method GetCurrentLevelIfGameStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetCurrentLevelIfGameStarted();

  /// @brief Method GetGameStateAndConfigurationAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsCloseToStartGame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsCloseToStartGame();

  /// @brief Method PredictCountdownEndTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PredictCountdownEndTime();

  /// @brief Method StartListeningToGameStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartListeningToGameStart();

  /// @brief Method add_beforeSceneSwitchCallbackEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_beforeSceneSwitchCallbackEvent(::System::Action* value);

  /// @brief Method add_countdownCancelledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_countdownCancelledEvent(::System::Action* value);

  /// @brief Method add_countdownStartedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_countdownStartedEvent(::System::Action* value);

  /// @brief Method add_gameStartCancelledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_gameStartCancelledEvent(::System::Action* value);

  /// @brief Method add_gameStartedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method add_levelDidGetDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_levelFinishedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method add_lobbyDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_lobbyDisconnectedEvent(::System::Action* value);

  /// @brief Method add_lobbyStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value);

  /// @brief Method add_playerMissingEntitlementsChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method add_selectedLevelGameplaySetupDataChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method add_songStillDownloadingEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_songStillDownloadingEvent(::System::Action* value);

  /// @brief Method add_startButtonEnabledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method add_startTimeChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_startTimeChangedEvent(::System::Action* value);

  /// @brief Method get_cannotStartGameReason, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::CannotStartGameReason get_cannotStartGameReason();

  /// @brief Method get_countdownEndTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_countdownEndTime();

  /// @brief Method get_countdownStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_countdownStarted();

  /// @brief Method get_disconnectedReason, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_isDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isDisconnected();

  /// @brief Method get_levelStartInitiated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_levelStartInitiated();

  /// @brief Method get_predictedCountdownEndTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_predictedCountdownEndTime();

  /// @brief Method get_selectedLevelGameplaySetupData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::ILevelGameplaySetupData* get_selectedLevelGameplaySetupData();

  /// @brief Method get_startTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_startTime();

  /// @brief Method get_state, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerLobbyState get_state();

  /// @brief Convert to "::GlobalNamespace::ILobbyGameStateControllerBase"
  constexpr ::GlobalNamespace::ILobbyGameStateControllerBase* i___GlobalNamespace__ILobbyGameStateControllerBase() noexcept;

  /// @brief Method remove_beforeSceneSwitchCallbackEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_beforeSceneSwitchCallbackEvent(::System::Action* value);

  /// @brief Method remove_countdownCancelledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_countdownCancelledEvent(::System::Action* value);

  /// @brief Method remove_countdownStartedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_countdownStartedEvent(::System::Action* value);

  /// @brief Method remove_gameStartCancelledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_gameStartCancelledEvent(::System::Action* value);

  /// @brief Method remove_gameStartedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method remove_levelDidGetDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_levelFinishedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method remove_lobbyDisconnectedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_lobbyDisconnectedEvent(::System::Action* value);

  /// @brief Method remove_lobbyStateChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value);

  /// @brief Method remove_playerMissingEntitlementsChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value);

  /// @brief Method remove_selectedLevelGameplaySetupDataChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value);

  /// @brief Method remove_songStillDownloadingEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_songStillDownloadingEvent(::System::Action* value);

  /// @brief Method remove_startButtonEnabledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value);

  /// @brief Method remove_startTimeChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_startTimeChangedEvent(::System::Action* value);

  /// @brief Method set_state, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_state(::GlobalNamespace::MultiplayerLobbyState value);

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyGameStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILobbyGameStateController(ILobbyGameStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyGameStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyGameStateController(ILobbyGameStateController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILobbyGameStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyGameStateController*, "", "ILobbyGameStateController");
