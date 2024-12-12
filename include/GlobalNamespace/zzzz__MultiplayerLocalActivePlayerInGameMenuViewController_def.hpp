#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerInGameMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerInGameMenuViewController)
namespace BGLib::Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerInGameMenuViewController
class CORDL_TYPE MultiplayerLocalActivePlayerInGameMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _connectedPlayer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _disabledInteractionRemainingTime, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledInteractionRemainingTime, put = __cordl_internal_set__disabledInteractionRemainingTime)) float_t _disabledInteractionRemainingTime;

  /// @brief Field _disconnectButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectButton, put = __cordl_internal_set__disconnectButton)) ::UnityW<::UnityEngine::UI::Button> _disconnectButton;

  /// @brief Field _disconnectButtonLocalizedText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectButtonLocalizedText, put = __cordl_internal_set__disconnectButtonLocalizedText)) ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>
      _disconnectButtonLocalizedText;

  /// @brief Field _disconnectHelper, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectHelper, put = __cordl_internal_set__disconnectHelper)) ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* _disconnectHelper;

  /// @brief Field _disconnectPromptView, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectPromptView, put = __cordl_internal_set__disconnectPromptView)) ::UnityW<::GlobalNamespace::DisconnectPromptView> _disconnectPromptView;

  /// @brief Field _giveUpButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__giveUpButton, put = __cordl_internal_set__giveUpButton)) ::UnityW<::UnityEngine::UI::Button> _giveUpButton;

  /// @brief Field _levelBar, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _localPlayerInGameMenuInitData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerInGameMenuInitData,
                      put = __cordl_internal_set__localPlayerInGameMenuInitData)) ::GlobalNamespace::LocalPlayerInGameMenuInitData* _localPlayerInGameMenuInitData;

  /// @brief Field _mainBar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainBar, put = __cordl_internal_set__mainBar)) ::UnityW<::UnityEngine::GameObject> _mainBar;

  /// @brief Field _menuControllersGameObject, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__menuControllersGameObject, put = __cordl_internal_set__menuControllersGameObject)) ::UnityW<::UnityEngine::GameObject> _menuControllersGameObject;

  /// @brief Field _menuWrapperGameObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__menuWrapperGameObject, put = __cordl_internal_set__menuWrapperGameObject)) ::UnityW<::UnityEngine::GameObject> _menuWrapperGameObject;

  /// @brief Field _resumeButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__resumeButton, put = __cordl_internal_set__resumeButton)) ::UnityW<::UnityEngine::UI::Button> _resumeButton;

  /// @brief Field _vrPlatformHelper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field didPressDisconnectButtonEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressDisconnectButtonEvent, put = __cordl_internal_set_didPressDisconnectButtonEvent)) ::System::Action* didPressDisconnectButtonEvent;

  /// @brief Field didPressGiveUpButtonEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressGiveUpButtonEvent, put = __cordl_internal_set_didPressGiveUpButtonEvent)) ::System::Action* didPressGiveUpButtonEvent;

  /// @brief Field didPressResumeButtonEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressResumeButtonEvent, put = __cordl_internal_set_didPressResumeButtonEvent)) ::System::Action* didPressResumeButtonEvent;

  /// @brief Method Awake, addr 0x3ba91cc, size 0x1c4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DisconnectButtonPressed, addr 0x3ba9600, size 0x34, virtual false, abstract: false, final false
  inline void DisconnectButtonPressed();

  /// @brief Method GiveUpButtonPressed, addr 0x3ba9700, size 0x4c, virtual false, abstract: false, final false
  inline void GiveUpButtonPressed();

  /// @brief Method HandleDisconnectPromptViewDidViewFinish, addr 0x3ba9634, size 0xcc, virtual false, abstract: false, final false
  inline void HandleDisconnectPromptViewDidViewFinish(bool disconnect);

  /// @brief Method HideMenu, addr 0x3ba8f54, size 0x44, virtual false, abstract: false, final false
  inline void HideMenu();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ba9440, size 0xa0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ResumeButtonPressed, addr 0x3ba95c8, size 0x38, virtual false, abstract: false, final false
  inline void ResumeButtonPressed();

  /// @brief Method ShowMenu, addr 0x3ba8f04, size 0x50, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method Start, addr 0x3ba9390, size 0xb0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3ba94e0, size 0xe8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <HandleDisconnectPromptViewDidViewFinish>b__32_0, addr 0x3ba9754, size 0x20, virtual false, abstract: false, final false
  inline void _HandleDisconnectPromptViewDidViewFinish_b__32_0();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr float_t const& __cordl_internal_get__disabledInteractionRemainingTime() const;

  constexpr float_t& __cordl_internal_get__disabledInteractionRemainingTime();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__disconnectButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__disconnectButton();

  constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> const& __cordl_internal_get__disconnectButtonLocalizedText() const;

  constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>& __cordl_internal_get__disconnectButtonLocalizedText();

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* const& __cordl_internal_get__disconnectHelper() const;

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& __cordl_internal_get__disconnectHelper();

  constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView> const& __cordl_internal_get__disconnectPromptView() const;

  constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView>& __cordl_internal_get__disconnectPromptView();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__giveUpButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__giveUpButton();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData* const& __cordl_internal_get__localPlayerInGameMenuInitData() const;

  constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData*& __cordl_internal_get__localPlayerInGameMenuInitData();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__mainBar() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__mainBar();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__menuControllersGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__menuControllersGameObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__menuWrapperGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__menuWrapperGameObject();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__resumeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__resumeButton();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action* const& __cordl_internal_get_didPressDisconnectButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressDisconnectButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressGiveUpButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressGiveUpButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressResumeButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressResumeButtonEvent();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__disabledInteractionRemainingTime(float_t value);

  constexpr void __cordl_internal_set__disconnectButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__disconnectButtonLocalizedText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> value);

  constexpr void __cordl_internal_set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* value);

  constexpr void __cordl_internal_set__disconnectPromptView(::UnityW<::GlobalNamespace::DisconnectPromptView> value);

  constexpr void __cordl_internal_set__giveUpButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__localPlayerInGameMenuInitData(::GlobalNamespace::LocalPlayerInGameMenuInitData* value);

  constexpr void __cordl_internal_set__mainBar(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__menuControllersGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__menuWrapperGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__resumeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_didPressDisconnectButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressGiveUpButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressResumeButtonEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ba974c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressDisconnectButtonEvent, addr 0x3ba86e0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressDisconnectButtonEvent(::System::Action* value);

  /// @brief Method add_didPressGiveUpButtonEvent, addr 0x3ba8818, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressGiveUpButtonEvent(::System::Action* value);

  /// @brief Method add_didPressResumeButtonEvent, addr 0x3ba877c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressResumeButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressDisconnectButtonEvent, addr 0x3ba8bfc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressDisconnectButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressGiveUpButtonEvent, addr 0x3ba8d34, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressGiveUpButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressResumeButtonEvent, addr 0x3ba8c98, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressResumeButtonEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerInGameMenuViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerInGameMenuViewController(MultiplayerLocalActivePlayerInGameMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerInGameMenuViewController(MultiplayerLocalActivePlayerInGameMenuViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4431 };

  /// @brief Field kDisabledInteractionDuration offset 0xffffffff size 0x4
  static constexpr float_t kDisabledInteractionDuration{ static_cast<float_t>(0.2f) };

  /// @brief Field _disconnectButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____disconnectButton;

  /// @brief Field _disconnectButtonLocalizedText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> ____disconnectButtonLocalizedText;

  /// @brief Field _giveUpButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____giveUpButton;

  /// @brief Field _resumeButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____resumeButton;

  /// @brief Field _mainBar, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____mainBar;

  /// @brief Field _disconnectPromptView, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DisconnectPromptView> ____disconnectPromptView;

  /// @brief Field _levelBar, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _menuWrapperGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____menuWrapperGameObject;

  /// @brief Field _menuControllersGameObject, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____menuControllersGameObject;

  /// @brief Field _connectedPlayer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _localPlayerInGameMenuInitData, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LocalPlayerInGameMenuInitData* ____localPlayerInGameMenuInitData;

  /// @brief Field _vrPlatformHelper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _disconnectHelper, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* ____disconnectHelper;

  /// @brief Field didPressDisconnectButtonEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didPressDisconnectButtonEvent;

  /// @brief Field didPressGiveUpButtonEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___didPressGiveUpButtonEvent;

  /// @brief Field didPressResumeButtonEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action* ___didPressResumeButtonEvent;

  /// @brief Field _buttonBinder, offset: 0xa0, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _disabledInteractionRemainingTime, offset: 0xa8, size: 0x4, def value: None
  float_t ____disabledInteractionRemainingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____disconnectButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____disconnectButtonLocalizedText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____giveUpButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____resumeButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____mainBar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____disconnectPromptView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____levelBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____menuWrapperGameObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____menuControllersGameObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____connectedPlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____localPlayerInGameMenuInitData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____vrPlatformHelper) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____disconnectHelper) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ___didPressDisconnectButtonEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ___didPressGiveUpButtonEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ___didPressResumeButtonEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____buttonBinder) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, ____disabledInteractionRemainingTime) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*, "", "MultiplayerLocalActivePlayerInGameMenuViewController");
