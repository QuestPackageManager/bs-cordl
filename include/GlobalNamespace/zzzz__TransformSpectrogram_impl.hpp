#pragma once
// IWYU pragma private; include "GlobalNamespace\TransformSpectrogram.hpp"
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransformSpectrogram_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::Awake)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59a7f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformSpectrogram*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::Update)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x59a80b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformSpectrogram*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59a8324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformSpectrogram*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transforms = value;
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axis;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__axis(::GlobalNamespace::LightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____axis = value;
}
constexpr float_t& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__minPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPosition;
}
constexpr float_t const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__minPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPosition;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__minPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minPosition = value;
}
constexpr float_t& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__maxPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPosition;
}
constexpr float_t const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__maxPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPosition;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__maxPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPosition = value;
}
constexpr bool& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__scaleSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleSamples;
}
constexpr bool const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__scaleSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleSamples;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__scaleSamples(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleSamples = value;
}
constexpr float_t& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr float_t const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scale = value;
}
constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__spectrogramData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__spectrogramData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogramData;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectrogramData = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____direction = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__defaultPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::TransformSpectrogram::__cordl_internal_get__defaultPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPositions;
}
constexpr void GlobalNamespace::TransformSpectrogram::__cordl_internal_set__defaultPositions(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPositions = value;
}
inline void GlobalNamespace::TransformSpectrogram::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformSpectrogram*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformSpectrogram::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformSpectrogram*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformSpectrogram::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransformSpectrogram*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformSpectrogram* GlobalNamespace::TransformSpectrogram::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformSpectrogram*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformSpectrogram::TransformSpectrogram() {}
