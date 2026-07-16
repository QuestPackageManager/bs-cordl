#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelAnalytics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelAnalytics_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBlockLevelGameplayAnalyticsEventsCache_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelAnalytics.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelAnalytics::*)()>(&::GlobalNamespace::MultiplayerLevelAnalytics::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b4358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelAnalytics.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelAnalytics::*)()>(&::GlobalNamespace::MultiplayerLevelAnalytics::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b43e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelAnalytics.HandleMultiplayerLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelAnalytics::*)(
    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::MultiplayerLevelAnalytics::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0xac8;
  constexpr static std::size_t addrs = 0x58b4478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(),
                                         { "HandleMultiplayerLevelDidFinish",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelAnalytics::*)()>(&::GlobalNamespace::MultiplayerLevelAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b4f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__gameplayEventsDispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__gameplayEventsDispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayEventsDispatcher;
}
constexpr void GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayEventsDispatcher = value;
}
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__blockLevelGameplayEventsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevelGameplayEventsCache;
}
constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* const& GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_get__blockLevelGameplayEventsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blockLevelGameplayEventsCache;
}
constexpr void GlobalNamespace::MultiplayerLevelAnalytics::__cordl_internal_set__blockLevelGameplayEventsCache(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blockLevelGameplayEventsCache = value;
}
inline void GlobalNamespace::MultiplayerLevelAnalytics::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelAnalytics::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelAnalytics::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                        ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(),
                                              { "HandleMultiplayerLevelDidFinish",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::MultiplayerLevelAnalytics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelAnalytics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelAnalytics* GlobalNamespace::MultiplayerLevelAnalytics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelAnalytics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelAnalytics::MultiplayerLevelAnalytics() {}
