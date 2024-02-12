#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__ILevelRestartController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PauseController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseController__InitData::*)(bool)>(
    &::GlobalNamespace::__PauseController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x238640c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController__InitData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__PauseController__InitData::__cordl_internal_get_startPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr bool const& GlobalNamespace::__PauseController__InitData::__cordl_internal_get_startPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPaused;
}
constexpr void GlobalNamespace::__PauseController__InitData::__cordl_internal_set_startPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPaused = value;
}
inline ::GlobalNamespace::__PauseController__InitData* GlobalNamespace::__PauseController__InitData::New_ctor(bool startPaused) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PauseController__InitData*>(startPaused));
}
inline void GlobalNamespace::__PauseController__InitData::_ctor(bool startPaused) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController__InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startPaused);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PauseController__InitData::__PauseController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__PauseController____c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseController____c__DisplayClass25_0::*)()>(
    &::GlobalNamespace::__PauseController____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PauseController____c__DisplayClass25_0._get_canPause_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseController____c__DisplayClass25_0::*)(bool)>(
    &::GlobalNamespace::__PauseController____c__DisplayClass25_0::_get_canPause_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2386434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(), "<get_canPause>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__PauseController____c__DisplayClass25_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr bool const& GlobalNamespace::__PauseController____c__DisplayClass25_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__PauseController____c__DisplayClass25_0::__cordl_internal_set_value(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::GlobalNamespace::__PauseController____c__DisplayClass25_0* GlobalNamespace::__PauseController____c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>());
}
inline void GlobalNamespace::__PauseController____c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PauseController____c__DisplayClass25_0::_get_canPause_b__0(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseController____c__DisplayClass25_0*>::get(), "<get_canPause>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PauseController____c__DisplayClass25_0::__PauseController____c__DisplayClass25_0() {}
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didPauseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(
    &::GlobalNamespace::PauseController::add_didPauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x237bcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_didPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didPauseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(
    &::GlobalNamespace::PauseController::remove_didPauseEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x237b54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_didPauseEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didResumeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(
    &::GlobalNamespace::PauseController::add_didResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x237bd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_didResumeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didResumeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(
    &::GlobalNamespace::PauseController::remove_didResumeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x237b5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_didResumeEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_canPauseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(
    &::GlobalNamespace::PauseController::add_canPauseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x237bc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_canPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_canPauseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(
    &::GlobalNamespace::PauseController::remove_canPauseEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x237b49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_canPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.add_didReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(
    &::GlobalNamespace::PauseController::add_didReturnToMenuEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2384d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_didReturnToMenuEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.remove_didReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(::System::Action*)>(
    &::GlobalNamespace::PauseController::remove_didReturnToMenuEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2384dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_didReturnToMenuEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_wantsToPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_wantsToPause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "get_wantsToPause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.get_canPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::get_canPause)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2384e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "get_canPause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Start)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x2384f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::OnDestroy)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x23857f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)(bool)>(&::GlobalNamespace::PauseController::OnApplicationPause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2385ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "OnApplicationPause",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::Pause)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x237c8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "Pause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.PauseGameOnStartupIfItShouldBePaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(
    &::GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x238605c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "PauseGameOnStartupIfItShouldBePaused",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleLevelDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleLevelDidStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                               "HandleLevelDidStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleLevelWillStartIntro
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleLevelWillStartIntro)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                               "HandleLevelWillStartIntro", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleMenuButtonTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleMenuButtonTriggered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                               "HandleMenuButtonTriggered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleInputFocusWasCaptured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleInputFocusWasCaptured)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                               "HandleInputFocusWasCaptured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleHMDUnmounted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::HandleHMDUnmounted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandleHMDUnmounted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandleControllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(
    &::GlobalNamespace::PauseController::HandleControllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23860bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandleControllersDidDisconnectEvent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidFinishResumeAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(
    &::GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23860c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidFinishResumeAnimation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(
    &::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23861ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidPressContinueButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressRestartButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(
    &::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23862ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidPressRestartButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.HandlePauseMenuManagerDidPressMenuButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(
    &::GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x238634c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidPressMenuButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController.GetDefaultPausedState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::GetDefaultPausedState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2385740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                               "GetDefaultPausedState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseController::*)()>(&::GlobalNamespace::PauseController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseMenuManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::PauseController::__cordl_internal_get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& GlobalNamespace::PauseController::__cordl_internal_get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gamePause)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMenuButtonTrigger*& GlobalNamespace::PauseController::__cordl_internal_get__menuButtonTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonTrigger;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuButtonTrigger*> const& GlobalNamespace::PauseController::__cordl_internal_get__menuButtonTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonTrigger;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuButtonTrigger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::PauseController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::PauseController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelRestartController*& GlobalNamespace::PauseController::__cordl_internal_get__levelRestartController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelRestartController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelRestartController*> const& GlobalNamespace::PauseController::__cordl_internal_get__levelRestartController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelRestartController;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__levelRestartController(::GlobalNamespace::ILevelRestartController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelRestartController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IReturnToMenuController*& GlobalNamespace::PauseController::__cordl_internal_get__returnToMenuController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnToMenuController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReturnToMenuController*> const& GlobalNamespace::PauseController::__cordl_internal_get__returnToMenuController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnToMenuController;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__returnToMenuController(::GlobalNamespace::IReturnToMenuController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnToMenuController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::PauseController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::PauseController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelStartController*& GlobalNamespace::PauseController::__cordl_internal_get__levelStartController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelStartController*> const& GlobalNamespace::PauseController::__cordl_internal_get__levelStartController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartController;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__levelStartController(::GlobalNamespace::ILevelStartController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelStartController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PauseController__InitData*& GlobalNamespace::PauseController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseController__InitData*> const& GlobalNamespace::PauseController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__initData(::GlobalNamespace::__PauseController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseController::__cordl_internal_get_didPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPauseEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didPauseEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPauseEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didResumeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseController::__cordl_internal_get_didResumeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didResumeEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didResumeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didResumeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Action_1<bool>*>*& GlobalNamespace::PauseController::__cordl_internal_get_canPauseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canPauseEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Action_1<bool>*>*> const& GlobalNamespace::PauseController::__cordl_internal_get_canPauseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canPauseEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___canPauseEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseController::__cordl_internal_get_didReturnToMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReturnToMenuEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseController::__cordl_internal_get_didReturnToMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReturnToMenuEvent;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set_didReturnToMenuEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didReturnToMenuEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr bool& GlobalNamespace::PauseController::__cordl_internal_get__paused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr bool const& GlobalNamespace::PauseController::__cordl_internal_get__paused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr void GlobalNamespace::PauseController::__cordl_internal_set__paused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paused = value;
}
inline void GlobalNamespace::PauseController::add_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_didPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didPauseEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_didPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_didResumeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didResumeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_didResumeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_canPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_canPauseEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Action_1<bool>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::add_didReturnToMenuEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "add_didReturnToMenuEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseController::remove_didReturnToMenuEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "remove_didReturnToMenuEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PauseController::get_wantsToPause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "get_wantsToPause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::get_canPause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "get_canPause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "OnApplicationPause",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::PauseController::Pause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "Pause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "PauseGameOnStartupIfItShouldBePaused",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleLevelDidStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandleLevelDidStart",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleLevelWillStartIntro() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                             "HandleLevelWillStartIntro", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleMenuButtonTriggered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                             "HandleMenuButtonTriggered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleInputFocusWasCaptured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                             "HandleInputFocusWasCaptured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleHMDUnmounted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandleHMDUnmounted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandleControllersDidDisconnectEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandleControllersDidDisconnectEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidFinishResumeAnimation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidPressContinueButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidPressRestartButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), "HandlePauseMenuManagerDidPressMenuButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PauseController::GetDefaultPausedState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(),
                                                                             "GetDefaultPausedState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PauseController* GlobalNamespace::PauseController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PauseController*>());
}
inline void GlobalNamespace::PauseController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseController::PauseController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
