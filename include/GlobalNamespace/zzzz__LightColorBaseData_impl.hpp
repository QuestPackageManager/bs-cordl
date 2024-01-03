#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBaseData::*)(
    float_t, ::GlobalNamespace::BeatmapEventTransitionType, ::GlobalNamespace::EnvironmentColorType, float_t, int32_t, float_t, bool)>(&::GlobalNamespace::LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x233cd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBaseData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventTransitionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightColorBaseData::__get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beat = value;
}
constexpr ::GlobalNamespace::BeatmapEventTransitionType& GlobalNamespace::LightColorBaseData::__get_transitionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionType;
}
constexpr ::GlobalNamespace::BeatmapEventTransitionType const& GlobalNamespace::LightColorBaseData::__get_transitionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionType;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_transitionType(::GlobalNamespace::BeatmapEventTransitionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionType = value;
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::LightColorBaseData::__get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::LightColorBaseData::__get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_colorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__get_brightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brightness;
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__get_brightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brightness;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_brightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___brightness = value;
}
constexpr int32_t& GlobalNamespace::LightColorBaseData::__get_strobeBeatFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBeatFrequency;
}
constexpr int32_t const& GlobalNamespace::LightColorBaseData::__get_strobeBeatFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBeatFrequency;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeBeatFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeBeatFrequency = value;
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__get_strobeBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBrightness;
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__get_strobeBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBrightness;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeBrightness = value;
}
constexpr bool& GlobalNamespace::LightColorBaseData::__get_strobeFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeFade;
}
constexpr bool const& GlobalNamespace::LightColorBaseData::__get_strobeFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeFade;
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeFade(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeFade = value;
}
inline ::GlobalNamespace::LightColorBaseData* GlobalNamespace::LightColorBaseData::New_ctor(float_t beat, ::GlobalNamespace::BeatmapEventTransitionType transitionType,
                                                                                            ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency,
                                                                                            float_t strobeBrightness, bool strobeFade) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorBaseData*>(beat, transitionType, colorType, brightness, strobeBeatFrequency, strobeBrightness, strobeFade));
}
inline void GlobalNamespace::LightColorBaseData::_ctor(float_t beat, ::GlobalNamespace::BeatmapEventTransitionType transitionType, ::GlobalNamespace::EnvironmentColorType colorType,
                                                       float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBaseData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventTransitionType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, transitionType, colorType, brightness, strobeBeatFrequency, strobeBrightness, strobeFade);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorBaseData::LightColorBaseData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
