#pragma once
// IWYU pragma private; include "UnityEngine/AudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::UnityEngine::AudioSource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
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

  __declspec(property(get = get_containerActivePlayables)) ::ArrayW<::UnityEngine::ActivePlayable> containerActivePlayables;

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

  /// @brief Method GetAmbisonicDecoderFloat, addr 0x6a4dd1c, size 0x98, virtual false, abstract: false, final false
  inline bool GetAmbisonicDecoderFloat(int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetAmbisonicDecoderFloat_Injected, addr 0x6a4ddb4, size 0x54, virtual false, abstract: false, final false
  static inline bool GetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetAudioRandomContainerRuntimeMeterValue, addr 0x6a4defc, size 0x80, virtual false, abstract: false, final false
  inline float_t GetAudioRandomContainerRuntimeMeterValue();

  /// @brief Method GetAudioRandomContainerRuntimeMeterValue_Injected, addr 0x6a4df7c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAudioRandomContainerRuntimeMeterValue_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetCustomCurve, addr 0x6a4c620, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetCustomCurveHelper, addr 0x6a49e90, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* GetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetCustomCurveHelper_Injected, addr 0x6a49f60, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetOutputData, addr 0x6a4d77c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetOutputData(int32_t numSamples, int32_t channel);

  /// @brief Method GetOutputData, addr 0x6a4d7f4, size 0x4, virtual false, abstract: false, final false
  inline void GetOutputData(::ArrayW<float_t> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper, addr 0x6a49fa4, size 0x190, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper(::UnityEngine::AudioSource* source, ::by_ref<::ArrayW<float_t>> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper_Injected, addr 0x6a4a134, size 0x54, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper_Injected(::System::IntPtr source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel);

  /// @brief Method GetPitch, addr 0x6a4977c, size 0xa4, virtual false, abstract: false, final false
  static inline float_t GetPitch(::UnityEngine::AudioSource* source);

  /// @brief Method GetPitch_Injected, addr 0x6a49820, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetPitch_Injected(::System::IntPtr source);

  /// @brief Method GetSpatializerFloat, addr 0x6a4dc30, size 0x98, virtual false, abstract: false, final false
  inline bool GetSpatializerFloat(int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetSpatializerFloat_Injected, addr 0x6a4dcc8, size 0x54, virtual false, abstract: false, final false
  static inline bool GetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetSpectrumData, addr 0x6a4d7f8, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumData, addr 0x6a4d880, size 0x4, virtual false, abstract: false, final false
  inline void GetSpectrumData(::ArrayW<float_t> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper, addr 0x6a4a188, size 0x1a0, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource* source, ::by_ref<::ArrayW<float_t>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper_Injected, addr 0x6a4a328, size 0x5c, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper_Injected(::System::IntPtr source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  static inline ::UnityEngine::AudioSource* New_ctor();

  /// @brief Method Pause, addr 0x6a4b0cc, size 0x80, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause_Injected, addr 0x6a4b14c, size 0x3c, virtual false, abstract: false, final false
  static inline void Pause_Injected(::System::IntPtr _unity_self);

  /// @brief Method Play, addr 0x6a4add0, size 0x8, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x6a49a54, size 0x90, virtual false, abstract: false, final false
  inline void Play(double_t delay);

  /// @brief Method Play, addr 0x6a4add8, size 0x4, virtual false, abstract: false, final false
  inline void Play(uint64_t delay);

  /// @brief Method PlayClipAtPoint, addr 0x6a4b5f0, size 0x8, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position);

  /// @brief Method PlayClipAtPoint, addr 0x6a4b5f8, size 0x204, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position, float_t volume);

  /// @brief Method PlayDelayed, addr 0x6a4addc, size 0x24, virtual false, abstract: false, final false
  inline void PlayDelayed(float_t delay);

  /// @brief Method PlayHelper, addr 0x6a4995c, size 0xb4, virtual false, abstract: false, final false
  static inline void PlayHelper(::UnityEngine::AudioSource* source, uint64_t delay);

  /// @brief Method PlayHelper_Injected, addr 0x6a49a10, size 0x44, virtual false, abstract: false, final false
  static inline void PlayHelper_Injected(::System::IntPtr source, uint64_t delay);

  /// @brief Method PlayOneShot, addr 0x6a4ae1c, size 0x8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip);

  /// @brief Method PlayOneShot, addr 0x6a4ae24, size 0xe8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method PlayOneShotHelper, addr 0x6a49b30, size 0x120, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method PlayOneShotHelper_Injected, addr 0x6a49c50, size 0x54, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper_Injected(::System::IntPtr source, ::System::IntPtr clip, float_t volumeScale);

  /// @brief Method PlayScheduled, addr 0x6a4ae00, size 0x1c, virtual false, abstract: false, final false
  inline void PlayScheduled(double_t time);

  /// @brief Method Play_Injected, addr 0x6a49ae4, size 0x4c, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self, double_t delay);

  /// @brief Method SetAmbisonicDecoderFloat, addr 0x6a4de08, size 0xa0, virtual false, abstract: false, final false
  inline bool SetAmbisonicDecoderFloat(int32_t index, float_t value);

  /// @brief Method SetAmbisonicDecoderFloat_Injected, addr 0x6a4dea8, size 0x54, virtual false, abstract: false, final false
  static inline bool SetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SetCustomCurve, addr 0x6a4c61c, size 0x4, virtual false, abstract: false, final false
  inline void SetCustomCurve(::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCustomCurveHelper, addr 0x6a49d78, size 0xc4, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCustomCurveHelper_Injected, addr 0x6a49e3c, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type, ::System::IntPtr curve);

  /// @brief Method SetPitch, addr 0x6a4985c, size 0xb4, virtual false, abstract: false, final false
  static inline void SetPitch(::UnityEngine::AudioSource* source, float_t pitch);

  /// @brief Method SetPitch_Injected, addr 0x6a49910, size 0x4c, virtual false, abstract: false, final false
  static inline void SetPitch_Injected(::System::IntPtr source, float_t pitch);

  /// @brief Method SetScheduledEndTime, addr 0x6a4afe8, size 0x90, virtual false, abstract: false, final false
  inline void SetScheduledEndTime(double_t time);

  /// @brief Method SetScheduledEndTime_Injected, addr 0x6a4b078, size 0x4c, virtual false, abstract: false, final false
  static inline void SetScheduledEndTime_Injected(::System::IntPtr _unity_self, double_t time);

  /// @brief Method SetScheduledStartTime, addr 0x6a4af0c, size 0x90, virtual false, abstract: false, final false
  inline void SetScheduledStartTime(double_t time);

  /// @brief Method SetScheduledStartTime_Injected, addr 0x6a4af9c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetScheduledStartTime_Injected(::System::IntPtr _unity_self, double_t time);

  /// @brief Method SetSpatializerFloat, addr 0x6a4db3c, size 0xa0, virtual false, abstract: false, final false
  inline bool SetSpatializerFloat(int32_t index, float_t value);

  /// @brief Method SetSpatializerFloat_Injected, addr 0x6a4dbdc, size 0x54, virtual false, abstract: false, final false
  static inline bool SetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SkipToNextElementIfHasContainer, addr 0x6a4b244, size 0x80, virtual false, abstract: false, final false
  inline void SkipToNextElementIfHasContainer();

  /// @brief Method SkipToNextElementIfHasContainer_Injected, addr 0x6a4b2c4, size 0x3c, virtual false, abstract: false, final false
  static inline void SkipToNextElementIfHasContainer_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x6a4b0c4, size 0x8, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x6a49ca4, size 0x90, virtual false, abstract: false, final false
  inline void Stop(bool stopOneShots);

  /// @brief Method Stop_Injected, addr 0x6a49d34, size 0x44, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self, bool stopOneShots);

  /// @brief Method UnPause, addr 0x6a4b188, size 0x80, virtual false, abstract: false, final false
  inline void UnPause();

  /// @brief Method UnPause_Injected, addr 0x6a4b208, size 0x3c, virtual false, abstract: false, final false
  static inline void UnPause_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x6a4dfb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bypassEffects, addr 0x6a4c7bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassEffects();

  /// @brief Method get_bypassEffects_Injected, addr 0x6a4c83c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bypassListenerEffects, addr 0x6a4c94c, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassListenerEffects();

  /// @brief Method get_bypassListenerEffects_Injected, addr 0x6a4c9cc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassListenerEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bypassReverbZones, addr 0x6a4cadc, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassReverbZones();

  /// @brief Method get_bypassReverbZones_Injected, addr 0x6a4cb5c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassReverbZones_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clip, addr 0x6a4a84c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_clip();

  /// @brief Method get_containerActivePlayables, addr 0x6a4b478, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ActivePlayable> get_containerActivePlayables();

  /// @brief Method get_containerActivePlayables_Injected, addr 0x6a4b4f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ActivePlayable> get_containerActivePlayables_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_dopplerLevel, addr 0x6a4cc6c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_dopplerLevel();

  /// @brief Method get_dopplerLevel_Injected, addr 0x6a4ccec, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_dopplerLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreListenerPause, addr 0x6a4bd3c, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreListenerPause();

  /// @brief Method get_ignoreListenerPause_Injected, addr 0x6a4bdbc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreListenerPause_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreListenerVolume, addr 0x6a4ba1c, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreListenerVolume();

  /// @brief Method get_ignoreListenerVolume_Injected, addr 0x6a4ba9c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreListenerVolume_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isContainerPlaying, addr 0x6a4b3bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_isContainerPlaying();

  /// @brief Method get_isContainerPlaying_Injected, addr 0x6a4b43c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isContainerPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPlaying, addr 0x6a4b300, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPlaying_Injected, addr 0x6a4b380, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isVirtual, addr 0x6a4b534, size 0x80, virtual false, abstract: false, final false
  inline bool get_isVirtual();

  /// @brief Method get_isVirtual_Injected, addr 0x6a4b5b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isVirtual_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loop, addr 0x6a4b88c, size 0x80, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x6a4b90c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDistance, addr 0x6a4d454, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method get_maxDistance_Injected, addr 0x6a4d4d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxVolume, addr 0x6a4d96c, size 0x78, virtual false, abstract: false, final false
  inline float_t get_maxVolume();

  /// @brief Method get_minDistance, addr 0x6a4d2bc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method get_minDistance_Injected, addr 0x6a4d33c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minVolume, addr 0x6a4d884, size 0x78, virtual false, abstract: false, final false
  inline float_t get_minVolume();

  /// @brief Method get_mute, addr 0x6a4d12c, size 0x80, virtual false, abstract: false, final false
  inline bool get_mute();

  /// @brief Method get_mute_Injected, addr 0x6a4d1ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_mute_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_outputAudioMixerGroup, addr 0x6a4ab40, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup();

  /// @brief Method get_outputAudioMixerGroup_Injected, addr 0x6a4ac90, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_panStereo, addr 0x6a4c05c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_panStereo();

  /// @brief Method get_panStereo_Injected, addr 0x6a4c0dc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_panStereo_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitch, addr 0x6a4a51c, size 0x4, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method get_playOnAwake, addr 0x6a4bbac, size 0x80, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playOnAwake_Injected, addr 0x6a4bc2c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playOnAwake_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_priority, addr 0x6a4cf9c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_priority();

  /// @brief Method get_priority_Injected, addr 0x6a4d01c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_priority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_resource, addr 0x6a4a8ac, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioResource> get_resource();

  /// @brief Method get_resource_Injected, addr 0x6a4aac0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_resource_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_reverbZoneMix, addr 0x6a4c624, size 0x80, virtual false, abstract: false, final false
  inline float_t get_reverbZoneMix();

  /// @brief Method get_reverbZoneMix_Injected, addr 0x6a4c6a4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_reverbZoneMix_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rolloffFactor, addr 0x6a4da54, size 0x78, virtual false, abstract: false, final false
  inline float_t get_rolloffFactor();

  /// @brief Method get_rolloffMode, addr 0x6a4d5ec, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioRolloffMode get_rolloffMode();

  /// @brief Method get_rolloffMode_Injected, addr 0x6a4d66c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioRolloffMode get_rolloffMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialBlend, addr 0x6a4c1f4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spatialBlend();

  /// @brief Method get_spatialBlend_Injected, addr 0x6a4c274, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spatialBlend_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialize, addr 0x6a4c2fc, size 0x80, virtual false, abstract: false, final false
  inline bool get_spatialize();

  /// @brief Method get_spatializePostEffects, addr 0x6a4c48c, size 0x80, virtual false, abstract: false, final false
  inline bool get_spatializePostEffects();

  /// @brief Method get_spatializePostEffects_Injected, addr 0x6a4c50c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_spatializePostEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialize_Injected, addr 0x6a4c37c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_spatialize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spread, addr 0x6a4ce04, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spread();

  /// @brief Method get_spread_Injected, addr 0x6a4ce84, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spread_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time, addr 0x6a4a524, size 0x80, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_timeSamples, addr 0x6a4a6bc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_timeSamples();

  /// @brief Method get_timeSamples_Injected, addr 0x6a4a73c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_timeSamples_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time_Injected, addr 0x6a4a5a4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_time_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocityUpdateMode, addr 0x6a4becc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode();

  /// @brief Method get_velocityUpdateMode_Injected, addr 0x6a4bf4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6a4a384, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volume_Injected, addr 0x6a4a404, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bypassEffects, addr 0x6a4c878, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassEffects(bool value);

  /// @brief Method set_bypassEffects_Injected, addr 0x6a4c908, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bypassListenerEffects, addr 0x6a4ca08, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassListenerEffects(bool value);

  /// @brief Method set_bypassListenerEffects_Injected, addr 0x6a4ca98, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassListenerEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bypassReverbZones, addr 0x6a4cb98, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassReverbZones(bool value);

  /// @brief Method set_bypassReverbZones_Injected, addr 0x6a4cc28, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassReverbZones_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_clip, addr 0x6a4a9fc, size 0x4, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method set_dopplerLevel, addr 0x6a4cd28, size 0x90, virtual false, abstract: false, final false
  inline void set_dopplerLevel(float_t value);

  /// @brief Method set_dopplerLevel_Injected, addr 0x6a4cdb8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_dopplerLevel_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_ignoreListenerPause, addr 0x6a4bdf8, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreListenerPause(bool value);

  /// @brief Method set_ignoreListenerPause_Injected, addr 0x6a4be88, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreListenerPause_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_ignoreListenerVolume, addr 0x6a4bad8, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreListenerVolume(bool value);

  /// @brief Method set_ignoreListenerVolume_Injected, addr 0x6a4bb68, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreListenerVolume_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loop, addr 0x6a4b948, size 0x90, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x6a4b9d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maxDistance, addr 0x6a4d510, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method set_maxDistance_Injected, addr 0x6a4d5a0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxVolume, addr 0x6a4d9e4, size 0x70, virtual false, abstract: false, final false
  inline void set_maxVolume(float_t value);

  /// @brief Method set_minDistance, addr 0x6a4d378, size 0x90, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_minDistance_Injected, addr 0x6a4d408, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_minVolume, addr 0x6a4d8fc, size 0x70, virtual false, abstract: false, final false
  inline void set_minVolume(float_t value);

  /// @brief Method set_mute, addr 0x6a4d1e8, size 0x90, virtual false, abstract: false, final false
  inline void set_mute(bool value);

  /// @brief Method set_mute_Injected, addr 0x6a4d278, size 0x44, virtual false, abstract: false, final false
  static inline void set_mute_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_outputAudioMixerGroup, addr 0x6a4accc, size 0xc0, virtual false, abstract: false, final false
  inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value);

  /// @brief Method set_outputAudioMixerGroup_Injected, addr 0x6a4ad8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_panStereo, addr 0x6a4c118, size 0x90, virtual false, abstract: false, final false
  inline void set_panStereo(float_t value);

  /// @brief Method set_panStereo_Injected, addr 0x6a4c1a8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_panStereo_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_pitch, addr 0x6a4a520, size 0x4, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_playOnAwake, addr 0x6a4bc68, size 0x90, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playOnAwake_Injected, addr 0x6a4bcf8, size 0x44, virtual false, abstract: false, final false
  static inline void set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_priority, addr 0x6a4d058, size 0x90, virtual false, abstract: false, final false
  inline void set_priority(int32_t value);

  /// @brief Method set_priority_Injected, addr 0x6a4d0e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_priority_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_resource, addr 0x6a4aa00, size 0xc0, virtual false, abstract: false, final false
  inline void set_resource(::UnityEngine::Audio::AudioResource* value);

  /// @brief Method set_resource_Injected, addr 0x6a4aafc, size 0x44, virtual false, abstract: false, final false
  static inline void set_resource_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_reverbZoneMix, addr 0x6a4c6e0, size 0x90, virtual false, abstract: false, final false
  inline void set_reverbZoneMix(float_t value);

  /// @brief Method set_reverbZoneMix_Injected, addr 0x6a4c770, size 0x4c, virtual false, abstract: false, final false
  static inline void set_reverbZoneMix_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_rolloffFactor, addr 0x6a4dacc, size 0x70, virtual false, abstract: false, final false
  inline void set_rolloffFactor(float_t value);

  /// @brief Method set_rolloffMode, addr 0x6a4d6a8, size 0x90, virtual false, abstract: false, final false
  inline void set_rolloffMode(::UnityEngine::AudioRolloffMode value);

  /// @brief Method set_rolloffMode_Injected, addr 0x6a4d738, size 0x44, virtual false, abstract: false, final false
  static inline void set_rolloffMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioRolloffMode value);

  /// @brief Method set_spatialBlend, addr 0x6a4b7fc, size 0x90, virtual false, abstract: false, final false
  inline void set_spatialBlend(float_t value);

  /// @brief Method set_spatialBlend_Injected, addr 0x6a4c2b0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spatialBlend_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_spatialize, addr 0x6a4c3b8, size 0x90, virtual false, abstract: false, final false
  inline void set_spatialize(bool value);

  /// @brief Method set_spatializePostEffects, addr 0x6a4c548, size 0x90, virtual false, abstract: false, final false
  inline void set_spatializePostEffects(bool value);

  /// @brief Method set_spatializePostEffects_Injected, addr 0x6a4c5d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_spatializePostEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_spatialize_Injected, addr 0x6a4c448, size 0x44, virtual false, abstract: false, final false
  static inline void set_spatialize_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_spread, addr 0x6a4cec0, size 0x90, virtual false, abstract: false, final false
  inline void set_spread(float_t value);

  /// @brief Method set_spread_Injected, addr 0x6a4cf50, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spread_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_time, addr 0x6a4a5e0, size 0x90, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_timeSamples, addr 0x6a4a778, size 0x90, virtual false, abstract: false, final false
  inline void set_timeSamples(int32_t value);

  /// @brief Method set_timeSamples_Injected, addr 0x6a4a808, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeSamples_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_time_Injected, addr 0x6a4a670, size 0x4c, virtual false, abstract: false, final false
  static inline void set_time_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_velocityUpdateMode, addr 0x6a4bf88, size 0x90, virtual false, abstract: false, final false
  inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_velocityUpdateMode_Injected, addr 0x6a4c018, size 0x44, virtual false, abstract: false, final false
  static inline void set_velocityUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_volume, addr 0x6a4a440, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volume_Injected, addr 0x6a4a4d0, size 0x4c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioSource) == 0x18, "Size mismatch!");

} // namespace UnityEngine
