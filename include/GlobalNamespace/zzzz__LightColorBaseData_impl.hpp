#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBaseData::*)(
    float_t, bool, ::GlobalNamespace::EaseType, ::GlobalNamespace::EnvironmentColorType, float_t, int32_t, float_t, bool)>(&::GlobalNamespace::LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x127d20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightColorBaseData::__cordl_internal_get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beat = value;
}
constexpr bool& GlobalNamespace::LightColorBaseData::__cordl_internal_get_usePreviousValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousValue;
}
constexpr bool const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_usePreviousValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousValue;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_usePreviousValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousValue = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightColorBaseData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::LightColorBaseData::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_colorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__cordl_internal_get_brightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brightness;
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_brightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___brightness;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_brightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___brightness = value;
}
constexpr int32_t& GlobalNamespace::LightColorBaseData::__cordl_internal_get_strobeBeatFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBeatFrequency;
}
constexpr int32_t const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_strobeBeatFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBeatFrequency;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_strobeBeatFrequency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeBeatFrequency = value;
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__cordl_internal_get_strobeBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBrightness;
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_strobeBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeBrightness;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_strobeBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeBrightness = value;
}
constexpr bool& GlobalNamespace::LightColorBaseData::__cordl_internal_get_strobeFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeFade;
}
constexpr bool const& GlobalNamespace::LightColorBaseData::__cordl_internal_get_strobeFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeFade;
}
constexpr void GlobalNamespace::LightColorBaseData::__cordl_internal_set_strobeFade(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeFade = value;
}
inline ::GlobalNamespace::LightColorBaseData* GlobalNamespace::LightColorBaseData::New_ctor(float_t beat, bool usePreviousValue, ::GlobalNamespace::EaseType easeType,
                                                                                            ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency,
                                                                                            float_t strobeBrightness, bool strobeFade) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightColorBaseData*>(beat, usePreviousValue, easeType, colorType, brightness, strobeBeatFrequency, strobeBrightness, strobeFade));
}
inline void GlobalNamespace::LightColorBaseData::_ctor(float_t beat, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness,
                                                       int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBaseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousValue, easeType, colorType, brightness, strobeBeatFrequency, strobeBrightness, strobeFade);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorBaseData::LightColorBaseData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
