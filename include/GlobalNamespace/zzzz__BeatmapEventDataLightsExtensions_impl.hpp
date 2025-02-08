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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::LightColorTypeFromEventDataValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x224326c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "LightColorTypeFromEventDataValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.GetLightColorTypeFromEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(int32_t)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::GetLightColorTypeFromEventDataValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22432a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "GetLightColorTypeFromEventDataValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.HasLightFadeEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::HasLightFadeEventDataValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22432c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "HasLightFadeEventDataValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.HasFixedDurationLightSwitchEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2243300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "HasFixedDurationLightSwitchEventDataValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataLightsExtensions.HasFixedDurationLightSwitchEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2243338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "HasFixedDurationLightSwitchEventDataValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::BeatmapEventDataLightsExtensions::LightColorTypeFromEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "LightColorTypeFromEventDataValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType, false>(nullptr, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::BeatmapEventDataLightsExtensions::GetLightColorTypeFromEventDataValue(int32_t beatmapEventValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "GetLightColorTypeFromEventDataValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType, false>(nullptr, ___internal_method, beatmapEventValue);
}
inline bool GlobalNamespace::BeatmapEventDataLightsExtensions::HasLightFadeEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "HasLightFadeEventDataValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, basicBeatmapEventData);
}
inline bool GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "HasFixedDurationLightSwitchEventDataValue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, basicBeatmapEventData);
}
inline bool GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue(int32_t beatmapEventValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataLightsExtensions*>::get(), "HasFixedDurationLightSwitchEventDataValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapEventValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataLightsExtensions::BeatmapEventDataLightsExtensions() {}
