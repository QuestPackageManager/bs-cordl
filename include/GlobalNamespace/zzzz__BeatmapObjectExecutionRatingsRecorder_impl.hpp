#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRatingsRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.get_beatmapObjectExecutionRatings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* (
    ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2613430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                 "get_beatmapObjectExecutionRatings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(
    &::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2613438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(
    &::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2613688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.HandleScoringForNoteDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(::GlobalNamespace::ScoringElement*)>(
    &::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoringForNoteDidFinish)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2613924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(), "HandleScoringForNoteDidFinish",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScoringElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.HandlePlayerHeadDidEnterObstacle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandlePlayerHeadDidEnterObstacle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2613d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(), "HandlePlayerHeadDidEnterObstacle",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder.HandleObstacleDidPassAvoidedMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2613eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(), "HandleObstacleDidPassAvoidedMark",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(
    &::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2614014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const&
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__playerHeadAndObstacleInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__playerHeadAndObstacleInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeadAndObstacleInteraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*&
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__beatmapObjectExecutionRatings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectExecutionRatings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*> const&
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__beatmapObjectExecutionRatings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectExecutionRatings;
}
constexpr void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_set__beatmapObjectExecutionRatings(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectExecutionRatings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__hitObstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitObstacles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_get__hitObstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitObstacles;
}
constexpr void
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::__cordl_internal_set__hitObstacles(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hitObstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                               "get_beatmapObjectExecutionRatings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoringForNoteDidFinish(::GlobalNamespace::ScoringElement* scoringElement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(), "HandleScoringForNoteDidFinish",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScoringElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scoringElement);
}
inline void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandlePlayerHeadDidEnterObstacle(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(), "HandlePlayerHeadDidEnterObstacle",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(), "HandleObstacleDidPassAvoidedMark",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>());
}
inline void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::BeatmapObjectExecutionRatingsRecorder() {}
