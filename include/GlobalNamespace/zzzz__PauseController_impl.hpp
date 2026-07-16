#pragma once
// IWYU pragma private; include "GlobalNamespace/PauseController.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PauseController_PauseState::PauseController_PauseState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseController_PauseState::PauseController_PauseState() {}
constexpr ::GlobalNamespace::PauseController_PauseState GlobalNamespace::PauseController_PauseState::Paused{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PauseController_PauseState GlobalNamespace::PauseController_PauseState::Resuming{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PauseController_PauseState GlobalNamespace::PauseController_PauseState::Playing{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PauseController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController_InitData::*)(bool)>(&::GlobalNamespace::PauseController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59aec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PauseController_InitData::__cordl_internal_get_startPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr bool const& GlobalNamespace::PauseController_InitData::__cordl_internal_get_startPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr void GlobalNamespace::PauseController_InitData::__cordl_internal_set_startPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPaused = value;
}
inline void GlobalNamespace::PauseController_InitData::_ctor(bool startPaused) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPaused);
}
inline ::GlobalNamespace::PauseController_InitData* GlobalNamespace::PauseController_InitData::New_ctor(bool startPaused) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PauseController_InitData*>(startPaused));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseController_InitData::PauseController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::PauseController___c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController___c__DisplayClass30_0::*)()>(&::GlobalNamespace::PauseController___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ad144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController___c__DisplayClass30_0._get_canPause_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController___c__DisplayClass30_0::*)(bool)>(
    &::GlobalNamespace::PauseController___c__DisplayClass30_0::_get_canPause_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59aec5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController___c__DisplayClass30_0*>(), { "<get_canPause>b__0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PauseController___c__DisplayClass30_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr bool const& GlobalNamespace::PauseController___c__DisplayClass30_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::PauseController___c__DisplayClass30_0::__cordl_internal_set_value(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void GlobalNamespace::PauseController___c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController___c__DisplayClass30_0::_get_canPause_b__0(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController___c__DisplayClass30_0*>(), { "<get_canPause>b__0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline ::GlobalNamespace::PauseController___c__DisplayClass30_0* GlobalNamespace::PauseController___c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PauseController___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseController___c__DisplayClass30_0::PauseController___c__DisplayClass30_0() {}
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a4ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a3d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didStartToResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didStartToResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a4b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didStartToResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didStartToResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didStartToResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a3e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didStartToResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a4c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a3ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_canPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(
    &::GlobalNamespace::PauseController::add_canPauseEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59a49f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_canPauseEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Action_1<bool>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_canPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(
    &::GlobalNamespace::PauseController::remove_canPauseEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59a3cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(),
                                                                                           { "remove_canPauseEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Action_1<bool>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::add_didReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59acec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(&::GlobalNamespace::PauseController::remove_didReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59acf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_wantsToPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_wantsToPause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ad020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "get_wantsToPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_canPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_canPause)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59ad028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "get_canPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_canChangePauseState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_canChangePauseState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59ad148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "get_canChangePauseState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Start)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x59ad19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleSystemStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(::GlobalNamespace::XRSystemEventType)>(
    &::GlobalNamespace::PauseController::HandleSystemStateChange)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59adb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::OnDestroy)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x59adc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.OnApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)(bool)>(&::GlobalNamespace::PauseController::OnApplicationPause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ae55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Restart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Restart)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59ae568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Restart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Pause)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59a3fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Resume)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x59ae690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.TogglePause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::TogglePause)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59ae818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "TogglePause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.PauseGameOnStartupIfItShouldBePaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59ae834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "PauseGameOnStartupIfItShouldBePaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleLevelDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleLevelDidStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ae880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandleLevelDidStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleMenuButtonTriggered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleMenuButtonTriggered)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59ae884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandleMenuButtonTriggered", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidStartResumeAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidStartResumeAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59ae8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidStartResumeAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidFinishResumeAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59ae950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidFinishResumeAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressRestartButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59aea60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidPressRestartButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressMenuButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59aeb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidPressMenuButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.GetDefaultPausedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::GetDefaultPausedState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59ada5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "GetDefaultPausedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HadFpfcEnabledAtInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HadFpfcEnabledAtInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59adbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HadFpfcEnabledAtInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59aec48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PauseMenuManager>& GlobalNamespace::PauseController::__cordl_internal_get__pauseMenuManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseMenuManager;
}
constexpr ::UnityW<::GlobalNamespace::PauseMenuManager> const& GlobalNamespace::PauseController::__cordl_internal_get__pauseMenuManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseMenuManager;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__pauseMenuManager(::UnityW<::GlobalNamespace::PauseMenuManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseMenuManager = value;
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::PauseController::__cordl_internal_get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::GlobalNamespace::IGamePause* const& GlobalNamespace::PauseController::__cordl_internal_get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gamePause = value;
}
constexpr ::GlobalNamespace::IMenuButtonTrigger*& GlobalNamespace::PauseController::__cordl_internal_get__menuButtonTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonTrigger;
}
constexpr ::GlobalNamespace::IMenuButtonTrigger* const& GlobalNamespace::PauseController::__cordl_internal_get__menuButtonTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonTrigger;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuButtonTrigger = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::PauseController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::PauseController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::GlobalNamespace::ILevelRestartController*& GlobalNamespace::PauseController::__cordl_internal_get__levelRestartController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelRestartController;
}
constexpr ::GlobalNamespace::ILevelRestartController* const& GlobalNamespace::PauseController::__cordl_internal_get__levelRestartController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelRestartController;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__levelRestartController(::GlobalNamespace::ILevelRestartController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelRestartController = value;
}
constexpr ::GlobalNamespace::IReturnToMenuController*& GlobalNamespace::PauseController::__cordl_internal_get__returnToMenuController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnToMenuController;
}
constexpr ::GlobalNamespace::IReturnToMenuController* const& GlobalNamespace::PauseController::__cordl_internal_get__returnToMenuController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnToMenuController;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____returnToMenuController = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& GlobalNamespace::PauseController::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& GlobalNamespace::PauseController::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
}
constexpr ::GlobalNamespace::ILevelStartController*& GlobalNamespace::PauseController::__cordl_internal_get__levelStartController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartController;
}
constexpr ::GlobalNamespace::ILevelStartController* const& GlobalNamespace::PauseController::__cordl_internal_get__levelStartController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartController;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__levelStartController(::GlobalNamespace::ILevelStartController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelStartController = value;
}
constexpr ::GlobalNamespace::PauseController_InitData*& GlobalNamespace::PauseController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::PauseController_InitData* const& GlobalNamespace::PauseController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__initData(::GlobalNamespace::PauseController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::PauseController::__cordl_internal_get__commandLineParserResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::PauseController::__cordl_internal_get__commandLineParserResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineParserResult;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__commandLineParserResult(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineParserResult = value;
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PauseController::__cordl_internal_get_didPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didPauseEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPauseEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didStartToResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartToResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PauseController::__cordl_internal_get_didStartToResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartToResumeEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didStartToResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didStartToResumeEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PauseController::__cordl_internal_get_didResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didResumeEvent = value;
}
constexpr ::System::Action_1<::System::Action_1<bool>*>*& GlobalNamespace::PauseController::__cordl_internal_get_canPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canPauseEvent;
}
constexpr ::System::Action_1<::System::Action_1<bool>*>* const& GlobalNamespace::PauseController::__cordl_internal_get_canPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canPauseEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canPauseEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didReturnToMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReturnToMenuEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PauseController::__cordl_internal_get_didReturnToMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReturnToMenuEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didReturnToMenuEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didReturnToMenuEvent = value;
}
constexpr float_t& GlobalNamespace::PauseController::__cordl_internal_get__pauseChangedStateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseChangedStateTime;
}
constexpr float_t const& GlobalNamespace::PauseController::__cordl_internal_get__pauseChangedStateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseChangedStateTime;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__pauseChangedStateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseChangedStateTime = value;
}
constexpr bool& GlobalNamespace::PauseController::__cordl_internal_get__wantsToPause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wantsToPause;
}
constexpr bool const& GlobalNamespace::PauseController::__cordl_internal_get__wantsToPause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wantsToPause;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__wantsToPause(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wantsToPause = value;
}
constexpr ::GlobalNamespace::PauseController_PauseState& GlobalNamespace::PauseController::__cordl_internal_get__paused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr ::GlobalNamespace::PauseController_PauseState const& GlobalNamespace::PauseController::__cordl_internal_get__paused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__paused(::GlobalNamespace::PauseController_PauseState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paused = value;
}
inline void GlobalNamespace::PauseController::add_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didPauseEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didStartToResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didStartToResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didStartToResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didStartToResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didResumeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_canPauseEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Action_1<bool>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_canPauseEvent", {}, { ::i2c::type_of<::System::Action_1<::System::Action_1<bool>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didReturnToMenuEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "add_didReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didReturnToMenuEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "remove_didReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PauseController::get_wantsToPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "get_wantsToPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::get_canPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "get_canPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::get_canChangePauseState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "get_canChangePauseState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void GlobalNamespace::PauseController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::PauseController::Restart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Restart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::TogglePause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "TogglePause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "PauseGameOnStartupIfItShouldBePaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleLevelDidStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandleLevelDidStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleMenuButtonTriggered() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandleMenuButtonTriggered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidStartResumeAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidStartResumeAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidFinishResumeAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidPressRestartButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HandlePauseMenuManagerDidPressMenuButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::GetDefaultPausedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "GetDefaultPausedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::HadFpfcEnabledAtInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { "HadFpfcEnabledAtInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PauseController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PauseController* GlobalNamespace::PauseController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PauseController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseController::PauseController() {}
