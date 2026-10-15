#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/ISettingsEventSender.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender.SendSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendSnapshot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender.SendChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender.SendColorsOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendColorsOverride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender.SendEnvironmentOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendEnvironmentOverride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 3 }));
    return ___internal_method;
  }
};
inline bool BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendSnapshot(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendChange(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendColorsOverride(::StringW configPayload) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender::SendEnvironmentOverride(::StringW configPayload) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
