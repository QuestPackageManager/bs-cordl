#pragma once
// IWYU pragma private; include "GlobalNamespace/PauseController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PauseController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class PauseMenuManager;
}
namespace GlobalNamespace {
class __PauseController__InitData;
}
namespace GlobalNamespace {
class __PauseController____c__DisplayClass25_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class __PauseController__InitData;
}
namespace GlobalNamespace {
class __PauseController____c__DisplayClass25_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PauseController);
MARK_REF_PTR_T(::GlobalNamespace::__PauseController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__PauseController____c__DisplayClass25_0);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PauseController::InitData*
class CORDL_TYPE __PauseController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startPaused, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_startPaused, put = __cordl_internal_set_startPaused)) bool startPaused;

  static inline ::GlobalNamespace::__PauseController__InitData* New_ctor(bool startPaused);

  constexpr bool const& __cordl_internal_get_startPaused() const;

  constexpr bool& __cordl_internal_get_startPaused();

  constexpr void __cordl_internal_set_startPaused(bool value);

  /// @brief Method .ctor, addr 0x3b35070, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool startPaused);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PauseController__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PauseController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PauseController__InitData(__PauseController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PauseController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PauseController__InitData(__PauseController__InitData const&) = delete;

  /// @brief Field startPaused, offset: 0x10, size: 0x1, def value: None
  bool ___startPaused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PauseController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseController__InitData, ___startPaused) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PauseController::<>c__DisplayClass25_0*
class CORDL_TYPE __PauseController____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  static inline ::GlobalNamespace::__PauseController____c__DisplayClass25_0* New_ctor();

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr bool& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(bool value);

  /// @brief Method .ctor, addr 0x3b33b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_canPause>b__0, addr 0x3b35098, size 0x10, virtual false, abstract: false, final false
  inline void _get_canPause_b__0(bool newValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PauseController____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PauseController____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PauseController____c__DisplayClass25_0(__PauseController____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PauseController____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PauseController____c__DisplayClass25_0(__PauseController____c__DisplayClass25_0 const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  bool ___value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PauseController____c__DisplayClass25_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseController____c__DisplayClass25_0, ___value) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PauseController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 138, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PauseController*
class CORDL_TYPE PauseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__PauseController__InitData;

  using __c__DisplayClass25_0 = ::GlobalNamespace::__PauseController____c__DisplayClass25_0;

  /// @brief Field _beatmapObjectManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gamePause, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _initData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__PauseController__InitData* _initData;

  /// @brief Field _levelRestartController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelRestartController, put = __cordl_internal_set__levelRestartController)) ::GlobalNamespace::ILevelRestartController* _levelRestartController;

  /// @brief Field _levelStartController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__levelStartController, put = __cordl_internal_set__levelStartController)) ::GlobalNamespace::ILevelStartController* _levelStartController;

  /// @brief Field _menuButtonTrigger, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__menuButtonTrigger, put = __cordl_internal_set__menuButtonTrigger)) ::GlobalNamespace::IMenuButtonTrigger* _menuButtonTrigger;

  /// @brief Field _pauseMenuManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseMenuManager, put = __cordl_internal_set__pauseMenuManager)) ::UnityW<::GlobalNamespace::PauseMenuManager> _pauseMenuManager;

  /// @brief Field _paused, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) bool _paused;

  /// @brief Field _returnToMenuController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__returnToMenuController, put = __cordl_internal_set__returnToMenuController)) ::GlobalNamespace::IReturnToMenuController* _returnToMenuController;

  /// @brief Field _vrPlatformHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _wantsToPause, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__wantsToPause, put = __cordl_internal_set__wantsToPause)) bool _wantsToPause;

  __declspec(property(get = get_canPause)) bool canPause;

  /// @brief Field canPauseEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_canPauseEvent, put = __cordl_internal_set_canPauseEvent)) ::System::Action_1<::System::Action_1<bool>*>* canPauseEvent;

  /// @brief Field didPauseEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent)) ::System::Action* didPauseEvent;

  /// @brief Field didResumeEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent)) ::System::Action* didResumeEvent;

  /// @brief Field didReturnToMenuEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didReturnToMenuEvent, put = __cordl_internal_set_didReturnToMenuEvent)) ::System::Action* didReturnToMenuEvent;

  __declspec(property(get = get_wantsToPause)) bool wantsToPause;

  /// @brief Method GetDefaultPausedState, addr 0x3b34320, size 0xb0, virtual false, abstract: false, final false
  inline bool GetDefaultPausedState();

  /// @brief Method HandleControllersDidDisconnectEvent, addr 0x3b34d20, size 0x4, virtual false, abstract: false, final false
  inline void HandleControllersDidDisconnectEvent();

  /// @brief Method HandleFocusWasCaptured, addr 0x3b34d18, size 0x4, virtual false, abstract: false, final false
  inline void HandleFocusWasCaptured();

  /// @brief Method HandleHMDUnmounted, addr 0x3b34d1c, size 0x4, virtual false, abstract: false, final false
  inline void HandleHMDUnmounted();

  /// @brief Method HandleLevelDidStart, addr 0x3b34d0c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelDidStart();

  /// @brief Method HandleLevelWillStartIntro, addr 0x3b34d10, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelWillStartIntro();

  /// @brief Method HandleMenuButtonTriggered, addr 0x3b34d14, size 0x4, virtual false, abstract: false, final false
  inline void HandleMenuButtonTriggered();

  /// @brief Method HandlePauseMenuManagerDidFinishResumeAnimation, addr 0x3b34d24, size 0xec, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidFinishResumeAnimation();

  /// @brief Method HandlePauseMenuManagerDidPressContinueButton, addr 0x3b34e10, size 0xd8, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressContinueButton();

  /// @brief Method HandlePauseMenuManagerDidPressMenuButton, addr 0x3b34fb0, size 0xb8, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressMenuButton();

  /// @brief Method HandlePauseMenuManagerDidPressRestartButton, addr 0x3b34f10, size 0xa0, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressRestartButton();

  static inline ::GlobalNamespace::PauseController* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x3b34bbc, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x3b343d0, size 0x57c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3b2aec4, size 0x110, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method PauseGameOnStartupIfItShouldBePaused, addr 0x3b34cc0, size 0x4c, virtual false, abstract: false, final false
  inline void PauseGameOnStartupIfItShouldBePaused();

  /// @brief Method Restart, addr 0x3b34bc8, size 0xa0, virtual false, abstract: false, final false
  inline void Restart();

  /// @brief Method Start, addr 0x3b33b64, size 0x54c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::__PauseController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::ILevelRestartController*& __cordl_internal_get__levelRestartController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelRestartController*> const& __cordl_internal_get__levelRestartController() const;

  constexpr ::GlobalNamespace::ILevelStartController*& __cordl_internal_get__levelStartController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelStartController*> const& __cordl_internal_get__levelStartController() const;

  constexpr ::GlobalNamespace::IMenuButtonTrigger*& __cordl_internal_get__menuButtonTrigger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuButtonTrigger*> const& __cordl_internal_get__menuButtonTrigger() const;

  constexpr ::UnityW<::GlobalNamespace::PauseMenuManager> const& __cordl_internal_get__pauseMenuManager() const;

  constexpr ::UnityW<::GlobalNamespace::PauseMenuManager>& __cordl_internal_get__pauseMenuManager();

  constexpr bool const& __cordl_internal_get__paused() const;

  constexpr bool& __cordl_internal_get__paused();

  constexpr ::GlobalNamespace::IReturnToMenuController*& __cordl_internal_get__returnToMenuController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReturnToMenuController*> const& __cordl_internal_get__returnToMenuController() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr bool const& __cordl_internal_get__wantsToPause() const;

  constexpr bool& __cordl_internal_get__wantsToPause();

  constexpr ::System::Action_1<::System::Action_1<bool>*>*& __cordl_internal_get_canPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Action_1<bool>*>*> const& __cordl_internal_get_canPauseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPauseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didResumeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didReturnToMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didReturnToMenuEvent() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__PauseController__InitData* value);

  constexpr void __cordl_internal_set__levelRestartController(::GlobalNamespace::ILevelRestartController* value);

  constexpr void __cordl_internal_set__levelStartController(::GlobalNamespace::ILevelStartController* value);

  constexpr void __cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value);

  constexpr void __cordl_internal_set__pauseMenuManager(::UnityW<::GlobalNamespace::PauseMenuManager> value);

  constexpr void __cordl_internal_set__paused(bool value);

  constexpr void __cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__wantsToPause(bool value);

  constexpr void __cordl_internal_set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b35068, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_canPauseEvent, addr 0x3b2a21c, size 0xb0, virtual false, abstract: false, final false
  inline void add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method add_didPauseEvent, addr 0x3b2a2cc, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x3b2a368, size 0x9c, virtual false, abstract: false, final false
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method add_didReturnToMenuEvent, addr 0x3b33934, size 0x9c, virtual false, abstract: false, final false
  inline void add_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method get_canPause, addr 0x3b33a74, size 0xe8, virtual false, abstract: false, final false
  inline bool get_canPause();

  /// @brief Method get_wantsToPause, addr 0x3b33a6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsToPause();

  /// @brief Method remove_canPauseEvent, addr 0x3b29aa0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method remove_didPauseEvent, addr 0x3b29b50, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x3b29bec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didReturnToMenuEvent, addr 0x3b339d0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didReturnToMenuEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseController(PauseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseController(PauseController const&) = delete;

  /// @brief Field _pauseMenuManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseMenuManager> ____pauseMenuManager;

  /// @brief Field _gamePause, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _menuButtonTrigger, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IMenuButtonTrigger* ____menuButtonTrigger;

  /// @brief Field _beatmapObjectManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _levelRestartController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ILevelRestartController* ____levelRestartController;

  /// @brief Field _returnToMenuController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IReturnToMenuController* ____returnToMenuController;

  /// @brief Field _vrPlatformHelper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _levelStartController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ILevelStartController* ____levelStartController;

  /// @brief Field _initData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__PauseController__InitData* ____initData;

  /// @brief Field didPauseEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field didResumeEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field canPauseEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::System::Action_1<bool>*>* ___canPauseEvent;

  /// @brief Field didReturnToMenuEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didReturnToMenuEvent;

  /// @brief Field _wantsToPause, offset: 0x88, size: 0x1, def value: None
  bool ____wantsToPause;

  /// @brief Field _paused, offset: 0x89, size: 0x1, def value: None
  bool ____paused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____pauseMenuManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____gamePause) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____menuButtonTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____beatmapObjectManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____levelRestartController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____returnToMenuController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____vrPlatformHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____levelStartController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____initData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didPauseEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didResumeEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___canPauseEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didReturnToMenuEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____wantsToPause) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____paused) == 0x89, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PauseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController*, "", "PauseController");
NEED_NO_BOX(::GlobalNamespace::__PauseController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PauseController__InitData*, "", "PauseController/InitData");
NEED_NO_BOX(::GlobalNamespace::__PauseController____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PauseController____c__DisplayClass25_0*, "", "PauseController/<>c__DisplayClass25_0");
