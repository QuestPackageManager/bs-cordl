#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionObjectiveCheckersManager__InitData::*)(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>)>(&::GlobalNamespace::__MissionObjectiveCheckersManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cd16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& GlobalNamespace::__MissionObjectiveCheckersManager__InitData::__get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const&
GlobalNamespace::__MissionObjectiveCheckersManager__InitData::__get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void
GlobalNamespace::__MissionObjectiveCheckersManager__InitData::__set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*
GlobalNamespace::__MissionObjectiveCheckersManager__InitData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*>(missionObjectives));
}
inline void GlobalNamespace::__MissionObjectiveCheckersManager__InitData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjectives);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData::__MissionObjectiveCheckersManager__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveDidFailEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cc400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveDidFailEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveDidFailEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cc49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveDidFailEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveWasClearedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cc538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveWasClearedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveWasClearedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cc5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveWasClearedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectivesListDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cc670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectivesListDidChangeEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectivesListDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23cc70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectivesListDidChangeEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.get_activeMissionObjectiveCheckers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> (
    ::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "get_activeMissionObjectiveCheckers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::Start)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x23cc7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x23ccd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleMissionObjectiveCheckerStatusDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::GlobalNamespace::MissionObjectiveChecker*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23ccf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "HandleMissionObjectiveCheckerStatusDidChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetMissionObjectiveChecker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjectiveChecker* (
    ::GlobalNamespace::MissionObjectiveCheckersManager::*)(::GlobalNamespace::MissionObjectiveTypeSO*)>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23ccf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "GetMissionObjectiveChecker", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveTypeSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> (
    ::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetResults)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x23c95c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "GetResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23cd034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "HandleLevelFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23cd110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "HandleLevelFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.StopChecking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::StopChecking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23cd038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               "StopChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23cd114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*>&
GlobalNamespace::MissionObjectiveCheckersManager::__get__missionObjectiveCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckers;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> const&
GlobalNamespace::MissionObjectiveCheckersManager::__get__missionObjectiveCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckers;
}
constexpr void
GlobalNamespace::MissionObjectiveCheckersManager::__set__missionObjectiveCheckers(::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*& GlobalNamespace::MissionObjectiveCheckersManager::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionObjectiveCheckersManager__InitData*> const& GlobalNamespace::MissionObjectiveCheckersManager::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__set__initData(::GlobalNamespace::__MissionObjectiveCheckersManager__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::MissionObjectiveCheckersManager::__get__gameplayManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& GlobalNamespace::MissionObjectiveCheckersManager::__get__gameplayManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayManager;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__set__gameplayManager(::GlobalNamespace::ILevelEndActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionObjectiveCheckersManager::__get_objectiveDidFailEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveDidFailEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionObjectiveCheckersManager::__get_objectiveDidFailEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveDidFailEvent;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__set_objectiveDidFailEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectiveDidFailEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionObjectiveCheckersManager::__get_objectiveWasClearedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveWasClearedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionObjectiveCheckersManager::__get_objectiveWasClearedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectiveWasClearedEvent;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__set_objectiveWasClearedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectiveWasClearedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionObjectiveCheckersManager::__get_objectivesListDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectivesListDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionObjectiveCheckersManager::__get_objectivesListDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectivesListDidChangeEvent;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__set_objectivesListDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectivesListDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*>&
GlobalNamespace::MissionObjectiveCheckersManager::__get__activeMissionObjectiveCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMissionObjectiveCheckers;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> const&
GlobalNamespace::MissionObjectiveCheckersManager::__get__activeMissionObjectiveCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMissionObjectiveCheckers;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__set__activeMissionObjectiveCheckers(
    ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeMissionObjectiveCheckers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveDidFailEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveDidFailEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectiveWasClearedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectiveWasClearedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "add_objectivesListDidChangeEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "remove_objectivesListDidChangeEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*>
GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "get_activeMissionObjectiveCheckers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjectiveChecker*, ::Array<::GlobalNamespace::MissionObjectiveChecker*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "HandleMissionObjectiveCheckerStatusDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveChecker*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionObjectiveChecker);
}
inline ::GlobalNamespace::MissionObjectiveChecker* GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(), "GetMissionObjectiveChecker", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjectiveTypeSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjectiveChecker*, false>(this, ___internal_method, missionObjectiveType);
}
inline ::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*> GlobalNamespace::MissionObjectiveCheckersManager::GetResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "GetResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjectiveResult*, ::Array<::GlobalNamespace::MissionObjectiveResult*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "HandleLevelFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "HandleLevelFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::StopChecking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             "StopChecking", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveCheckersManager* GlobalNamespace::MissionObjectiveCheckersManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjectiveCheckersManager*>());
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveCheckersManager*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager::MissionObjectiveCheckersManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
