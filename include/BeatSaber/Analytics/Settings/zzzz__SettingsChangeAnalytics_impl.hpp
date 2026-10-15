#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsChangeAnalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsChangeAnalytics_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__IGameplayEventsDispatcher_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__AudioSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__ColorsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__ControllerSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__EnvironmentsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__GraphicsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__MiscSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__PlayerSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsChangeAnalytics_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(&::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ac2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::*)(::GlobalNamespace::ColorSchemesSettings*)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x350ac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::*)(::GlobalNamespace::ColorSchemesSettings*)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x350acd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_get__baseline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseline;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_get__baseline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseline;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_set__baseline(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseline = value;
}
constexpr bool& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::TakeSnapshot(::GlobalNamespace::ColorSchemesSettings* colors) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::DiffAndSend(::GlobalNamespace::ColorSchemesSettings* colors) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(),
                                                                                         { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker::SettingsChangeAnalytics_ColorsConfigTracker() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::*)(
    ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(&::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::*)(::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x350adc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::*)(::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x350ae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_get__baseline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseline;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_get__baseline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseline;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_set__baseline(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseline = value;
}
constexpr bool& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::TakeSnapshot(::GlobalNamespace::OverrideEnvironmentSettings* environments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environments);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::DiffAndSend(::GlobalNamespace::OverrideEnvironmentSettings* environments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(),
                                                                                         { "DiffAndSend", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environments);
}
inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker::SettingsChangeAnalytics_EnvironmentsConfigTracker() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::*)(
    ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*)>(&::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ac24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender.SendSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendSnapshot)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x350af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                             { "SendSnapshot", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender.SendChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendChange)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x350b07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                             { "SendChange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender.SendColorsOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendColorsOverride)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x350b1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                                                           { "SendColorsOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender.SendEnvironmentOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendEnvironmentOverride)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x350b2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                                                           { "SendEnvironmentOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::__cordl_internal_get__dispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatcher;
}
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::__cordl_internal_get__dispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatcher;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::__cordl_internal_set__dispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dispatcher = value;
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dispatcher);
}
inline bool BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendSnapshot(
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                           { "SendSnapshot", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendChange(
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                           { "SendChange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendColorsOverride(::StringW configPayload) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                                                         { "SendColorsOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SendEnvironmentOverride(::StringW configPayload) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(),
                                                                                         { "SendEnvironmentOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender*>(dispatcher));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
constexpr BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*
BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__ISettingsEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_LiveSettingsEventSender::SettingsChangeAnalytics_LiveSettingsEventSender() {}
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Audio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::AudioSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Audio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350aad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Audio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::ColorsSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Colors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Controller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::ControllerSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350aae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Controller", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Environments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Environments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350aaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Environments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Graphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Graphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350aaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Graphics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Misc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::MiscSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Misc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350aafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Misc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_Player
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::PlayerSettingsTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Player)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ab04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Player", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_ColorsConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_ColorsConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ab0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_ColorsConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics.get_EnvironmentsConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* (
    ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)()>(&::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_EnvironmentsConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ab14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_EnvironmentsConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::*)(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*)>(
    &::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x350ab1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Settings::AudioSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Audio_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Audio_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::AudioSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Audio_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Audio_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Audio_k__BackingField(::BeatSaber::Analytics::Settings::AudioSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Audio_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::ColorsSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Colors_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Colors_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Colors_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Colors_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Colors_k__BackingField(::BeatSaber::Analytics::Settings::ColorsSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Colors_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::ControllerSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Controller_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Controller_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Controller_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Controller_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Controller_k__BackingField(::BeatSaber::Analytics::Settings::ControllerSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Controller_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Environments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Environments_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Environments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Environments_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Environments_k__BackingField(::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Environments_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Graphics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Graphics_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Graphics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Graphics_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Graphics_k__BackingField(::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Graphics_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::MiscSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Misc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Misc_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::MiscSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Misc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Misc_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Misc_k__BackingField(::BeatSaber::Analytics::Settings::MiscSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Misc_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::PlayerSettingsTracker*& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Player_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Player_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* const& BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__Player_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Player_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__Player_k__BackingField(::BeatSaber::Analytics::Settings::PlayerSettingsTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Player_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__ColorsConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ColorsConfig_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* const&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__ColorsConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ColorsConfig_k__BackingField;
}
constexpr void
BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__ColorsConfig_k__BackingField(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ColorsConfig_k__BackingField = value;
}
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__EnvironmentsConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnvironmentsConfig_k__BackingField;
}
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* const&
BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_get__EnvironmentsConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnvironmentsConfig_k__BackingField;
}
constexpr void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::__cordl_internal_set__EnvironmentsConfig_k__BackingField(
    ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnvironmentsConfig_k__BackingField = value;
}
inline ::BeatSaber::Analytics::Settings::AudioSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Audio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Audio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::AudioSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::ColorsSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Colors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Colors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::ColorsSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::ControllerSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Controller() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Controller", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::ControllerSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Environments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Environments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::EnvironmentsSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Graphics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Graphics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::MiscSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Misc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Misc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::MiscSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::PlayerSettingsTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_Player() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_Player", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::PlayerSettingsTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_ColorsConfig() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_ColorsConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_ColorsConfigTracker*>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker* BeatSaber::Analytics::Settings::SettingsChangeAnalytics::get_EnvironmentsConfig() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(), { "get_EnvironmentsConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics_EnvironmentsConfigTracker*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Settings::SettingsChangeAnalytics::_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dispatcher);
}
inline ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*
BeatSaber::Analytics::Settings::SettingsChangeAnalytics::New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* dispatcher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*>(dispatcher));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics::SettingsChangeAnalytics() {}
