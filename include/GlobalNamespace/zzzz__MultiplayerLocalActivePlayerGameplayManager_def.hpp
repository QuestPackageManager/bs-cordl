#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerGameplayManager)
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerGameplayManager__InitData;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class GameSongController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayManager;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerGameplayManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5153))
// CS Name: ::MultiplayerLocalActivePlayerGameplayManager::InitData*
class CORDL_TYPE __MultiplayerLocalActivePlayerGameplayManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field failOn0Energy, offset 0x10, size 0x1
  __declspec(property(get = __get_failOn0Energy, put = __set_failOn0Energy)) bool failOn0Energy;

  constexpr bool& __get_failOn0Energy();

  constexpr bool const& __get_failOn0Energy() const;

  constexpr void __set_failOn0Energy(bool value);

  static inline ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData* New_ctor(bool failOn0Energy);

  /// @brief Method .ctor addr 0x23dc398 size 0x28 virtual false final false
  inline void _ctor(bool failOn0Energy);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerGameplayManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalActivePlayerGameplayManager__InitData(__MultiplayerLocalActivePlayerGameplayManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerGameplayManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalActivePlayerGameplayManager__InitData(__MultiplayerLocalActivePlayerGameplayManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalActivePlayerGameplayManager__InitData();

public:
  /// @brief Field failOn0Energy, offset: 0x10, size: 0x1, def value: None
  bool ___failOn0Energy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalActivePlayerGameplayManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5154))
// CS Name: ::MultiplayerLocalActivePlayerGameplayManager*
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData;

  /// @brief Field _gameSongController, offset 0x18, size 0x8
  __declspec(property(get = __get__gameSongController, put = __set__gameSongController))::GlobalNamespace::GameSongController* _gameSongController;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _multiplayerLevelEndActions, offset 0x28, size 0x8
  __declspec(property(get = __get__multiplayerLevelEndActions, put = __set__multiplayerLevelEndActions))::GlobalNamespace::IMultiplayerLevelEndActionsListener* _multiplayerLevelEndActions;

  /// @brief Field _prepareLevelCompletionResults, offset 0x30, size 0x8
  __declspec(property(get = __get__prepareLevelCompletionResults, put = __set__prepareLevelCompletionResults))::GlobalNamespace::PrepareLevelCompletionResults* _prepareLevelCompletionResults;

  /// @brief Field _gameEnergyCounter, offset 0x38, size 0x8
  __declspec(property(get = __get__gameEnergyCounter, put = __set__gameEnergyCounter))::GlobalNamespace::GameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _inGameMenuController, offset 0x40, size 0x8
  __declspec(property(get = __get__inGameMenuController, put = __set__inGameMenuController))::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* _inGameMenuController;

  /// @brief Field _platformHelper, offset 0x48, size 0x8
  __declspec(property(get = __get__platformHelper, put = __set__platformHelper))::GlobalNamespace::IVRPlatformHelper* _platformHelper;

  /// @brief Field _disconnectHelper, offset 0x50, size 0x8
  __declspec(property(get = __get__disconnectHelper, put = __set__disconnectHelper))::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* _disconnectHelper;

  /// @brief Field _initData, offset 0x58, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData* _initData;

  /// @brief Field _saberManager, offset 0x60, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field _levelFinishedOrFailed, offset 0x68, size 0x1
  __declspec(property(get = __get__levelFinishedOrFailed, put = __set__levelFinishedOrFailed)) bool _levelFinishedOrFailed;

  constexpr ::GlobalNamespace::GameSongController*& __get__gameSongController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> const& __get__gameSongController() const;

  constexpr void __set__gameSongController(::GlobalNamespace::GameSongController* value);

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener*& __get__multiplayerLevelEndActions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsListener*> const& __get__multiplayerLevelEndActions() const;

  constexpr void __set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener* value);

  constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& __get__prepareLevelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const& __get__prepareLevelCompletionResults() const;

  constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value);

  constexpr ::GlobalNamespace::GameEnergyCounter*& __get__gameEnergyCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> const& __get__gameEnergyCounter() const;

  constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter* value);

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*& __get__inGameMenuController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*> const& __get__inGameMenuController() const;

  constexpr void __set__inGameMenuController(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__platformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__platformHelper() const;

  constexpr void __set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& __get__disconnectHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*> const& __get__disconnectHelper() const;

  constexpr void __set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* value);

  constexpr ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData* value);

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr bool& __get__levelFinishedOrFailed();

  constexpr bool const& __get__levelFinishedOrFailed() const;

  constexpr void __set__levelFinishedOrFailed(bool value);

  /// @brief Method Start addr 0x23db0d8 size 0x478 virtual false final false
  inline void Start();

  /// @brief Method OnDisable addr 0x23db570 size 0x498 virtual false final false
  inline void OnDisable();

  /// @brief Method PerformPlayerFail addr 0x23dba08 size 0x240 virtual false final false
  inline void PerformPlayerFail();

  /// @brief Method PerformPlayerGivenUp addr 0x23dbc48 size 0x240 virtual false final false
  inline void PerformPlayerGivenUp();

  /// @brief Method HandleGameEnergyDidReach0 addr 0x23dbe88 size 0x28 virtual false final false
  inline void HandleGameEnergyDidReach0();

  /// @brief Method HandleInGameMenuControllerDidGiveUp addr 0x23dbeb0 size 0x4 virtual false final false
  inline void HandleInGameMenuControllerDidGiveUp();

  /// @brief Method HandleInGameMenuControllerRequestsDisconnect addr 0x23dbeb4 size 0x40 virtual false final false
  inline void HandleInGameMenuControllerRequestsDisconnect();

  /// @brief Method HandleSongDidFinish addr 0x23dc104 size 0x240 virtual false final false
  inline void HandleSongDidFinish();

  /// @brief Method HandleHmdUnmounted addr 0x23dc344 size 0x4 virtual false final false
  inline void HandleHmdUnmounted();

  /// @brief Method HandleVrFocusWasCapturedEvent addr 0x23dc348 size 0x4 virtual false final false
  inline void HandleVrFocusWasCapturedEvent();

  /// @brief Method HandleInputFocusCaptured addr 0x23db550 size 0x20 virtual false final false
  inline void HandleInputFocusCaptured();

  /// @brief Method HandleInputFocusReleased addr 0x23dc34c size 0x38 virtual false final false
  inline void HandleInputFocusReleased();

  /// @brief Method OnApplicationFocus addr 0x23dc384 size 0xc virtual false final false
  inline void OnApplicationFocus(bool hasFocus);

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager* New_ctor();

  /// @brief Method .ctor addr 0x23dc390 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerGameplayManager(MultiplayerLocalActivePlayerGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerGameplayManager(MultiplayerLocalActivePlayerGameplayManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerGameplayManager();

public:
  /// @brief Field _gameSongController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameSongController* ____gameSongController;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _multiplayerLevelEndActions, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsListener* ____multiplayerLevelEndActions;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PrepareLevelCompletionResults* ____prepareLevelCompletionResults;

  /// @brief Field _gameEnergyCounter, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _inGameMenuController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* ____inGameMenuController;

  /// @brief Field _platformHelper, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____platformHelper;

  /// @brief Field _disconnectHelper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* ____disconnectHelper;

  /// @brief Field _initData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData* ____initData;

  /// @brief Field _saberManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field _levelFinishedOrFailed, offset: 0x68, size: 0x1, def value: None
  bool ____levelFinishedOrFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*, "", "MultiplayerLocalActivePlayerGameplayManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActivePlayerGameplayManager__InitData*, "", "MultiplayerLocalActivePlayerGameplayManager/InitData");
