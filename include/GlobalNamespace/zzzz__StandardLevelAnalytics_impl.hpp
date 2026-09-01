#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelAnalytics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelAnalytics_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelAnalytics.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelAnalytics::*)()>(&::GlobalNamespace::StandardLevelAnalytics::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b3990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelAnalytics.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelAnalytics::*)()>(&::GlobalNamespace::StandardLevelAnalytics::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b3a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelAnalytics.HandleStandardLevelDidFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelAnalytics::*)(
    ::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::StandardLevelAnalytics::HandleStandardLevelDidFinishEvent)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0x58b3ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(),
                                                { "HandleStandardLevelDidFinishEvent",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelAnalytics::*)()>(&::GlobalNamespace::StandardLevelAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b43e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::StandardLevelAnalytics::__cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::StandardLevelAnalytics::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__gameplayEventsDispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__gameplayEventsDispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr void GlobalNamespace::StandardLevelAnalytics::__cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayEventsDispatcher = value;
}
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__blockLevelGameplayAnalyticsEventsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevelGameplayAnalyticsEventsCache;
}
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* const& GlobalNamespace::StandardLevelAnalytics::__cordl_internal_get__blockLevelGameplayAnalyticsEventsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevelGameplayAnalyticsEventsCache;
}
constexpr void GlobalNamespace::StandardLevelAnalytics::__cordl_internal_set__blockLevelGameplayAnalyticsEventsCache(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockLevelGameplayAnalyticsEventsCache = value;
}
inline void GlobalNamespace::StandardLevelAnalytics::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelAnalytics::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelAnalytics::HandleStandardLevelDidFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                                                       ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(),
                                              { "HandleStandardLevelDidFinishEvent",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void GlobalNamespace::StandardLevelAnalytics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelAnalytics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelAnalytics* GlobalNamespace::StandardLevelAnalytics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelAnalytics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelAnalytics::StandardLevelAnalytics() {}
