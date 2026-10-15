#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsSnapshotAnalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsSnapshotAnalytics_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__IPlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::*)(
    ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*, ::GlobalNamespace::IPlayerDataModel*, ::GlobalNamespace::SettingsManager*)>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x350b828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>(), ::i2c::type_of<::GlobalNamespace::IPlayerDataModel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::SettingsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics.TrySendSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::TrySendSnapshot)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x350b834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(), { "TrySendSnapshot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics.TodayInDays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::TodayInDays)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x350bcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(), { "TodayInDays", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_get__dispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatcher;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_get__dispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatcher;
}
constexpr void BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_set__dispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dispatcher = value;
}
constexpr ::GlobalNamespace::IPlayerDataModel*& BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::GlobalNamespace::IPlayerDataModel* const& BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_set__playerDataModel(::GlobalNamespace::IPlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::SettingsManager*& BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher,
                                                                             ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>(), ::i2c::type_of<::GlobalNamespace::IPlayerDataModel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::SettingsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dispatcher, playerDataModel, settingsManager);
}
inline void BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::TrySendSnapshot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(), { "TrySendSnapshot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::TodayInDays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(), { "TodayInDays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*
BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher, ::GlobalNamespace::IPlayerDataModel* playerDataModel,
                                                                    ::GlobalNamespace::SettingsManager* settingsManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics*>(dispatcher, playerDataModel, settingsManager));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsSnapshotAnalytics::SettingsSnapshotAnalytics() {}
