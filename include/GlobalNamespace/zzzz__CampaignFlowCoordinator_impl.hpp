#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CampaignFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MissionSelectionNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__CampaignFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MissionResultsViewController_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2143f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0._HandleMissionHelpViewControllerDidFinish_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::_HandleMissionHelpViewControllerDidFinish_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2144438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*>::get(),
                                                 "<HandleMissionHelpViewControllerDidFinish>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CampaignFlowCoordinator*& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> const& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__set___4__this(::GlobalNamespace::CampaignFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionHelpViewController*& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpViewController*> const& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__set_viewController(::GlobalNamespace::MissionHelpViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0* GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*>());
}
inline void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::_HandleMissionHelpViewControllerDidFinish_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*>::get(),
                                               "<HandleMissionHelpViewControllerDidFinish>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0::__CampaignFlowCoordinator____c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::*)()>(
    &::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21440e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0._HandleMissionResultsViewControllerRetryButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::*)()>(
    &::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::_HandleMissionResultsViewControllerRetryButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2144488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*>::get(),
                                                 "<HandleMissionResultsViewControllerRetryButtonPressed>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CampaignFlowCoordinator*& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> const& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__set___4__this(::GlobalNamespace::CampaignFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionResultsViewController*& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> const& GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__set_viewController(::GlobalNamespace::MissionResultsViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0* GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*>());
}
inline void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::_HandleMissionResultsViewControllerRetryButtonPressed_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*>::get(),
                                               "<HandleMissionResultsViewControllerRetryButtonPressed>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0::__CampaignFlowCoordinator____c__DisplayClass22_0() {}
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*)>(&::GlobalNamespace::CampaignFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2143570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*)>(&::GlobalNamespace::CampaignFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2143624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::CampaignFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x21436d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::CampaignFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x214392c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::CampaignFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2143ae4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.HandleMissionSelectionNavigationControllerDidPressPlayButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(::GlobalNamespace::MissionSelectionNavigationController*)>(
    &::GlobalNamespace::CampaignFlowCoordinator::HandleMissionSelectionNavigationControllerDidPressPlayButton)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2143bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionSelectionNavigationControllerDidPressPlayButton",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionSelectionNavigationController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.HandleMissionHelpViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(::GlobalNamespace::MissionHelpViewController*)>(
    &::GlobalNamespace::CampaignFlowCoordinator::HandleMissionHelpViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2143eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionHelpViewControllerDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.HandleMissionResultsViewControllerContinueButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(::GlobalNamespace::MissionResultsViewController*)>(
    &::GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerContinueButtonPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2143f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionResultsViewControllerContinueButtonPressed",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.HandleMissionResultsViewControllerRetryButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(::GlobalNamespace::MissionResultsViewController*)>(
    &::GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerRetryButtonPressed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2144024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionResultsViewControllerRetryButtonPressed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.StartLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(::System::Action*)>(
    &::GlobalNamespace::CampaignFlowCoordinator::StartLevel)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2143cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "StartLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.HandleMissionLevelSceneDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneDidFinish)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x21440e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionLevelSceneDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.HandleMissionLevelSceneRestarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneRestarted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2144290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionLevelSceneRestarted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.UpdatePlayerStatistics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(
    ::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::CampaignFlowCoordinator::UpdatePlayerStatistics)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21441c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "UpdatePlayerStatistics", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::CampaignFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21442cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)()>(&::GlobalNamespace::CampaignFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214436c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator._HandleMissionResultsViewControllerContinueButtonPressed_b__21_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)()>(
    &::GlobalNamespace::CampaignFlowCoordinator::_HandleMissionResultsViewControllerContinueButtonPressed_b__21_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2144374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                 "<HandleMissionResultsViewControllerContinueButtonPressed>b__21_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignFlowCoordinator._HandleMissionResultsViewControllerContinueButtonPressed_b__21_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CampaignFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::CampaignFlowCoordinator::_HandleMissionResultsViewControllerContinueButtonPressed_b__21_1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2144400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                                               "<HandleMissionResultsViewControllerContinueButtonPressed>b__21_1", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::CampaignFlowCoordinator::__get__defaultLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::CampaignFlowCoordinator::__get__defaultLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::CampaignFlowCoordinator::__get__resultsClearedLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsClearedLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::CampaignFlowCoordinator::__get__resultsClearedLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsClearedLightsPreset;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsClearedLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::CampaignFlowCoordinator::__get__resultsFailedLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsFailedLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::CampaignFlowCoordinator::__get__resultsFailedLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsFailedLightsPreset;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsFailedLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::CampaignFlowCoordinator::__get__newObjectiveLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newObjectiveLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::CampaignFlowCoordinator::__get__newObjectiveLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newObjectiveLightsPreset;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__newObjectiveLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newObjectiveLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::CampaignFlowCoordinator::__get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& GlobalNamespace::CampaignFlowCoordinator::__get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsManager*& GlobalNamespace::CampaignFlowCoordinator::__get__menuLightsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& GlobalNamespace::CampaignFlowCoordinator::__get__menuLightsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__menuLightsManager(::GlobalNamespace::MenuLightsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuLightsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionSelectionNavigationController*& GlobalNamespace::CampaignFlowCoordinator::__get__missionSelectionNavigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionSelectionNavigationController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionNavigationController*> const&
GlobalNamespace::CampaignFlowCoordinator::__get__missionSelectionNavigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionSelectionNavigationController;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__missionSelectionNavigationController(::GlobalNamespace::MissionSelectionNavigationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionSelectionNavigationController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionResultsViewController*& GlobalNamespace::CampaignFlowCoordinator::__get__missionResultsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionResultsViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> const& GlobalNamespace::CampaignFlowCoordinator::__get__missionResultsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionResultsViewController;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__missionResultsViewController(::GlobalNamespace::MissionResultsViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionResultsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplaySetupViewController*& GlobalNamespace::CampaignFlowCoordinator::__get__gameplaySetupViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> const& GlobalNamespace::CampaignFlowCoordinator::__get__gameplaySetupViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplaySetupViewController;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplaySetupViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionHelpViewController*& GlobalNamespace::CampaignFlowCoordinator::__get__missionHelpViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpViewController*> const& GlobalNamespace::CampaignFlowCoordinator::__get__missionHelpViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelpViewController;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__missionHelpViewController(::GlobalNamespace::MissionHelpViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionHelpViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::CampaignFlowCoordinator::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::CampaignFlowCoordinator::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CampaignProgressModel*& GlobalNamespace::CampaignFlowCoordinator::__get__campaignProgressModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> const& GlobalNamespace::CampaignFlowCoordinator::__get__campaignProgressModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModel;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__campaignProgressModel(::GlobalNamespace::CampaignProgressModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____campaignProgressModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*& GlobalNamespace::CampaignFlowCoordinator::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*> const& GlobalNamespace::CampaignFlowCoordinator::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CampaignFlowCoordinator::__get__showCredits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showCredits;
}
constexpr bool const& GlobalNamespace::CampaignFlowCoordinator::__get__showCredits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showCredits;
}
constexpr void GlobalNamespace::CampaignFlowCoordinator::__set__showCredits(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showCredits = value;
}
inline void GlobalNamespace::CampaignFlowCoordinator::add_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::CampaignFlowCoordinator::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::CampaignFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::CampaignFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "DidDeactivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::CampaignFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                  ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "TopViewControllerWillChange", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::CampaignFlowCoordinator::HandleMissionSelectionNavigationControllerDidPressPlayButton(::GlobalNamespace::MissionSelectionNavigationController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionSelectionNavigationControllerDidPressPlayButton",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionSelectionNavigationController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::CampaignFlowCoordinator::HandleMissionHelpViewControllerDidFinish(::GlobalNamespace::MissionHelpViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionHelpViewControllerDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerContinueButtonPressed(::GlobalNamespace::MissionResultsViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionResultsViewControllerContinueButtonPressed",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerRetryButtonPressed(::GlobalNamespace::MissionResultsViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionResultsViewControllerRetryButtonPressed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::CampaignFlowCoordinator::StartLevel(::System::Action* beforeSceneSwitchCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "StartLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beforeSceneSwitchCallback);
}
inline void GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                                       ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionLevelSceneDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneRestarted(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                                                                       ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "HandleMissionLevelSceneRestarted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::CampaignFlowCoordinator::UpdatePlayerStatistics(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "UpdatePlayerStatistics", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionCompletionResults, missionNode);
}
inline void GlobalNamespace::CampaignFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), "BackButtonWasPressed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline ::GlobalNamespace::CampaignFlowCoordinator* GlobalNamespace::CampaignFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CampaignFlowCoordinator*>());
}
inline void GlobalNamespace::CampaignFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CampaignFlowCoordinator::_HandleMissionResultsViewControllerContinueButtonPressed_b__21_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                               "<HandleMissionResultsViewControllerContinueButtonPressed>b__21_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CampaignFlowCoordinator::_HandleMissionResultsViewControllerContinueButtonPressed_b__21_1(bool presented) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CampaignFlowCoordinator*>::get(),
                                                                             "<HandleMissionResultsViewControllerContinueButtonPressed>b__21_1", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, presented);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CampaignFlowCoordinator::CampaignFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
