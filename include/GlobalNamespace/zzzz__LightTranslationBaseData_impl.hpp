#pragma once
// IWYU pragma private; include "GlobalNamespace\LightTranslationBaseData.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationBaseData::*)(float_t, bool, ::GlobalNamespace::EaseType, float_t)>(
    &::GlobalNamespace::LightTranslationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x371ca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBaseData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::LightTranslationBaseData::__cordl_internal_set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beat = value;
}
constexpr bool& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_usePreviousEventTranslationValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventTranslationValue;
}
constexpr bool const& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_usePreviousEventTranslationValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventTranslationValue;
}
constexpr void GlobalNamespace::LightTranslationBaseData::__cordl_internal_set_usePreviousEventTranslationValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventTranslationValue = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::LightTranslationBaseData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr float_t& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_translation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translation;
}
constexpr float_t const& GlobalNamespace::LightTranslationBaseData::__cordl_internal_get_translation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translation;
}
constexpr void GlobalNamespace::LightTranslationBaseData::__cordl_internal_set_translation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___translation = value;
}
inline void GlobalNamespace::LightTranslationBaseData::_ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType, float_t translation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationBaseData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, usePreviousEventTranslationValue, easeType, translation);
}
inline ::GlobalNamespace::LightTranslationBaseData* GlobalNamespace::LightTranslationBaseData::New_ctor(float_t beat, bool usePreviousEventTranslationValue, ::GlobalNamespace::EaseType easeType,
                                                                                                        float_t translation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightTranslationBaseData*>(beat, usePreviousEventTranslationValue, easeType, translation));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationBaseData::LightTranslationBaseData() {}
