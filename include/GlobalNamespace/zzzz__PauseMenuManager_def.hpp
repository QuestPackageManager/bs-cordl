#pragma once
// IWYU pragma private; include "GlobalNamespace/PauseMenuManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PauseMenuManager)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class PauseAnimationController;
}
namespace GlobalNamespace {
class PauseMenuManager_InitData;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PauseMenuManager;
}
namespace GlobalNamespace {
class PauseMenuManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PauseMenuManager);
MARK_REF_PTR_T(::GlobalNamespace::PauseMenuManager_InitData);
// Dependencies BeatmapKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseMenuManager/InitData
class CORDL_TYPE PauseMenuManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field backButtonText, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_backButtonText, put = __cordl_internal_set_backButtonText)) ::StringW backButtonText;

  /// @brief Field beatmapKey, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field showLevelBar, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_showLevelBar, put = __cordl_internal_set_showLevelBar)) bool showLevelBar;

  /// @brief Field showRestartButton, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_showRestartButton, put = __cordl_internal_set_showRestartButton)) bool showRestartButton;

  static inline ::GlobalNamespace::PauseMenuManager_InitData* New_ctor(::StringW backButtonText, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                       bool showRestartButton, bool showLevelBar);

  constexpr ::StringW const& __cordl_internal_get_backButtonText() const;

  constexpr ::StringW& __cordl_internal_get_backButtonText();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr bool const& __cordl_internal_get_showLevelBar() const;

  constexpr bool& __cordl_internal_get_showLevelBar();

  constexpr bool const& __cordl_internal_get_showRestartButton() const;

  constexpr bool& __cordl_internal_get_showRestartButton();

  constexpr void __cordl_internal_set_backButtonText(::StringW value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_showLevelBar(bool value);

  constexpr void __cordl_internal_set_showRestartButton(bool value);

  /// @brief Method .ctor, addr 0x3bb0790, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW backButtonText, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool showRestartButton, bool showLevelBar);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseMenuManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseMenuManager_InitData(PauseMenuManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseMenuManager_InitData(PauseMenuManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4444 };

  /// @brief Field backButtonText, offset: 0x10, size: 0x8, def value: None
  ::StringW ___backButtonText;

  /// @brief Field beatmapKey, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field showRestartButton, offset: 0x38, size: 0x1, def value: None
  bool ___showRestartButton;

  /// @brief Field showLevelBar, offset: 0x39, size: 0x1, def value: None
  bool ___showLevelBar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseMenuManager_InitData, ___backButtonText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager_InitData, ___beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager_InitData, ___beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager_InitData, ___showRestartButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager_InitData, ___showLevelBar) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseMenuManager_InitData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseMenuManager
class CORDL_TYPE PauseMenuManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::PauseMenuManager_InitData;

  /// @brief Field _backButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__backButton, put = __cordl_internal_set__backButton)) ::UnityW<::UnityEngine::UI::Button> _backButton;

  /// @brief Field _backButtonText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__backButtonText, put = __cordl_internal_set__backButtonText)) ::UnityW<::TMPro::TextMeshProUGUI> _backButtonText;

  /// @brief Field _buttonBinder, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _continueButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _disabledInteractionRemainingTime, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledInteractionRemainingTime, put = __cordl_internal_set__disabledInteractionRemainingTime)) float_t _disabledInteractionRemainingTime;

  /// @brief Field _environmentSpawnRotation, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSpawnRotation, put = __cordl_internal_set__environmentSpawnRotation)) ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation>
      _environmentSpawnRotation;

  /// @brief Field _initData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::PauseMenuManager_InitData* _initData;

  /// @brief Field _levelBar, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar)) ::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _pauseAnimationController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseAnimationController, put = __cordl_internal_set__pauseAnimationController)) ::UnityW<::GlobalNamespace::PauseAnimationController>
      _pauseAnimationController;

  /// @brief Field _pauseContainerTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseContainerTransform, put = __cordl_internal_set__pauseContainerTransform)) ::UnityW<::UnityEngine::Transform> _pauseContainerTransform;

  /// @brief Field _restartButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__restartButton, put = __cordl_internal_set__restartButton)) ::UnityW<::UnityEngine::UI::Button> _restartButton;

  /// @brief Field _vrPlatformHelper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field didFinishResumeAnimationEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishResumeAnimationEvent, put = __cordl_internal_set_didFinishResumeAnimationEvent)) ::System::Action* didFinishResumeAnimationEvent;

  /// @brief Field didPressContinueButtonEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressContinueButtonEvent, put = __cordl_internal_set_didPressContinueButtonEvent)) ::System::Action* didPressContinueButtonEvent;

  /// @brief Field didPressMenuButtonEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressMenuButtonEvent, put = __cordl_internal_set_didPressMenuButtonEvent)) ::System::Action* didPressMenuButtonEvent;

  /// @brief Field didPressRestartButtonEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressRestartButtonEvent, put = __cordl_internal_set_didPressRestartButtonEvent)) ::System::Action* didPressRestartButtonEvent;

  /// @brief Field didStartResumeAnimationEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartResumeAnimationEvent, put = __cordl_internal_set_didStartResumeAnimationEvent)) ::System::Action* didStartResumeAnimationEvent;

  /// @brief Method Awake, addr 0x3bb01c0, size 0x1bc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ContinueButtonPressed, addr 0x3bb06b0, size 0x38, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  /// @brief Method HandleResumeFromPauseAnimationDidFinish, addr 0x3bb076c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleResumeFromPauseAnimationDidFinish();

  /// @brief Method MenuButtonPressed, addr 0x3bb0734, size 0x38, virtual false, abstract: false, final false
  inline void MenuButtonPressed();

  static inline ::GlobalNamespace::PauseMenuManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bb04a4, size 0xdc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RestartButtonPressed, addr 0x3bb06e8, size 0x4c, virtual false, abstract: false, final false
  inline void RestartButtonPressed();

  /// @brief Method ShowMenu, addr 0x3bafc54, size 0x58, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method Start, addr 0x3bb037c, size 0x128, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartResumeAnimation, addr 0x3baff80, size 0x48, virtual false, abstract: false, final false
  inline void StartResumeAnimation();

  /// @brief Method Update, addr 0x3bb0580, size 0x130, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__backButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__backButton();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__backButtonText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__backButtonText();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr float_t const& __cordl_internal_get__disabledInteractionRemainingTime() const;

  constexpr float_t& __cordl_internal_get__disabledInteractionRemainingTime();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> const& __cordl_internal_get__environmentSpawnRotation() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation>& __cordl_internal_get__environmentSpawnRotation();

  constexpr ::GlobalNamespace::PauseMenuManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::PauseMenuManager_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::GlobalNamespace::PauseAnimationController> const& __cordl_internal_get__pauseAnimationController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseAnimationController>& __cordl_internal_get__pauseAnimationController();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pauseContainerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pauseContainerTransform();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__restartButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__restartButton();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action* const& __cordl_internal_get_didFinishResumeAnimationEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didFinishResumeAnimationEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressContinueButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressContinueButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressMenuButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressMenuButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPressRestartButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressRestartButtonEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didStartResumeAnimationEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didStartResumeAnimationEvent();

  constexpr void __cordl_internal_set__backButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__backButtonText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__disabledInteractionRemainingTime(float_t value);

  constexpr void __cordl_internal_set__environmentSpawnRotation(::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::PauseMenuManager_InitData* value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__pauseAnimationController(::UnityW<::GlobalNamespace::PauseAnimationController> value);

  constexpr void __cordl_internal_set__pauseContainerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__restartButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_didFinishResumeAnimationEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressContinueButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressMenuButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressRestartButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didStartResumeAnimationEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bb0788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishResumeAnimationEvent, addr 0x3baef4c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishResumeAnimationEvent(::System::Action* value);

  /// @brief Method add_didPressContinueButtonEvent, addr 0x3baefe8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method add_didPressMenuButtonEvent, addr 0x3baf120, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressMenuButtonEvent(::System::Action* value);

  /// @brief Method add_didPressRestartButtonEvent, addr 0x3baf084, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressRestartButtonEvent(::System::Action* value);

  /// @brief Method add_didStartResumeAnimationEvent, addr 0x3baeeb0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didStartResumeAnimationEvent(::System::Action* value);

  /// @brief Method remove_didFinishResumeAnimationEvent, addr 0x3baf938, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishResumeAnimationEvent(::System::Action* value);

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x3baf9d4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressMenuButtonEvent, addr 0x3bafb0c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressMenuButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressRestartButtonEvent, addr 0x3bafa70, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressRestartButtonEvent(::System::Action* value);

  /// @brief Method remove_didStartResumeAnimationEvent, addr 0x3baf89c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didStartResumeAnimationEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseMenuManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseMenuManager(PauseMenuManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseMenuManager(PauseMenuManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4445 };

  /// @brief Field kDisabledInteractionDuration offset 0xffffffff size 0x4
  static constexpr float_t kDisabledInteractionDuration{ static_cast<float_t>(0.2f) };

  /// @brief Field _pauseAnimationController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseAnimationController> ____pauseAnimationController;

  /// @brief Field _levelBar, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _continueButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _restartButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____restartButton;

  /// @brief Field _backButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____backButton;

  /// @brief Field _backButtonText, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____backButtonText;

  /// @brief Field _pauseContainerTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____pauseContainerTransform;

  /// @brief Field _initData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PauseMenuManager_InitData* ____initData;

  /// @brief Field _vrPlatformHelper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _environmentSpawnRotation, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> ____environmentSpawnRotation;

  /// @brief Field didPressContinueButtonEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___didPressContinueButtonEvent;

  /// @brief Field didPressMenuButtonEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didPressMenuButtonEvent;

  /// @brief Field didPressRestartButtonEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didPressRestartButtonEvent;

  /// @brief Field didStartResumeAnimationEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didStartResumeAnimationEvent;

  /// @brief Field didFinishResumeAnimationEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___didFinishResumeAnimationEvent;

  /// @brief Field _buttonBinder, offset: 0x98, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _disabledInteractionRemainingTime, offset: 0xa0, size: 0x4, def value: None
  float_t ____disabledInteractionRemainingTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____pauseAnimationController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____levelBar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____continueButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____restartButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____backButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____backButtonText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____pauseContainerTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____initData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____vrPlatformHelper) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____environmentSpawnRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didPressContinueButtonEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didPressMenuButtonEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didPressRestartButtonEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didStartResumeAnimationEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didFinishResumeAnimationEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____buttonBinder) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____disabledInteractionRemainingTime) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseMenuManager, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PauseMenuManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseMenuManager*, "", "PauseMenuManager");
NEED_NO_BOX(::GlobalNamespace::PauseMenuManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseMenuManager_InitData*, "", "PauseMenuManager/InitData");
