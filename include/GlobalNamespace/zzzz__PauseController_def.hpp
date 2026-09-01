#pragma once
// IWYU pragma private; include "GlobalNamespace\PauseController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
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
class IXRSystemState;
}
namespace GlobalNamespace {
class PauseController_InitData;
}
namespace GlobalNamespace {
struct PauseController_PauseState;
}
namespace GlobalNamespace {
class PauseController___c__DisplayClass30_0;
}
namespace GlobalNamespace {
class PauseMenuManager;
}
namespace GlobalNamespace {
struct XRSystemEventType;
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
class PauseController___c__DisplayClass30_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PauseController_PauseState);
MARK_REF_T(::GlobalNamespace::PauseController*);
MARK_REF_T(::GlobalNamespace::PauseController_InitData*);
MARK_REF_T(::GlobalNamespace::PauseController___c__DisplayClass30_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PauseController_PauseState, "", "PauseController/PauseState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PauseController*, "", "PauseController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PauseController_InitData*, "", "PauseController/InitData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PauseController___c__DisplayClass30_0*, "", "PauseController/<>c__DisplayClass30_0");
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6032 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseController_PauseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PauseController_PauseState) == 0x4, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x59b5218, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6033 };

  /// @brief Field startPaused, offset: 0x10, size: 0x1, def value: None
  bool ___startPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseController_InitData, ___startPaused) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PauseController_InitData) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseController/<>c__DisplayClass30_0
class CORDL_TYPE PauseController___c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  static inline ::GlobalNamespace::PauseController___c__DisplayClass30_0* New_ctor();

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr bool& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(bool value);

  /// @brief Method .ctor, addr 0x59b35d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_canPause>b__0, addr 0x59b5220, size 0x18, virtual false, abstract: false, final false
  inline void _get_canPause_b__0(bool newValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseController___c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseController___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseController___c__DisplayClass30_0(PauseController___c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseController___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseController___c__DisplayClass30_0(PauseController___c__DisplayClass30_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6034 };

  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  bool ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PauseController___c__DisplayClass30_0, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PauseController___c__DisplayClass30_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.DotnetExtension.CommandLine.CommandLineParserResult, PauseController::PauseState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PauseController
class CORDL_TYPE PauseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::PauseController_InitData;

  using PauseState = ::GlobalNamespace::PauseController_PauseState;

  using __c__DisplayClass30_0 = ::GlobalNamespace::PauseController___c__DisplayClass30_0;

  /// @brief Field _beatmapObjectManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _commandLineParserResult, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get__commandLineParserResult,
                      put = __cordl_internal_set__commandLineParserResult)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult _commandLineParserResult;

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

  /// @brief Field _pauseChangedStateTime, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__pauseChangedStateTime, put = __cordl_internal_set__pauseChangedStateTime)) float_t _pauseChangedStateTime;

  /// @brief Field _pauseMenuManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseMenuManager, put = __cordl_internal_set__pauseMenuManager)) ::UnityW<::GlobalNamespace::PauseMenuManager> _pauseMenuManager;

  /// @brief Field _paused, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) ::GlobalNamespace::PauseController_PauseState _paused;

  /// @brief Field _returnToMenuController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__returnToMenuController, put = __cordl_internal_set__returnToMenuController)) ::GlobalNamespace::IReturnToMenuController* _returnToMenuController;

  /// @brief Field _wantsToPause, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get__wantsToPause, put = __cordl_internal_set__wantsToPause)) bool _wantsToPause;

  /// @brief Field _xrSystemState, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__xrSystemState, put = __cordl_internal_set__xrSystemState)) ::GlobalNamespace::IXRSystemState* _xrSystemState;

  __declspec(property(get = get_canChangePauseState)) bool canChangePauseState;

  __declspec(property(get = get_canPause)) bool canPause;

  /// @brief Field canPauseEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_canPauseEvent, put = __cordl_internal_set_canPauseEvent)) ::System::Action_1<::System::Action_1<bool>*>* canPauseEvent;

  /// @brief Field didPauseEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent)) ::System::Action* didPauseEvent;

  /// @brief Field didResumeEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent)) ::System::Action* didResumeEvent;

  /// @brief Field didReturnToMenuEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_didReturnToMenuEvent, put = __cordl_internal_set_didReturnToMenuEvent)) ::System::Action* didReturnToMenuEvent;

  /// @brief Field didStartToResumeEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartToResumeEvent, put = __cordl_internal_set_didStartToResumeEvent)) ::System::Action* didStartToResumeEvent;

  __declspec(property(get = get_wantsToPause)) bool wantsToPause;

  /// @brief Method GetDefaultPausedState, addr 0x59b3eec, size 0x138, virtual false, abstract: false, final false
  inline bool GetDefaultPausedState();

  /// @brief Method HadFpfcEnabledAtInit, addr 0x59b4058, size 0x80, virtual false, abstract: false, final false
  inline bool HadFpfcEnabledAtInit();

  /// @brief Method HandleLevelDidStart, addr 0x59b4e44, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelDidStart();

  /// @brief Method HandleMenuButtonTriggered, addr 0x59b4e48, size 0x64, virtual false, abstract: false, final false
  inline void HandleMenuButtonTriggered();

  /// @brief Method HandlePauseMenuManagerDidFinishResumeAnimation, addr 0x59b4f14, size 0x110, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidFinishResumeAnimation();

  /// @brief Method HandlePauseMenuManagerDidPressMenuButton, addr 0x59b510c, size 0x100, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressMenuButton();

  /// @brief Method HandlePauseMenuManagerDidPressRestartButton, addr 0x59b5024, size 0xe8, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidPressRestartButton();

  /// @brief Method HandlePauseMenuManagerDidStartResumeAnimation, addr 0x59b4eac, size 0x68, virtual false, abstract: false, final false
  inline void HandlePauseMenuManagerDidStartResumeAnimation();

  /// @brief Method HandleSystemStateChange, addr 0x59b4024, size 0x34, virtual false, abstract: false, final false
  inline void HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType);

  static inline ::GlobalNamespace::PauseController* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x59b4b20, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x59b420c, size 0x5b8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x59b40d8, size 0x134, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method PauseGameOnStartupIfItShouldBePaused, addr 0x59b4df8, size 0x4c, virtual false, abstract: false, final false
  inline void PauseGameOnStartupIfItShouldBePaused();

  /// @brief Method Restart, addr 0x59b4b2c, size 0xa4, virtual false, abstract: false, final false
  inline void Restart();

  /// @brief Method Resume, addr 0x59b4c54, size 0x128, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method Start, addr 0x59b362c, size 0x564, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TogglePause, addr 0x59b4ddc, size 0x1c, virtual false, abstract: false, final false
  inline void TogglePause();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get__commandLineParserResult() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get__commandLineParserResult();

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

  constexpr bool const& __cordl_internal_get__wantsToPause() const;

  constexpr bool& __cordl_internal_get__wantsToPause();

  constexpr ::GlobalNamespace::IXRSystemState* const& __cordl_internal_get__xrSystemState() const;

  constexpr ::GlobalNamespace::IXRSystemState*& __cordl_internal_get__xrSystemState();

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

  constexpr void __cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::PauseController_InitData* value);

  constexpr void __cordl_internal_set__levelRestartController(::GlobalNamespace::ILevelRestartController* value);

  constexpr void __cordl_internal_set__levelStartController(::GlobalNamespace::ILevelStartController* value);

  constexpr void __cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value);

  constexpr void __cordl_internal_set__pauseChangedStateTime(float_t value);

  constexpr void __cordl_internal_set__pauseMenuManager(::UnityW<::GlobalNamespace::PauseMenuManager> value);

  constexpr void __cordl_internal_set__paused(::GlobalNamespace::PauseController_PauseState value);

  constexpr void __cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value);

  constexpr void __cordl_internal_set__wantsToPause(bool value);

  constexpr void __cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value);

  constexpr void __cordl_internal_set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didReturnToMenuEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didStartToResumeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x59b520c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_canPauseEvent, addr 0x59b31d8, size 0xc0, virtual false, abstract: false, final false
  inline void add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method add_didPauseEvent, addr 0x59b2dd0, size 0xac, virtual false, abstract: false, final false
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x59b3080, size 0xac, virtual false, abstract: false, final false
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method add_didReturnToMenuEvent, addr 0x59b3358, size 0xac, virtual false, abstract: false, final false
  inline void add_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method add_didStartToResumeEvent, addr 0x59b2f28, size 0xac, virtual false, abstract: false, final false
  inline void add_didStartToResumeEvent(::System::Action* value);

  /// @brief Method get_canChangePauseState, addr 0x59b35d8, size 0x54, virtual false, abstract: false, final false
  inline bool get_canChangePauseState();

  /// @brief Method get_canPause, addr 0x59b34b8, size 0x11c, virtual false, abstract: false, final false
  inline bool get_canPause();

  /// @brief Method get_wantsToPause, addr 0x59b34b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_wantsToPause();

  /// @brief Method remove_canPauseEvent, addr 0x59b3298, size 0xc0, virtual false, abstract: false, final false
  inline void remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method remove_didPauseEvent, addr 0x59b2e7c, size 0xac, virtual false, abstract: false, final false
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x59b312c, size 0xac, virtual false, abstract: false, final false
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didReturnToMenuEvent, addr 0x59b3404, size 0xac, virtual false, abstract: false, final false
  inline void remove_didReturnToMenuEvent(::System::Action* value);

  /// @brief Method remove_didStartToResumeEvent, addr 0x59b2fd4, size 0xac, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6035 };

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

  /// @brief Field _xrSystemState, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IXRSystemState* ____xrSystemState;

  /// @brief Field _levelStartController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ILevelStartController* ____levelStartController;

  /// @brief Field _initData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PauseController_InitData* ____initData;

  /// @brief Field _commandLineParserResult, offset: 0x68, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ____commandLineParserResult;

  /// @brief Field didPauseEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field didStartToResumeEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didStartToResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field canPauseEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::System::Action_1<bool>*>* ___canPauseEvent;

  /// @brief Field didReturnToMenuEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___didReturnToMenuEvent;

  /// @brief Field _pauseChangedStateTime, offset: 0xa8, size: 0x4, def value: None
  float_t ____pauseChangedStateTime;

  /// @brief Field _wantsToPause, offset: 0xac, size: 0x1, def value: None
  bool ____wantsToPause;

  /// @brief Field _paused, offset: 0xb0, size: 0x4, def value: None
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

static_assert(offsetof(::GlobalNamespace::PauseController, ____xrSystemState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____levelStartController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____initData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____commandLineParserResult) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didPauseEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didStartToResumeEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didResumeEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___canPauseEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ___didReturnToMenuEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____pauseChangedStateTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____wantsToPause) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseController, ____paused) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PauseController) == 0xb8, "Size mismatch!");

} // namespace GlobalNamespace
