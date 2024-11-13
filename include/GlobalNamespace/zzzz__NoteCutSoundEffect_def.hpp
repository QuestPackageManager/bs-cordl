#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutSoundEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteCutSoundEffect)
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class __NoteCutSoundEffect__Pool;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace GlobalNamespace {
class __NoteCutSoundEffect__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutSoundEffect);
MARK_REF_PTR_T(::GlobalNamespace::__NoteCutSoundEffect__Pool);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteCutSoundEffect::Pool*
class CORDL_TYPE __NoteCutSoundEffect__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::NoteCutSoundEffect>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__NoteCutSoundEffect__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3a7ad6c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutSoundEffect__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutSoundEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteCutSoundEffect__Pool(__NoteCutSoundEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutSoundEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteCutSoundEffect__Pool(__NoteCutSoundEffect__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4011 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutSoundEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutSoundEffect
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteCutSoundEffect*
class CORDL_TYPE NoteCutSoundEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__NoteCutSoundEffect__Pool;

  /// @brief Field _aheadTime, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__aheadTime, put = __cordl_internal_set__aheadTime)) float_t _aheadTime;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _badCutRandomSoundPicker, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__badCutRandomSoundPicker,
                      put = __cordl_internal_set__badCutRandomSoundPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _badCutRandomSoundPicker;

  /// @brief Field _badCutSoundEffectAudioClips, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__badCutSoundEffectAudioClips,
                      put = __cordl_internal_set__badCutSoundEffectAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _badCutSoundEffectAudioClips;

  /// @brief Field _badCutVolume, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__badCutVolume, put = __cordl_internal_set__badCutVolume)) float_t _badCutVolume;

  /// @brief Field _beforeCutVolume, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__beforeCutVolume, put = __cordl_internal_set__beforeCutVolume)) float_t _beforeCutVolume;

  /// @brief Field _didFinishEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishEvent,
                      put = __cordl_internal_set__didFinishEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* _didFinishEvent;

  /// @brief Field _endDSPtime, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__endDSPtime, put = __cordl_internal_set__endDSPtime)) double_t _endDSPtime;

  /// @brief Field _fadeOutStartDSPtime, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutStartDSPtime, put = __cordl_internal_set__fadeOutStartDSPtime)) double_t _fadeOutStartDSPtime;

  /// @brief Field _goodCut, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__goodCut, put = __cordl_internal_set__goodCut)) bool _goodCut;

  /// @brief Field _goodCutVolume, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__goodCutVolume, put = __cordl_internal_set__goodCutVolume)) float_t _goodCutVolume;

  /// @brief Field _handleWrongSaberTypeAsGood, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__handleWrongSaberTypeAsGood, put = __cordl_internal_set__handleWrongSaberTypeAsGood)) bool _handleWrongSaberTypeAsGood;

  /// @brief Field _ignoreBadCuts, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreBadCuts, put = __cordl_internal_set__ignoreBadCuts)) bool _ignoreBadCuts;

  /// @brief Field _ignoreSaberSpeed, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreSaberSpeed, put = __cordl_internal_set__ignoreSaberSpeed)) bool _ignoreSaberSpeed;

  /// @brief Field _isPlaying, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isPlaying, put = __cordl_internal_set__isPlaying)) bool _isPlaying;

  /// @brief Field _noteController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteController, put = __cordl_internal_set__noteController)) ::UnityW<::GlobalNamespace::NoteController> _noteController;

  /// @brief Field _noteMissedTimeOffset, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__noteMissedTimeOffset, put = __cordl_internal_set__noteMissedTimeOffset)) float_t _noteMissedTimeOffset;

  /// @brief Field _noteStartedDissolving, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__noteStartedDissolving, put = __cordl_internal_set__noteStartedDissolving)) bool _noteStartedDissolving;

  /// @brief Field _noteWasCut, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__noteWasCut, put = __cordl_internal_set__noteWasCut)) bool _noteWasCut;

  /// @brief Field _pitch, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__pitch, put = __cordl_internal_set__pitch)) float_t _pitch;

  /// @brief Field _saber, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::Saber> _saber;

  /// @brief Field _speedToVolumeCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__speedToVolumeCurve, put = __cordl_internal_set__speedToVolumeCurve)) ::UnityEngine::AnimationCurve* _speedToVolumeCurve;

  /// @brief Field _startDSPTime, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__startDSPTime, put = __cordl_internal_set__startDSPTime)) double_t _startDSPTime;

  /// @brief Field _timeToNextNote, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToNextNote, put = __cordl_internal_set__timeToNextNote)) float_t _timeToNextNote;

  /// @brief Field _timeToPrevNote, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToPrevNote, put = __cordl_internal_set__timeToPrevNote)) float_t _timeToPrevNote;

  /// @brief Field _volumeMultiplier, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__volumeMultiplier, put = __cordl_internal_set__volumeMultiplier)) float_t _volumeMultiplier;

  __declspec(property(get = get_didFinishEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* didFinishEvent;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_volumeMultiplier, put = set_volumeMultiplier)) float_t volumeMultiplier;

  /// @brief Method Awake, addr 0x3a7a364, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ComputeDSPTimes, addr 0x3a7a5b4, size 0xac, virtual false, abstract: false, final false
  inline void ComputeDSPTimes(double_t noteDSPTime, float_t aheadTime, float_t timeToPrevNote, float_t timeToNextNote);

  /// @brief Method Init, addr 0x3a7a408, size 0x1ac, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::NoteController* noteController, double_t noteDSPTime, float_t aheadTime, float_t missedTimeOffset, float_t timeToPrevNote,
                   float_t timeToNextNote, ::GlobalNamespace::Saber* saber, bool handleWrongSaberTypeAsGood, float_t volumeMultiplier, bool ignoreSaberSpeed, bool ignoreBadCuts);

  static inline ::GlobalNamespace::NoteCutSoundEffect* New_ctor();

  /// @brief Method NoteDidStartDissolving, addr 0x3a7ac6c, size 0x7c, virtual false, abstract: false, final false
  inline void NoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method NoteWasCut, addr 0x3a7aa60, size 0x20c, virtual false, abstract: false, final false
  inline void NoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method OnLateUpdate, addr 0x3a7a660, size 0x210, virtual false, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method Start, addr 0x3a7a3e8, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopPlayingAndFinish, addr 0x3a7a870, size 0x1f0, virtual false, abstract: false, final false
  inline void StopPlayingAndFinish();

  constexpr float_t const& __cordl_internal_get__aheadTime() const;

  constexpr float_t& __cordl_internal_get__aheadTime();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__badCutRandomSoundPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__badCutRandomSoundPicker() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__badCutSoundEffectAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__badCutSoundEffectAudioClips();

  constexpr float_t const& __cordl_internal_get__badCutVolume() const;

  constexpr float_t& __cordl_internal_get__badCutVolume();

  constexpr float_t const& __cordl_internal_get__beforeCutVolume() const;

  constexpr float_t& __cordl_internal_get__beforeCutVolume();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*& __cordl_internal_get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*> const& __cordl_internal_get__didFinishEvent() const;

  constexpr double_t const& __cordl_internal_get__endDSPtime() const;

  constexpr double_t& __cordl_internal_get__endDSPtime();

  constexpr double_t const& __cordl_internal_get__fadeOutStartDSPtime() const;

  constexpr double_t& __cordl_internal_get__fadeOutStartDSPtime();

  constexpr bool const& __cordl_internal_get__goodCut() const;

  constexpr bool& __cordl_internal_get__goodCut();

  constexpr float_t const& __cordl_internal_get__goodCutVolume() const;

  constexpr float_t& __cordl_internal_get__goodCutVolume();

  constexpr bool const& __cordl_internal_get__handleWrongSaberTypeAsGood() const;

  constexpr bool& __cordl_internal_get__handleWrongSaberTypeAsGood();

  constexpr bool const& __cordl_internal_get__ignoreBadCuts() const;

  constexpr bool& __cordl_internal_get__ignoreBadCuts();

  constexpr bool const& __cordl_internal_get__ignoreSaberSpeed() const;

  constexpr bool& __cordl_internal_get__ignoreSaberSpeed();

  constexpr bool const& __cordl_internal_get__isPlaying() const;

  constexpr bool& __cordl_internal_get__isPlaying();

  constexpr ::UnityW<::GlobalNamespace::NoteController> const& __cordl_internal_get__noteController() const;

  constexpr ::UnityW<::GlobalNamespace::NoteController>& __cordl_internal_get__noteController();

  constexpr float_t const& __cordl_internal_get__noteMissedTimeOffset() const;

  constexpr float_t& __cordl_internal_get__noteMissedTimeOffset();

  constexpr bool const& __cordl_internal_get__noteStartedDissolving() const;

  constexpr bool& __cordl_internal_get__noteStartedDissolving();

  constexpr bool const& __cordl_internal_get__noteWasCut() const;

  constexpr bool& __cordl_internal_get__noteWasCut();

  constexpr float_t const& __cordl_internal_get__pitch() const;

  constexpr float_t& __cordl_internal_get__pitch();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__saber();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__speedToVolumeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__speedToVolumeCurve() const;

  constexpr double_t const& __cordl_internal_get__startDSPTime() const;

  constexpr double_t& __cordl_internal_get__startDSPTime();

  constexpr float_t const& __cordl_internal_get__timeToNextNote() const;

  constexpr float_t& __cordl_internal_get__timeToNextNote();

  constexpr float_t const& __cordl_internal_get__timeToPrevNote() const;

  constexpr float_t& __cordl_internal_get__timeToPrevNote();

  constexpr float_t const& __cordl_internal_get__volumeMultiplier() const;

  constexpr float_t& __cordl_internal_get__volumeMultiplier();

  constexpr void __cordl_internal_set__aheadTime(float_t value);

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__badCutRandomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  constexpr void __cordl_internal_set__badCutSoundEffectAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__badCutVolume(float_t value);

  constexpr void __cordl_internal_set__beforeCutVolume(float_t value);

  constexpr void __cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* value);

  constexpr void __cordl_internal_set__endDSPtime(double_t value);

  constexpr void __cordl_internal_set__fadeOutStartDSPtime(double_t value);

  constexpr void __cordl_internal_set__goodCut(bool value);

  constexpr void __cordl_internal_set__goodCutVolume(float_t value);

  constexpr void __cordl_internal_set__handleWrongSaberTypeAsGood(bool value);

  constexpr void __cordl_internal_set__ignoreBadCuts(bool value);

  constexpr void __cordl_internal_set__ignoreSaberSpeed(bool value);

  constexpr void __cordl_internal_set__isPlaying(bool value);

  constexpr void __cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteController> value);

  constexpr void __cordl_internal_set__noteMissedTimeOffset(float_t value);

  constexpr void __cordl_internal_set__noteStartedDissolving(bool value);

  constexpr void __cordl_internal_set__noteWasCut(bool value);

  constexpr void __cordl_internal_set__pitch(float_t value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__speedToVolumeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__startDSPTime(double_t value);

  constexpr void __cordl_internal_set__timeToNextNote(float_t value);

  constexpr void __cordl_internal_set__timeToPrevNote(float_t value);

  constexpr void __cordl_internal_set__volumeMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x3a7ace8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_didFinishEvent, addr 0x3a7a320, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* get_didFinishEvent();

  /// @brief Method get_time, addr 0x3a7a338, size 0x2c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_volumeMultiplier, addr 0x3a7a330, size 0x8, virtual false, abstract: false, final false
  inline float_t get_volumeMultiplier();

  /// @brief Method set_volumeMultiplier, addr 0x3a7a328, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeMultiplier(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutSoundEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutSoundEffect(NoteCutSoundEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutSoundEffect(NoteCutSoundEffect const&) = delete;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _speedToVolumeCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____speedToVolumeCurve;

  /// @brief Field _badCutSoundEffectAudioClips, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____badCutSoundEffectAudioClips;

  /// @brief Field _badCutVolume, offset: 0x38, size: 0x4, def value: None
  float_t ____badCutVolume;

  /// @brief Field _goodCutVolume, offset: 0x3c, size: 0x4, def value: None
  float_t ____goodCutVolume;

  /// @brief Field _saber, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____saber;

  /// @brief Field _noteController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteController> ____noteController;

  /// @brief Field _isPlaying, offset: 0x50, size: 0x1, def value: None
  bool ____isPlaying;

  /// @brief Field _volumeMultiplier, offset: 0x54, size: 0x4, def value: None
  float_t ____volumeMultiplier;

  /// @brief Field _noteWasCut, offset: 0x58, size: 0x1, def value: None
  bool ____noteWasCut;

  /// @brief Field _noteStartedDissolving, offset: 0x59, size: 0x1, def value: None
  bool ____noteStartedDissolving;

  /// @brief Field _aheadTime, offset: 0x5c, size: 0x4, def value: None
  float_t ____aheadTime;

  /// @brief Field _timeToNextNote, offset: 0x60, size: 0x4, def value: None
  float_t ____timeToNextNote;

  /// @brief Field _timeToPrevNote, offset: 0x64, size: 0x4, def value: None
  float_t ____timeToPrevNote;

  /// @brief Field _startDSPTime, offset: 0x68, size: 0x8, def value: None
  double_t ____startDSPTime;

  /// @brief Field _endDSPtime, offset: 0x70, size: 0x8, def value: None
  double_t ____endDSPtime;

  /// @brief Field _fadeOutStartDSPtime, offset: 0x78, size: 0x8, def value: None
  double_t ____fadeOutStartDSPtime;

  /// @brief Field _noteMissedTimeOffset, offset: 0x80, size: 0x4, def value: None
  float_t ____noteMissedTimeOffset;

  /// @brief Field _beforeCutVolume, offset: 0x84, size: 0x4, def value: None
  float_t ____beforeCutVolume;

  /// @brief Field _goodCut, offset: 0x88, size: 0x1, def value: None
  bool ____goodCut;

  /// @brief Field _pitch, offset: 0x8c, size: 0x4, def value: None
  float_t ____pitch;

  /// @brief Field _badCutRandomSoundPicker, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____badCutRandomSoundPicker;

  /// @brief Field _handleWrongSaberTypeAsGood, offset: 0x98, size: 0x1, def value: None
  bool ____handleWrongSaberTypeAsGood;

  /// @brief Field _ignoreSaberSpeed, offset: 0x99, size: 0x1, def value: None
  bool ____ignoreSaberSpeed;

  /// @brief Field _ignoreBadCuts, offset: 0x9a, size: 0x1, def value: None
  bool ____ignoreBadCuts;

  /// @brief Field _didFinishEvent, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* ____didFinishEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4012 };

  /// @brief Field kEndFadeLength offset 0xffffffff size 0x4
  static constexpr float_t kEndFadeLength{ 0.01 };

  /// @brief Field kEndOverlap offset 0xffffffff size 0x4
  static constexpr float_t kEndOverlap{ 100.01 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutSoundEffect, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____speedToVolumeCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____badCutSoundEffectAudioClips) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____badCutVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____goodCutVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____saber) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____noteController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____isPlaying) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____volumeMultiplier) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____noteWasCut) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____noteStartedDissolving) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____aheadTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____timeToNextNote) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____timeToPrevNote) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____startDSPTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____endDSPtime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____fadeOutStartDSPtime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____noteMissedTimeOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____beforeCutVolume) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____goodCut) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____pitch) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____badCutRandomSoundPicker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____handleWrongSaberTypeAsGood) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____ignoreSaberSpeed) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____ignoreBadCuts) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutSoundEffect, ____didFinishEvent) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffect*, "", "NoteCutSoundEffect");
NEED_NO_BOX(::GlobalNamespace::__NoteCutSoundEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutSoundEffect__Pool*, "", "NoteCutSoundEffect/Pool");
