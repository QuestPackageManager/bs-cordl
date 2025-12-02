#pragma once
// IWYU pragma private; include "UnityEngine/AudioSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSource)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioResource;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct ActivePlayable;
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
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSource
class CORDL_TYPE AudioSource : public ::UnityEngine::AudioBehaviour {
public:
  // Declarations
  __declspec(property(get = get_bypassEffects, put = set_bypassEffects)) bool bypassEffects;

  __declspec(property(get = get_bypassListenerEffects, put = set_bypassListenerEffects)) bool bypassListenerEffects;

  __declspec(property(get = get_bypassReverbZones, put = set_bypassReverbZones)) bool bypassReverbZones;

  __declspec(property(get = get_clip, put = set_clip)) ::UnityW<::UnityEngine::AudioClip> clip;

  __declspec(property(get = get_containerActivePlayables)) ::ArrayW<::UnityEngine::ActivePlayable, ::Array<::UnityEngine::ActivePlayable>*> containerActivePlayables;

  __declspec(property(get = get_dopplerLevel, put = set_dopplerLevel)) float_t dopplerLevel;

  __declspec(property(get = get_ignoreListenerPause, put = set_ignoreListenerPause)) bool ignoreListenerPause;

  __declspec(property(get = get_ignoreListenerVolume, put = set_ignoreListenerVolume)) bool ignoreListenerVolume;

  __declspec(property(get = get_isContainerPlaying)) bool isContainerPlaying;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isVirtual)) bool isVirtual;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  __declspec(property(get = get_maxVolume, put = set_maxVolume)) float_t maxVolume;

  __declspec(property(get = get_minDistance, put = set_minDistance)) float_t minDistance;

  __declspec(property(get = get_minVolume, put = set_minVolume)) float_t minVolume;

  __declspec(property(get = get_mute, put = set_mute)) bool mute;

  __declspec(property(get = get_outputAudioMixerGroup, put = set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup> outputAudioMixerGroup;

  __declspec(property(get = get_panStereo, put = set_panStereo)) float_t panStereo;

  __declspec(property(get = get_pitch, put = set_pitch)) float_t pitch;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_priority, put = set_priority)) int32_t priority;

  __declspec(property(get = get_resource, put = set_resource)) ::UnityW<::UnityEngine::Audio::AudioResource> resource;

  __declspec(property(get = get_reverbZoneMix, put = set_reverbZoneMix)) float_t reverbZoneMix;

  __declspec(property(get = get_rolloffFactor, put = set_rolloffFactor)) float_t rolloffFactor;

  __declspec(property(get = get_rolloffMode, put = set_rolloffMode)) ::UnityEngine::AudioRolloffMode rolloffMode;

  __declspec(property(get = get_spatialBlend, put = set_spatialBlend)) float_t spatialBlend;

  __declspec(property(get = get_spatialize, put = set_spatialize)) bool spatialize;

  __declspec(property(get = get_spatializePostEffects, put = set_spatializePostEffects)) bool spatializePostEffects;

  __declspec(property(get = get_spread, put = set_spread)) float_t spread;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_timeSamples, put = set_timeSamples)) int32_t timeSamples;

  __declspec(property(get = get_velocityUpdateMode, put = set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode velocityUpdateMode;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  /// @brief Method GetAmbisonicDecoderFloat, addr 0x681b110, size 0x98, virtual false, abstract: false, final false
  inline bool GetAmbisonicDecoderFloat(int32_t index, ::ByRef<float_t> value);

  /// @brief Method GetAmbisonicDecoderFloat_Injected, addr 0x681b1a8, size 0x54, virtual false, abstract: false, final false
  static inline bool GetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<float_t> value);

  /// @brief Method GetAudioRandomContainerRuntimeMeterValue, addr 0x681b2f0, size 0x80, virtual false, abstract: false, final false
  inline float_t GetAudioRandomContainerRuntimeMeterValue();

  /// @brief Method GetAudioRandomContainerRuntimeMeterValue_Injected, addr 0x681b370, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAudioRandomContainerRuntimeMeterValue_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetCustomCurve, addr 0x6819a14, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetCustomCurveHelper, addr 0x6817284, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* GetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetCustomCurveHelper_Injected, addr 0x6817354, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetOutputData, addr 0x681ab70, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetOutputData(int32_t numSamples, int32_t channel);

  /// @brief Method GetOutputData, addr 0x681abe8, size 0x4, virtual false, abstract: false, final false
  inline void GetOutputData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper, addr 0x6817398, size 0x190, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper(::UnityEngine::AudioSource* source, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper_Injected, addr 0x6817528, size 0x54, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper_Injected(::System::IntPtr source, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel);

  /// @brief Method GetPitch, addr 0x6816b70, size 0xa4, virtual false, abstract: false, final false
  static inline float_t GetPitch(::UnityEngine::AudioSource* source);

  /// @brief Method GetPitch_Injected, addr 0x6816c14, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetPitch_Injected(::System::IntPtr source);

  /// @brief Method GetSpatializerFloat, addr 0x681b024, size 0x98, virtual false, abstract: false, final false
  inline bool GetSpatializerFloat(int32_t index, ::ByRef<float_t> value);

  /// @brief Method GetSpatializerFloat_Injected, addr 0x681b0bc, size 0x54, virtual false, abstract: false, final false
  static inline bool GetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<float_t> value);

  /// @brief Method GetSpectrumData, addr 0x681abec, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumData, addr 0x681ac74, size 0x4, virtual false, abstract: false, final false
  inline void GetSpectrumData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper, addr 0x681757c, size 0x1a0, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource* source, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper_Injected, addr 0x681771c, size 0x5c, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper_Injected(::System::IntPtr source, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  static inline ::UnityEngine::AudioSource* New_ctor();

  /// @brief Method Pause, addr 0x68184c0, size 0x80, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause_Injected, addr 0x6818540, size 0x3c, virtual false, abstract: false, final false
  static inline void Pause_Injected(::System::IntPtr _unity_self);

  /// @brief Method Play, addr 0x68181c4, size 0x8, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x6816e48, size 0x90, virtual false, abstract: false, final false
  inline void Play(double_t delay);

  /// @brief Method Play, addr 0x68181cc, size 0x4, virtual false, abstract: false, final false
  inline void Play(uint64_t delay);

  /// @brief Method PlayClipAtPoint, addr 0x68189e4, size 0x8, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position);

  /// @brief Method PlayClipAtPoint, addr 0x68189ec, size 0x204, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position, float_t volume);

  /// @brief Method PlayDelayed, addr 0x68181d0, size 0x24, virtual false, abstract: false, final false
  inline void PlayDelayed(float_t delay);

  /// @brief Method PlayHelper, addr 0x6816d50, size 0xb4, virtual false, abstract: false, final false
  static inline void PlayHelper(::UnityEngine::AudioSource* source, uint64_t delay);

  /// @brief Method PlayHelper_Injected, addr 0x6816e04, size 0x44, virtual false, abstract: false, final false
  static inline void PlayHelper_Injected(::System::IntPtr source, uint64_t delay);

  /// @brief Method PlayOneShot, addr 0x6818210, size 0x8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip);

  /// @brief Method PlayOneShot, addr 0x6818218, size 0xe8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method PlayOneShotHelper, addr 0x6816f24, size 0x120, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method PlayOneShotHelper_Injected, addr 0x6817044, size 0x54, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper_Injected(::System::IntPtr source, ::System::IntPtr clip, float_t volumeScale);

  /// @brief Method PlayScheduled, addr 0x68181f4, size 0x1c, virtual false, abstract: false, final false
  inline void PlayScheduled(double_t time);

  /// @brief Method Play_Injected, addr 0x6816ed8, size 0x4c, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self, double_t delay);

  /// @brief Method SetAmbisonicDecoderFloat, addr 0x681b1fc, size 0xa0, virtual false, abstract: false, final false
  inline bool SetAmbisonicDecoderFloat(int32_t index, float_t value);

  /// @brief Method SetAmbisonicDecoderFloat_Injected, addr 0x681b29c, size 0x54, virtual false, abstract: false, final false
  static inline bool SetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SetCustomCurve, addr 0x6819a10, size 0x4, virtual false, abstract: false, final false
  inline void SetCustomCurve(::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCustomCurveHelper, addr 0x681716c, size 0xc4, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCustomCurveHelper_Injected, addr 0x6817230, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type, ::System::IntPtr curve);

  /// @brief Method SetPitch, addr 0x6816c50, size 0xb4, virtual false, abstract: false, final false
  static inline void SetPitch(::UnityEngine::AudioSource* source, float_t pitch);

  /// @brief Method SetPitch_Injected, addr 0x6816d04, size 0x4c, virtual false, abstract: false, final false
  static inline void SetPitch_Injected(::System::IntPtr source, float_t pitch);

  /// @brief Method SetScheduledEndTime, addr 0x68183dc, size 0x90, virtual false, abstract: false, final false
  inline void SetScheduledEndTime(double_t time);

  /// @brief Method SetScheduledEndTime_Injected, addr 0x681846c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetScheduledEndTime_Injected(::System::IntPtr _unity_self, double_t time);

  /// @brief Method SetScheduledStartTime, addr 0x6818300, size 0x90, virtual false, abstract: false, final false
  inline void SetScheduledStartTime(double_t time);

  /// @brief Method SetScheduledStartTime_Injected, addr 0x6818390, size 0x4c, virtual false, abstract: false, final false
  static inline void SetScheduledStartTime_Injected(::System::IntPtr _unity_self, double_t time);

  /// @brief Method SetSpatializerFloat, addr 0x681af30, size 0xa0, virtual false, abstract: false, final false
  inline bool SetSpatializerFloat(int32_t index, float_t value);

  /// @brief Method SetSpatializerFloat_Injected, addr 0x681afd0, size 0x54, virtual false, abstract: false, final false
  static inline bool SetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SkipToNextElementIfHasContainer, addr 0x6818638, size 0x80, virtual false, abstract: false, final false
  inline void SkipToNextElementIfHasContainer();

  /// @brief Method SkipToNextElementIfHasContainer_Injected, addr 0x68186b8, size 0x3c, virtual false, abstract: false, final false
  static inline void SkipToNextElementIfHasContainer_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x68184b8, size 0x8, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x6817098, size 0x90, virtual false, abstract: false, final false
  inline void Stop(bool stopOneShots);

  /// @brief Method Stop_Injected, addr 0x6817128, size 0x44, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self, bool stopOneShots);

  /// @brief Method UnPause, addr 0x681857c, size 0x80, virtual false, abstract: false, final false
  inline void UnPause();

  /// @brief Method UnPause_Injected, addr 0x68185fc, size 0x3c, virtual false, abstract: false, final false
  static inline void UnPause_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x681b3ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bypassEffects, addr 0x6819bb0, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassEffects();

  /// @brief Method get_bypassEffects_Injected, addr 0x6819c30, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bypassListenerEffects, addr 0x6819d40, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassListenerEffects();

  /// @brief Method get_bypassListenerEffects_Injected, addr 0x6819dc0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassListenerEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bypassReverbZones, addr 0x6819ed0, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassReverbZones();

  /// @brief Method get_bypassReverbZones_Injected, addr 0x6819f50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassReverbZones_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clip, addr 0x6817c40, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_clip();

  /// @brief Method get_containerActivePlayables, addr 0x681886c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ActivePlayable, ::Array<::UnityEngine::ActivePlayable>*> get_containerActivePlayables();

  /// @brief Method get_containerActivePlayables_Injected, addr 0x68188ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ActivePlayable, ::Array<::UnityEngine::ActivePlayable>*> get_containerActivePlayables_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_dopplerLevel, addr 0x681a060, size 0x80, virtual false, abstract: false, final false
  inline float_t get_dopplerLevel();

  /// @brief Method get_dopplerLevel_Injected, addr 0x681a0e0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_dopplerLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreListenerPause, addr 0x6819130, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreListenerPause();

  /// @brief Method get_ignoreListenerPause_Injected, addr 0x68191b0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreListenerPause_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreListenerVolume, addr 0x6818e10, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreListenerVolume();

  /// @brief Method get_ignoreListenerVolume_Injected, addr 0x6818e90, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreListenerVolume_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isContainerPlaying, addr 0x68187b0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isContainerPlaying();

  /// @brief Method get_isContainerPlaying_Injected, addr 0x6818830, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isContainerPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPlaying, addr 0x68186f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPlaying_Injected, addr 0x6818774, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isVirtual, addr 0x6818928, size 0x80, virtual false, abstract: false, final false
  inline bool get_isVirtual();

  /// @brief Method get_isVirtual_Injected, addr 0x68189a8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isVirtual_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loop, addr 0x6818c80, size 0x80, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x6818d00, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDistance, addr 0x681a848, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method get_maxDistance_Injected, addr 0x681a8c8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxVolume, addr 0x681ad60, size 0x78, virtual false, abstract: false, final false
  inline float_t get_maxVolume();

  /// @brief Method get_minDistance, addr 0x681a6b0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method get_minDistance_Injected, addr 0x681a730, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minVolume, addr 0x681ac78, size 0x78, virtual false, abstract: false, final false
  inline float_t get_minVolume();

  /// @brief Method get_mute, addr 0x681a520, size 0x80, virtual false, abstract: false, final false
  inline bool get_mute();

  /// @brief Method get_mute_Injected, addr 0x681a5a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_mute_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_outputAudioMixerGroup, addr 0x6817f34, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup();

  /// @brief Method get_outputAudioMixerGroup_Injected, addr 0x6818084, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_panStereo, addr 0x6819450, size 0x80, virtual false, abstract: false, final false
  inline float_t get_panStereo();

  /// @brief Method get_panStereo_Injected, addr 0x68194d0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_panStereo_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitch, addr 0x6817910, size 0x4, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method get_playOnAwake, addr 0x6818fa0, size 0x80, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playOnAwake_Injected, addr 0x6819020, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playOnAwake_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_priority, addr 0x681a390, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_priority();

  /// @brief Method get_priority_Injected, addr 0x681a410, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_priority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_resource, addr 0x6817ca0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioResource> get_resource();

  /// @brief Method get_resource_Injected, addr 0x6817eb4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_resource_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_reverbZoneMix, addr 0x6819a18, size 0x80, virtual false, abstract: false, final false
  inline float_t get_reverbZoneMix();

  /// @brief Method get_reverbZoneMix_Injected, addr 0x6819a98, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_reverbZoneMix_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rolloffFactor, addr 0x681ae48, size 0x78, virtual false, abstract: false, final false
  inline float_t get_rolloffFactor();

  /// @brief Method get_rolloffMode, addr 0x681a9e0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioRolloffMode get_rolloffMode();

  /// @brief Method get_rolloffMode_Injected, addr 0x681aa60, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioRolloffMode get_rolloffMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialBlend, addr 0x68195e8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spatialBlend();

  /// @brief Method get_spatialBlend_Injected, addr 0x6819668, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spatialBlend_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialize, addr 0x68196f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_spatialize();

  /// @brief Method get_spatializePostEffects, addr 0x6819880, size 0x80, virtual false, abstract: false, final false
  inline bool get_spatializePostEffects();

  /// @brief Method get_spatializePostEffects_Injected, addr 0x6819900, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_spatializePostEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialize_Injected, addr 0x6819770, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_spatialize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spread, addr 0x681a1f8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spread();

  /// @brief Method get_spread_Injected, addr 0x681a278, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spread_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time, addr 0x6817918, size 0x80, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_timeSamples, addr 0x6817ab0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_timeSamples();

  /// @brief Method get_timeSamples_Injected, addr 0x6817b30, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_timeSamples_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time_Injected, addr 0x6817998, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_time_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocityUpdateMode, addr 0x68192c0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode();

  /// @brief Method get_velocityUpdateMode_Injected, addr 0x6819340, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6817778, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volume_Injected, addr 0x68177f8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bypassEffects, addr 0x6819c6c, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassEffects(bool value);

  /// @brief Method set_bypassEffects_Injected, addr 0x6819cfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bypassListenerEffects, addr 0x6819dfc, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassListenerEffects(bool value);

  /// @brief Method set_bypassListenerEffects_Injected, addr 0x6819e8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassListenerEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bypassReverbZones, addr 0x6819f8c, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassReverbZones(bool value);

  /// @brief Method set_bypassReverbZones_Injected, addr 0x681a01c, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassReverbZones_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_clip, addr 0x6817df0, size 0x4, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method set_dopplerLevel, addr 0x681a11c, size 0x90, virtual false, abstract: false, final false
  inline void set_dopplerLevel(float_t value);

  /// @brief Method set_dopplerLevel_Injected, addr 0x681a1ac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_dopplerLevel_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_ignoreListenerPause, addr 0x68191ec, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreListenerPause(bool value);

  /// @brief Method set_ignoreListenerPause_Injected, addr 0x681927c, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreListenerPause_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_ignoreListenerVolume, addr 0x6818ecc, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreListenerVolume(bool value);

  /// @brief Method set_ignoreListenerVolume_Injected, addr 0x6818f5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreListenerVolume_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loop, addr 0x6818d3c, size 0x90, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x6818dcc, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maxDistance, addr 0x681a904, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method set_maxDistance_Injected, addr 0x681a994, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxVolume, addr 0x681add8, size 0x70, virtual false, abstract: false, final false
  inline void set_maxVolume(float_t value);

  /// @brief Method set_minDistance, addr 0x681a76c, size 0x90, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_minDistance_Injected, addr 0x681a7fc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_minVolume, addr 0x681acf0, size 0x70, virtual false, abstract: false, final false
  inline void set_minVolume(float_t value);

  /// @brief Method set_mute, addr 0x681a5dc, size 0x90, virtual false, abstract: false, final false
  inline void set_mute(bool value);

  /// @brief Method set_mute_Injected, addr 0x681a66c, size 0x44, virtual false, abstract: false, final false
  static inline void set_mute_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_outputAudioMixerGroup, addr 0x68180c0, size 0xc0, virtual false, abstract: false, final false
  inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value);

  /// @brief Method set_outputAudioMixerGroup_Injected, addr 0x6818180, size 0x44, virtual false, abstract: false, final false
  static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_panStereo, addr 0x681950c, size 0x90, virtual false, abstract: false, final false
  inline void set_panStereo(float_t value);

  /// @brief Method set_panStereo_Injected, addr 0x681959c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_panStereo_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_pitch, addr 0x6817914, size 0x4, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_playOnAwake, addr 0x681905c, size 0x90, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playOnAwake_Injected, addr 0x68190ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_priority, addr 0x681a44c, size 0x90, virtual false, abstract: false, final false
  inline void set_priority(int32_t value);

  /// @brief Method set_priority_Injected, addr 0x681a4dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_priority_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_resource, addr 0x6817df4, size 0xc0, virtual false, abstract: false, final false
  inline void set_resource(::UnityEngine::Audio::AudioResource* value);

  /// @brief Method set_resource_Injected, addr 0x6817ef0, size 0x44, virtual false, abstract: false, final false
  static inline void set_resource_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_reverbZoneMix, addr 0x6819ad4, size 0x90, virtual false, abstract: false, final false
  inline void set_reverbZoneMix(float_t value);

  /// @brief Method set_reverbZoneMix_Injected, addr 0x6819b64, size 0x4c, virtual false, abstract: false, final false
  static inline void set_reverbZoneMix_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_rolloffFactor, addr 0x681aec0, size 0x70, virtual false, abstract: false, final false
  inline void set_rolloffFactor(float_t value);

  /// @brief Method set_rolloffMode, addr 0x681aa9c, size 0x90, virtual false, abstract: false, final false
  inline void set_rolloffMode(::UnityEngine::AudioRolloffMode value);

  /// @brief Method set_rolloffMode_Injected, addr 0x681ab2c, size 0x44, virtual false, abstract: false, final false
  static inline void set_rolloffMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioRolloffMode value);

  /// @brief Method set_spatialBlend, addr 0x6818bf0, size 0x90, virtual false, abstract: false, final false
  inline void set_spatialBlend(float_t value);

  /// @brief Method set_spatialBlend_Injected, addr 0x68196a4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spatialBlend_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_spatialize, addr 0x68197ac, size 0x90, virtual false, abstract: false, final false
  inline void set_spatialize(bool value);

  /// @brief Method set_spatializePostEffects, addr 0x681993c, size 0x90, virtual false, abstract: false, final false
  inline void set_spatializePostEffects(bool value);

  /// @brief Method set_spatializePostEffects_Injected, addr 0x68199cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_spatializePostEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_spatialize_Injected, addr 0x681983c, size 0x44, virtual false, abstract: false, final false
  static inline void set_spatialize_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_spread, addr 0x681a2b4, size 0x90, virtual false, abstract: false, final false
  inline void set_spread(float_t value);

  /// @brief Method set_spread_Injected, addr 0x681a344, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spread_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_time, addr 0x68179d4, size 0x90, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_timeSamples, addr 0x6817b6c, size 0x90, virtual false, abstract: false, final false
  inline void set_timeSamples(int32_t value);

  /// @brief Method set_timeSamples_Injected, addr 0x6817bfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeSamples_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_time_Injected, addr 0x6817a64, size 0x4c, virtual false, abstract: false, final false
  static inline void set_time_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_velocityUpdateMode, addr 0x681937c, size 0x90, virtual false, abstract: false, final false
  inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_velocityUpdateMode_Injected, addr 0x681940c, size 0x44, virtual false, abstract: false, final false
  static inline void set_velocityUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_volume, addr 0x6817834, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volume_Injected, addr 0x68178c4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_volume_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSource(AudioSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSource(AudioSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSource, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
