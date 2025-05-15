#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerInGameMenuController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerInGameMenuController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuViewController;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerInGameMenuController
class CORDL_TYPE MultiplayerLocalActivePlayerInGameMenuController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gameMenuIsShown, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__gameMenuIsShown, put = __cordl_internal_set__gameMenuIsShown)) bool _gameMenuIsShown;

  /// @brief Field _gamePause, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _inGameMenuViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inGameMenuViewController,
                      put = __cordl_internal_set__inGameMenuViewController)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController>
      _inGameMenuViewController;

  /// @brief Field _menuButtonTrigger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__menuButtonTrigger, put = __cordl_internal_set__menuButtonTrigger)) ::GlobalNamespace::IMenuButtonTrigger* _menuButtonTrigger;

  /// @brief Field _menuChangedStateTime, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__menuChangedStateTime, put = __cordl_internal_set__menuChangedStateTime)) float_t _menuChangedStateTime;

  /// @brief Field _multiplayerController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _saberManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_canChangeMenuState)) bool canChangeMenuState;

  /// @brief Field didGiveUpEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didGiveUpEvent, put = __cordl_internal_set_didGiveUpEvent)) ::System::Action* didGiveUpEvent;

  __declspec(property(get = get_gameMenuIsShown)) bool gameMenuIsShown;

  /// @brief Field requestsDisconnectEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_requestsDisconnectEvent, put = __cordl_internal_set_requestsDisconnectEvent)) ::System::Action* requestsDisconnectEvent;

  /// @brief Method HandleInGameMenuViewControllerDidPressDisconnectButton, addr 0x3bacf54, size 0x1c, virtual false, abstract: false, final false
  inline void HandleInGameMenuViewControllerDidPressDisconnectButton();

  /// @brief Method HandleInGameMenuViewControllerDidPressGiveUpButton, addr 0x3bacf18, size 0x3c, virtual false, abstract: false, final false
  inline void HandleInGameMenuViewControllerDidPressGiveUpButton();

  /// @brief Method HandleInGameMenuViewControllerDidPressResumeButton, addr 0x3bacf14, size 0x4, virtual false, abstract: false, final false
  inline void HandleInGameMenuViewControllerDidPressResumeButton();

  /// @brief Method HandleInputFocusWasCaptured, addr 0x3bacf10, size 0x4, virtual false, abstract: false, final false
  inline void HandleInputFocusWasCaptured();

  /// @brief Method HandleMenuButtonTriggered, addr 0x3bacf0c, size 0x4, virtual false, abstract: false, final false
  inline void HandleMenuButtonTriggered();

  /// @brief Method HandleStateChanged, addr 0x3bacf70, size 0x1c8, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::MultiplayerController_State state);

  /// @brief Method HideInGameMenu, addr 0x3bac4d0, size 0x184, virtual false, abstract: false, final false
  inline void HideInGameMenu();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x3bacd44, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x3bac828, size 0x348, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ShowInGameMenu, addr 0x3bacd50, size 0x128, virtual false, abstract: false, final false
  inline void ShowInGameMenu();

  /// @brief Method Start, addr 0x3bac208, size 0x2c8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr bool const& __cordl_internal_get__gameMenuIsShown() const;

  constexpr bool& __cordl_internal_get__gameMenuIsShown();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> const& __cordl_internal_get__inGameMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController>& __cordl_internal_get__inGameMenuViewController();

  constexpr ::GlobalNamespace::IMenuButtonTrigger* const& __cordl_internal_get__menuButtonTrigger() const;

  constexpr ::GlobalNamespace::IMenuButtonTrigger*& __cordl_internal_get__menuButtonTrigger();

  constexpr float_t const& __cordl_internal_get__menuChangedStateTime() const;

  constexpr float_t& __cordl_internal_get__menuChangedStateTime();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action* const& __cordl_internal_get_didGiveUpEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didGiveUpEvent();

  constexpr ::System::Action* const& __cordl_internal_get_requestsDisconnectEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_requestsDisconnectEvent();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__gameMenuIsShown(bool value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__inGameMenuViewController(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> value);

  constexpr void __cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value);

  constexpr void __cordl_internal_set__menuChangedStateTime(float_t value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_didGiveUpEvent(::System::Action* value);

  constexpr void __cordl_internal_set_requestsDisconnectEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bad138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didGiveUpEvent, addr 0x3babf60, size 0x9c, virtual false, abstract: false, final false
  inline void add_didGiveUpEvent(::System::Action* value);

  /// @brief Method add_requestsDisconnectEvent, addr 0x3bac098, size 0x9c, virtual false, abstract: false, final false
  inline void add_requestsDisconnectEvent(::System::Action* value);

  /// @brief Method get_canChangeMenuState, addr 0x3bac1d8, size 0x30, virtual false, abstract: false, final false
  inline bool get_canChangeMenuState();

  /// @brief Method get_gameMenuIsShown, addr 0x3bac1d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_gameMenuIsShown();

  /// @brief Method remove_didGiveUpEvent, addr 0x3babffc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didGiveUpEvent(::System::Action* value);

  /// @brief Method remove_requestsDisconnectEvent, addr 0x3bac134, size 0x9c, virtual false, abstract: false, final false
  inline void remove_requestsDisconnectEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerInGameMenuController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerInGameMenuController(MultiplayerLocalActivePlayerInGameMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerInGameMenuController(MultiplayerLocalActivePlayerInGameMenuController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4434 };

  /// @brief Field kChangeStateDelay offset 0xffffffff size 0x4
  static constexpr float_t kChangeStateDelay{ static_cast<float_t>(0.05f) };

  /// @brief Field _inGameMenuViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> ____inGameMenuViewController;

  /// @brief Field _menuButtonTrigger, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMenuButtonTrigger* ____menuButtonTrigger;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _gamePause, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _multiplayerController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _saberManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _beatmapObjectManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field didGiveUpEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___didGiveUpEvent;

  /// @brief Field requestsDisconnectEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___requestsDisconnectEvent;

  /// @brief Field _gameMenuIsShown, offset: 0x68, size: 0x1, def value: None
  bool ____gameMenuIsShown;

  /// @brief Field _menuChangedStateTime, offset: 0x6c, size: 0x4, def value: None
  float_t ____menuChangedStateTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____inGameMenuViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____menuButtonTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____vrPlatformHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____gamePause) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____multiplayerController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____saberManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____beatmapObjectManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ___didGiveUpEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ___requestsDisconnectEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____gameMenuIsShown) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____menuChangedStateTime) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*, "", "MultiplayerLocalActivePlayerInGameMenuController");
