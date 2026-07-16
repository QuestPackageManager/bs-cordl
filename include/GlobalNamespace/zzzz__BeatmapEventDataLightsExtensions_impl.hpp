#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataLightsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataLightsExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataLightsExtensions_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues::BeatmapEventDataLightsExtensions_LightSwitchEventEffectDataValues() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.LightColorTypeFromEventDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::LightColorTypeFromEventDataValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3259588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(),
                                                             { "LightColorTypeFromEventDataValue", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.GetLightColorTypeFromEventDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(int32_t)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::GetLightColorTypeFromEventDataValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x325959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(), { "GetLightColorTypeFromEventDataValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.HasLightFadeEventDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::BeatmapEventDataLightsExtensions::HasLightFadeEventDataValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32595c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(),
                                                                                           { "HasLightFadeEventDataValue", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.HasFixedDurationLightSwitchEventDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x32595e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(),
                                                             { "HasFixedDurationLightSwitchEventDataValue", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.HasFixedDurationLightSwitchEventDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3259614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(), { "HasFixedDurationLightSwitchEventDataValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::BeatmapEventDataLightsExtensions::LightColorTypeFromEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(),
                                                                                         { "LightColorTypeFromEventDataValue", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType>(nullptr, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::BeatmapEventDataLightsExtensions::GetLightColorTypeFromEventDataValue(int32_t beatmapEventValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(), { "GetLightColorTypeFromEventDataValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType>(nullptr, ___internal_method, beatmapEventValue);
}
inline bool GlobalNamespace::BeatmapEventDataLightsExtensions::HasLightFadeEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(),
                                                                                         { "HasLightFadeEventDataValue", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, basicBeatmapEventData);
}
inline bool GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(),
                                                           { "HasFixedDurationLightSwitchEventDataValue", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, basicBeatmapEventData);
}
inline bool GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue(int32_t beatmapEventValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventDataLightsExtensions*>(), { "HasFixedDurationLightSwitchEventDataValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, beatmapEventValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataLightsExtensions::BeatmapEventDataLightsExtensions() {}
