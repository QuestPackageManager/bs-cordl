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
namespace System {
class Action;
}
namespace GlobalNamespace {
class PauseAnimationController;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class __PauseMenuManager__InitData;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5066))
// CS Name: ::PauseMenuManager::InitData*
class CORDL_TYPE __PauseMenuManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field backButtonText, offset 0x10, size 0x8
  __declspec(property(get = __get_backButtonText, put = __set_backButtonText))::StringW backButtonText;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __get_beatmapDifficulty, put = __set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __get_beatmapCharacteristic, put = __set_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  /// @brief Field showRestartButton, offset 0x30, size 0x1
  __declspec(property(get = __get_showRestartButton, put = __set_showRestartButton)) bool showRestartButton;

  /// @brief Field showLevelBar, offset 0x31, size 0x1
  __declspec(property(get = __get_showLevelBar, put = __set_showLevelBar)) bool showLevelBar;

  constexpr ::StringW& __get_backButtonText();

  constexpr ::StringW const& __get_backButtonText() const;

  constexpr void __set_backButtonText(::StringW value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

  constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get_beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get_beatmapCharacteristic() const;

  constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr bool& __get_showRestartButton();

  constexpr bool const& __get_showRestartButton() const;

  constexpr void __set_showRestartButton(bool value);

  constexpr bool& __get_showLevelBar();

  constexpr bool const& __get_showLevelBar() const;

  constexpr void __set_showLevelBar(bool value);

  static inline ::GlobalNamespace::__PauseMenuManager__InitData* New_ctor(::StringW backButtonText, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                          ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                          bool showRestartButton, bool showLevelBar);

  /// @brief Method .ctor addr 0x23c911c size 0x5c virtual false final false
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
  ::GlobalNamespace::BeatmapCharacteristicSO* ___beatmapCharacteristic;

  /// @brief Field showRestartButton, offset: 0x30, size: 0x1, def value: None
  bool ___showRestartButton;

  /// @brief Field showLevelBar, offset: 0x31, size: 0x1, def value: None
  bool ___showLevelBar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PauseMenuManager__InitData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PauseMenuManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5067))
// CS Name: ::PauseMenuManager*
class CORDL_TYPE PauseMenuManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__PauseMenuManager__InitData;

  /// @brief Field _pauseAnimationController, offset 0x18, size 0x8
  __declspec(property(get = __get__pauseAnimationController, put = __set__pauseAnimationController))::GlobalNamespace::PauseAnimationController* _pauseAnimationController;

  /// @brief Field _levelBar, offset 0x20, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _continueButton, offset 0x28, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _restartButton, offset 0x30, size 0x8
  __declspec(property(get = __get__restartButton, put = __set__restartButton))::UnityEngine::UI::Button* _restartButton;

  /// @brief Field _backButton, offset 0x38, size 0x8
  __declspec(property(get = __get__backButton, put = __set__backButton))::UnityEngine::UI::Button* _backButton;

  /// @brief Field _backButtonText, offset 0x40, size 0x8
  __declspec(property(get = __get__backButtonText, put = __set__backButtonText))::TMPro::TextMeshProUGUI* _backButtonText;

  /// @brief Field _pauseContainerTransform, offset 0x48, size 0x8
  __declspec(property(get = __get__pauseContainerTransform, put = __set__pauseContainerTransform))::UnityEngine::Transform* _pauseContainerTransform;

  /// @brief Field _initData, offset 0x50, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__PauseMenuManager__InitData* _initData;

  /// @brief Field _vrPlatformHelper, offset 0x58, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _environmentSpawnRotation, offset 0x60, size 0x8
  __declspec(property(get = __get__environmentSpawnRotation, put = __set__environmentSpawnRotation))::GlobalNamespace::EnvironmentSpawnRotation* _environmentSpawnRotation;

  /// @brief Field didPressContinueButtonEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_didPressContinueButtonEvent, put = __set_didPressContinueButtonEvent))::System::Action* didPressContinueButtonEvent;

  /// @brief Field didPressMenuButtonEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_didPressMenuButtonEvent, put = __set_didPressMenuButtonEvent))::System::Action* didPressMenuButtonEvent;

  /// @brief Field didPressRestartButtonEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_didPressRestartButtonEvent, put = __set_didPressRestartButtonEvent))::System::Action* didPressRestartButtonEvent;

  /// @brief Field didFinishResumeAnimationEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_didFinishResumeAnimationEvent, put = __set_didFinishResumeAnimationEvent))::System::Action* didFinishResumeAnimationEvent;

  /// @brief Field _buttonBinder, offset 0x88, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _disabledInteractionRemainingTime, offset 0x90, size 0x4
  __declspec(property(get = __get__disabledInteractionRemainingTime, put = __set__disabledInteractionRemainingTime)) float_t _disabledInteractionRemainingTime;

  constexpr ::GlobalNamespace::PauseAnimationController*& __get__pauseAnimationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseAnimationController*> const& __get__pauseAnimationController() const;

  constexpr void __set__pauseAnimationController(::GlobalNamespace::PauseAnimationController* value);

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__restartButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__restartButton() const;

  constexpr void __set__restartButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__backButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__backButton() const;

  constexpr void __set__backButton(::UnityEngine::UI::Button* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__backButtonText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__backButtonText() const;

  constexpr void __set__backButtonText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Transform*& __get__pauseContainerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__pauseContainerTransform() const;

  constexpr void __set__pauseContainerTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::__PauseMenuManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseMenuManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__PauseMenuManager__InitData* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::GlobalNamespace::EnvironmentSpawnRotation*& __get__environmentSpawnRotation();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> const& __get__environmentSpawnRotation() const;

  constexpr void __set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation* value);

  constexpr ::System::Action*& __get_didPressContinueButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPressContinueButtonEvent() const;

  constexpr void __set_didPressContinueButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didPressMenuButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPressMenuButtonEvent() const;

  constexpr void __set_didPressMenuButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didPressRestartButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPressRestartButtonEvent() const;

  constexpr void __set_didPressRestartButtonEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didFinishResumeAnimationEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didFinishResumeAnimationEvent() const;

  constexpr void __set_didFinishResumeAnimationEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr float_t& __get__disabledInteractionRemainingTime();

  constexpr float_t const& __get__disabledInteractionRemainingTime() const;

  constexpr void __set__disabledInteractionRemainingTime(float_t value);

  /// @brief Method add_didPressContinueButtonEvent addr 0x23c85d0 size 0x9c virtual false final false
  inline void add_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressContinueButtonEvent addr 0x23c866c size 0x9c virtual false final false
  inline void remove_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method add_didPressMenuButtonEvent addr 0x23c8708 size 0x9c virtual false final false
  inline void add_didPressMenuButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressMenuButtonEvent addr 0x23c87a4 size 0x9c virtual false final false
  inline void remove_didPressMenuButtonEvent(::System::Action* value);

  /// @brief Method add_didPressRestartButtonEvent addr 0x23c8840 size 0x9c virtual false final false
  inline void add_didPressRestartButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressRestartButtonEvent addr 0x23c88dc size 0x9c virtual false final false
  inline void remove_didPressRestartButtonEvent(::System::Action* value);

  /// @brief Method add_didFinishResumeAnimationEvent addr 0x23c8978 size 0x9c virtual false final false
  inline void add_didFinishResumeAnimationEvent(::System::Action* value);

  /// @brief Method remove_didFinishResumeAnimationEvent addr 0x23c8a14 size 0x9c virtual false final false
  inline void remove_didFinishResumeAnimationEvent(::System::Action* value);

  /// @brief Method Awake addr 0x23c8ab0 size 0x1c8 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x23c8c78 size 0x128 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23c8da0 size 0xe4 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x23c8e84 size 0x130 virtual false final false
  inline void Update();

  /// @brief Method ShowMenu addr 0x23c9070 size 0x5c virtual false final false
  inline void ShowMenu();

  /// @brief Method StartResumeAnimation addr 0x23c90cc size 0x2c virtual false final false
  inline void StartResumeAnimation();

  /// @brief Method HandleResumeFromPauseAnimationDidFinish addr 0x23c90f8 size 0x1c virtual false final false
  inline void HandleResumeFromPauseAnimationDidFinish();

  /// @brief Method MenuButtonPressed addr 0x23c9038 size 0x38 virtual false final false
  inline void MenuButtonPressed();

  /// @brief Method RestartButtonPressed addr 0x23c8fec size 0x4c virtual false final false
  inline void RestartButtonPressed();

  /// @brief Method ContinueButtonPressed addr 0x23c8fb4 size 0x38 virtual false final false
  inline void ContinueButtonPressed();

  static inline ::GlobalNamespace::PauseMenuManager* New_ctor();

  /// @brief Method .ctor addr 0x23c9114 size 0x8 virtual false final false
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
  ::GlobalNamespace::PauseAnimationController* ____pauseAnimationController;

  /// @brief Field _levelBar, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _continueButton, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _restartButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____restartButton;

  /// @brief Field _backButton, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____backButton;

  /// @brief Field _backButtonText, offset: 0x40, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____backButtonText;

  /// @brief Field _pauseContainerTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ____pauseContainerTransform;

  /// @brief Field _initData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__PauseMenuManager__InitData* ____initData;

  /// @brief Field _vrPlatformHelper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _environmentSpawnRotation, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSpawnRotation* ____environmentSpawnRotation;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PauseMenuManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseMenuManager*, "", "PauseMenuManager");
NEED_NO_BOX(::GlobalNamespace::__PauseMenuManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PauseMenuManager__InitData*, "", "PauseMenuManager/InitData");
