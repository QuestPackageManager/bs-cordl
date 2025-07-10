#pragma once
// IWYU pragma private; include "GlobalNamespace/PauseController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
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
class PauseController_InitData;
}
namespace GlobalNamespace {
struct PauseController_PauseState;
}
namespace GlobalNamespace {
class PauseController___c__DisplayClass29_0;
}
namespace GlobalNamespace {
class PauseMenuManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct PauseController_PauseState;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class PauseController_InitData;
}
namespace GlobalNamespace {
class PauseController___c__DisplayClass29_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PauseController_PauseState);
MARK_REF_PTR_T(::GlobalNamespace::PauseController);
MARK_REF_PTR_T(::GlobalNamespace::PauseController_InitData);
MARK_REF_PTR_T(::GlobalNamespace::PauseController___c__DisplayClass29_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PauseController/PauseState
struct CORDL_TYPE PauseController_PauseState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PauseController_PauseState_Unwrapped
  enum struct __PauseController_PauseState_Unwrapped : int32_t {
    __E_Paused = static_cast<int32_t>(0x0),
    __E_Resuming = static_cast<int32_t>(0x1),
    __E_Playing = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PauseController_PauseState_Unwrapped() const noexcept {
    return static_cast<__PauseController_PauseState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseController_PauseState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PauseController_PauseState(int32_t value__) noexcept;

  /// @brief Field Paused value: I32(0)
  static ::GlobalNamespace::PauseController_PauseState const Paused;

  /// @brief Field Playing value: I32(2)
  static ::GlobalNamespace::PauseController_PauseState const Playing;

  /// @brief Field Resuming value: I32(1)
  static ::GlobalNamespace::PauseController_PauseState const Resuming;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4440 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseController_PauseState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseController_PauseState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseController/InitData
class CORDL_TYPE PauseController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startPaused, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_startPaused, put = __cordl_internal_set_startPaused)) bool startPaused;

  static inline ::GlobalNamespace::PauseController_InitData* New_ctor(bool startPaused);

  constexpr bool const& __cordl_internal_get_startPaused() const;

  constexpr bool& __cordl_internal_get_startPaused();

  constexpr void __cordl_internal_set_startPaused(bool value);

  /// @brief Method .ctor, addr 0x3bb0188, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool startPaused);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseController_InitData(PauseController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseController_InitData(PauseController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4441 };

  /// @brief Field startPaused, offset: 0x10, size: 0x1, def value: None
  bool ___startPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseController_InitData, ___startPaused) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseController_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseController/<>c__DisplayClass29_0
class CORDL_TYPE PauseController___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  static inline ::GlobalNamespace::PauseController___c__DisplayClass29_0* New_ctor();

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr bool& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(bool value);

  /// @brief Method .ctor, addr 0x3bae8e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_canPause>b__0, addr 0x3bb01b0, size 0x10, virtual false, abstract: false, final false
  inline void _get_canPause_b__0(bool newValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseController___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseController___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseController___c__DisplayClass29_0(PauseController___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseController___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseController___c__DisplayClass29_0(PauseController___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4442 };

  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  bool ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseController___c__DisplayClass29_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseController___c__DisplayClass29_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PauseController::PauseState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseController
class CORDL_TYPE PauseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::PauseController_InitData;

  using PauseState = ::GlobalNamespace::PauseController_PauseState;

  using __c__DisplayClass29_0 = ::GlobalNamespace::PauseController___c__DisplayClass29_0;

  /// @brief Field _beatmapObjectManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gamePause, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _initData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::PauseController_InitData* _initData;

  /// @brief Field _levelRestartController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelRestartController, put = __cordl_internal_set__levelRestartController)) ::GlobalNamespace::ILevelRestartController* _levelRestartController;

  /// @brief Field _levelStartController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__levelStartController, put = __cordl_internal_set__levelStartController)) ::GlobalNamespace::ILevelStartController* _levelStartController;

  /// @brief Field _menuButtonTrigger, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__menuButtonTrigger, put = __cordl_internal_set__menuButtonTrigger)) ::GlobalNamespace::IMenuButtonTrigger* _menuButtonTrigger;

  /// @brief Field _pauseChangedStateTime, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__pauseChangedStateTime, put = __cordl_internal_set__pauseChangedStateTime)) float_t _pauseChangedStateTime;

  /// @brief Field _pauseMenuManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseMenuManager, put = __cordl_internal_set__pauseMenuManager)) ::UnityW<::GlobalNamespace::PauseMenuManager> _pauseMenuManager;

  /// @brief Field _paused, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) ::GlobalNamespace::PauseController_PauseState _paused;

  /// @brief Field _returnToMenuController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__returnToMenuController, put = __cordl_internal_set__returnToMenuController)) ::GlobalNamespace::IReturnToMenuController* _returnToMenuController;

  /// @brief Field _vrPlatformHelper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _wantsToPause, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__wantsToPause, put = __cordl_internal_set__wantsToPause)) bool _wantsToPause;

  __declspec(property(get = get_canChangePauseState)) bool canChangePauseState;

  __declspec(property(get = get_canPause)) bool canPause;

  /// @brief Field canPauseEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_canPauseEvent, put = __cordl_internal_set_canPauseEvent)) ::System::Action_1<::System::Action_1<bool>*>* canPauseEvent;

  /// @brief Field didPauseEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent)) ::System::Action* didPauseEvent;

  /// @brief Field didResumeEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent)) ::System::Action* didResumeEvent;

  /// @brief Field didReturnToMenuEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didReturnToMenuEvent, put = __cordl_internal_set_didReturnToMenuEvent)) ::System::Action* didReturnToMenuEvent;

  /// @brief Field didStartToResumeEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartToResumeEvent, put = __cordl_internal_set_didStartToResumeEvent)) ::System::Action* didStartToResumeEvent;

  __declspec(property(get = get_wantsToPause)) bool wantsToPause;

  /// @brief Method GetDefaultPausedState, addr 0x3baf1bc, size 0x120, virtual false, abstract: false, final false
  inline bool GetDefaultPausedState();

  /// @brief Method HandleControllersDidDisconnectEvent, addr 0x3bafd44, size 0x4, virtual false, abstract: false, final false
  inline void HandleControllersDidDisconnectEvent();

  /// @brief Method HandleFocusWasCaptured, addr 0x3bafd3c, size 0x4, virtual false, abstract: false, final false
  inline void HandleFocusWasCaptured();

  /// @brief Method HandleHMDUnmounted, addr 0x3bafd40, size 0x4, virtual false, abstract: false, final false
  inline void HandleHMDUnmounted();

  /// @brief Method HandleLevelDidStart, addr 0x3bafcf8, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelDidStart();

  /// @brief Method HandleLevelWillStartIntro, addr 0x3bafcfc, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelWillStartIntro();

  /// @brief Method HandleMenuButtonTriggered, addr 0x3bafd00, size 0x3c, virtual false, abstract: false, final false
  inline void HandleMenuButtonTriggered();

  /// @brief Method HandlePauseMenuManagerDidFinishResumeAnimation, addr 0x3bafd88, size 0xf4, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidFinishResumeAnimation();

  /// @brief Method HandlePauseMenuManagerDidPressContinueButton, addr 0x3bafe7c, size 0x104, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressContinueButton();

  /// @brief Method HandlePauseMenuManagerDidPressMenuButton, addr 0x3bb0094, size 0xe4, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressMenuButton();

  /// @brief Method HandlePauseMenuManagerDidPressRestartButton, addr 0x3baffc8, size 0xcc, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressRestartButton();

  /// @brief Method HandlePauseMenuManagerDidStartResumeAnimation, addr 0x3bafd48, size 0x40, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidStartResumeAnimation();

  static inline ::GlobalNamespace::PauseController* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x3bafba8, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x3baf2dc, size 0x5c0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x3ba57ec, size 0x118, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method PauseGameOnStartupIfItShouldBePaused, addr 0x3bafcac, size 0x4c, virtual false, abstract: false, final false
  inline void PauseGameOnStartupIfItShouldBePaused();

  /// @brief Method Restart, addr 0x3bafbb4, size 0xa0, virtual false, abstract: false, final false
  inline void Restart();

  /// @brief Method Start, addr 0x3bae920, size 0x590, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::GlobalNamespace::PauseController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::PauseController_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::ILevelRestartController* const& __cordl_internal_get__levelRestartController() const;

  constexpr ::GlobalNamespace::ILevelRestartController*& __cordl_internal_get__levelRestartController();

  constexpr ::GlobalNamespace::ILevelStartController* const& __cordl_internal_get__levelStartController() const;

  constexpr ::GlobalNamespace::ILevelStartController*& __cordl_internal_get__levelStartController();

  constexpr ::GlobalNamespace::IMenuButtonTrigger* const& __cordl_internal_get__menuButtonTrigger() const;

  constexpr ::GlobalNamespace::IMenuButtonTrigger*& __cordl_internal_get__menuButtonTrigger();

  constexpr float_t const& __cordl_internal_get__pauseChangedStateTime() const;

  constexpr float_t& __cordl_internal_get__pauseChangedStateTime();

  constexpr ::UnityW<::GlobalNamespace::PauseMenuManager> const& __cordl_internal_get__pauseMenuManager() const;

  constexpr ::UnityW<::GlobalNamespace::PauseMenuManager>& __cordl_internal_get__pauseMenuManager();

  constexpr ::GlobalNamespace::PauseController_PauseState const& __cordl_internal_get__paused() const;

  constexpr ::GlobalNamespace::PauseController_PauseState& __cordl_internal_get__paused();

  constexpr ::GlobalNamespace::IReturnToMenuController* const& __cordl_internal_get__returnToMenuController() const;

  constexpr ::GlobalNamespace::IReturnToMenuController*& __cordl_internal_get__returnToMenuController();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr bool const& __cordl_internal_get__wantsToPause() const;

  constexpr bool& __cordl_internal_get__wantsToPause();

  constexpr ::System::Action_1<::System::Action_1<bool>*>* const& __cordl_internal_get_canPauseEvent() const;

  constexpr ::System::Action_1<::System::Action_1<bool>*>*& __cordl_internal_get_canPauseEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didPauseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPauseEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didResumeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didResumeEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didReturnToMenuEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didReturnToMenuEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didStartToResumeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didStartToResumeEvent();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::PauseController_InitData* value);

  constexpr void __cordl_internal_set__levelRestartController(::GlobalNamespace::ILevelRestartController* value);

  constexpr void __cordl_internal_set__levelStartController(::GlobalNamespace::ILevelStartController* value);

  constexpr void __cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value);

  constexpr void __cordl_internal_set__pauseChangedStateTime(float_t value);

  constexpr void __cordl_internal_set__pauseMenuManager(::UnityW<::GlobalNamespace::PauseMenuManager> value);

  constexpr void __cordl_internal_set__paused(::GlobalNamespace::PauseController_PauseState value);

  constexpr void __cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set__wantsToPause(bool value);

  constexpr void __cordl_internal_set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didReturnToMenuEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didStartToResumeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bb0178, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_canPauseEvent, addr 0x3ba4a64, size 0xb0, virtual false, abstract: false, final false
  inline void add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method add_didPauseEvent, addr 0x3ba4b14, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x3ba4c4c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method add_didReturnToMenuEvent, addr 0x3bae6c0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method add_didStartToResumeEvent, addr 0x3ba4bb0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didStartToResumeEvent(::System::Action* value);

  /// @brief Method get_canChangePauseState, addr 0x3bae8f0, size 0x30, virtual false, abstract: false, final false
  inline bool get_canChangePauseState();

  /// @brief Method get_canPause, addr 0x3bae800, size 0xe8, virtual false, abstract: false, final false
  inline bool get_canPause();

  /// @brief Method get_wantsToPause, addr 0x3bae7f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsToPause();

  /// @brief Method remove_canPauseEvent, addr 0x3ba426c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method remove_didPauseEvent, addr 0x3ba431c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x3ba4454, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didReturnToMenuEvent, addr 0x3bae75c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method remove_didStartToResumeEvent, addr 0x3ba43b8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didStartToResumeEvent(::System::Action* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4443 };

  /// @brief Field kChangeStateDelay offset 0xffffffff size 0x4
  static constexpr float_t kChangeStateDelay{ static_cast<float_t>(0.05f) };

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
  ::GlobalNamespace::PauseController_InitData* ____initData;

  /// @brief Field didPauseEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field didStartToResumeEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___didStartToResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field canPauseEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::System::Action_1<bool>*>* ___canPauseEvent;

  /// @brief Field didReturnToMenuEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didReturnToMenuEvent;

  /// @brief Field _pauseChangedStateTime, offset: 0x90, size: 0x4, def value: None
  float_t ____pauseChangedStateTime;

  /// @brief Field _wantsToPause, offset: 0x94, size: 0x1, def value: None
  bool ____wantsToPause;

  /// @brief Field _paused, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::PauseController_PauseState ____paused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(offsetof(::GlobalNamespace::PauseController, ___didStartToResumeEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didResumeEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___canPauseEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didReturnToMenuEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____pauseChangedStateTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____wantsToPause) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____paused) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController_PauseState, "", "PauseController/PauseState");
NEED_NO_BOX(::GlobalNamespace::PauseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController*, "", "PauseController");
NEED_NO_BOX(::GlobalNamespace::PauseController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController_InitData*, "", "PauseController/InitData");
NEED_NO_BOX(::GlobalNamespace::PauseController___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController___c__DisplayClass29_0*, "", "PauseController/<>c__DisplayClass29_0");
