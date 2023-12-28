#pragma once
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__PracticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::*)()>(
    &::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229c818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0._StartLevelOrShow360Prompt_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::*)(int32_t)>(
    &::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x229c9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>::get(), "<StartLevelOrShow360Prompt>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0._StartLevelOrShow360Prompt_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::*)()>(
    &::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229ca88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>::get(),
                                                 "<StartLevelOrShow360Prompt>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*> const&
GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set___4__this(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get_beforeSceneSwitchCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeSceneSwitchCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get_beforeSceneSwitchCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeSceneSwitchCallback;
}
constexpr void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set_beforeSceneSwitchCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beforeSceneSwitchCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
constexpr ::System::Action*& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__set___9__1(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0* GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>());
}
inline void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__0(int32_t _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>::get(), "<StartLevelOrShow360Prompt>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::_StartLevelOrShow360Prompt_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*>::get(),
                                               "<StartLevelOrShow360Prompt>b__1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0() {}
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_gameMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_isInPracticeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x229bc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_isInPracticeView",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_playerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229bd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_playerSettings",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_enableCustomLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229bd28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229bd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_gameplayModifiers",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_hideGameplaySetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229bd60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_leaderboardViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LeaderboardViewController* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229bd68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_initialTopScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229bd70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.get_initialLeftScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x229bd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229bda8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229bdac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::GameplayModifiers*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229bdb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x228b904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x228c288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x229bdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "LevelSelectionFlowCoordinatorDidActivate",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x229be70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "LevelSelectionFlowCoordinatorDidDeactivate",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(
        &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x229bf24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.ActionButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229c17c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.PracticeButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x229c530;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IDifficultyBeatmap*)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x229c798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.StartLevelOrShow360Prompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x229c188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "StartLevelOrShow360Prompt", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.StartLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x228e0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "StartLevel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandlePracticeViewControllerDidPressPlayButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229c820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                 "HandlePracticeViewControllerDidPressPlayButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleStandardLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(
        &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x229c82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "HandleStandardLevelDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x229c8ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.SetupGameplaySetupViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x229ad58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "SetupGameplaySetupViewController", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.HandleBasicLevelCompletionResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, bool)>(&::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x229b120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "HandleBasicLevelCompletionResults", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator.DismissPracticeViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)(::System::Action*, bool)>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x229c93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "DismissPracticeViewController", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__degree360BeatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____degree360BeatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__degree360BeatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____degree360BeatmapCharacteristic;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__degree360BeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____degree360BeatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PracticeViewController*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__practiceViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeViewController*> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__practiceViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceViewController;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__practiceViewController(::GlobalNamespace::PracticeViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____practiceViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplaySetupViewController*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__gameplaySetupViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__gameplaySetupViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplaySetupViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appStaticSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__safeAreaFocusedSimpleDialogPromptViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*> const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get__safeAreaFocusedSimpleDialogPromptViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewController;
}
constexpr void
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set__safeAreaFocusedSimpleDialogPromptViewController(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____safeAreaFocusedSimpleDialogPromptViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*& GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*> const&
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_gameMode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_isInPracticeView",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_playerSettings",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_enableCustomLevels",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_gameplayModifiers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "get_hideGameplaySetup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardViewController* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                               "get_leaderboardViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardViewController*, false>(this, ___internal_method);
}
inline ::HMUI::ViewController* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                               "get_initialTopScreenViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(this, ___internal_method);
}
inline ::HMUI::ViewController* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                               "get_initialLeftScreenViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                                         ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                                                                                         ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                                                                         ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                               "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, gameplayModifiers, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "LevelSelectionFlowCoordinatorDidActivate",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "LevelSelectionFlowCoordinatorDidDeactivate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController,
                                                                                                                                 ::HMUI::ViewController* newViewController,
                                                                                                                                 ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                               "LevelSelectionFlowCoordinatorTopViewControllerWillChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "ActionButtonWasPressed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "PracticeButtonWasPressed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange(::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IDifficultyBeatmap* beatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "SelectionDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, beatmap);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt(::System::Action* beforeSceneSwitchCallback, bool practice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "StartLevelOrShow360Prompt", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beforeSceneSwitchCallback, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel(::System::Action* beforeSceneSwitchCallback, bool practice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "StartLevel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beforeSceneSwitchCallback, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(),
                                               "HandlePracticeViewControllerDidPressPlayButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                                                         ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "HandleStandardLevelDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "BackButtonWasPressed",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "SetupGameplaySetupViewController", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings);
}
inline bool GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "HandleBasicLevelCompletionResults", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelCompletionResults, practice);
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController(::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), "DismissPracticeViewController", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, immediately);
}
inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>());
}
inline void GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
