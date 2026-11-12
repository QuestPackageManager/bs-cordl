#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingPlaybackSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingPlaybackSettings_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingPlaybackSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecordingPlaybackSettings::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::RecordingPlaybackSettings::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a0b464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingPlaybackSettings*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_headPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_headPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPositionOffset;
}
constexpr void GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_set_headPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_headRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_headRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotationOffset;
}
constexpr void GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_set_headRotationOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headRotationOffset = value;
}
constexpr float_t& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_headSmoothing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headSmoothing;
}
constexpr float_t const& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_headSmoothing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headSmoothing;
}
constexpr void GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_set_headSmoothing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headSmoothing = value;
}
constexpr float_t& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_controllersSmoothing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersSmoothing;
}
constexpr float_t const& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_controllersSmoothing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersSmoothing;
}
constexpr void GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_set_controllersSmoothing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllersSmoothing = value;
}
constexpr float_t& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_controllersTimeOffsetSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersTimeOffsetSec;
}
constexpr float_t const& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_controllersTimeOffsetSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersTimeOffsetSec;
}
constexpr void GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_set_controllersTimeOffsetSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllersTimeOffsetSec = value;
}
constexpr float_t& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_cameraFov() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraFov;
}
constexpr float_t const& GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_get_cameraFov() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraFov;
}
constexpr void GlobalNamespace::RecordingPlaybackSettings::__cordl_internal_set_cameraFov(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraFov = value;
}
inline void GlobalNamespace::RecordingPlaybackSettings::_ctor(::UnityEngine::Vector3 headPositionOffset, ::UnityEngine::Vector3 headRotationOffset, float_t headSmoothing, float_t controllersSmoothing,
                                                              float_t controllersTimeOffsetSec, float_t cameraFov) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecordingPlaybackSettings*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headPositionOffset, headRotationOffset, headSmoothing, controllersSmoothing, controllersTimeOffsetSec, cameraFov);
}
inline ::GlobalNamespace::RecordingPlaybackSettings* GlobalNamespace::RecordingPlaybackSettings::New_ctor(::UnityEngine::Vector3 headPositionOffset, ::UnityEngine::Vector3 headRotationOffset,
                                                                                                          float_t headSmoothing, float_t controllersSmoothing, float_t controllersTimeOffsetSec,
                                                                                                          float_t cameraFov) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::RecordingPlaybackSettings*>(headPositionOffset, headRotationOffset, headSmoothing, controllersSmoothing, controllersTimeOffsetSec, cameraFov));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingPlaybackSettings::RecordingPlaybackSettings() {}
