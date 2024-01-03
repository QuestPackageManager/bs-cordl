#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrossFadeAudioSource)
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CrossFadeAudioSource);
// Type: ::CrossFadeAudioSource
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4060))
// CS Name: ::CrossFadeAudioSource*
class CORDL_TYPE CrossFadeAudioSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _duration, offset 0x18, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _audioSource1, offset 0x20, size 0x8
  __declspec(property(get = __get__audioSource1, put = __set__audioSource1))::UnityEngine::AudioSource* _audioSource1;

  /// @brief Field _audioSource2, offset 0x28, size 0x8
  __declspec(property(get = __get__audioSource2, put = __set__audioSource2))::UnityEngine::AudioSource* _audioSource2;

  /// @brief Field _audioPitchGainEffect1, offset 0x30, size 0x8
  __declspec(property(get = __get__audioPitchGainEffect1, put = __set__audioPitchGainEffect1))::GlobalNamespace::AudioPitchGainEffect* _audioPitchGainEffect1;

  /// @brief Field _audioPitchGainEffect2, offset 0x38, size 0x8
  __declspec(property(get = __get__audioPitchGainEffect2, put = __set__audioPitchGainEffect2))::GlobalNamespace::AudioPitchGainEffect* _audioPitchGainEffect2;

  /// @brief Field _tweeningManager, offset 0x40, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _activeAudioSource, offset 0x48, size 0x8
  __declspec(property(get = __get__activeAudioSource, put = __set__activeAudioSource))::UnityEngine::AudioSource* _activeAudioSource;

  /// @brief Field _inactiveAudioSource, offset 0x50, size 0x8
  __declspec(property(get = __get__inactiveAudioSource, put = __set__inactiveAudioSource))::UnityEngine::AudioSource* _inactiveAudioSource;

  /// @brief Field _volumeDownTween, offset 0x58, size 0x8
  __declspec(property(get = __get__volumeDownTween, put = __set__volumeDownTween))::Tweening::Tween_1<float_t>* _volumeDownTween;

  /// @brief Field _volumeUpTween, offset 0x60, size 0x8
  __declspec(property(get = __get__volumeUpTween, put = __set__volumeUpTween))::Tweening::Tween_1<float_t>* _volumeUpTween;

  /// @brief Field _activePitchGainEffect, offset 0x68, size 0x8
  __declspec(property(get = __get__activePitchGainEffect, put = __set__activePitchGainEffect))::GlobalNamespace::AudioPitchGainEffect* _activePitchGainEffect;

  /// @brief Field _inactivePitchGainEffect, offset 0x70, size 0x8
  __declspec(property(get = __get__inactivePitchGainEffect, put = __set__inactivePitchGainEffect))::GlobalNamespace::AudioPitchGainEffect* _inactivePitchGainEffect;

  __declspec(property(get = get_clip, put = set_clip))::UnityEngine::AudioClip* clip;

  __declspec(property(put = set_pitch)) float_t pitch;

  __declspec(property(put = set_time)) float_t time;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource1() const;

  constexpr void __set__audioSource1(::UnityEngine::AudioSource* value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource2() const;

  constexpr void __set__audioSource2(::UnityEngine::AudioSource* value);

  constexpr ::GlobalNamespace::AudioPitchGainEffect*& __get__audioPitchGainEffect1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& __get__audioPitchGainEffect1() const;

  constexpr void __set__audioPitchGainEffect1(::GlobalNamespace::AudioPitchGainEffect* value);

  constexpr ::GlobalNamespace::AudioPitchGainEffect*& __get__audioPitchGainEffect2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& __get__audioPitchGainEffect2() const;

  constexpr void __set__audioPitchGainEffect2(::GlobalNamespace::AudioPitchGainEffect* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::UnityEngine::AudioSource*& __get__activeAudioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__activeAudioSource() const;

  constexpr void __set__activeAudioSource(::UnityEngine::AudioSource* value);

  constexpr ::UnityEngine::AudioSource*& __get__inactiveAudioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__inactiveAudioSource() const;

  constexpr void __set__inactiveAudioSource(::UnityEngine::AudioSource* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__volumeDownTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__volumeDownTween() const;

  constexpr void __set__volumeDownTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::Tweening::Tween_1<float_t>*& __get__volumeUpTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __get__volumeUpTween() const;

  constexpr void __set__volumeUpTween(::Tweening::Tween_1<float_t>* value);

  constexpr ::GlobalNamespace::AudioPitchGainEffect*& __get__activePitchGainEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& __get__activePitchGainEffect() const;

  constexpr void __set__activePitchGainEffect(::GlobalNamespace::AudioPitchGainEffect* value);

  constexpr ::GlobalNamespace::AudioPitchGainEffect*& __get__inactivePitchGainEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& __get__inactivePitchGainEffect() const;

  constexpr void __set__inactivePitchGainEffect(::GlobalNamespace::AudioPitchGainEffect* value);

  /// @brief Method get_clip, addr 0x222cd40, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClip* get_clip();

  /// @brief Method set_clip, addr 0x222cd5c, size 0x40, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method set_pitch, addr 0x222cd9c, size 0x40, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_time, addr 0x222cddc, size 0x40, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method get_isPlaying, addr 0x222ce1c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method Awake, addr 0x222ce38, size 0x15c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x222cf94, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PlayPitchGainEffect, addr 0x222d01c, size 0x20, virtual false, abstract: false, final false
  inline void PlayPitchGainEffect(float_t volumeScale);

  /// @brief Method InterruptLastPitchGainEffect, addr 0x222d03c, size 0x1c, virtual false, abstract: false, final false
  inline void InterruptLastPitchGainEffect();

  /// @brief Method CrossFade, addr 0x222d058, size 0x1c8, virtual false, abstract: false, final false
  inline void CrossFade(float_t toSongTime, float_t toVolume);

  /// @brief Method Play, addr 0x222d220, size 0x1c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Stop, addr 0x222d23c, size 0x50, virtual false, abstract: false, final false
  inline void Stop();

  static inline ::GlobalNamespace::CrossFadeAudioSource* New_ctor();

  /// @brief Method .ctor, addr 0x222d28c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Awake>b__21_0, addr 0x222d2a0, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__21_0(float_t val);

  /// @brief Method <Awake>b__21_1, addr 0x222d2bc, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__21_1(float_t val);

  /// @brief Method <CrossFade>b__25_0, addr 0x222d2d8, size 0x1c, virtual false, abstract: false, final false
  inline void _CrossFade_b__25_0(float_t val);

  /// @brief Method <CrossFade>b__25_1, addr 0x222d2f4, size 0x1c, virtual false, abstract: false, final false
  inline void _CrossFade_b__25_1(float_t val);

  /// @brief Method <CrossFade>b__25_2, addr 0x222d310, size 0x30, virtual false, abstract: false, final false
  inline void _CrossFade_b__25_2();

  // Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossFadeAudioSource(CrossFadeAudioSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossFadeAudioSource(CrossFadeAudioSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossFadeAudioSource();

public:
  /// @brief Field _duration, offset: 0x18, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _audioSource1, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource1;

  /// @brief Field _audioSource2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource2;

  /// @brief Field _audioPitchGainEffect1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AudioPitchGainEffect* ____audioPitchGainEffect1;

  /// @brief Field _audioPitchGainEffect2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AudioPitchGainEffect* ____audioPitchGainEffect2;

  /// @brief Field _tweeningManager, offset: 0x40, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  /// @brief Field _activeAudioSource, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____activeAudioSource;

  /// @brief Field _inactiveAudioSource, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____inactiveAudioSource;

  /// @brief Field _volumeDownTween, offset: 0x58, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____volumeDownTween;

  /// @brief Field _volumeUpTween, offset: 0x60, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____volumeUpTween;

  /// @brief Field _activePitchGainEffect, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::AudioPitchGainEffect* ____activePitchGainEffect;

  /// @brief Field _inactivePitchGainEffect, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::AudioPitchGainEffect* ____inactivePitchGainEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrossFadeAudioSource, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioSource1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioSource2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioPitchGainEffect1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioPitchGainEffect2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____tweeningManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____activeAudioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____inactiveAudioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____volumeDownTween) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____volumeUpTween) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____activePitchGainEffect) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____inactivePitchGainEffect) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrossFadeAudioSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrossFadeAudioSource*, "", "CrossFadeAudioSource");
