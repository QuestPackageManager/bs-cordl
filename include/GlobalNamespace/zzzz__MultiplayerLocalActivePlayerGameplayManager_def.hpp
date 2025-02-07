#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerGameplayManager)
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayManager_InitData;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuController;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class SaberManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayManager;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerGameplayManager/InitData
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field continueGameplayWith0Energy, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_continueGameplayWith0Energy, put = __cordl_internal_set_continueGameplayWith0Energy)) bool continueGameplayWith0Energy;

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* New_ctor(bool continueGameplayWith0Energy);

  constexpr bool const& __cordl_internal_get_continueGameplayWith0Energy() const;

  constexpr bool& __cordl_internal_get_continueGameplayWith0Energy();

  constexpr void __cordl_internal_set_continueGameplayWith0Energy(bool value);

  /// @brief Method .ctor, addr 0x3bc9568, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool continueGameplayWith0Energy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerGameplayManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerGameplayManager_InitData(MultiplayerLocalActivePlayerGameplayManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerGameplayManager_InitData(MultiplayerLocalActivePlayerGameplayManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4519 };

  /// @brief Field continueGameplayWith0Energy, offset: 0x10, size: 0x1, def value: None
  bool ___continueGameplayWith0Energy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData, ___continueGameplayWith0Energy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerGameplayManager
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData;

  /// @brief Field _disconnectHelper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectHelper, put = __cordl_internal_set__disconnectHelper)) ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* _disconnectHelper;

  /// @brief Field _gameEnergyCounter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter)) ::UnityW<::GlobalNamespace::GameEnergyCounter> _gameEnergyCounter;

  /// @brief Field _gameSongController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController)) ::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _inGameMenuController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__inGameMenuController, put = __cordl_internal_set__inGameMenuController)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController>
      _inGameMenuController;

  /// @brief Field _initData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* _initData;

  /// @brief Field _levelFinishedOrQuit, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__levelFinishedOrQuit, put = __cordl_internal_set__levelFinishedOrQuit)) bool _levelFinishedOrQuit;

  /// @brief Field _multiplayerLevelEndActions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelEndActions,
                      put = __cordl_internal_set__multiplayerLevelEndActions)) ::GlobalNamespace::IMultiplayerLevelEndActionsListener* _multiplayerLevelEndActions;

  /// @brief Field _multiplayerSessionManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _platformHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__platformHelper, put = __cordl_internal_set__platformHelper)) ::GlobalNamespace::IVRPlatformHelper* _platformHelper;

  /// @brief Field _prepareLevelCompletionResults, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults, put = __cordl_internal_set__prepareLevelCompletionResults)) ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>
      _prepareLevelCompletionResults;

  /// @brief Field _saberManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Method HandleGameEnergyDidReach0, addr 0x3bc9060, size 0x28, virtual false, abstract: false, final false
  inline void HandleGameEnergyDidReach0();

  /// @brief Method HandleHmdUnmounted, addr 0x3bc9514, size 0x4, virtual false, abstract: false, final false
  inline void HandleHmdUnmounted();

  /// @brief Method HandleInGameMenuControllerDidGiveUp, addr 0x3bc9088, size 0x4, virtual false, abstract: false, final false
  inline void HandleInGameMenuControllerDidGiveUp();

  /// @brief Method HandleInGameMenuControllerRequestsDisconnect, addr 0x3bc908c, size 0x40, virtual false, abstract: false, final false
  inline void HandleInGameMenuControllerRequestsDisconnect();

  /// @brief Method HandleInputFocusCaptured, addr 0x3bc8744, size 0x20, virtual false, abstract: false, final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased, addr 0x3bc951c, size 0x38, virtual false, abstract: false, final false
  inline void HandleInputFocusReleased();

  /// @brief Method HandleSongDidFinish, addr 0x3bc92d8, size 0x23c, virtual false, abstract: false, final false
  inline void HandleSongDidFinish();

  /// @brief Method HandleVrFocusWasCapturedEvent, addr 0x3bc9518, size 0x4, virtual false, abstract: false, final false
  inline void HandleVrFocusWasCapturedEvent();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x3bc9554, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnDisable, addr 0x3bc8764, size 0x484, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method PerformPlayerFail, addr 0x3bc8be8, size 0x23c, virtual false, abstract: false, final false
  inline void PerformPlayerFail();

  /// @brief Method PerformPlayerGivenUp, addr 0x3bc8e24, size 0x23c, virtual false, abstract: false, final false
  inline void PerformPlayerGivenUp();

  /// @brief Method Start, addr 0x3bc82e0, size 0x464, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* const& __cordl_internal_get__disconnectHelper() const;

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& __cordl_internal_get__disconnectHelper();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__gameEnergyCounter();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController> const& __cordl_internal_get__inGameMenuController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController>& __cordl_internal_get__inGameMenuController();

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData*& __cordl_internal_get__initData();

  constexpr bool const& __cordl_internal_get__levelFinishedOrQuit() const;

  constexpr bool& __cordl_internal_get__levelFinishedOrQuit();

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* const& __cordl_internal_get__multiplayerLevelEndActions() const;

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener*& __cordl_internal_get__multiplayerLevelEndActions();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__platformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__platformHelper();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr void __cordl_internal_set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* value);

  constexpr void __cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__inGameMenuController(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* value);

  constexpr void __cordl_internal_set__levelFinishedOrQuit(bool value);

  constexpr void __cordl_internal_set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  /// @brief Method .ctor, addr 0x3bc9560, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerGameplayManager(MultiplayerLocalActivePlayerGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerGameplayManager(MultiplayerLocalActivePlayerGameplayManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4520 };

  /// @brief Field _gameSongController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _multiplayerSessionManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _multiplayerLevelEndActions, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsListener* ____multiplayerLevelEndActions;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _gameEnergyCounter, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____gameEnergyCounter;

  /// @brief Field _inGameMenuController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController> ____inGameMenuController;

  /// @brief Field _platformHelper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____platformHelper;

  /// @brief Field _disconnectHelper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* ____disconnectHelper;

  /// @brief Field _saberManager, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _initData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* ____initData;

  /// @brief Field _levelFinishedOrQuit, offset: 0x70, size: 0x1, def value: None
  bool ____levelFinishedOrQuit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____gameSongController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____multiplayerSessionManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____multiplayerLevelEndActions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____prepareLevelCompletionResults) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____gameEnergyCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____inGameMenuController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____platformHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____disconnectHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____saberManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____initData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, ____levelFinishedOrQuit) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*, "", "MultiplayerLocalActivePlayerGameplayManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData*, "", "MultiplayerLocalActivePlayerGameplayManager/InitData");
