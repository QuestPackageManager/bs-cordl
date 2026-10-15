#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopSettingsEventSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__NoopSettingsEventSender_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender.SendSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendSnapshot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3504118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(),
                                                             { "SendSnapshot", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender.SendChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(&::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3504120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(),
                                                             { "SendChange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender.SendColorsOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendColorsOverride)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3504124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(), { "SendColorsOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender.SendEnvironmentOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendEnvironmentOverride)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3504128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(),
                                                                                           { "SendEnvironmentOverride", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3500f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendSnapshot(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(),
                                                           { "SendSnapshot", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendChange(
    /* [TupleElementNames(new[] { "metricName", "value" })] [Nullable(new[] { 1, 0, 1 })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* metrics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(),
                                                           { "SendChange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metrics);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendColorsOverride(::StringW configPayload) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(), { "SendColorsOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::SendEnvironmentOverride(::StringW configPayload) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(),
                                                                                         { "SendEnvironmentOverride", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configPayload);
}
inline void BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender* BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender*>());
}
/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
constexpr BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::operator ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender"
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*
BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::i___BeatSaber__Analytics__Gameplay__EventSenders__ISettingsEventSender() noexcept {
  return static_cast<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::NoopSettingsEventSender::NoopSettingsEventSender() {}
