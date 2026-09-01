#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayLevelSceneTransitionEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.add_anyGameplayLevelDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::System::Action*)>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::add_anyGameplayLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x590e20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                           { "add_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.remove_anyGameplayLevelDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::System::Action*)>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::remove_anyGameplayLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x590e2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                           { "remove_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionLevelScenesTransitionSetupData*)>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x590e364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)()>(&::GlobalNamespace::GameplayLevelSceneTransitionEvents::Dispose)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x590e770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleStandardLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleStandardLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x590eb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
            { "HandleStandardLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleMultiplayerLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*)>(
        &::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x590eb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                         { "HandleMultiplayerLevelDidFinish",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleMultiplayerLevelDidDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason)>(
        &::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x590ebb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                { "HandleMultiplayerLevelDidDisconnect",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.HandleMissionLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)(
    ::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMissionLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x590ebd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
            { "HandleMissionLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayLevelSceneTransitionEvents.InvokeAnyGameplayLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayLevelSceneTransitionEvents::*)()>(
    &::GlobalNamespace::GameplayLevelSceneTransitionEvents::InvokeAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x590eb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), { "InvokeAnyGameplayLevelDidFinish", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const&
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void
GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelScenesTransitionSetupData = value;
}
constexpr ::System::Action*& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get_anyGameplayLevelDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyGameplayLevelDidFinishEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_get_anyGameplayLevelDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyGameplayLevelDidFinishEvent;
}
constexpr void GlobalNamespace::GameplayLevelSceneTransitionEvents::__cordl_internal_set_anyGameplayLevelDidFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyGameplayLevelDidFinishEvent = value;
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::add_anyGameplayLevelDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                         { "add_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::remove_anyGameplayLevelDidFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                         { "remove_anyGameplayLevelDidFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                       ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                       ::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, multiplayerLevelScenesTransitionSetupData, missionLevelScenesTransitionSetupData);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                              ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
          { "HandleStandardLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void
GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                     ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                              { "HandleMultiplayerLevelDidFinish",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void
GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                         ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
                                              { "HandleMultiplayerLevelDidDisconnect",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, disconnectedReason);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::HandleMissionLevelDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData,
                                                                                             ::GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(),
          { "HandleMissionLevelDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MissionLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::GameplayLevelSceneTransitionEvents::InvokeAnyGameplayLevelDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(), { "InvokeAnyGameplayLevelDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayLevelSceneTransitionEvents*
GlobalNamespace::GameplayLevelSceneTransitionEvents::New_ctor(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                              ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                              ::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>(standardLevelScenesTransitionSetupData, multiplayerLevelScenesTransitionSetupData,
                                                                                                                  missionLevelScenesTransitionSetupData));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameplayLevelSceneTransitionEvents::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameplayLevelSceneTransitionEvents::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents::GameplayLevelSceneTransitionEvents() {}
