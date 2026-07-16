#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AudioMixerProperties.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AudioMixerProperties_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AudioMixerProperties.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AudioMixerProperties::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::AudioMixerProperties::PrepareFrame)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x69b9c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AudioMixerProperties*>(), { ::i2c::class_of<::UnityEngine::Timeline::AudioMixerProperties*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AudioMixerProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AudioMixerProperties::*)()>(&::UnityEngine::Timeline::AudioMixerProperties::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b9ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AudioMixerProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
constexpr float_t& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_stereoPan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoPan;
}
constexpr float_t const& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_stereoPan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoPan;
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_set_stereoPan(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoPan = value;
}
constexpr float_t& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_spatialBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spatialBlend;
}
constexpr float_t const& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_spatialBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spatialBlend;
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_set_spatialBlend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spatialBlend = value;
}
inline void UnityEngine::Timeline::AudioMixerProperties::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AudioMixerProperties*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::AudioMixerProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AudioMixerProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AudioMixerProperties* UnityEngine::Timeline::AudioMixerProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AudioMixerProperties*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AudioMixerProperties::AudioMixerProperties() {}
