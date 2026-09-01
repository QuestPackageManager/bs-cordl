#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberSound.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberSound_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberSound.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberSound::*)()>(&::GlobalNamespace::SaberSound::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59f0b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSound*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSound.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberSound::*)()>(&::GlobalNamespace::SaberSound::Update)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x59f0b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSound*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSound._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberSound::*)()>(&::GlobalNamespace::SaberSound::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59f0d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSound*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SaberSound::__cordl_internal_get__saberTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTop;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SaberSound::__cordl_internal_get__saberTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTop;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__saberTop(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberTop = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SaberSound::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SaberSound::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SaberSound::__cordl_internal_get__pitchBySpeedCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pitchBySpeedCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SaberSound::__cordl_internal_get__pitchBySpeedCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pitchBySpeedCurve;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__pitchBySpeedCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pitchBySpeedCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SaberSound::__cordl_internal_get__gainBySpeedCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gainBySpeedCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SaberSound::__cordl_internal_get__gainBySpeedCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gainBySpeedCurve;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__gainBySpeedCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gainBySpeedCurve = value;
}
constexpr float_t& GlobalNamespace::SaberSound::__cordl_internal_get__speedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedMultiplier;
}
constexpr float_t const& GlobalNamespace::SaberSound::__cordl_internal_get__speedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedMultiplier;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__speedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speedMultiplier = value;
}
constexpr float_t& GlobalNamespace::SaberSound::__cordl_internal_get__upSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upSmooth;
}
constexpr float_t const& GlobalNamespace::SaberSound::__cordl_internal_get__upSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upSmooth;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__upSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upSmooth = value;
}
constexpr float_t& GlobalNamespace::SaberSound::__cordl_internal_get__downSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downSmooth;
}
constexpr float_t const& GlobalNamespace::SaberSound::__cordl_internal_get__downSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downSmooth;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__downSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downSmooth = value;
}
constexpr float_t& GlobalNamespace::SaberSound::__cordl_internal_get__noSoundTopThresholdSqr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noSoundTopThresholdSqr;
}
constexpr float_t const& GlobalNamespace::SaberSound::__cordl_internal_get__noSoundTopThresholdSqr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noSoundTopThresholdSqr;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__noSoundTopThresholdSqr(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noSoundTopThresholdSqr = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSound::__cordl_internal_get__prevPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSound::__cordl_internal_get__prevPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPos;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__prevPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPos = value;
}
constexpr float_t& GlobalNamespace::SaberSound::__cordl_internal_get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::SaberSound::__cordl_internal_get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::SaberSound::__cordl_internal_set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
inline void GlobalNamespace::SaberSound::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSound*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberSound::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSound*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberSound::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSound*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberSound* GlobalNamespace::SaberSound::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberSound::SaberSound() {}
