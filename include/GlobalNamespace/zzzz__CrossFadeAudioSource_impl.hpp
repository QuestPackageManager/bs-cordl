#pragma once
// IWYU pragma private; include "GlobalNamespace/CrossFadeAudioSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrossFadeAudioSource_def.hpp"
#include "GlobalNamespace/zzzz__AudioPitchGainEffect_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.get_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::get_clip)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b8ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "get_clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.set_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::CrossFadeAudioSource::set_clip)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58b8bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.set_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::set_pitch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58b8bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::set_time)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58b8c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.get_isPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::get_isPlaying)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b8c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "get_isPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::Awake)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x58b8c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58b8e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.PlayPitchGainEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::PlayPitchGainEffect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58b8ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "PlayPitchGainEffect", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.InterruptLastPitchGainEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::InterruptLastPitchGainEffect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58b8f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "InterruptLastPitchGainEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.CrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t, float_t)>(&::GlobalNamespace::CrossFadeAudioSource::CrossFade)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58b8f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "CrossFade", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::Play)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b9190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::Stop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58b91a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b91f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource._Awake_b__21_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::_Awake_b__21_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b9208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<Awake>b__21_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource._Awake_b__21_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::_Awake_b__21_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b9220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<Awake>b__21_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource._CrossFade_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::_CrossFade_b__25_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b9238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<CrossFade>b__25_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource._CrossFade_b__25_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)(float_t)>(&::GlobalNamespace::CrossFadeAudioSource::_CrossFade_b__25_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58b9250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<CrossFade>b__25_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrossFadeAudioSource._CrossFade_b__25_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrossFadeAudioSource::*)()>(&::GlobalNamespace::CrossFadeAudioSource::_CrossFade_b__25_2)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58b9268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<CrossFade>b__25_2", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioSource1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource1;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioSource1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource1;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__audioSource1(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource1 = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioSource2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource2;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioSource2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource2;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__audioSource2(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource2 = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioPitchGainEffect1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioPitchGainEffect1;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioPitchGainEffect1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioPitchGainEffect1;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__audioPitchGainEffect1(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioPitchGainEffect1 = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioPitchGainEffect2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioPitchGainEffect2;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__audioPitchGainEffect2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioPitchGainEffect2;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__audioPitchGainEffect2(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioPitchGainEffect2 = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__activeAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__activeAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeAudioSource;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__activeAudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__inactiveAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__inactiveAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveAudioSource;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__inactiveAudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inactiveAudioSource = value;
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__volumeDownTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeDownTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__volumeDownTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeDownTween;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__volumeDownTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeDownTween = value;
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__volumeUpTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeUpTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__volumeUpTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeUpTween;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__volumeUpTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____volumeUpTween = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__activePitchGainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePitchGainEffect;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__activePitchGainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePitchGainEffect;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__activePitchGainEffect(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePitchGainEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__inactivePitchGainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactivePitchGainEffect;
}
constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& GlobalNamespace::CrossFadeAudioSource::__cordl_internal_get__inactivePitchGainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactivePitchGainEffect;
}
constexpr void GlobalNamespace::CrossFadeAudioSource::__cordl_internal_set__inactivePitchGainEffect(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inactivePitchGainEffect = value;
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::CrossFadeAudioSource::get_clip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "get_clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::set_clip(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrossFadeAudioSource::set_pitch(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrossFadeAudioSource::set_time(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::CrossFadeAudioSource::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "get_isPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::PlayPitchGainEffect(float_t volumeScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "PlayPitchGainEffect", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeScale);
}
inline void GlobalNamespace::CrossFadeAudioSource::InterruptLastPitchGainEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "InterruptLastPitchGainEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::CrossFade(float_t toSongTime, float_t toVolume) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "CrossFade", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toSongTime, toVolume);
}
inline void GlobalNamespace::CrossFadeAudioSource::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrossFadeAudioSource::_Awake_b__21_0(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<Awake>b__21_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::CrossFadeAudioSource::_Awake_b__21_1(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<Awake>b__21_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::CrossFadeAudioSource::_CrossFade_b__25_0(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<CrossFade>b__25_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::CrossFadeAudioSource::_CrossFade_b__25_1(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<CrossFade>b__25_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::CrossFadeAudioSource::_CrossFade_b__25_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrossFadeAudioSource*>(), { "<CrossFade>b__25_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrossFadeAudioSource* GlobalNamespace::CrossFadeAudioSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrossFadeAudioSource*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrossFadeAudioSource::CrossFadeAudioSource() {}
