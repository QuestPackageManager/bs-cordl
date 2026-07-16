#pragma once
// IWYU pragma private; include "Analytics/Model/TelemetryModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "BeatGames/Analytics/zzzz__AnalyticsEventsDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.get_analyticsEventsDispatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatGames::Analytics::AnalyticsEventsDispatcher* (::Analytics::Model::TelemetryModel::*)()>(
    &::Analytics::Model::TelemetryModel::get_analyticsEventsDispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3256a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { "get_analyticsEventsDispatcher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SetEventDispatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::BeatGames::Analytics::AnalyticsEventsDispatcher*)>(
    &::Analytics::Model::TelemetryModel::SetEventDispatcher)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3256a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(),
                                                                                           { "SetEventDispatcher", {}, { ::i2c::type_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SendAppLoadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::StringW, int32_t)>(&::Analytics::Model::TelemetryModel::SendAppLoadingEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3256c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { "SendAppLoadingEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SendLevelLoadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::StringW, ::StringW, int32_t, int32_t)>(
    &::Analytics::Model::TelemetryModel::SendLevelLoadingEvent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3256d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(),
                                                { "SendLevelLoadingEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel.SendPromoEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Analytics::Model::TelemetryModel::*)(::StringW, ::StringW, int32_t)>(&::Analytics::Model::TelemetryModel::SendPromoEvent)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3256ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(),
                                                             { "SendPromoEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Analytics::Model::TelemetryModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Analytics::Model::TelemetryModel::*)()>(&::Analytics::Model::TelemetryModel::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x325700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher*& Analytics::Model::TelemetryModel::__cordl_internal_get__analyticsEventDispatcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsEventDispatcher;
}
constexpr ::BeatGames::Analytics::AnalyticsEventsDispatcher* const& Analytics::Model::TelemetryModel::__cordl_internal_get__analyticsEventDispatcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsEventDispatcher;
}
constexpr void Analytics::Model::TelemetryModel::__cordl_internal_set__analyticsEventDispatcher(::BeatGames::Analytics::AnalyticsEventsDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsEventDispatcher = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>*& Analytics::Model::TelemetryModel::__cordl_internal_get__queuedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedEvents;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* const& Analytics::Model::TelemetryModel::__cordl_internal_get__queuedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedEvents;
}
constexpr void Analytics::Model::TelemetryModel::__cordl_internal_set__queuedEvents(::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queuedEvents = value;
}
inline ::BeatGames::Analytics::AnalyticsEventsDispatcher* Analytics::Model::TelemetryModel::get_analyticsEventsDispatcher() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { "get_analyticsEventsDispatcher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatGames::Analytics::AnalyticsEventsDispatcher*>(this, ___internal_method);
}
inline void Analytics::Model::TelemetryModel::SetEventDispatcher(::BeatGames::Analytics::AnalyticsEventsDispatcher* newAnalyticsEventsDispatcher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(),
                                                                                         { "SetEventDispatcher", {}, { ::i2c::type_of<::BeatGames::Analytics::AnalyticsEventsDispatcher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAnalyticsEventsDispatcher);
}
inline void Analytics::Model::TelemetryModel::SendAppLoadingEvent(::StringW eventName, int32_t msDuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { "SendAppLoadingEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, msDuration);
}
inline void Analytics::Model::TelemetryModel::SendLevelLoadingEvent(::StringW eventName, ::StringW levelKey, int32_t msDuration, int32_t intValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(),
                                              { "SendLevelLoadingEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, levelKey, msDuration, intValue);
}
inline void Analytics::Model::TelemetryModel::SendPromoEvent(::StringW eventName, ::StringW promoId, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { "SendPromoEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, promoId, count);
}
inline void Analytics::Model::TelemetryModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Analytics::Model::TelemetryModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Analytics::Model::TelemetryModel* Analytics::Model::TelemetryModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Analytics::Model::TelemetryModel*>());
}
// Ctor Parameters []
constexpr ::Analytics::Model::TelemetryModel::TelemetryModel() {}
