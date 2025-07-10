#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactivePlayerInGameMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerInGameMenuViewController)
namespace BGLib::Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ToggleBinder;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
class Tween;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInGameMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalInactivePlayerInGameMenuViewController
class CORDL_TYPE MultiplayerLocalInactivePlayerInGameMenuViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _detailsGameObject, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__detailsGameObject, put = __cordl_internal_set__detailsGameObject)) ::UnityW<::UnityEngine::GameObject> _detailsGameObject;

  /// @brief Field _detailsToggle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__detailsToggle, put = __cordl_internal_set__detailsToggle)) ::UnityW<::UnityEngine::UI::Toggle> _detailsToggle;

  /// @brief Field _disconnectButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectButton, put = __cordl_internal_set__disconnectButton)) ::UnityW<::UnityEngine::UI::Button> _disconnectButton;

  /// @brief Field _disconnectButtonLocalizedText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectButtonLocalizedText, put = __cordl_internal_set__disconnectButtonLocalizedText)) ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>
      _disconnectButtonLocalizedText;

  /// @brief Field _disconnectHelper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectHelper, put = __cordl_internal_set__disconnectHelper)) ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* _disconnectHelper;

  /// @brief Field _disconnectPromptView, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__disconnectPromptView, put = __cordl_internal_set__disconnectPromptView)) ::UnityW<::GlobalNamespace::DisconnectPromptView> _disconnectPromptView;

  /// @brief Field _dontOwnSongGameObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__dontOwnSongGameObject, put = __cordl_internal_set__dontOwnSongGameObject)) ::UnityW<::UnityEngine::GameObject> _dontOwnSongGameObject;

  /// @brief Field _fadeOutTween, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutTween, put = __cordl_internal_set__fadeOutTween)) ::Tweening::Tween* _fadeOutTween;

  /// @brief Field _globalCanvasGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__globalCanvasGroup, put = __cordl_internal_set__globalCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _globalCanvasGroup;

  /// @brief Field _levelBar, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _localPlayerInGameMenuInitData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerInGameMenuInitData,
                      put = __cordl_internal_set__localPlayerInGameMenuInitData)) ::GlobalNamespace::LocalPlayerInGameMenuInitData* _localPlayerInGameMenuInitData;

  /// @brief Field _mainBar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainBar, put = __cordl_internal_set__mainBar)) ::UnityW<::UnityEngine::GameObject> _mainBar;

  /// @brief Field _multiplayerController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _toggleBinder, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _tweeningManager, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method DetailsToggleValueChanged, addr 0x3bad820, size 0x20, virtual false, abstract: false, final false
  inline void DetailsToggleValueChanged(bool isOn);

  /// @brief Method DisconnectButtonPressed, addr 0x3bad7ec, size 0x34, virtual false, abstract: false, final false
  inline void DisconnectButtonPressed();

  /// @brief Method HandleDisconnectPromptViewDidViewFinish, addr 0x3bad840, size 0xc0, virtual false, abstract: false, final false
  inline void HandleDisconnectPromptViewDidViewFinish(bool disconnect);

  /// @brief Method HandleStateChanged, addr 0x3bad900, size 0x1b0, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::MultiplayerController_State state);

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bad6c4, size 0x128, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3bad4a4, size 0xb0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3bad358, size 0x14c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x3bad554, size 0x170, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <HandleDisconnectPromptViewDidViewFinish>b__22_0, addr 0x3badb44, size 0x20, virtual false, abstract: false, final false
  inline void _HandleDisconnectPromptViewDidViewFinish_b__22_0();

  /// @brief Method <HandleStateChanged>b__23_0, addr 0x3badb64, size 0x1c, virtual false, abstract: false, final false
  inline void _HandleStateChanged_b__23_0(float_t val);

  /// @brief Method <HandleStateChanged>b__23_1, addr 0x3badb80, size 0x24, virtual false, abstract: false, final false
  inline void _HandleStateChanged_b__23_1();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__detailsGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__detailsGameObject();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__detailsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__detailsToggle();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__disconnectButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__disconnectButton();

  constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> const& __cordl_internal_get__disconnectButtonLocalizedText() const;

  constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>& __cordl_internal_get__disconnectButtonLocalizedText();

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* const& __cordl_internal_get__disconnectHelper() const;

  constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& __cordl_internal_get__disconnectHelper();

  constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView> const& __cordl_internal_get__disconnectPromptView() const;

  constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView>& __cordl_internal_get__disconnectPromptView();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__dontOwnSongGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__dontOwnSongGameObject();

  constexpr ::Tweening::Tween* const& __cordl_internal_get__fadeOutTween() const;

  constexpr ::Tweening::Tween*& __cordl_internal_get__fadeOutTween();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__globalCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__globalCanvasGroup();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData* const& __cordl_internal_get__localPlayerInGameMenuInitData() const;

  constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData*& __cordl_internal_get__localPlayerInGameMenuInitData();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__mainBar() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__mainBar();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__detailsGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__detailsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__disconnectButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__disconnectButtonLocalizedText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> value);

  constexpr void __cordl_internal_set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* value);

  constexpr void __cordl_internal_set__disconnectPromptView(::UnityW<::GlobalNamespace::DisconnectPromptView> value);

  constexpr void __cordl_internal_set__dontOwnSongGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__fadeOutTween(::Tweening::Tween* value);

  constexpr void __cordl_internal_set__globalCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__localPlayerInGameMenuInitData(::GlobalNamespace::LocalPlayerInGameMenuInitData* value);

  constexpr void __cordl_internal_set__mainBar(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3badab0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerInGameMenuViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInGameMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerInGameMenuViewController(MultiplayerLocalInactivePlayerInGameMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInGameMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerInGameMenuViewController(MultiplayerLocalInactivePlayerInGameMenuViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4436 };

  /// @brief Field _disconnectButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____disconnectButton;

  /// @brief Field _disconnectButtonLocalizedText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> ____disconnectButtonLocalizedText;

  /// @brief Field _detailsToggle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____detailsToggle;

  /// @brief Field _globalCanvasGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____globalCanvasGroup;

  /// @brief Field _mainBar, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____mainBar;

  /// @brief Field _disconnectPromptView, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DisconnectPromptView> ____disconnectPromptView;

  /// @brief Field _levelBar, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _dontOwnSongGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____dontOwnSongGameObject;

  /// @brief Field _detailsGameObject, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____detailsGameObject;

  /// @brief Field _localPlayerInGameMenuInitData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::LocalPlayerInGameMenuInitData* ____localPlayerInGameMenuInitData;

  /// @brief Field _disconnectHelper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* ____disconnectHelper;

  /// @brief Field _multiplayerController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _tweeningManager, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _buttonBinder, offset: 0x88, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _toggleBinder, offset: 0x90, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _fadeOutTween, offset: 0x98, size: 0x8, def value: None
  ::Tweening::Tween* ____fadeOutTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____disconnectButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____disconnectButtonLocalizedText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____detailsToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____globalCanvasGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____mainBar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____disconnectPromptView) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____levelBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____dontOwnSongGameObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____detailsGameObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____localPlayerInGameMenuInitData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____disconnectHelper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____multiplayerController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____tweeningManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____buttonBinder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____toggleBinder) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, ____fadeOutTween) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*, "", "MultiplayerLocalInactivePlayerInGameMenuViewController");
