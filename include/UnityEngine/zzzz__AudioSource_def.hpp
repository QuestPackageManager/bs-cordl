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
 __declspec(property(get=get_bypassEffects, put=set_bypassEffects)) bool  bypassEffects;

 __declspec(property(get=get_bypassListenerEffects, put=set_bypassListenerEffects)) bool  bypassListenerEffects;

 __declspec(property(get=get_bypassReverbZones, put=set_bypassReverbZones)) bool  bypassReverbZones;

 __declspec(property(get=get_clip, put=set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

 __declspec(property(get=get_containerActivePlayables)) ::ArrayW<::UnityEngine::ActivePlayable,::Array<::UnityEngine::ActivePlayable>*>  containerActivePlayables;

 __declspec(property(get=get_dopplerLevel, put=set_dopplerLevel)) float_t  dopplerLevel;

 __declspec(property(get=get_ignoreListenerPause, put=set_ignoreListenerPause)) bool  ignoreListenerPause;

 __declspec(property(get=get_ignoreListenerVolume, put=set_ignoreListenerVolume)) bool  ignoreListenerVolume;

 __declspec(property(get=get_isContainerPlaying)) bool  isContainerPlaying;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_isVirtual)) bool  isVirtual;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_maxDistance, put=set_maxDistance)) float_t  maxDistance;

 __declspec(property(get=get_maxVolume, put=set_maxVolume)) float_t  maxVolume;

 __declspec(property(get=get_minDistance, put=set_minDistance)) float_t  minDistance;

 __declspec(property(get=get_minVolume, put=set_minVolume)) float_t  minVolume;

 __declspec(property(get=get_mute, put=set_mute)) bool  mute;

 __declspec(property(get=get_outputAudioMixerGroup, put=set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

 __declspec(property(get=get_panStereo, put=set_panStereo)) float_t  panStereo;

 __declspec(property(get=get_pitch, put=set_pitch)) float_t  pitch;

 __declspec(property(get=get_playOnAwake, put=set_playOnAwake)) bool  playOnAwake;

 __declspec(property(get=get_priority, put=set_priority)) int32_t  priority;

 __declspec(property(get=get_resource, put=set_resource)) ::UnityW<::UnityEngine::Audio::AudioResource>  resource;

 __declspec(property(get=get_reverbZoneMix, put=set_reverbZoneMix)) float_t  reverbZoneMix;

 __declspec(property(get=get_rolloffFactor, put=set_rolloffFactor)) float_t  rolloffFactor;

 __declspec(property(get=get_rolloffMode, put=set_rolloffMode)) ::UnityEngine::AudioRolloffMode  rolloffMode;

 __declspec(property(get=get_spatialBlend, put=set_spatialBlend)) float_t  spatialBlend;

 __declspec(property(get=get_spatialize, put=set_spatialize)) bool  spatialize;

 __declspec(property(get=get_spatializePostEffects, put=set_spatializePostEffects)) bool  spatializePostEffects;

 __declspec(property(get=get_spread, put=set_spread)) float_t  spread;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_timeSamples, put=set_timeSamples)) int32_t  timeSamples;

 __declspec(property(get=get_velocityUpdateMode, put=set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode  velocityUpdateMode;

 __declspec(property(get=get_volume, put=set_volume)) float_t  volume;

/// @brief Method GetAmbisonicDecoderFloat, addr 0x68f6ecc, size 0x98, virtual false, abstract: false, final false
inline bool GetAmbisonicDecoderFloat(int32_t  index, ::ByRef<float_t>  value) ;

/// @brief Method GetAmbisonicDecoderFloat_Injected, addr 0x68f6f64, size 0x54, virtual false, abstract: false, final false
static inline bool GetAmbisonicDecoderFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, ::ByRef<float_t>  value) ;

/// @brief Method GetAudioRandomContainerRuntimeMeterValue, addr 0x68f70ac, size 0x80, virtual false, abstract: false, final false
inline float_t GetAudioRandomContainerRuntimeMeterValue() ;

/// @brief Method GetAudioRandomContainerRuntimeMeterValue_Injected, addr 0x68f712c, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAudioRandomContainerRuntimeMeterValue_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetCustomCurve, addr 0x68f57d0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType  type) ;

/// @brief Method GetCustomCurveHelper, addr 0x68f3040, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* GetCustomCurveHelper(::UnityEngine::AudioSource*  source, ::UnityEngine::AudioSourceCurveType  type) ;

/// @brief Method GetCustomCurveHelper_Injected, addr 0x68f3110, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetCustomCurveHelper_Injected(::System::IntPtr  source, ::UnityEngine::AudioSourceCurveType  type) ;

/// @brief Method GetOutputData, addr 0x68f692c, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetOutputData(int32_t  numSamples, int32_t  channel) ;

/// @brief Method GetOutputData, addr 0x68f69a4, size 0x4, virtual false, abstract: false, final false
inline void GetOutputData(::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper, addr 0x68f3154, size 0x190, virtual false, abstract: false, final false
static inline void GetOutputDataHelper(::UnityEngine::AudioSource*  source, ::ByRef<::ArrayW<float_t,::Array<float_t>*>>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper_Injected, addr 0x68f32e4, size 0x54, virtual false, abstract: false, final false
static inline void GetOutputDataHelper_Injected(::System::IntPtr  source, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel) ;

/// @brief Method GetPitch, addr 0x68f292c, size 0xa4, virtual false, abstract: false, final false
static inline float_t GetPitch(::UnityEngine::AudioSource*  source) ;

/// @brief Method GetPitch_Injected, addr 0x68f29d0, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetPitch_Injected(::System::IntPtr  source) ;

/// @brief Method GetSpatializerFloat, addr 0x68f6de0, size 0x98, virtual false, abstract: false, final false
inline bool GetSpatializerFloat(int32_t  index, ::ByRef<float_t>  value) ;

/// @brief Method GetSpatializerFloat_Injected, addr 0x68f6e78, size 0x54, virtual false, abstract: false, final false
static inline bool GetSpatializerFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, ::ByRef<float_t>  value) ;

/// @brief Method GetSpectrumData, addr 0x68f69a8, size 0x88, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetSpectrumData(int32_t  numSamples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumData, addr 0x68f6a30, size 0x4, virtual false, abstract: false, final false
inline void GetSpectrumData(::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper, addr 0x68f3338, size 0x1a0, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource*  source, ::ByRef<::ArrayW<float_t,::Array<float_t>*>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper_Injected, addr 0x68f34d8, size 0x5c, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper_Injected(::System::IntPtr  source, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

static inline ::UnityEngine::AudioSource* New_ctor() ;

/// @brief Method Pause, addr 0x68f427c, size 0x80, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Pause_Injected, addr 0x68f42fc, size 0x3c, virtual false, abstract: false, final false
static inline void Pause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Play, addr 0x68f3f80, size 0x8, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x68f2c04, size 0x90, virtual false, abstract: false, final false
inline void Play(double_t  delay) ;

/// @brief Method Play, addr 0x68f3f88, size 0x4, virtual false, abstract: false, final false
inline void Play(uint64_t  delay) ;

/// @brief Method PlayClipAtPoint, addr 0x68f47a0, size 0x8, virtual false, abstract: false, final false
static inline void PlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position) ;

/// @brief Method PlayClipAtPoint, addr 0x68f47a8, size 0x204, virtual false, abstract: false, final false
static inline void PlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, float_t  volume) ;

/// @brief Method PlayDelayed, addr 0x68f3f8c, size 0x24, virtual false, abstract: false, final false
inline void PlayDelayed(float_t  delay) ;

/// @brief Method PlayHelper, addr 0x68f2b0c, size 0xb4, virtual false, abstract: false, final false
static inline void PlayHelper(::UnityEngine::AudioSource*  source, uint64_t  delay) ;

/// @brief Method PlayHelper_Injected, addr 0x68f2bc0, size 0x44, virtual false, abstract: false, final false
static inline void PlayHelper_Injected(::System::IntPtr  source, uint64_t  delay) ;

/// @brief Method PlayOneShot, addr 0x68f3fcc, size 0x8, virtual false, abstract: false, final false
inline void PlayOneShot(::UnityEngine::AudioClip*  clip) ;

/// @brief Method PlayOneShot, addr 0x68f3fd4, size 0xe8, virtual false, abstract: false, final false
inline void PlayOneShot(::UnityEngine::AudioClip*  clip, float_t  volumeScale) ;

/// @brief Method PlayOneShotHelper, addr 0x68f2ce0, size 0x120, virtual false, abstract: false, final false
static inline void PlayOneShotHelper(::UnityEngine::AudioSource*  source, ::UnityEngine::AudioClip*  clip, float_t  volumeScale) ;

/// @brief Method PlayOneShotHelper_Injected, addr 0x68f2e00, size 0x54, virtual false, abstract: false, final false
static inline void PlayOneShotHelper_Injected(::System::IntPtr  source, ::System::IntPtr  clip, float_t  volumeScale) ;

/// @brief Method PlayScheduled, addr 0x68f3fb0, size 0x1c, virtual false, abstract: false, final false
inline void PlayScheduled(double_t  time) ;

/// @brief Method Play_Injected, addr 0x68f2c94, size 0x4c, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, double_t  delay) ;

/// @brief Method SetAmbisonicDecoderFloat, addr 0x68f6fb8, size 0xa0, virtual false, abstract: false, final false
inline bool SetAmbisonicDecoderFloat(int32_t  index, float_t  value) ;

/// @brief Method SetAmbisonicDecoderFloat_Injected, addr 0x68f7058, size 0x54, virtual false, abstract: false, final false
static inline bool SetAmbisonicDecoderFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, float_t  value) ;

/// @brief Method SetCustomCurve, addr 0x68f57cc, size 0x4, virtual false, abstract: false, final false
inline void SetCustomCurve(::UnityEngine::AudioSourceCurveType  type, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method SetCustomCurveHelper, addr 0x68f2f28, size 0xc4, virtual false, abstract: false, final false
static inline void SetCustomCurveHelper(::UnityEngine::AudioSource*  source, ::UnityEngine::AudioSourceCurveType  type, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method SetCustomCurveHelper_Injected, addr 0x68f2fec, size 0x54, virtual false, abstract: false, final false
static inline void SetCustomCurveHelper_Injected(::System::IntPtr  source, ::UnityEngine::AudioSourceCurveType  type, ::System::IntPtr  curve) ;

/// @brief Method SetPitch, addr 0x68f2a0c, size 0xb4, virtual false, abstract: false, final false
static inline void SetPitch(::UnityEngine::AudioSource*  source, float_t  pitch) ;

/// @brief Method SetPitch_Injected, addr 0x68f2ac0, size 0x4c, virtual false, abstract: false, final false
static inline void SetPitch_Injected(::System::IntPtr  source, float_t  pitch) ;

/// @brief Method SetScheduledEndTime, addr 0x68f4198, size 0x90, virtual false, abstract: false, final false
inline void SetScheduledEndTime(double_t  time) ;

/// @brief Method SetScheduledEndTime_Injected, addr 0x68f4228, size 0x4c, virtual false, abstract: false, final false
static inline void SetScheduledEndTime_Injected(::System::IntPtr  _unity_self, double_t  time) ;

/// @brief Method SetScheduledStartTime, addr 0x68f40bc, size 0x90, virtual false, abstract: false, final false
inline void SetScheduledStartTime(double_t  time) ;

/// @brief Method SetScheduledStartTime_Injected, addr 0x68f414c, size 0x4c, virtual false, abstract: false, final false
static inline void SetScheduledStartTime_Injected(::System::IntPtr  _unity_self, double_t  time) ;

/// @brief Method SetSpatializerFloat, addr 0x68f6cec, size 0xa0, virtual false, abstract: false, final false
inline bool SetSpatializerFloat(int32_t  index, float_t  value) ;

/// @brief Method SetSpatializerFloat_Injected, addr 0x68f6d8c, size 0x54, virtual false, abstract: false, final false
static inline bool SetSpatializerFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, float_t  value) ;

/// @brief Method SkipToNextElementIfHasContainer, addr 0x68f43f4, size 0x80, virtual false, abstract: false, final false
inline void SkipToNextElementIfHasContainer() ;

/// @brief Method SkipToNextElementIfHasContainer_Injected, addr 0x68f4474, size 0x3c, virtual false, abstract: false, final false
static inline void SkipToNextElementIfHasContainer_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Stop, addr 0x68f4274, size 0x8, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0x68f2e54, size 0x90, virtual false, abstract: false, final false
inline void Stop(bool  stopOneShots) ;

/// @brief Method Stop_Injected, addr 0x68f2ee4, size 0x44, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self, bool  stopOneShots) ;

/// @brief Method UnPause, addr 0x68f4338, size 0x80, virtual false, abstract: false, final false
inline void UnPause() ;

/// @brief Method UnPause_Injected, addr 0x68f43b8, size 0x3c, virtual false, abstract: false, final false
static inline void UnPause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method .ctor, addr 0x68f7168, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bypassEffects, addr 0x68f596c, size 0x80, virtual false, abstract: false, final false
inline bool get_bypassEffects() ;

/// @brief Method get_bypassEffects_Injected, addr 0x68f59ec, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bypassEffects_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bypassListenerEffects, addr 0x68f5afc, size 0x80, virtual false, abstract: false, final false
inline bool get_bypassListenerEffects() ;

/// @brief Method get_bypassListenerEffects_Injected, addr 0x68f5b7c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bypassListenerEffects_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bypassReverbZones, addr 0x68f5c8c, size 0x80, virtual false, abstract: false, final false
inline bool get_bypassReverbZones() ;

/// @brief Method get_bypassReverbZones_Injected, addr 0x68f5d0c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bypassReverbZones_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clip, addr 0x68f39fc, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_clip() ;

/// @brief Method get_containerActivePlayables, addr 0x68f4628, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::ActivePlayable,::Array<::UnityEngine::ActivePlayable>*> get_containerActivePlayables() ;

/// @brief Method get_containerActivePlayables_Injected, addr 0x68f46a8, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::ActivePlayable,::Array<::UnityEngine::ActivePlayable>*> get_containerActivePlayables_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_dopplerLevel, addr 0x68f5e1c, size 0x80, virtual false, abstract: false, final false
inline float_t get_dopplerLevel() ;

/// @brief Method get_dopplerLevel_Injected, addr 0x68f5e9c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_dopplerLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_ignoreListenerPause, addr 0x68f4eec, size 0x80, virtual false, abstract: false, final false
inline bool get_ignoreListenerPause() ;

/// @brief Method get_ignoreListenerPause_Injected, addr 0x68f4f6c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_ignoreListenerPause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_ignoreListenerVolume, addr 0x68f4bcc, size 0x80, virtual false, abstract: false, final false
inline bool get_ignoreListenerVolume() ;

/// @brief Method get_ignoreListenerVolume_Injected, addr 0x68f4c4c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_ignoreListenerVolume_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isContainerPlaying, addr 0x68f456c, size 0x80, virtual false, abstract: false, final false
inline bool get_isContainerPlaying() ;

/// @brief Method get_isContainerPlaying_Injected, addr 0x68f45ec, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isContainerPlaying_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isPlaying, addr 0x68f44b0, size 0x80, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0x68f4530, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isVirtual, addr 0x68f46e4, size 0x80, virtual false, abstract: false, final false
inline bool get_isVirtual() ;

/// @brief Method get_isVirtual_Injected, addr 0x68f4764, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isVirtual_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loop, addr 0x68f4a3c, size 0x80, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_loop_Injected, addr 0x68f4abc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loop_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maxDistance, addr 0x68f6604, size 0x80, virtual false, abstract: false, final false
inline float_t get_maxDistance() ;

/// @brief Method get_maxDistance_Injected, addr 0x68f6684, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_maxDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maxVolume, addr 0x68f6b1c, size 0x78, virtual false, abstract: false, final false
inline float_t get_maxVolume() ;

/// @brief Method get_minDistance, addr 0x68f646c, size 0x80, virtual false, abstract: false, final false
inline float_t get_minDistance() ;

/// @brief Method get_minDistance_Injected, addr 0x68f64ec, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_minDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_minVolume, addr 0x68f6a34, size 0x78, virtual false, abstract: false, final false
inline float_t get_minVolume() ;

/// @brief Method get_mute, addr 0x68f62dc, size 0x80, virtual false, abstract: false, final false
inline bool get_mute() ;

/// @brief Method get_mute_Injected, addr 0x68f635c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_mute_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_outputAudioMixerGroup, addr 0x68f3cf0, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup() ;

/// @brief Method get_outputAudioMixerGroup_Injected, addr 0x68f3e40, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_panStereo, addr 0x68f520c, size 0x80, virtual false, abstract: false, final false
inline float_t get_panStereo() ;

/// @brief Method get_panStereo_Injected, addr 0x68f528c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_panStereo_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pitch, addr 0x68f36cc, size 0x4, virtual false, abstract: false, final false
inline float_t get_pitch() ;

/// @brief Method get_playOnAwake, addr 0x68f4d5c, size 0x80, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_playOnAwake_Injected, addr 0x68f4ddc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_playOnAwake_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_priority, addr 0x68f614c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_priority() ;

/// @brief Method get_priority_Injected, addr 0x68f61cc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_priority_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_resource, addr 0x68f3a5c, size 0x150, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioResource> get_resource() ;

/// @brief Method get_resource_Injected, addr 0x68f3c70, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_resource_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reverbZoneMix, addr 0x68f57d4, size 0x80, virtual false, abstract: false, final false
inline float_t get_reverbZoneMix() ;

/// @brief Method get_reverbZoneMix_Injected, addr 0x68f5854, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_reverbZoneMix_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rolloffFactor, addr 0x68f6c04, size 0x78, virtual false, abstract: false, final false
inline float_t get_rolloffFactor() ;

/// @brief Method get_rolloffMode, addr 0x68f679c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AudioRolloffMode get_rolloffMode() ;

/// @brief Method get_rolloffMode_Injected, addr 0x68f681c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioRolloffMode get_rolloffMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spatialBlend, addr 0x68f53a4, size 0x80, virtual false, abstract: false, final false
inline float_t get_spatialBlend() ;

/// @brief Method get_spatialBlend_Injected, addr 0x68f5424, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_spatialBlend_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spatialize, addr 0x68f54ac, size 0x80, virtual false, abstract: false, final false
inline bool get_spatialize() ;

/// @brief Method get_spatializePostEffects, addr 0x68f563c, size 0x80, virtual false, abstract: false, final false
inline bool get_spatializePostEffects() ;

/// @brief Method get_spatializePostEffects_Injected, addr 0x68f56bc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_spatializePostEffects_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spatialize_Injected, addr 0x68f552c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_spatialize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spread, addr 0x68f5fb4, size 0x80, virtual false, abstract: false, final false
inline float_t get_spread() ;

/// @brief Method get_spread_Injected, addr 0x68f6034, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_spread_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time, addr 0x68f36d4, size 0x80, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_timeSamples, addr 0x68f386c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_timeSamples() ;

/// @brief Method get_timeSamples_Injected, addr 0x68f38ec, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_timeSamples_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time_Injected, addr 0x68f3754, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocityUpdateMode, addr 0x68f507c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode() ;

/// @brief Method get_velocityUpdateMode_Injected, addr 0x68f50fc, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_volume, addr 0x68f3534, size 0x80, virtual false, abstract: false, final false
inline float_t get_volume() ;

/// @brief Method get_volume_Injected, addr 0x68f35b4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_volume_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_bypassEffects, addr 0x68f5a28, size 0x90, virtual false, abstract: false, final false
inline void set_bypassEffects(bool  value) ;

/// @brief Method set_bypassEffects_Injected, addr 0x68f5ab8, size 0x44, virtual false, abstract: false, final false
static inline void set_bypassEffects_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_bypassListenerEffects, addr 0x68f5bb8, size 0x90, virtual false, abstract: false, final false
inline void set_bypassListenerEffects(bool  value) ;

/// @brief Method set_bypassListenerEffects_Injected, addr 0x68f5c48, size 0x44, virtual false, abstract: false, final false
static inline void set_bypassListenerEffects_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_bypassReverbZones, addr 0x68f5d48, size 0x90, virtual false, abstract: false, final false
inline void set_bypassReverbZones(bool  value) ;

/// @brief Method set_bypassReverbZones_Injected, addr 0x68f5dd8, size 0x44, virtual false, abstract: false, final false
static inline void set_bypassReverbZones_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_clip, addr 0x68f3bac, size 0x4, virtual false, abstract: false, final false
inline void set_clip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_dopplerLevel, addr 0x68f5ed8, size 0x90, virtual false, abstract: false, final false
inline void set_dopplerLevel(float_t  value) ;

/// @brief Method set_dopplerLevel_Injected, addr 0x68f5f68, size 0x4c, virtual false, abstract: false, final false
static inline void set_dopplerLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_ignoreListenerPause, addr 0x68f4fa8, size 0x90, virtual false, abstract: false, final false
inline void set_ignoreListenerPause(bool  value) ;

/// @brief Method set_ignoreListenerPause_Injected, addr 0x68f5038, size 0x44, virtual false, abstract: false, final false
static inline void set_ignoreListenerPause_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_ignoreListenerVolume, addr 0x68f4c88, size 0x90, virtual false, abstract: false, final false
inline void set_ignoreListenerVolume(bool  value) ;

/// @brief Method set_ignoreListenerVolume_Injected, addr 0x68f4d18, size 0x44, virtual false, abstract: false, final false
static inline void set_ignoreListenerVolume_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_loop, addr 0x68f4af8, size 0x90, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_loop_Injected, addr 0x68f4b88, size 0x44, virtual false, abstract: false, final false
static inline void set_loop_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_maxDistance, addr 0x68f66c0, size 0x90, virtual false, abstract: false, final false
inline void set_maxDistance(float_t  value) ;

/// @brief Method set_maxDistance_Injected, addr 0x68f6750, size 0x4c, virtual false, abstract: false, final false
static inline void set_maxDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_maxVolume, addr 0x68f6b94, size 0x70, virtual false, abstract: false, final false
inline void set_maxVolume(float_t  value) ;

/// @brief Method set_minDistance, addr 0x68f6528, size 0x90, virtual false, abstract: false, final false
inline void set_minDistance(float_t  value) ;

/// @brief Method set_minDistance_Injected, addr 0x68f65b8, size 0x4c, virtual false, abstract: false, final false
static inline void set_minDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_minVolume, addr 0x68f6aac, size 0x70, virtual false, abstract: false, final false
inline void set_minVolume(float_t  value) ;

/// @brief Method set_mute, addr 0x68f6398, size 0x90, virtual false, abstract: false, final false
inline void set_mute(bool  value) ;

/// @brief Method set_mute_Injected, addr 0x68f6428, size 0x44, virtual false, abstract: false, final false
static inline void set_mute_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_outputAudioMixerGroup, addr 0x68f3e7c, size 0xc0, virtual false, abstract: false, final false
inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup*  value) ;

/// @brief Method set_outputAudioMixerGroup_Injected, addr 0x68f3f3c, size 0x44, virtual false, abstract: false, final false
static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_panStereo, addr 0x68f52c8, size 0x90, virtual false, abstract: false, final false
inline void set_panStereo(float_t  value) ;

/// @brief Method set_panStereo_Injected, addr 0x68f5358, size 0x4c, virtual false, abstract: false, final false
static inline void set_panStereo_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_pitch, addr 0x68f36d0, size 0x4, virtual false, abstract: false, final false
inline void set_pitch(float_t  value) ;

/// @brief Method set_playOnAwake, addr 0x68f4e18, size 0x90, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// @brief Method set_playOnAwake_Injected, addr 0x68f4ea8, size 0x44, virtual false, abstract: false, final false
static inline void set_playOnAwake_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_priority, addr 0x68f6208, size 0x90, virtual false, abstract: false, final false
inline void set_priority(int32_t  value) ;

/// @brief Method set_priority_Injected, addr 0x68f6298, size 0x44, virtual false, abstract: false, final false
static inline void set_priority_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_resource, addr 0x68f3bb0, size 0xc0, virtual false, abstract: false, final false
inline void set_resource(::UnityEngine::Audio::AudioResource*  value) ;

/// @brief Method set_resource_Injected, addr 0x68f3cac, size 0x44, virtual false, abstract: false, final false
static inline void set_resource_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_reverbZoneMix, addr 0x68f5890, size 0x90, virtual false, abstract: false, final false
inline void set_reverbZoneMix(float_t  value) ;

/// @brief Method set_reverbZoneMix_Injected, addr 0x68f5920, size 0x4c, virtual false, abstract: false, final false
static inline void set_reverbZoneMix_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_rolloffFactor, addr 0x68f6c7c, size 0x70, virtual false, abstract: false, final false
inline void set_rolloffFactor(float_t  value) ;

/// @brief Method set_rolloffMode, addr 0x68f6858, size 0x90, virtual false, abstract: false, final false
inline void set_rolloffMode(::UnityEngine::AudioRolloffMode  value) ;

/// @brief Method set_rolloffMode_Injected, addr 0x68f68e8, size 0x44, virtual false, abstract: false, final false
static inline void set_rolloffMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioRolloffMode  value) ;

/// @brief Method set_spatialBlend, addr 0x68f49ac, size 0x90, virtual false, abstract: false, final false
inline void set_spatialBlend(float_t  value) ;

/// @brief Method set_spatialBlend_Injected, addr 0x68f5460, size 0x4c, virtual false, abstract: false, final false
static inline void set_spatialBlend_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_spatialize, addr 0x68f5568, size 0x90, virtual false, abstract: false, final false
inline void set_spatialize(bool  value) ;

/// @brief Method set_spatializePostEffects, addr 0x68f56f8, size 0x90, virtual false, abstract: false, final false
inline void set_spatializePostEffects(bool  value) ;

/// @brief Method set_spatializePostEffects_Injected, addr 0x68f5788, size 0x44, virtual false, abstract: false, final false
static inline void set_spatializePostEffects_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_spatialize_Injected, addr 0x68f55f8, size 0x44, virtual false, abstract: false, final false
static inline void set_spatialize_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_spread, addr 0x68f6070, size 0x90, virtual false, abstract: false, final false
inline void set_spread(float_t  value) ;

/// @brief Method set_spread_Injected, addr 0x68f6100, size 0x4c, virtual false, abstract: false, final false
static inline void set_spread_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_time, addr 0x68f3790, size 0x90, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_timeSamples, addr 0x68f3928, size 0x90, virtual false, abstract: false, final false
inline void set_timeSamples(int32_t  value) ;

/// @brief Method set_timeSamples_Injected, addr 0x68f39b8, size 0x44, virtual false, abstract: false, final false
static inline void set_timeSamples_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_time_Injected, addr 0x68f3820, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_velocityUpdateMode, addr 0x68f5138, size 0x90, virtual false, abstract: false, final false
inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_velocityUpdateMode_Injected, addr 0x68f51c8, size 0x44, virtual false, abstract: false, final false
static inline void set_velocityUpdateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_volume, addr 0x68f35f0, size 0x90, virtual false, abstract: false, final false
inline void set_volume(float_t  value) ;

/// @brief Method set_volume_Injected, addr 0x68f3680, size 0x4c, virtual false, abstract: false, final false
static inline void set_volume_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSource(AudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSource(AudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20598};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSource, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AudioSource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
