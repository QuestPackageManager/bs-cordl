#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/SettingsEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__EventSenderBase_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__SettingsEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipEventType_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.get_SegmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::get_SegmentName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x350412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(), { "get_SegmentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(
    ::OSCE::Analytics::AnalyticsManager*, ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.SendSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendSnapshot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x350413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                             { "SendSnapshot", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.SendChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35043dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                             { "SendChange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.SendColorsOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendColorsOverride)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35043e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(), { "SendColorsOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.SendEnvironmentOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendEnvironmentOverride)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x35045cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(), { "SendEnvironmentOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.SendMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendMetrics)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3504140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                             { "SendMetrics", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender.SendCustomEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::*)(
    ::StringW, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendCustomEvent)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3504454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                { "SendCustomEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*& BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::__cordl_internal_get__eventsBuilderFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* const& BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::__cordl_internal_get__eventsBuilderFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderFactory;
}
constexpr void BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::__cordl_internal_set__eventsBuilderFactory(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventsBuilderFactory = value;
}
inline ::StringW BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::get_SegmentName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(), { "get_SegmentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                                     ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, analyticsManager, eventsBuilderFactory);
}
inline bool BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendSnapshot(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                           { "SendSnapshot", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendChange(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                           { "SendChange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendColorsOverride(::StringW configPayload) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(), { "SendColorsOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendEnvironmentOverride(::StringW configPayload) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(), { "SendEnvironmentOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline bool BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendMetrics(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 2, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                                           { "SendMetrics", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SendCustomEvent(::StringW payload, ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* eventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(),
                                              { "SendCustomEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payload, eventType);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager,
                                                                            ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* eventsBuilderFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender*>(analyticsManager, eventsBuilderFactory));
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__ISettingsEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::SettingsEventSender::SettingsEventSender() {}
