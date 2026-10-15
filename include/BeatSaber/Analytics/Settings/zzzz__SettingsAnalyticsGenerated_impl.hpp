#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/SettingsAnalyticsGenerated.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__SettingsAnalyticsGenerated_def.hpp"
#include "BeatSaber/Settings/zzzz__AudioSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__MiscSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendAudioSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::Settings::AudioSettings, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendAudioSnapshot)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3504704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                            { "AppendAudioSnapshot",
                              {},
                              { ::i2c::type_of<::BeatSaber::Settings::AudioSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendColorsSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ColorSchemesSettings*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendColorsSnapshot)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3504858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                                                             { "AppendColorsSnapshot",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendControllerSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::Settings::ControllerSettings, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendControllerSnapshot)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3504a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                                                             { "AppendControllerSnapshot",
                                                               {},
                                                               { ::i2c::type_of<::BeatSaber::Settings::ControllerSettings>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendEnvironmentsSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OverrideEnvironmentSettings*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendEnvironmentsSnapshot)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3504b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                                                             { "AppendEnvironmentsSnapshot",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendGraphicsSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::Settings::QualitySettings, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendGraphicsSnapshot)> {
  constexpr static std::size_t size = 0x938;
  constexpr static std::size_t addrs = 0x3504bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                            { "AppendGraphicsSnapshot",
                              {},
                              { ::i2c::type_of<::BeatSaber::Settings::QualitySettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendMiscSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::Settings::MiscSettings, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendMiscSnapshot)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3505534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                            { "AppendMiscSnapshot",
                              {},
                              { ::i2c::type_of<::BeatSaber::Settings::MiscSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated.AppendPlayerSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerSpecificSettings*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*)>(
    &::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendPlayerSnapshot)> {
  constexpr static std::size_t size = 0xab4;
  constexpr static std::size_t addrs = 0x3505674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                                                             { "AppendPlayerSnapshot",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendAudioSnapshot(
    ::BeatSaber::Settings::AudioSettings s, /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                          { "AppendAudioSnapshot",
                            {},
                            { ::i2c::type_of<::BeatSaber::Settings::AudioSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendColorsSnapshot(
    ::GlobalNamespace::ColorSchemesSettings* s,
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                          { "AppendColorsSnapshot",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendControllerSnapshot(
    ::BeatSaber::Settings::ControllerSettings s,
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                          { "AppendControllerSnapshot",
                            {},
                            { ::i2c::type_of<::BeatSaber::Settings::ControllerSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendEnvironmentsSnapshot(
    ::GlobalNamespace::OverrideEnvironmentSettings* s,
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                                                           { "AppendEnvironmentsSnapshot",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendGraphicsSnapshot(
    ::BeatSaber::Settings::QualitySettings s, /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                          { "AppendGraphicsSnapshot",
                            {},
                            { ::i2c::type_of<::BeatSaber::Settings::QualitySettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendMiscSnapshot(
    ::BeatSaber::Settings::MiscSettings s, /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                          { "AppendMiscSnapshot",
                            {},
                            { ::i2c::type_of<::BeatSaber::Settings::MiscSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
inline void BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::AppendPlayerSnapshot(
    ::GlobalNamespace::PlayerSpecificSettings* s,
    /* [TupleElementNames(new[] { "metricName", "value" })] */ ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated*>(),
                                                           { "AppendPlayerSnapshot",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, float_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, results);
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::SettingsAnalyticsGenerated::SettingsAnalyticsGenerated() {}
