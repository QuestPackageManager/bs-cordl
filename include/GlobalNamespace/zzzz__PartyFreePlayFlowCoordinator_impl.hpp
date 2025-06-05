#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyFreePlayFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnterPlayerGuestNameViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__ResultsViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b52350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0._ProcessLevelCompletionResultsAfterLevelDidFinish_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW)>(
        &::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3b5288c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0*>::get(),
                                    "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator>& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr ::GlobalNamespace::LevelCompletionResults* const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr ::StringW const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set_leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_transformedBeatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformedBeatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_transformedBeatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformedBeatmapData;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transformedBeatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_practice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr bool const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_get_practice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practice;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::__cordl_internal_set_practice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___practice = value;
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController* _,
                                                                                                                                        ::StringW playerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0*>::get(),
                                               "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, playerName);
}
inline ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0* GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass18_0::PartyFreePlayFlowCoordinator___c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b52604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0._HandleResultsViewControllerRestartButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3b52960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0*>::get(),
                                                 "<HandleResultsViewControllerRestartButtonPressed>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator>& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::__cordl_internal_get_resultsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultsViewController;
}
constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::__cordl_internal_get_resultsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultsViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::__cordl_internal_set_resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0*>::get(),
                                               "<HandleResultsViewControllerRestartButtonPressed>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0* GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator___c__DisplayClass23_0::PartyFreePlayFlowCoordinator___c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_gameMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b51c7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_leaderboardViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardViewController> (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b51cbc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x3b51cc4;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x3b51ccc;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3b51d10;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3b51f50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::GameplayModifiers*,
    bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x3b52094;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x3b5237c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "WillScoreGoToLeaderboard", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.IsNewHighScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, ::StringW)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3b523cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "IsNewHighScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::StringW, ::StringW)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3b52410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "ProcessScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController*)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b52500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerContinueButtonPressed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController*)>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3b52540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerRestartButtonPressed",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(
    &::GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b5287c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__defaultLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__defaultLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsPreset;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__resultsClearedLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsClearedLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__resultsClearedLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsClearedLightsPreset;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__resultsClearedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsClearedLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__resultsFailedLightsPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsFailedLightsPreset;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__resultsFailedLightsPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsFailedLightsPreset;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__resultsFailedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsFailedLightsPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__menuLightsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__menuLightsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuLightsManager;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuLightsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__resultsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsViewController;
}
constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__resultsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardViewController>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__localLeaderboardViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardViewController;
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardViewController> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__localLeaderboardViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__localLeaderboardViewController(::UnityW<::GlobalNamespace::LocalLeaderboardViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localLeaderboardViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController>& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__enterNameViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enterNameViewController;
}
constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__enterNameViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enterNameViewController;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__enterNameViewController(::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enterNameViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LeaderboardViewController> GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardViewController>, false>(this, ___internal_method);
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
                                                                                                            ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                            ::GlobalNamespace::GameplayModifiers* modifiers, bool practice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, transformedBeatmapData, beatmapKey, beatmapLevel, modifiers, practice);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, bool practice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "WillScoreGoToLeaderboard", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelCompletionResults, leaderboardId, practice);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "IsNewHighScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelCompletionResults, leaderboardId);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, ::StringW playerName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "ProcessScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults, leaderboardId, playerName);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerContinueButtonPressed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsViewController);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), "HandleResultsViewControllerRestartButtonPressed",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsViewController);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::PartyFreePlayFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyFreePlayFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator::PartyFreePlayFlowCoordinator() {}
