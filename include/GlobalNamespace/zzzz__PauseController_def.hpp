#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4416))
// CS Name: ::PauseController::InitData*
class CORDL_TYPE __PauseController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startPaused, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_startPaused, put = __cordl_internal_set_startPaused)) bool startPaused;

  constexpr bool& __cordl_internal_get_startPaused();

  constexpr bool const& __cordl_internal_get_startPaused() const;

  constexpr void __cordl_internal_set_startPaused(bool value);

  static inline ::GlobalNamespace::__PauseController__InitData* New_ctor(bool startPaused);

  /// @brief Method .ctor, addr 0x238640c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool startPaused);

  // Ctor Parameters [CppParam { name: "", ty: "__PauseController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PauseController__InitData(__PauseController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PauseController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PauseController__InitData(__PauseController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PauseController__InitData();

public:
  /// @brief Field startPaused, offset: 0x10, size: 0x1, def value: None
  bool ___startPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PauseController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseController__InitData, ___startPaused) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4417))
// CS Name: ::PauseController::<>c__DisplayClass25_0*
class CORDL_TYPE __PauseController____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  constexpr bool& __cordl_internal_get_value();

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(bool value);

  static inline ::GlobalNamespace::__PauseController____c__DisplayClass25_0* New_ctor();

  /// @brief Method .ctor, addr 0x2384f5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_canPause>b__0, addr 0x2386434, size 0x10, virtual false, abstract: false, final false
  inline void _get_canPause_b__0(bool newValue);

  // Ctor Parameters [CppParam { name: "", ty: "__PauseController____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PauseController____c__DisplayClass25_0(__PauseController____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PauseController____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PauseController____c__DisplayClass25_0(__PauseController____c__DisplayClass25_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PauseController____c__DisplayClass25_0();

public:
  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  bool ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PauseController____c__DisplayClass25_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PauseController____c__DisplayClass25_0, ___value) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PauseController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 130, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4418))
// CS Name: ::PauseController*
class CORDL_TYPE PauseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass25_0 = ::GlobalNamespace::__PauseController____c__DisplayClass25_0;

  using InitData = ::GlobalNamespace::__PauseController__InitData;

  /// @brief Field _pauseMenuManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseMenuManager, put = __cordl_internal_set__pauseMenuManager))::UnityW<::GlobalNamespace::PauseMenuManager> _pauseMenuManager;

  /// @brief Field _gamePause, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _menuButtonTrigger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__menuButtonTrigger, put = __cordl_internal_set__menuButtonTrigger))::GlobalNamespace::IMenuButtonTrigger* _menuButtonTrigger;

  /// @brief Field _beatmapObjectManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _levelRestartController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__levelRestartController, put = __cordl_internal_set__levelRestartController))::GlobalNamespace::ILevelRestartController* _levelRestartController;

  /// @brief Field _returnToMenuController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__returnToMenuController, put = __cordl_internal_set__returnToMenuController))::GlobalNamespace::IReturnToMenuController* _returnToMenuController;

  /// @brief Field _vrPlatformHelper, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _levelStartController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelStartController, put = __cordl_internal_set__levelStartController))::GlobalNamespace::ILevelStartController* _levelStartController;

  /// @brief Field _initData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__PauseController__InitData* _initData;

  /// @brief Field didPauseEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent))::System::Action* didPauseEvent;

  /// @brief Field didResumeEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent))::System::Action* didResumeEvent;

  /// @brief Field canPauseEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_canPauseEvent, put = __cordl_internal_set_canPauseEvent))::System::Action_1<::System::Action_1<bool>*>* canPauseEvent;

  /// @brief Field didReturnToMenuEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didReturnToMenuEvent, put = __cordl_internal_set_didReturnToMenuEvent))::System::Action* didReturnToMenuEvent;

  /// @brief Field _wantsToPause, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__wantsToPause, put = __cordl_internal_set__wantsToPause)) bool _wantsToPause;

  /// @brief Field _paused, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) bool _paused;

  __declspec(property(get = get_wantsToPause)) bool wantsToPause;

  __declspec(property(get = get_canPause)) bool canPause;

  constexpr ::UnityW<::GlobalNamespace::PauseMenuManager>& __cordl_internal_get__pauseMenuManager();

  constexpr ::UnityW<::GlobalNamespace::PauseMenuManager> const& __cordl_internal_get__pauseMenuManager() const;

  constexpr void __cordl_internal_set__pauseMenuManager(::UnityW<::GlobalNamespace::PauseMenuManager> value);

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause() const;

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr ::GlobalNamespace::IMenuButtonTrigger*& __cordl_internal_get__menuButtonTrigger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuButtonTrigger*> const& __cordl_internal_get__menuButtonTrigger() const;

  constexpr void __cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::ILevelRestartController*& __cordl_internal_get__levelRestartController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelRestartController*> const& __cordl_internal_get__levelRestartController() const;

  constexpr void __cordl_internal_set__levelRestartController(::GlobalNamespace::ILevelRestartController* value);

  constexpr ::GlobalNamespace::IReturnToMenuController*& __cordl_internal_get__returnToMenuController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReturnToMenuController*> const& __cordl_internal_get__returnToMenuController() const;

  constexpr void __cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::GlobalNamespace::ILevelStartController*& __cordl_internal_get__levelStartController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelStartController*> const& __cordl_internal_get__levelStartController() const;

  constexpr void __cordl_internal_set__levelStartController(::GlobalNamespace::ILevelStartController* value);

  constexpr ::GlobalNamespace::__PauseController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__PauseController__InitData* value);

  constexpr ::System::Action*& __cordl_internal_get_didPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPauseEvent() const;

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didResumeEvent() const;

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr ::System::Action_1<::System::Action_1<bool>*>*& __cordl_internal_get_canPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Action_1<bool>*>*> const& __cordl_internal_get_canPauseEvent() const;

  constexpr void __cordl_internal_set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  constexpr ::System::Action*& __cordl_internal_get_didReturnToMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didReturnToMenuEvent() const;

  constexpr void __cordl_internal_set_didReturnToMenuEvent(::System::Action* value);

  constexpr bool& __cordl_internal_get__wantsToPause();

  constexpr bool const& __cordl_internal_get__wantsToPause() const;

  constexpr void __cordl_internal_set__wantsToPause(bool value);

  constexpr bool& __cordl_internal_get__paused();

  constexpr bool const& __cordl_internal_get__paused() const;

  constexpr void __cordl_internal_set__paused(bool value);

  /// @brief Method add_didPauseEvent, addr 0x237bcd0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didPauseEvent, addr 0x237b54c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x237bd6c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x237b5e8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method add_canPauseEvent, addr 0x237bc20, size 0xb0, virtual false, abstract: false, final false
  inline void add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method remove_canPauseEvent, addr 0x237b49c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method add_didReturnToMenuEvent, addr 0x2384d30, size 0x9c, virtual false, abstract: false, final false
  inline void add_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method remove_didReturnToMenuEvent, addr 0x2384dcc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method get_wantsToPause, addr 0x2384e68, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsToPause();

  /// @brief Method get_canPause, addr 0x2384e70, size 0xec, virtual false, abstract: false, final false
  inline bool get_canPause();

  /// @brief Method Start, addr 0x2384f64, size 0x56c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23857f0, size 0x598, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnApplicationPause, addr 0x2385ff8, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method Pause, addr 0x237c8e4, size 0x110, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method PauseGameOnStartupIfItShouldBePaused, addr 0x238605c, size 0x4c, virtual false, abstract: false, final false
  inline void PauseGameOnStartupIfItShouldBePaused();

  /// @brief Method HandleLevelDidStart, addr 0x23860a8, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelDidStart();

  /// @brief Method HandleLevelWillStartIntro, addr 0x23860ac, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelWillStartIntro();

  /// @brief Method HandleMenuButtonTriggered, addr 0x23860b0, size 0x4, virtual false, abstract: false, final false
  inline void HandleMenuButtonTriggered();

  /// @brief Method HandleInputFocusWasCaptured, addr 0x23860b4, size 0x4, virtual false, abstract: false, final false
  inline void HandleInputFocusWasCaptured();

  /// @brief Method HandleHMDUnmounted, addr 0x23860b8, size 0x4, virtual false, abstract: false, final false
  inline void HandleHMDUnmounted();

  /// @brief Method HandleControllersDidDisconnectEvent, addr 0x23860bc, size 0x4, virtual false, abstract: false, final false
  inline void HandleControllersDidDisconnectEvent();

  /// @brief Method HandlePauseMenuManagerDidFinishResumeAnimation, addr 0x23860c0, size 0xec, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidFinishResumeAnimation();

  /// @brief Method HandlePauseMenuManagerDidPressContinueButton, addr 0x23861ac, size 0xd8, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressContinueButton();

  /// @brief Method HandlePauseMenuManagerDidPressRestartButton, addr 0x23862ac, size 0xa0, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressRestartButton();

  /// @brief Method HandlePauseMenuManagerDidPressMenuButton, addr 0x238634c, size 0xb8, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressMenuButton();

  /// @brief Method GetDefaultPausedState, addr 0x2385740, size 0xb0, virtual false, abstract: false, final false
  inline bool GetDefaultPausedState();

  static inline ::GlobalNamespace::PauseController* New_ctor();

  /// @brief Method .ctor, addr 0x2386404, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PauseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseController(PauseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseController(PauseController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseController();

public:
  /// @brief Field _pauseMenuManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseMenuManager> ____pauseMenuManager;

  /// @brief Field _gamePause, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _menuButtonTrigger, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMenuButtonTrigger* ____menuButtonTrigger;

  /// @brief Field _beatmapObjectManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _levelRestartController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ILevelRestartController* ____levelRestartController;

  /// @brief Field _returnToMenuController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IReturnToMenuController* ____returnToMenuController;

  /// @brief Field _vrPlatformHelper, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _levelStartController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ILevelStartController* ____levelStartController;

  /// @brief Field _initData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__PauseController__InitData* ____initData;

  /// @brief Field didPauseEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field didResumeEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field canPauseEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::System::Action_1<bool>*>* ___canPauseEvent;

  /// @brief Field didReturnToMenuEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didReturnToMenuEvent;

  /// @brief Field _wantsToPause, offset: 0x80, size: 0x1, def value: None
  bool ____wantsToPause;

  /// @brief Field _paused, offset: 0x81, size: 0x1, def value: None
  bool ____paused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseController, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____pauseMenuManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____gamePause) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____menuButtonTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____beatmapObjectManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____levelRestartController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____returnToMenuController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____vrPlatformHelper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____levelStartController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____initData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didPauseEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didResumeEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___canPauseEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didReturnToMenuEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____wantsToPause) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____paused) == 0x81, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PauseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController*, "", "PauseController");
NEED_NO_BOX(::GlobalNamespace::__PauseController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PauseController__InitData*, "", "PauseController/InitData");
NEED_NO_BOX(::GlobalNamespace::__PauseController____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PauseController____c__DisplayClass25_0*, "", "PauseController/<>c__DisplayClass25_0");
