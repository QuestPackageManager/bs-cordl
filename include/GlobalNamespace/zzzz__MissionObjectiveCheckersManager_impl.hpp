#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveCheckersManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager_InitData::*)(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>)>(&::GlobalNamespace::MissionObjectiveCheckersManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bb48f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>&
GlobalNamespace::MissionObjectiveCheckersManager_InitData::__cordl_internal_get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const&
GlobalNamespace::MissionObjectiveCheckersManager_InitData::__cordl_internal_get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager_InitData::__cordl_internal_set_missionObjectives(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionObjectiveCheckersManager_InitData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjectives);
}
inline ::GlobalNamespace::MissionObjectiveCheckersManager_InitData*
GlobalNamespace::MissionObjectiveCheckersManager_InitData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionObjectiveCheckersManager_InitData*>(missionObjectives));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager_InitData::MissionObjectiveCheckersManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveDidFailEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bb3b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveDidFailEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveDidFailEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bb3c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveDidFailEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveWasClearedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bb3cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveWasClearedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveWasClearedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bb3d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveWasClearedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectivesListDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bb3dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectivesListDidChangeEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectivesListDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bb3e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectivesListDidChangeEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.get_activeMissionObjectiveCheckers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bb3f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                 "get_activeMissionObjectiveCheckers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::Start)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x3bb3f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3bb4504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleMissionObjectiveCheckerStatusDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::GlobalNamespace::MissionObjectiveChecker*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3bb46ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "HandleMissionObjectiveCheckerStatusDidChange",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetMissionObjectiveChecker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveChecker> (::GlobalNamespace::MissionObjectiveCheckersManager::*)(
    ::GlobalNamespace::MissionObjectiveTypeSO*)>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3bb46f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "GetMissionObjectiveChecker", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveTypeSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> (
    ::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetResults)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3bb0c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "GetResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bb47c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "HandleLevelFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bb4898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "HandleLevelFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.StopChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::StopChecking)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3bb47c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "StopChecking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3bb489c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>&
GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__missionObjectiveCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const&
GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__missionObjectiveCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckers;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set__missionObjectiveCheckers(
    ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager_InitData*& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager_InitData* const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set__initData(::GlobalNamespace::MissionObjectiveCheckersManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__gameplayManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayManager;
}
constexpr ::GlobalNamespace::ILevelEndActions* const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__gameplayManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayManager;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get_objectiveDidFailEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveDidFailEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get_objectiveDidFailEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveDidFailEvent;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set_objectiveDidFailEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectiveDidFailEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get_objectiveWasClearedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveWasClearedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get_objectiveWasClearedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveWasClearedEvent;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set_objectiveWasClearedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectiveWasClearedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get_objectivesListDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectivesListDidChangeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get_objectivesListDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectivesListDidChangeEvent;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set_objectivesListDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectivesListDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>&
GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__activeMissionObjectiveCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMissionObjectiveCheckers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const&
GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__activeMissionObjectiveCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMissionObjectiveCheckers;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set__activeMissionObjectiveCheckers(
    ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeMissionObjectiveCheckers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveDidFailEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveDidFailEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveWasClearedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveWasClearedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectivesListDidChangeEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectivesListDidChangeEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>
GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "get_activeMissionObjectiveCheckers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, ::Array<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "HandleMissionObjectiveCheckerStatusDidChange",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjectiveChecker);
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveChecker>
GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "GetMissionObjectiveChecker", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveTypeSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveChecker>, false>(this, ___internal_method, missionObjectiveType);
}
inline ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> GlobalNamespace::MissionObjectiveCheckersManager::GetResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "GetResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "HandleLevelFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "HandleLevelFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::StopChecking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "StopChecking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveCheckersManager* GlobalNamespace::MissionObjectiveCheckersManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionObjectiveCheckersManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager::MissionObjectiveCheckersManager() {}
