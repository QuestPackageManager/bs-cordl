#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PauseMenuManager)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
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
class __PauseMenuManager__InitData;
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
class __PauseMenuManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PauseMenuManager);
MARK_REF_PTR_T(::GlobalNamespace::__PauseMenuManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5066))
// CS Name: ::PauseMenuManager::InitData*
class CORDL_TYPE __PauseMenuManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field backButtonText, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_backButtonText, put = __cordl_internal_set_backButtonText))::StringW backButtonText;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_previewBeatmapLevel, put = __cordl_internal_set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field showRestartButton, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_showRestartButton, put = __cordl_internal_set_showRestartButton)) bool showRestartButton;

  /// @brief Field showLevelBar, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_showLevelBar, put = __cordl_internal_set_showLevelBar)) bool showLevelBar;

  constexpr ::StringW& __cordl_internal_get_backButtonText();

  constexpr ::StringW const& __cordl_internal_get_backButtonText() const;

  constexpr void __cordl_internal_set_backButtonText(::StringW value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __cordl_internal_get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __cordl_internal_get_previewBeatmapLevel() const;

  constexpr void __cordl_internal_set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr bool& __cordl_internal_get_showRestartButton();

  constexpr bool const& __cordl_internal_get_showRestartButton() const;

  constexpr void __cordl_internal_set_showRestartButton(bool value);

  constexpr bool& __cordl_internal_get_showLevelBar();

  constexpr bool const& __cordl_internal_get_showLevelBar() const;

  constexpr void __cordl_internal_set_showLevelBar(bool value);

  static inline ::GlobalNamespace::__PauseMenuManager__InitData* New_ctor(::StringW backButtonText, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                          ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                          bool showRestartButton, bool showLevelBar);

  /// @brief Method .ctor, addr 0x23c911c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW backButtonText, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool showRestartButton, bool showLevelBar);

  // Ctor Parameters [CppParam { name: "", ty: "__PauseMenuManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PauseMenuManager__InitData(__PauseMenuManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PauseMenuManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PauseMenuManager__InitData(__PauseMenuManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PauseMenuManager__InitData();

public:
  /// @brief Field backButtonText, offset: 0x10, size: 0x8, def value: None
  ::StringW ___backButtonText;

  /// @brief Field previewBeatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  /// @brief Field showRestartButton, offset: 0x30, size: 0x1, def value: None
  bool ___showRestartButton;

  /// @brief Field showLevelBar, offset: 0x31, size: 0x1, def value: None
  bool ___showLevelBar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PauseMenuManager__InitData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseMenuManager__InitData, ___backButtonText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseMenuManager__InitData, ___previewBeatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseMenuManager__InitData, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseMenuManager__InitData, ___beatmapCharacteristic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseMenuManager__InitData, ___showRestartButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseMenuManager__InitData, ___showLevelBar) == 0x31, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PauseMenuManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5067))
// CS Name: ::PauseMenuManager*
class CORDL_TYPE PauseMenuManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__PauseMenuManager__InitData;

  /// @brief Field _pauseAnimationController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseAnimationController,
                      put = __cordl_internal_set__pauseAnimationController))::UnityW<::GlobalNamespace::PauseAnimationController> _pauseAnimationController;

  /// @brief Field _levelBar, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar))::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _continueButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton))::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _restartButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__restartButton, put = __cordl_internal_set__restartButton))::UnityW<::UnityEngine::UI::Button> _restartButton;

  /// @brief Field _backButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backButton, put = __cordl_internal_set__backButton))::UnityW<::UnityEngine::UI::Button> _backButton;

  /// @brief Field _backButtonText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__backButtonText, put = __cordl_internal_set__backButtonText))::UnityW<::TMPro::TextMeshProUGUI> _backButtonText;

  /// @brief Field _pauseContainerTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseContainerTransform, put = __cordl_internal_set__pauseContainerTransform))::UnityW<::UnityEngine::Transform> _pauseContainerTransform;

  /// @brief Field _initData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__PauseMenuManager__InitData* _initData;

  /// @brief Field _vrPlatformHelper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _environmentSpawnRotation, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSpawnRotation,
                      put = __cordl_internal_set__environmentSpawnRotation))::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> _environmentSpawnRotation;

  /// @brief Field didPressContinueButtonEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressContinueButtonEvent, put = __cordl_internal_set_didPressContinueButtonEvent))::System::Action* didPressContinueButtonEvent;

  /// @brief Field didPressMenuButtonEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressMenuButtonEvent, put = __cordl_internal_set_didPressMenuButtonEvent))::System::Action* didPressMenuButtonEvent;

  /// @brief Field didPressRestartButtonEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressRestartButtonEvent, put = __cordl_internal_set_didPressRestartButtonEvent))::System::Action* didPressRestartButtonEvent;

  /// @brief Field didFinishResumeAnimationEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishResumeAnimationEvent, put = __cordl_internal_set_didFinishResumeAnimationEvent))::System::Action* didFinishResumeAnimationEvent;

  /// @brief Field _buttonBinder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _disabledInteractionRemainingTime, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__disabledInteractionRemainingTime, put = __cordl_internal_set__disabledInteractionRemainingTime)) float_t _disabledInteractionRemainingTime;

  constexpr ::UnityW<::GlobalNamespace::PauseAnimationController>& __cordl_internal_get__pauseAnimationController();

  constexpr ::UnityW<::GlobalNamespace::PauseAnimationController> const& __cordl_internal_get__pauseAnimationController() const;

  constexpr void __cordl_internal_set__pauseAnimationController(::UnityW<::GlobalNamespace::PauseAnimationController> value);

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__restartButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__restartButton() const;

  constexpr void __cordl_internal_set__restartButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__backButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__backButton() const;

  constexpr void __cordl_internal_set__backButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__backButtonText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__backButtonText() const;

  constexpr void __cordl_internal_set__backButtonText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pauseContainerTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pauseContainerTransform() const;

  constexpr void __cordl_internal_set__pauseContainerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::GlobalNamespace::__PauseMenuManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseMenuManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__PauseMenuManager__InitData* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation>& __cordl_internal_get__environmentSpawnRotation();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> const& __cordl_internal_get__environmentSpawnRotation() const;

  constexpr void __cordl_internal_set__environmentSpawnRotation(::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> value);

  constexpr ::System::Action*& __cordl_internal_get_didPressContinueButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressContinueButtonEvent() const;

  constexpr void __cordl_internal_set_didPressContinueButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didPressMenuButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressMenuButtonEvent() const;

  constexpr void __cordl_internal_set_didPressMenuButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didPressRestartButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPressRestartButtonEvent() const;

  constexpr void __cordl_internal_set_didPressRestartButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didFinishResumeAnimationEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishResumeAnimationEvent() const;

  constexpr void __cordl_internal_set_didFinishResumeAnimationEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr float_t& __cordl_internal_get__disabledInteractionRemainingTime();

  constexpr float_t const& __cordl_internal_get__disabledInteractionRemainingTime() const;

  constexpr void __cordl_internal_set__disabledInteractionRemainingTime(float_t value);

  /// @brief Method add_didPressContinueButtonEvent, addr 0x23c85d0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x23c866c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method add_didPressMenuButtonEvent, addr 0x23c8708, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressMenuButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressMenuButtonEvent, addr 0x23c87a4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressMenuButtonEvent(::System::Action* value);

  /// @brief Method add_didPressRestartButtonEvent, addr 0x23c8840, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressRestartButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressRestartButtonEvent, addr 0x23c88dc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressRestartButtonEvent(::System::Action* value);

  /// @brief Method add_didFinishResumeAnimationEvent, addr 0x23c8978, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishResumeAnimationEvent(::System::Action* value);

  /// @brief Method remove_didFinishResumeAnimationEvent, addr 0x23c8a14, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishResumeAnimationEvent(::System::Action* value);

  /// @brief Method Awake, addr 0x23c8ab0, size 0x1c8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x23c8c78, size 0x128, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23c8da0, size 0xe4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x23c8e84, size 0x130, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ShowMenu, addr 0x23c9070, size 0x5c, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method StartResumeAnimation, addr 0x23c90cc, size 0x2c, virtual false, abstract: false, final false
  inline void StartResumeAnimation();

  /// @brief Method HandleResumeFromPauseAnimationDidFinish, addr 0x23c90f8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleResumeFromPauseAnimationDidFinish();

  /// @brief Method MenuButtonPressed, addr 0x23c9038, size 0x38, virtual false, abstract: false, final false
  inline void MenuButtonPressed();

  /// @brief Method RestartButtonPressed, addr 0x23c8fec, size 0x4c, virtual false, abstract: false, final false
  inline void RestartButtonPressed();

  /// @brief Method ContinueButtonPressed, addr 0x23c8fb4, size 0x38, virtual false, abstract: false, final false
  inline void ContinueButtonPressed();

  static inline ::GlobalNamespace::PauseMenuManager* New_ctor();

  /// @brief Method .ctor, addr 0x23c9114, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseMenuManager(PauseMenuManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseMenuManager(PauseMenuManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseMenuManager();

public:
  /// @brief Field _pauseAnimationController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseAnimationController> ____pauseAnimationController;

  /// @brief Field _levelBar, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _continueButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _restartButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____restartButton;

  /// @brief Field _backButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____backButton;

  /// @brief Field _backButtonText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____backButtonText;

  /// @brief Field _pauseContainerTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____pauseContainerTransform;

  /// @brief Field _initData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__PauseMenuManager__InitData* ____initData;

  /// @brief Field _vrPlatformHelper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _environmentSpawnRotation, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> ____environmentSpawnRotation;

  /// @brief Field didPressContinueButtonEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___didPressContinueButtonEvent;

  /// @brief Field didPressMenuButtonEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___didPressMenuButtonEvent;

  /// @brief Field didPressRestartButtonEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didPressRestartButtonEvent;

  /// @brief Field didFinishResumeAnimationEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didFinishResumeAnimationEvent;

  /// @brief Field _buttonBinder, offset: 0x88, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _disabledInteractionRemainingTime, offset: 0x90, size: 0x4, def value: None
  float_t ____disabledInteractionRemainingTime;

  /// @brief Field kDisabledInteractionDuration offset 0xffffffff size 0x4
  static constexpr float_t kDisabledInteractionDuration{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseMenuManager, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____pauseAnimationController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____levelBar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____continueButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____restartButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____backButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____backButtonText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____pauseContainerTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____initData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____vrPlatformHelper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____environmentSpawnRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didPressContinueButtonEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didPressMenuButtonEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didPressRestartButtonEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ___didFinishResumeAnimationEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____buttonBinder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseMenuManager, ____disabledInteractionRemainingTime) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PauseMenuManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseMenuManager*, "", "PauseMenuManager");
NEED_NO_BOX(::GlobalNamespace::__PauseMenuManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PauseMenuManager__InitData*, "", "PauseMenuManager/InitData");
