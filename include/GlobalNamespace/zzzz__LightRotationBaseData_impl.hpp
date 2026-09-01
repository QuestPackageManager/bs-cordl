#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationBaseData.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBaseData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBaseData::*)(
    float_t, bool, ::GlobalNamespace::EaseType, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(&::GlobalNamespace::LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x371bb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBaseData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beat = value;
}
constexpr bool& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_usePreviousEventRotationValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventRotationValue;
}
constexpr bool const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_usePreviousEventRotationValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventRotationValue;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_usePreviousEventRotationValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventRotationValue = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr float_t& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr int32_t& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_loopsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopsCount;
}
constexpr int32_t const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_loopsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loopsCount;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_loopsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loopsCount = value;
}
constexpr ::GlobalNamespace::LightRotationDirection& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDirection;
}
constexpr ::GlobalNamespace::LightRotationDirection const& GlobalNamespace::LightRotationBaseData::__cordl_internal_get_rotationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationDirection;
}
constexpr void GlobalNamespace::LightRotationBaseData::__cordl_internal_set_rotationDirection(::GlobalNamespace::LightRotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationDirection = value;
}
inline void GlobalNamespace::LightRotationBaseData::_ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount,
                                                          ::GlobalNamespace::LightRotationDirection rotationDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBaseData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection);
}
inline ::GlobalNamespace::LightRotationBaseData* GlobalNamespace::LightRotationBaseData::New_ctor(float_t beat, bool usePreviousEventRotationValue, ::GlobalNamespace::EaseType easeType,
                                                                                                  float_t rotation, int32_t loopsCount, ::GlobalNamespace::LightRotationDirection rotationDirection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationBaseData*>(beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationBaseData::LightRotationBaseData() {}
