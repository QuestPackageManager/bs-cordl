#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSource)
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct AudioRolloffMode;
}
namespace UnityEngine {
struct AudioSourceCurveType;
}
namespace UnityEngine {
struct AudioVelocityUpdateMode;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class AudioSource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioSource);
// Type: UnityEngine::AudioSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15306))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15308))
// CS Name: ::UnityEngine::AudioSource*
class CORDL_TYPE AudioSource : public ::UnityEngine::AudioBehaviour {
public:
  // Declarations
  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  __declspec(property(get = get_pitch, put = set_pitch)) float_t pitch;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_timeSamples, put = set_timeSamples)) int32_t timeSamples;

  __declspec(property(get = get_clip, put = set_clip))::UnityW<::UnityEngine::AudioClip> clip;

  __declspec(property(get = get_outputAudioMixerGroup, put = set_outputAudioMixerGroup))::UnityW<::UnityEngine::Audio::AudioMixerGroup> outputAudioMixerGroup;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isVirtual)) bool isVirtual;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_ignoreListenerVolume, put = set_ignoreListenerVolume)) bool ignoreListenerVolume;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_ignoreListenerPause, put = set_ignoreListenerPause)) bool ignoreListenerPause;

  __declspec(property(get = get_velocityUpdateMode, put = set_velocityUpdateMode))::UnityEngine::AudioVelocityUpdateMode velocityUpdateMode;

  __declspec(property(get = get_panStereo, put = set_panStereo)) float_t panStereo;

  __declspec(property(get = get_spatialBlend, put = set_spatialBlend)) float_t spatialBlend;

  __declspec(property(get = get_spatialize, put = set_spatialize)) bool spatialize;

  __declspec(property(get = get_spatializePostEffects, put = set_spatializePostEffects)) bool spatializePostEffects;

  __declspec(property(get = get_reverbZoneMix, put = set_reverbZoneMix)) float_t reverbZoneMix;

  __declspec(property(get = get_bypassEffects, put = set_bypassEffects)) bool bypassEffects;

  __declspec(property(get = get_bypassListenerEffects, put = set_bypassListenerEffects)) bool bypassListenerEffects;

  __declspec(property(get = get_bypassReverbZones, put = set_bypassReverbZones)) bool bypassReverbZones;

  __declspec(property(get = get_dopplerLevel, put = set_dopplerLevel)) float_t dopplerLevel;

  __declspec(property(get = get_spread, put = set_spread)) float_t spread;

  __declspec(property(get = get_priority, put = set_priority)) int32_t priority;

  __declspec(property(get = get_mute, put = set_mute)) bool mute;

  __declspec(property(get = get_minDistance, put = set_minDistance)) float_t minDistance;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  __declspec(property(get = get_rolloffMode, put = set_rolloffMode))::UnityEngine::AudioRolloffMode rolloffMode;

  __declspec(property(get = get_minVolume, put = set_minVolume)) float_t minVolume;

  __declspec(property(get = get_maxVolume, put = set_maxVolume)) float_t maxVolume;

  __declspec(property(get = get_rolloffFactor, put = set_rolloffFactor)) float_t rolloffFactor;

  /// @brief Method GetPitch, addr 0x2c993a4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetPitch(::UnityEngine::AudioSource* source);

  /// @brief Method SetPitch, addr 0x2c993e0, size 0x4c, virtual false, abstract: false, final false
  static inline void SetPitch(::UnityEngine::AudioSource* source, float_t pitch);

  /// @brief Method PlayHelper, addr 0x2c9942c, size 0x44, virtual false, abstract: false, final false
  static inline void PlayHelper(::UnityEngine::AudioSource* source, uint64_t delay);

  /// @brief Method Play, addr 0x2c99470, size 0x4c, virtual false, abstract: false, final false
  inline void Play(double_t delay);

  /// @brief Method PlayOneShotHelper, addr 0x2c994bc, size 0x54, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method Stop, addr 0x2c99510, size 0x44, virtual false, abstract: false, final false
  inline void Stop(bool stopOneShots);

  /// @brief Method SetCustomCurveHelper, addr 0x2c99554, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method GetCustomCurveHelper, addr 0x2c995a8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* GetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetOutputDataHelper, addr 0x2c995ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper(::UnityEngine::AudioSource* source, ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel);

  /// @brief Method GetSpectrumDataHelper, addr 0x2c99640, size 0x5c, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource* source, ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method get_volume, addr 0x2c9969c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method set_volume, addr 0x2c996d8, size 0x4c, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method get_pitch, addr 0x2c99724, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method set_pitch, addr 0x2c99760, size 0x4c, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method get_time, addr 0x2c997ac, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method set_time, addr 0x2c997e8, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method get_timeSamples, addr 0x2c99834, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_timeSamples();

  /// @brief Method set_timeSamples, addr 0x2c99870, size 0x44, virtual false, abstract: false, final false
  inline void set_timeSamples(int32_t value);

  /// @brief Method get_clip, addr 0x2c998b4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_clip();

  /// @brief Method set_clip, addr 0x2c998f0, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method get_outputAudioMixerGroup, addr 0x2c99934, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup();

  /// @brief Method set_outputAudioMixerGroup, addr 0x2c99970, size 0x44, virtual false, abstract: false, final false
  inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value);

  /// @brief Method Play, addr 0x2c999b4, size 0x40, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x2c999f4, size 0x44, virtual false, abstract: false, final false
  inline void Play(uint64_t delay);

  /// @brief Method PlayDelayed, addr 0x2c99a38, size 0x64, virtual false, abstract: false, final false
  inline void PlayDelayed(float_t delay);

  /// @brief Method PlayScheduled, addr 0x2c99a9c, size 0x58, virtual false, abstract: false, final false
  inline void PlayScheduled(double_t time);

  /// @brief Method PlayOneShot, addr 0x2c99af4, size 0x8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip);

  /// @brief Method PlayOneShot, addr 0x2c99afc, size 0xfc, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method SetScheduledStartTime, addr 0x2c99bf8, size 0x4c, virtual false, abstract: false, final false
  inline void SetScheduledStartTime(double_t time);

  /// @brief Method SetScheduledEndTime, addr 0x2c99c44, size 0x4c, virtual false, abstract: false, final false
  inline void SetScheduledEndTime(double_t time);

  /// @brief Method Stop, addr 0x2c99c90, size 0x40, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Pause, addr 0x2c99cd0, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method UnPause, addr 0x2c99d0c, size 0x3c, virtual false, abstract: false, final false
  inline void UnPause();

  /// @brief Method get_isPlaying, addr 0x2c99d48, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isVirtual, addr 0x2c99d84, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isVirtual();

  /// @brief Method PlayClipAtPoint, addr 0x2c99dc0, size 0x8, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position);

  /// @brief Method PlayClipAtPoint, addr 0x2c99dc8, size 0x280, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position, float_t volume);

  /// @brief Method get_loop, addr 0x2c9a094, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method set_loop, addr 0x2c9a0d0, size 0x44, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method get_ignoreListenerVolume, addr 0x2c9a114, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ignoreListenerVolume();

  /// @brief Method set_ignoreListenerVolume, addr 0x2c9a150, size 0x44, virtual false, abstract: false, final false
  inline void set_ignoreListenerVolume(bool value);

  /// @brief Method get_playOnAwake, addr 0x2c9a194, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method set_playOnAwake, addr 0x2c9a1d0, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method get_ignoreListenerPause, addr 0x2c9a214, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ignoreListenerPause();

  /// @brief Method set_ignoreListenerPause, addr 0x2c9a250, size 0x44, virtual false, abstract: false, final false
  inline void set_ignoreListenerPause(bool value);

  /// @brief Method get_velocityUpdateMode, addr 0x2c9a294, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode();

  /// @brief Method set_velocityUpdateMode, addr 0x2c9a2d0, size 0x44, virtual false, abstract: false, final false
  inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method get_panStereo, addr 0x2c9a314, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_panStereo();

  /// @brief Method set_panStereo, addr 0x2c9a350, size 0x4c, virtual false, abstract: false, final false
  inline void set_panStereo(float_t value);

  /// @brief Method get_spatialBlend, addr 0x2c9a39c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_spatialBlend();

  /// @brief Method set_spatialBlend, addr 0x2c9a048, size 0x4c, virtual false, abstract: false, final false
  inline void set_spatialBlend(float_t value);

  /// @brief Method get_spatialize, addr 0x2c9a3d8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_spatialize();

  /// @brief Method set_spatialize, addr 0x2c9a414, size 0x44, virtual false, abstract: false, final false
  inline void set_spatialize(bool value);

  /// @brief Method get_spatializePostEffects, addr 0x2c9a458, size 0x3c, virtual false, abstract: false, final false
  inline bool get_spatializePostEffects();

  /// @brief Method set_spatializePostEffects, addr 0x2c9a494, size 0x44, virtual false, abstract: false, final false
  inline void set_spatializePostEffects(bool value);

  /// @brief Method SetCustomCurve, addr 0x2c9a4d8, size 0x54, virtual false, abstract: false, final false
  inline void SetCustomCurve(::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method GetCustomCurve, addr 0x2c9a52c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType type);

  /// @brief Method get_reverbZoneMix, addr 0x2c9a570, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_reverbZoneMix();

  /// @brief Method set_reverbZoneMix, addr 0x2c9a5ac, size 0x4c, virtual false, abstract: false, final false
  inline void set_reverbZoneMix(float_t value);

  /// @brief Method get_bypassEffects, addr 0x2c9a5f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_bypassEffects();

  /// @brief Method set_bypassEffects, addr 0x2c9a634, size 0x44, virtual false, abstract: false, final false
  inline void set_bypassEffects(bool value);

  /// @brief Method get_bypassListenerEffects, addr 0x2c9a678, size 0x3c, virtual false, abstract: false, final false
  inline bool get_bypassListenerEffects();

  /// @brief Method set_bypassListenerEffects, addr 0x2c9a6b4, size 0x44, virtual false, abstract: false, final false
  inline void set_bypassListenerEffects(bool value);

  /// @brief Method get_bypassReverbZones, addr 0x2c9a6f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_bypassReverbZones();

  /// @brief Method set_bypassReverbZones, addr 0x2c9a734, size 0x44, virtual false, abstract: false, final false
  inline void set_bypassReverbZones(bool value);

  /// @brief Method get_dopplerLevel, addr 0x2c9a778, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_dopplerLevel();

  /// @brief Method set_dopplerLevel, addr 0x2c9a7b4, size 0x4c, virtual false, abstract: false, final false
  inline void set_dopplerLevel(float_t value);

  /// @brief Method get_spread, addr 0x2c9a800, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_spread();

  /// @brief Method set_spread, addr 0x2c9a83c, size 0x4c, virtual false, abstract: false, final false
  inline void set_spread(float_t value);

  /// @brief Method get_priority, addr 0x2c9a888, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_priority();

  /// @brief Method set_priority, addr 0x2c9a8c4, size 0x44, virtual false, abstract: false, final false
  inline void set_priority(int32_t value);

  /// @brief Method get_mute, addr 0x2c9a908, size 0x3c, virtual false, abstract: false, final false
  inline bool get_mute();

  /// @brief Method set_mute, addr 0x2c9a944, size 0x44, virtual false, abstract: false, final false
  inline void set_mute(bool value);

  /// @brief Method get_minDistance, addr 0x2c9a988, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method set_minDistance, addr 0x2c9a9c4, size 0x4c, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method get_maxDistance, addr 0x2c9aa10, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method set_maxDistance, addr 0x2c9aa4c, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method get_rolloffMode, addr 0x2c9aa98, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioRolloffMode get_rolloffMode();

  /// @brief Method set_rolloffMode, addr 0x2c9aad4, size 0x44, virtual false, abstract: false, final false
  inline void set_rolloffMode(::UnityEngine::AudioRolloffMode value);

  /// @brief Method GetOutputData, addr 0x2c9ab18, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetOutputData(int32_t numSamples, int32_t channel);

  /// @brief Method GetOutputData, addr 0x2c9abac, size 0x54, virtual false, abstract: false, final false
  inline void GetOutputData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel);

  /// @brief Method GetSpectrumData, addr 0x2c9ac00, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumData, addr 0x2c9aca4, size 0x5c, virtual false, abstract: false, final false
  inline void GetSpectrumData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method get_minVolume, addr 0x2c9ad00, size 0x70, virtual false, abstract: false, final false
  inline float_t get_minVolume();

  /// @brief Method set_minVolume, addr 0x2c9ad70, size 0x68, virtual false, abstract: false, final false
  inline void set_minVolume(float_t value);

  /// @brief Method get_maxVolume, addr 0x2c9add8, size 0x70, virtual false, abstract: false, final false
  inline float_t get_maxVolume();

  /// @brief Method set_maxVolume, addr 0x2c9ae48, size 0x68, virtual false, abstract: false, final false
  inline void set_maxVolume(float_t value);

  /// @brief Method get_rolloffFactor, addr 0x2c9aeb0, size 0x70, virtual false, abstract: false, final false
  inline float_t get_rolloffFactor();

  /// @brief Method set_rolloffFactor, addr 0x2c9af20, size 0x68, virtual false, abstract: false, final false
  inline void set_rolloffFactor(float_t value);

  /// @brief Method SetSpatializerFloat, addr 0x2c9af88, size 0x54, virtual false, abstract: false, final false
  inline bool SetSpatializerFloat(int32_t index, float_t value);

  /// @brief Method GetSpatializerFloat, addr 0x2c9afdc, size 0x54, virtual false, abstract: false, final false
  inline bool GetSpatializerFloat(int32_t index, ByRef<float_t> value);

  /// @brief Method GetAmbisonicDecoderFloat, addr 0x2c9b030, size 0x54, virtual false, abstract: false, final false
  inline bool GetAmbisonicDecoderFloat(int32_t index, ByRef<float_t> value);

  /// @brief Method SetAmbisonicDecoderFloat, addr 0x2c9b084, size 0x54, virtual false, abstract: false, final false
  inline bool SetAmbisonicDecoderFloat(int32_t index, float_t value);

  static inline ::UnityEngine::AudioSource* New_ctor();

  /// @brief Method .ctor, addr 0x2c9b0d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSource(AudioSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSource(AudioSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSource();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSource, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
