#pragma once
// IWYU pragma private; include "GlobalNamespace/CrossFadeAudioSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrossFadeAudioSource)
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CrossFadeAudioSource);
// Type: ::CrossFadeAudioSource
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CrossFadeAudioSource*
class CORDL_TYPE CrossFadeAudioSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeAudioSource, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__activeAudioSource, put = __cordl_internal_set__activeAudioSource)) ::UnityW<::UnityEngine::AudioSource> _activeAudioSource;

  /// @brief Field _activePitchGainEffect, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__activePitchGainEffect, put = __cordl_internal_set__activePitchGainEffect)) ::UnityW<::GlobalNamespace::AudioPitchGainEffect> _activePitchGainEffect;

  /// @brief Field _audioPitchGainEffect1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioPitchGainEffect1, put = __cordl_internal_set__audioPitchGainEffect1)) ::UnityW<::GlobalNamespace::AudioPitchGainEffect> _audioPitchGainEffect1;

  /// @brief Field _audioPitchGainEffect2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__audioPitchGainEffect2, put = __cordl_internal_set__audioPitchGainEffect2)) ::UnityW<::GlobalNamespace::AudioPitchGainEffect> _audioPitchGainEffect2;

  /// @brief Field _audioSource1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource1, put = __cordl_internal_set__audioSource1)) ::UnityW<::UnityEngine::AudioSource> _audioSource1;

  /// @brief Field _audioSource2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource2, put = __cordl_internal_set__audioSource2)) ::UnityW<::UnityEngine::AudioSource> _audioSource2;

  /// @brief Field _duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _inactiveAudioSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__inactiveAudioSource, put = __cordl_internal_set__inactiveAudioSource)) ::UnityW<::UnityEngine::AudioSource> _inactiveAudioSource;

  /// @brief Field _inactivePitchGainEffect, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__inactivePitchGainEffect, put = __cordl_internal_set__inactivePitchGainEffect)) ::UnityW<::GlobalNamespace::AudioPitchGainEffect>
      _inactivePitchGainEffect;

  /// @brief Field _tweeningManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Field _volumeDownTween, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeDownTween, put = __cordl_internal_set__volumeDownTween)) ::Tweening::Tween_1<float_t>* _volumeDownTween;

  /// @brief Field _volumeUpTween, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeUpTween, put = __cordl_internal_set__volumeUpTween)) ::Tweening::Tween_1<float_t>* _volumeUpTween;

  __declspec(property(get = get_clip, put = set_clip)) ::UnityW<::UnityEngine::AudioClip> clip;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(put = set_pitch)) float_t pitch;

  __declspec(property(put = set_time)) float_t time;

  /// @brief Method Awake, addr 0x3a65564, size 0x154, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CrossFade, addr 0x3a65790, size 0x1cc, virtual false, abstract: false, final false
  inline void CrossFade(float_t toSongTime, float_t toVolume);

  /// @brief Method InterruptLastPitchGainEffect, addr 0x3a65778, size 0x18, virtual false, abstract: false, final false
  inline void InterruptLastPitchGainEffect();

  static inline ::GlobalNamespace::CrossFadeAudioSource* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a656b8, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Play, addr 0x3a6595c, size 0x1c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method PlayPitchGainEffect, addr 0x3a65740, size 0x38, virtual false, abstract: false, final false
  inline void PlayPitchGainEffect(float_t volumeScale);

  /// @brief Method Stop, addr 0x3a65978, size 0x50, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method <Awake>b__21_0, addr 0x3a659dc, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__21_0(float_t val);

  /// @brief Method <Awake>b__21_1, addr 0x3a659f8, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__21_1(float_t val);

  /// @brief Method <CrossFade>b__25_0, addr 0x3a65a14, size 0x1c, virtual false, abstract: false, final false
  inline void _CrossFade_b__25_0(float_t val);

  /// @brief Method <CrossFade>b__25_1, addr 0x3a65a30, size 0x1c, virtual false, abstract: false, final false
  inline void _CrossFade_b__25_1(float_t val);

  /// @brief Method <CrossFade>b__25_2, addr 0x3a65a4c, size 0x30, virtual false, abstract: false, final false
  inline void _CrossFade_b__25_2();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__activeAudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__activeAudioSource();

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& __cordl_internal_get__activePitchGainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& __cordl_internal_get__activePitchGainEffect();

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& __cordl_internal_get__audioPitchGainEffect1() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& __cordl_internal_get__audioPitchGainEffect1();

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& __cordl_internal_get__audioPitchGainEffect2() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& __cordl_internal_get__audioPitchGainEffect2();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource1() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource1();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource2() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource2();

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__inactiveAudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__inactiveAudioSource();

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& __cordl_internal_get__inactivePitchGainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& __cordl_internal_get__inactivePitchGainEffect();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__volumeDownTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__volumeDownTween() const;

  constexpr ::Tweening::Tween_1<float_t>*& __cordl_internal_get__volumeUpTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& __cordl_internal_get__volumeUpTween() const;

  constexpr void __cordl_internal_set__activeAudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__activePitchGainEffect(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value);

  constexpr void __cordl_internal_set__audioPitchGainEffect1(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value);

  constexpr void __cordl_internal_set__audioPitchGainEffect2(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value);

  constexpr void __cordl_internal_set__audioSource1(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__audioSource2(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__inactiveAudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__inactivePitchGainEffect(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set__volumeDownTween(::Tweening::Tween_1<float_t>* value);

  constexpr void __cordl_internal_set__volumeUpTween(::Tweening::Tween_1<float_t>* value);

  /// @brief Method .ctor, addr 0x3a659c8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clip, addr 0x3a6546c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_clip();

  /// @brief Method get_isPlaying, addr 0x3a65548, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method set_clip, addr 0x3a65488, size 0x40, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method set_pitch, addr 0x3a654c8, size 0x40, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_time, addr 0x3a65508, size 0x40, virtual false, abstract: false, final false
  inline void set_time(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossFadeAudioSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossFadeAudioSource(CrossFadeAudioSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossFadeAudioSource(CrossFadeAudioSource const&) = delete;

  /// @brief Field _duration, offset: 0x20, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _audioSource1, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource1;

  /// @brief Field _audioSource2, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource2;

  /// @brief Field _audioPitchGainEffect1, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPitchGainEffect> ____audioPitchGainEffect1;

  /// @brief Field _audioPitchGainEffect2, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPitchGainEffect> ____audioPitchGainEffect2;

  /// @brief Field _tweeningManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _activeAudioSource, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____activeAudioSource;

  /// @brief Field _inactiveAudioSource, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____inactiveAudioSource;

  /// @brief Field _volumeDownTween, offset: 0x60, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____volumeDownTween;

  /// @brief Field _volumeUpTween, offset: 0x68, size: 0x8, def value: None
  ::Tweening::Tween_1<float_t>* ____volumeUpTween;

  /// @brief Field _activePitchGainEffect, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPitchGainEffect> ____activePitchGainEffect;

  /// @brief Field _inactivePitchGainEffect, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPitchGainEffect> ____inactivePitchGainEffect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrossFadeAudioSource, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioSource1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioSource2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioPitchGainEffect1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____audioPitchGainEffect2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____tweeningManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____activeAudioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____inactiveAudioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____volumeDownTween) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____volumeUpTween) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____activePitchGainEffect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSource, ____inactivePitchGainEffect) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrossFadeAudioSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrossFadeAudioSource*, "", "CrossFadeAudioSource");
