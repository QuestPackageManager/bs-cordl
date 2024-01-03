#pragma once
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__EnterPlayerGuestNameViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__ResultsViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0._ProcessLevelCompletionResultsAfterLevelDidFinish_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW)>(
        &::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x229b388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(),
                                                 "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator*& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const&
GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr ::StringW const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_transformedBeatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformedBeatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const&
GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_transformedBeatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformedBeatmapData;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transformedBeatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap*& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_difficultyBeatmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyBeatmap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_difficultyBeatmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyBeatmap;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficultyBeatmap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>());
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController,
                                                                                                                               ::StringW playerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(),
                                               "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, playerName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::*)()>(
    &::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0._HandleResultsViewControllerRestartButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::*)()>(
    &::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229b450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(),
                                                 "<HandleResultsViewControllerRestartButtonPressed>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator*& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ResultsViewController*& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get_resultsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultsViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> const&
GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get_resultsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultsViewController;
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__set_resultsViewController(::GlobalNamespace::ResultsViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>());
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(),
                                               "<HandleResultsViewControllerRestartButtonPressed>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_gameMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x229aaf4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_leaderboardViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LeaderboardViewController* (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229ab34;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_showBackButtonForMainViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229ab3c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_mainTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x229ab44;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x229ab88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x229ad88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::GameplayModifiers*, bool)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x229aed4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.WillScoreGoToLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::StringW, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229b144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "WillScoreGoToLeaderboard", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.IsNewHighScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, ::StringW)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x229b194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "IsNewHighScore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::StringW, ::StringW)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x229b1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "ProcessScore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController*)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x229b26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerContinueButtonPressed",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController*)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x229b2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__defaultLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__defaultLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsClearedLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsClearedLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsClearedLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsClearedLightsPreset;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsClearedLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsFailedLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsFailedLightsPreset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsFailedLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsFailedLightsPreset;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsFailedLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuLightsManager*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__menuLightsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__menuLightsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__menuLightsManager(::GlobalNamespace::MenuLightsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuLightsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ResultsViewController*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsViewController(::GlobalNamespace::ResultsViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LocalLeaderboardViewController*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__localLeaderboardViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardViewController*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__localLeaderboardViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__localLeaderboardViewController(::GlobalNamespace::LocalLeaderboardViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localLeaderboardViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__enterNameViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enterNameViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnterPlayerGuestNameViewController*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__enterNameViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enterNameViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__enterNameViewController(::GlobalNamespace::EnterPlayerGuestNameViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enterNameViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardViewController* GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardViewController*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                            ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                                                                            ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                                                            ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, gameplayModifiers, practice);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, bool practice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "WillScoreGoToLeaderboard", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelCompletionResults, leaderboardId, practice);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "IsNewHighScore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelCompletionResults, leaderboardId);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, ::StringW playerName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "ProcessScore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, leaderboardId, playerName);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsViewController);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsViewController);
}
inline ::GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::PartyFreePlayFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PartyFreePlayFlowCoordinator*>());
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator::PartyFreePlayFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
