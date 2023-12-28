#pragma once
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
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class __NoteCutSoundEffect__Pool;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class AnimationCurve;
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
// Type: ::NoteCutSoundEffect
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4070))
// CS Name: ::NoteCutSoundEffect*
class CORDL_TYPE NoteCutSoundEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__NoteCutSoundEffect__Pool;

  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _speedToVolumeCurve, offset 0x20, size 0x8
  __declspec(property(get = __get__speedToVolumeCurve, put = __set__speedToVolumeCurve))::UnityEngine::AnimationCurve* _speedToVolumeCurve;

  /// @brief Field _badCutSoundEffectAudioClips, offset 0x28, size 0x8
  __declspec(property(get = __get__badCutSoundEffectAudioClips,
                      put = __set__badCutSoundEffectAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _badCutSoundEffectAudioClips;

  /// @brief Field _badCutVolume, offset 0x30, size 0x4
  __declspec(property(get = __get__badCutVolume, put = __set__badCutVolume)) float_t _badCutVolume;

  /// @brief Field _goodCutVolume, offset 0x34, size 0x4
  __declspec(property(get = __get__goodCutVolume, put = __set__goodCutVolume)) float_t _goodCutVolume;

  /// @brief Field _saber, offset 0x38, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::Saber* _saber;

  /// @brief Field _noteController, offset 0x40, size 0x8
  __declspec(property(get = __get__noteController, put = __set__noteController))::GlobalNamespace::NoteController* _noteController;

  /// @brief Field _isPlaying, offset 0x48, size 0x1
  __declspec(property(get = __get__isPlaying, put = __set__isPlaying)) bool _isPlaying;

  /// @brief Field _volumeMultiplier, offset 0x4c, size 0x4
  __declspec(property(get = __get__volumeMultiplier, put = __set__volumeMultiplier)) float_t _volumeMultiplier;

  /// @brief Field _noteWasCut, offset 0x50, size 0x1
  __declspec(property(get = __get__noteWasCut, put = __set__noteWasCut)) bool _noteWasCut;

  /// @brief Field _aheadTime, offset 0x54, size 0x4
  __declspec(property(get = __get__aheadTime, put = __set__aheadTime)) float_t _aheadTime;

  /// @brief Field _timeToNextNote, offset 0x58, size 0x4
  __declspec(property(get = __get__timeToNextNote, put = __set__timeToNextNote)) float_t _timeToNextNote;

  /// @brief Field _timeToPrevNote, offset 0x5c, size 0x4
  __declspec(property(get = __get__timeToPrevNote, put = __set__timeToPrevNote)) float_t _timeToPrevNote;

  /// @brief Field _startDSPTime, offset 0x60, size 0x8
  __declspec(property(get = __get__startDSPTime, put = __set__startDSPTime)) double_t _startDSPTime;

  /// @brief Field _endDSPtime, offset 0x68, size 0x8
  __declspec(property(get = __get__endDSPtime, put = __set__endDSPtime)) double_t _endDSPtime;

  /// @brief Field _fadeOutStartDSPtime, offset 0x70, size 0x8
  __declspec(property(get = __get__fadeOutStartDSPtime, put = __set__fadeOutStartDSPtime)) double_t _fadeOutStartDSPtime;

  /// @brief Field _noteMissedTimeOffset, offset 0x78, size 0x4
  __declspec(property(get = __get__noteMissedTimeOffset, put = __set__noteMissedTimeOffset)) float_t _noteMissedTimeOffset;

  /// @brief Field _beforeCutVolume, offset 0x7c, size 0x4
  __declspec(property(get = __get__beforeCutVolume, put = __set__beforeCutVolume)) float_t _beforeCutVolume;

  /// @brief Field _goodCut, offset 0x80, size 0x1
  __declspec(property(get = __get__goodCut, put = __set__goodCut)) bool _goodCut;

  /// @brief Field _pitch, offset 0x84, size 0x4
  __declspec(property(get = __get__pitch, put = __set__pitch)) float_t _pitch;

  /// @brief Field _badCutRandomSoundPicker, offset 0x88, size 0x8
  __declspec(property(get = __get__badCutRandomSoundPicker, put = __set__badCutRandomSoundPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* _badCutRandomSoundPicker;

  /// @brief Field _handleWrongSaberTypeAsGood, offset 0x90, size 0x1
  __declspec(property(get = __get__handleWrongSaberTypeAsGood, put = __set__handleWrongSaberTypeAsGood)) bool _handleWrongSaberTypeAsGood;

  /// @brief Field _ignoreSaberSpeed, offset 0x91, size 0x1
  __declspec(property(get = __get__ignoreSaberSpeed, put = __set__ignoreSaberSpeed)) bool _ignoreSaberSpeed;

  /// @brief Field _ignoreBadCuts, offset 0x92, size 0x1
  __declspec(property(get = __get__ignoreBadCuts, put = __set__ignoreBadCuts)) bool _ignoreBadCuts;

  /// @brief Field _didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __get__didFinishEvent, put = __set__didFinishEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* _didFinishEvent;

  __declspec(property(get = get_didFinishEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* didFinishEvent;

  __declspec(property(get = get_volumeMultiplier, put = set_volumeMultiplier)) float_t volumeMultiplier;

  __declspec(property(get = get_time)) float_t time;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__speedToVolumeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__speedToVolumeCurve() const;

  constexpr void __set__speedToVolumeCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__badCutSoundEffectAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__badCutSoundEffectAudioClips() const;

  constexpr void __set__badCutSoundEffectAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr float_t& __get__badCutVolume();

  constexpr float_t const& __get__badCutVolume() const;

  constexpr void __set__badCutVolume(float_t value);

  constexpr float_t& __get__goodCutVolume();

  constexpr float_t const& __get__goodCutVolume() const;

  constexpr void __set__goodCutVolume(float_t value);

  constexpr ::GlobalNamespace::Saber*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::Saber* value);

  constexpr ::GlobalNamespace::NoteController*& __get__noteController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& __get__noteController() const;

  constexpr void __set__noteController(::GlobalNamespace::NoteController* value);

  constexpr bool& __get__isPlaying();

  constexpr bool const& __get__isPlaying() const;

  constexpr void __set__isPlaying(bool value);

  constexpr float_t& __get__volumeMultiplier();

  constexpr float_t const& __get__volumeMultiplier() const;

  constexpr void __set__volumeMultiplier(float_t value);

  constexpr bool& __get__noteWasCut();

  constexpr bool const& __get__noteWasCut() const;

  constexpr void __set__noteWasCut(bool value);

  constexpr float_t& __get__aheadTime();

  constexpr float_t const& __get__aheadTime() const;

  constexpr void __set__aheadTime(float_t value);

  constexpr float_t& __get__timeToNextNote();

  constexpr float_t const& __get__timeToNextNote() const;

  constexpr void __set__timeToNextNote(float_t value);

  constexpr float_t& __get__timeToPrevNote();

  constexpr float_t const& __get__timeToPrevNote() const;

  constexpr void __set__timeToPrevNote(float_t value);

  constexpr double_t& __get__startDSPTime();

  constexpr double_t const& __get__startDSPTime() const;

  constexpr void __set__startDSPTime(double_t value);

  constexpr double_t& __get__endDSPtime();

  constexpr double_t const& __get__endDSPtime() const;

  constexpr void __set__endDSPtime(double_t value);

  constexpr double_t& __get__fadeOutStartDSPtime();

  constexpr double_t const& __get__fadeOutStartDSPtime() const;

  constexpr void __set__fadeOutStartDSPtime(double_t value);

  constexpr float_t& __get__noteMissedTimeOffset();

  constexpr float_t const& __get__noteMissedTimeOffset() const;

  constexpr void __set__noteMissedTimeOffset(float_t value);

  constexpr float_t& __get__beforeCutVolume();

  constexpr float_t const& __get__beforeCutVolume() const;

  constexpr void __set__beforeCutVolume(float_t value);

  constexpr bool& __get__goodCut();

  constexpr bool const& __get__goodCut() const;

  constexpr void __set__goodCut(bool value);

  constexpr float_t& __get__pitch();

  constexpr float_t const& __get__pitch() const;

  constexpr void __set__pitch(float_t value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& __get__badCutRandomSoundPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& __get__badCutRandomSoundPicker() const;

  constexpr void __set__badCutRandomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value);

  constexpr bool& __get__handleWrongSaberTypeAsGood();

  constexpr bool const& __get__handleWrongSaberTypeAsGood() const;

  constexpr void __set__handleWrongSaberTypeAsGood(bool value);

  constexpr bool& __get__ignoreSaberSpeed();

  constexpr bool const& __get__ignoreSaberSpeed() const;

  constexpr void __set__ignoreSaberSpeed(bool value);

  constexpr bool& __get__ignoreBadCuts();

  constexpr bool const& __get__ignoreBadCuts() const;

  constexpr void __set__ignoreBadCuts(bool value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*& __get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*> const& __get__didFinishEvent() const;

  constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* value);

  /// @brief Method get_didFinishEvent addr 0x222e1fc size 0x8 virtual false final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* get_didFinishEvent();

  /// @brief Method set_volumeMultiplier addr 0x222e204 size 0x8 virtual false final false
  inline void set_volumeMultiplier(float_t value);

  /// @brief Method get_volumeMultiplier addr 0x222e20c size 0x8 virtual false final false
  inline float_t get_volumeMultiplier();

  /// @brief Method get_time addr 0x222e214 size 0x2c virtual false final false
  inline float_t get_time();

  /// @brief Method Awake addr 0x222e240 size 0x84 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x222e2c4 size 0x20 virtual false final false
  inline void Start();

  /// @brief Method Init addr 0x222e2e4 size 0x1b0 virtual false final false
  inline void Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::NoteController* noteController, double_t noteDSPTime, float_t aheadTime, float_t missedTimeOffset, float_t timeToPrevNote,
                   float_t timeToNextNote, ::GlobalNamespace::Saber* saber, bool handleWrongSaberTypeAsGood, float_t volumeMultiplier, bool ignoreSaberSpeed, bool ignoreBadCuts);

  /// @brief Method ComputeDSPTimes addr 0x222e494 size 0xac virtual false final false
  inline void ComputeDSPTimes(double_t noteDSPTime, float_t aheadTime, float_t timeToPrevNote, float_t timeToNextNote);

  /// @brief Method LateUpdate addr 0x222e540 size 0x1c0 virtual false final false
  inline void LateUpdate();

  /// @brief Method StopPlayingAndFinish addr 0x222e700 size 0x1f0 virtual false final false
  inline void StopPlayingAndFinish();

  /// @brief Method NoteWasCut addr 0x222e8f0 size 0x20c virtual false final false
  inline void NoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::NoteCutSoundEffect* New_ctor();

  /// @brief Method .ctor addr 0x222eafc size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutSoundEffect(NoteCutSoundEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutSoundEffect(NoteCutSoundEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutSoundEffect();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _speedToVolumeCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____speedToVolumeCurve;

  /// @brief Field _badCutSoundEffectAudioClips, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____badCutSoundEffectAudioClips;

  /// @brief Field _badCutVolume, offset: 0x30, size: 0x4, def value: None
  float_t ____badCutVolume;

  /// @brief Field _goodCutVolume, offset: 0x34, size: 0x4, def value: None
  float_t ____goodCutVolume;

  /// @brief Field _saber, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____saber;

  /// @brief Field _noteController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::NoteController* ____noteController;

  /// @brief Field _isPlaying, offset: 0x48, size: 0x1, def value: None
  bool ____isPlaying;

  /// @brief Field _volumeMultiplier, offset: 0x4c, size: 0x4, def value: None
  float_t ____volumeMultiplier;

  /// @brief Field _noteWasCut, offset: 0x50, size: 0x1, def value: None
  bool ____noteWasCut;

  /// @brief Field _aheadTime, offset: 0x54, size: 0x4, def value: None
  float_t ____aheadTime;

  /// @brief Field _timeToNextNote, offset: 0x58, size: 0x4, def value: None
  float_t ____timeToNextNote;

  /// @brief Field _timeToPrevNote, offset: 0x5c, size: 0x4, def value: None
  float_t ____timeToPrevNote;

  /// @brief Field _startDSPTime, offset: 0x60, size: 0x8, def value: None
  double_t ____startDSPTime;

  /// @brief Field _endDSPtime, offset: 0x68, size: 0x8, def value: None
  double_t ____endDSPtime;

  /// @brief Field _fadeOutStartDSPtime, offset: 0x70, size: 0x8, def value: None
  double_t ____fadeOutStartDSPtime;

  /// @brief Field _noteMissedTimeOffset, offset: 0x78, size: 0x4, def value: None
  float_t ____noteMissedTimeOffset;

  /// @brief Field _beforeCutVolume, offset: 0x7c, size: 0x4, def value: None
  float_t ____beforeCutVolume;

  /// @brief Field _goodCut, offset: 0x80, size: 0x1, def value: None
  bool ____goodCut;

  /// @brief Field _pitch, offset: 0x84, size: 0x4, def value: None
  float_t ____pitch;

  /// @brief Field _badCutRandomSoundPicker, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* ____badCutRandomSoundPicker;

  /// @brief Field _handleWrongSaberTypeAsGood, offset: 0x90, size: 0x1, def value: None
  bool ____handleWrongSaberTypeAsGood;

  /// @brief Field _ignoreSaberSpeed, offset: 0x91, size: 0x1, def value: None
  bool ____ignoreSaberSpeed;

  /// @brief Field _ignoreBadCuts, offset: 0x92, size: 0x1, def value: None
  bool ____ignoreBadCuts;

  /// @brief Field _didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* ____didFinishEvent;

  /// @brief Field kEndOverlap offset 0xffffffff size 0x4
  static constexpr float_t kEndOverlap{ 100.01 };

  /// @brief Field kEndFadeLength offset 0xffffffff size 0x4
  static constexpr float_t kEndFadeLength{ 0.01 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutSoundEffect, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2823 }), TypeDefinitionIndex(TypeDefinitionIndex(11050)),
// TypeDefinitionIndex(TypeDefinitionIndex(4070))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4069)) CS Name: ::NoteCutSoundEffect::Pool*
class CORDL_TYPE __NoteCutSoundEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::NoteCutSoundEffect*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__NoteCutSoundEffect__Pool* New_ctor();

  /// @brief Method .ctor addr 0x222eb80 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutSoundEffect__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteCutSoundEffect__Pool(__NoteCutSoundEffect__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteCutSoundEffect__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteCutSoundEffect__Pool(__NoteCutSoundEffect__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteCutSoundEffect__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutSoundEffect__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffect*, "", "NoteCutSoundEffect");
NEED_NO_BOX(::GlobalNamespace::__NoteCutSoundEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutSoundEffect__Pool*, "", "NoteCutSoundEffect/Pool");
