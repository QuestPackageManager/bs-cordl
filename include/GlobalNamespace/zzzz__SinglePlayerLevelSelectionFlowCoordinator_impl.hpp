#pragma once
// IWYU pragma private; include "GlobalNamespace\SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelsSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0._StartLevelOrShow360Prompt_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::*)(int32_t)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::_StartLevelOrShow360Prompt_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5939220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>(),
                                                                                           { "<StartLevelOrShow360Prompt>b__0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0._StartLevelOrShow360Prompt_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::_StartLevelOrShow360Prompt_b__1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59392f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>(), { "<StartLevelOrShow360Prompt>b__1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get_beforeSceneSwitchCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeSceneSwitchCallback;
}
constexpr ::System::Action* const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get_beforeSceneSwitchCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeSceneSwitchCallback;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_set_beforeSceneSwitchCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeSceneSwitchCallback = value;
}
constexpr bool& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
constexpr ::System::Action*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Action* const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::__cordl_internal_set___9__1(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__1 = value;
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::_StartLevelOrShow360Prompt_b__0(int32_t _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>(),
                                                                                         { "<StartLevelOrShow360Prompt>b__0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::_StartLevelOrShow360Prompt_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>(), { "<StartLevelOrShow360Prompt>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0() {}
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_isInPracticeView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59384f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "get_isInPracticeView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_playerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5938570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "get_playerSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_enableCustomLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59385a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59385bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_hideGameplaySetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59385f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_leaderboardViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LeaderboardViewController> (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_initialTopScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_initialLeftScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5938610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*,
    bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59387cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                           { "LevelSelectionFlowCoordinatorDidActivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x593888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                           { "LevelSelectionFlowCoordinatorDidDeactivate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
        &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5938944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.ActionButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5938bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.PracticeButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5938e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ::by_ref<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5938f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.StartLevelOrShow360Prompt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5938bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                           { "StartLevelOrShow360Prompt", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.StartLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x593812c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                           { "StartLevel", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandlePracticeViewControllerDidPressPlayButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5938fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "HandlePracticeViewControllerDidPressPlayButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleStandardLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(
        &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5938ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
            { "HandleStandardLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleStandardLevelWasRestarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(
        &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelWasRestarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593905c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5939060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SetupGameplaySetupViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59379d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                             { "SetupGameplaySetupViewController", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleBasicLevelCompletionResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5937e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                             { "HandleBasicLevelCompletionResults", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.DismissPracticeViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5939168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                           { "DismissPracticeViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59383bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PracticeViewController>& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__practiceViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceViewController;
}
constexpr ::UnityW<::GlobalNamespace::PracticeViewController> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__practiceViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceViewController;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__practiceViewController(::UnityW<::GlobalNamespace::PracticeViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____practiceViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController>& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__gameplaySetupViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__gameplaySetupViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__gameplaySetupViewController(::UnityW<::GlobalNamespace::GameplaySetupViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplaySetupViewController = value;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
}
constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appStaticSettings = value;
}
constexpr ::GlobalNamespace::CustomLevelsSettings*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__customLevelsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelsSettings;
}
constexpr ::GlobalNamespace::CustomLevelsSettings* const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__customLevelsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelsSettings;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__customLevelsSettings(::GlobalNamespace::CustomLevelsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLevelsSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewController;
}
constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewController;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewController(
    ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____safeAreaFocusedSimpleDialogPromptViewController = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsListModel = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline ::StringW GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "get_isInPracticeView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "get_playerSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*>(this, ___internal_method);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LeaderboardViewController> GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                                         ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                                                                                         ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                                                                         ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults, transformedBeatmapData, beatmapKey, beatmapLevel, gameplayModifiers, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                              { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                              { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                         { "LevelSelectionFlowCoordinatorDidActivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                         { "LevelSelectionFlowCoordinatorDidDeactivate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController,
                                                                                                                                 ::HMUI::ViewController* newViewController,
                                                                                                                                 ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, beatmapKey);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt(::System::Action* beforeSceneSwitchCallback, bool practice) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                         { "StartLevelOrShow360Prompt", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beforeSceneSwitchCallback, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel(::System::Action* beforeSceneSwitchCallback, bool practice) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                         { "StartLevel", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beforeSceneSwitchCallback, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { "HandlePracticeViewControllerDidPressPlayButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                                     ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
          { "HandleStandardLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelWasRestarted(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                            ::GlobalNamespace::LevelCompletionResults* results) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, results);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                           { "SetupGameplaySetupViewController", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                           { "HandleBasicLevelCompletionResults", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelCompletionResults, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController(::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(),
                                                                                         { "DismissPracticeViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishedCallback, immediately);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinator() {}
