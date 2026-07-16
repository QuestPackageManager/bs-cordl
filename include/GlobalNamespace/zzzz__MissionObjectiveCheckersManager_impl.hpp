#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveCheckersManager.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager_InitData::*)(::ArrayW<::GlobalNamespace::MissionObjective*>)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59197b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager_InitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*>& GlobalNamespace::MissionObjectiveCheckersManager_InitData::__cordl_internal_get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*> const& GlobalNamespace::MissionObjectiveCheckersManager_InitData::__cordl_internal_get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager_InitData::__cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionObjectives = value;
}
inline void GlobalNamespace::MissionObjectiveCheckersManager_InitData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager_InitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjective*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectives);
}
inline ::GlobalNamespace::MissionObjectiveCheckersManager_InitData*
GlobalNamespace::MissionObjectiveCheckersManager_InitData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveCheckersManager_InitData*>(missionObjectives));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager_InitData::MissionObjectiveCheckersManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveDidFailEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5916240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "add_objectiveDidFailEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveDidFailEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5915a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "remove_objectiveDidFailEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectiveWasClearedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5914f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "add_objectiveWasClearedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectiveWasClearedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x591507c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "remove_objectiveWasClearedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.add_objectivesListDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x591697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "add_objectivesListDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.remove_objectivesListDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5916e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(),
                                                                                           { "remove_objectivesListDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.get_activeMissionObjectiveCheckers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>> (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5918de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "get_activeMissionObjectiveCheckers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::Start)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x5918de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5919390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleMissionObjectiveCheckerStatusDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)(::GlobalNamespace::MissionObjectiveChecker*)>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5919574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(),
                                                             { "HandleMissionObjectiveCheckerStatusDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetMissionObjectiveChecker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionObjectiveChecker> (::GlobalNamespace::MissionObjectiveCheckersManager::*)(
    ::GlobalNamespace::MissionObjectiveTypeSO*)>(&::GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59195b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(),
                                                                                           { "GetMissionObjectiveChecker", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.GetResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MissionObjectiveResult*> (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(
    &::GlobalNamespace::MissionObjectiveCheckersManager::GetResults)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5917388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "GetResults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5919684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "HandleLevelFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.HandleLevelFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5919758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "HandleLevelFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager.StopChecking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::StopChecking)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5919688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "StopChecking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveCheckersManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&::GlobalNamespace::MissionObjectiveCheckersManager::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x591975c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__missionObjectiveCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>> const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__missionObjectiveCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckers;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set__missionObjectiveCheckers(::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveCheckers = value;
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
  this->____initData = value;
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
  this->____gameplayManager = value;
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
  this->___objectiveDidFailEvent = value;
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
  this->___objectiveWasClearedEvent = value;
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
  this->___objectivesListDidChangeEvent = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__activeMissionObjectiveCheckers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMissionObjectiveCheckers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>> const& GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_get__activeMissionObjectiveCheckers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeMissionObjectiveCheckers;
}
constexpr void GlobalNamespace::MissionObjectiveCheckersManager::__cordl_internal_set__activeMissionObjectiveCheckers(::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeMissionObjectiveCheckers = value;
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "add_objectiveDidFailEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "remove_objectiveDidFailEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "add_objectiveWasClearedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "remove_objectiveWasClearedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "add_objectivesListDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(),
                                                                                         { "remove_objectivesListDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>> GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "get_activeMissionObjectiveCheckers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(),
                                                           { "HandleMissionObjectiveCheckerStatusDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveChecker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjectiveChecker);
}
inline ::UnityW<::GlobalNamespace::MissionObjectiveChecker>
GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(),
                                                                                         { "GetMissionObjectiveChecker", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjectiveTypeSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>(this, ___internal_method, missionObjectiveType);
}
inline ::ArrayW<::GlobalNamespace::MissionObjectiveResult*> GlobalNamespace::MissionObjectiveCheckersManager::GetResults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "GetResults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjectiveResult*>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "HandleLevelFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "HandleLevelFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::StopChecking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { "StopChecking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveCheckersManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveCheckersManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveCheckersManager* GlobalNamespace::MissionObjectiveCheckersManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveCheckersManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager::MissionObjectiveCheckersManager() {}
