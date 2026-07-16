#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentAudioEffectsPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer.get_audioSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(), { "get_audioSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer.PlayEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)(::UnityEngine::AudioClip*, float_t)>(
    &::GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58b92a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(),
                                                                                           { "PlayEffect", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentAudioEffectsPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(&::GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b9304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::EnvironmentAudioEffectsPlayer::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::EnvironmentAudioEffectsPlayer::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::EnvironmentAudioEffectsPlayer::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(), { "get_audioSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect(::UnityEngine::AudioClip* clip, float_t volume) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(),
                                                                                         { "PlayEffect", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, volume);
}
inline void GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentAudioEffectsPlayer* GlobalNamespace::EnvironmentAudioEffectsPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentAudioEffectsPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer::EnvironmentAudioEffectsPlayer() {}
