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
namespace UnityEngine::Audio {
class IAudioGenerator;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
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
class Object;
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
// [StaticAccessor("AudioSourceBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [RequireComponent(typeof(UnityEngine.Transform))]
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

  __declspec(property(get = get_generator, put = set_generator)) ::UnityEngine::Audio::IAudioGenerator* generator;

  /// @brief [Obsolete("AudioSource.generatorDefinition has been deprecated. Use AudioSource.generator instead. (UnityUpgradable) -> generator", true)]
  __declspec(property(get = get_generatorDefinition, put = set_generatorDefinition)) ::UnityEngine::Audio::IAudioGenerator* generatorDefinition;

  /// @brief [Obsolete("AudioSource.generatorHandle has been deprecated. Use AudioSource.generatorInstance instead. (UnityUpgradable) -> generatorInstance", true)]
  __declspec(property(get = get_generatorHandle)) ::UnityEngine::Audio::ProcessorInstance generatorHandle;

  __declspec(property(get = get_generatorHeader)) void* generatorHeader;

  __declspec(property(get = get_generatorInstance)) ::UnityEngine::Audio::ProcessorInstance generatorInstance;

  __declspec(property(get = get_generatorObject, put = set_generatorObject)) ::UnityW<::UnityEngine::Object> generatorObject;

  __declspec(property(get = get_ignoreListenerPause, put = set_ignoreListenerPause)) bool ignoreListenerPause;

  __declspec(property(get = get_ignoreListenerVolume, put = set_ignoreListenerVolume)) bool ignoreListenerVolume;

  __declspec(property(get = get_isContainerPlaying)) bool isContainerPlaying;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isVirtual)) bool isVirtual;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  /// @brief [Obsolete("maxVolume is not supported anymore. Use min-, maxDistance and rolloffMode instead.", true)]
  __declspec(property(get = get_maxVolume, put = set_maxVolume)) float_t maxVolume;

  __declspec(property(get = get_minDistance, put = set_minDistance)) float_t minDistance;

  /// @brief [Obsolete("minVolume is not supported anymore. Use min-, maxDistance and rolloffMode instead.", true)]
  __declspec(property(get = get_minVolume, put = set_minVolume)) float_t minVolume;

  __declspec(property(get = get_mute, put = set_mute)) bool mute;

  __declspec(property(get = get_outputAudioMixerGroup, put = set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup> outputAudioMixerGroup;

  /// @brief [NativeProperty("StereoPan")]
  __declspec(property(get = get_panStereo, put = set_panStereo)) float_t panStereo;

  __declspec(property(get = get_pitch, put = set_pitch)) float_t pitch;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_priority, put = set_priority)) int32_t priority;

  __declspec(property(get = get_resource, put = set_resource)) ::UnityW<::UnityEngine::Audio::AudioResource> resource;

  __declspec(property(get = get_reverbZoneMix, put = set_reverbZoneMix)) float_t reverbZoneMix;

  /// @brief [Obsolete("rolloffFactor is not supported anymore. Use min-, maxDistance and rolloffMode instead.", true)]
  __declspec(property(get = get_rolloffFactor, put = set_rolloffFactor)) float_t rolloffFactor;

  __declspec(property(get = get_rolloffMode, put = set_rolloffMode)) ::UnityEngine::AudioRolloffMode rolloffMode;

  /// @brief [NativeProperty("SpatialBlendMix")]
  __declspec(property(get = get_spatialBlend, put = set_spatialBlend)) float_t spatialBlend;

  __declspec(property(get = get_spatialize, put = set_spatialize)) bool spatialize;

  __declspec(property(get = get_spatializePostEffects, put = set_spatializePostEffects)) bool spatializePostEffects;

  __declspec(property(get = get_spread, put = set_spread)) float_t spread;

  /// @brief [NativeProperty("SecPosition")]
  __declspec(property(get = get_time, put = set_time)) float_t time;

  /// @brief [NativeProperty("SamplePosition")]
  __declspec(property(get = get_timeSamples, put = set_timeSamples)) int32_t timeSamples;

  __declspec(property(get = get_velocityUpdateMode, put = set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode velocityUpdateMode;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  /// @brief Method GetAmbisonicDecoderFloat, addr 0x6ea230c, size 0x98, virtual false, abstract: false, final false
  inline bool GetAmbisonicDecoderFloat(int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetAmbisonicDecoderFloat_Injected, addr 0x6ea23a4, size 0x54, virtual false, abstract: false, final false
  static inline bool GetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetAudioRandomContainerRuntimeMeterValue, addr 0x6ea24ec, size 0x80, virtual false, abstract: false, final false
  inline float_t GetAudioRandomContainerRuntimeMeterValue();

  /// @brief Method GetAudioRandomContainerRuntimeMeterValue_Injected, addr 0x6ea256c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAudioRandomContainerRuntimeMeterValue_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetCustomCurve, addr 0x6ea0c10, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetCustomCurveHelper, addr 0x6e9e1f4, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* GetCustomCurveHelper(/* [NotNull] */ ::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type);

  /// @brief Method GetCustomCurveHelper_Injected, addr 0x6e9e2c4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type);

  /// [Obsolete("GetOutputData returning a float[] is deprecated, use GetOutputData and pass a pre allocated array instead.")]
  /// @brief Method GetOutputData, addr 0x6ea1d6c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetOutputData(int32_t numSamples, int32_t channel);

  /// @brief Method GetOutputData, addr 0x6ea1de4, size 0x4, virtual false, abstract: false, final false
  inline void GetOutputData(::ArrayW<float_t> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper, addr 0x6e9e308, size 0x190, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper(/* [NotNull] */ ::UnityEngine::AudioSource* source, ::by_ref<::ArrayW<float_t>> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper_Injected, addr 0x6e9e498, size 0x54, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper_Injected(::System::IntPtr source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel);

  /// @brief Method GetPitch, addr 0x6e9dae0, size 0xa4, virtual false, abstract: false, final false
  static inline float_t GetPitch(/* [NotNull] */ ::UnityEngine::AudioSource* source);

  /// @brief Method GetPitch_Injected, addr 0x6e9db84, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetPitch_Injected(::System::IntPtr source);

  /// @brief Method GetSpatializerFloat, addr 0x6ea2220, size 0x98, virtual false, abstract: false, final false
  inline bool GetSpatializerFloat(int32_t index, ::by_ref<float_t> value);

  /// @brief Method GetSpatializerFloat_Injected, addr 0x6ea22b8, size 0x54, virtual false, abstract: false, final false
  static inline bool GetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<float_t> value);

  /// [Obsolete("GetSpectrumData returning a float[] is deprecated, use GetSpectrumData and pass a pre allocated array instead.")]
  /// @brief Method GetSpectrumData, addr 0x6ea1de8, size 0x88, virtual false, abstract: false, final false
  inline ::ArrayW<float_t> GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumData, addr 0x6ea1e70, size 0x4, virtual false, abstract: false, final false
  inline void GetSpectrumData(::ArrayW<float_t> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// [NativeThrows]
  /// @brief Method GetSpectrumDataHelper, addr 0x6e9e4ec, size 0x1a0, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper(/* [NotNull] */ ::UnityEngine::AudioSource* source, ::by_ref<::ArrayW<float_t>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper_Injected, addr 0x6e9e68c, size 0x5c, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper_Injected(::System::IntPtr source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  static inline ::UnityEngine::AudioSource* New_ctor();

  /// @brief Method Pause, addr 0x6e9f6bc, size 0x80, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause_Injected, addr 0x6e9f73c, size 0x3c, virtual false, abstract: false, final false
  static inline void Pause_Injected(::System::IntPtr _unity_self);

  /// [ExcludeFromDocs]
  /// @brief Method Play, addr 0x6e9f3c0, size 0x8, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x6e9ddb8, size 0x90, virtual false, abstract: false, final false
  inline void Play(double_t delay);

  /// @brief Method Play, addr 0x6e9f3c8, size 0x4, virtual false, abstract: false, final false
  inline void Play(/* [DefaultValue("0")] */ uint64_t delay);

  /// [ExcludeFromDocs]
  /// @brief Method PlayClipAtPoint, addr 0x6e9fbe0, size 0x8, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position);

  /// @brief Method PlayClipAtPoint, addr 0x6e9fbe8, size 0x204, virtual false, abstract: false, final false
  static inline void PlayClipAtPoint(::UnityEngine::AudioClip* clip, ::UnityEngine::Vector3 position, /* [DefaultValue("1.0F")] */ float_t volume);

  /// @brief Method PlayDelayed, addr 0x6e9f3cc, size 0x24, virtual false, abstract: false, final false
  inline void PlayDelayed(float_t delay);

  /// @brief Method PlayHelper, addr 0x6e9dcc0, size 0xb4, virtual false, abstract: false, final false
  static inline void PlayHelper(/* [NotNull] */ ::UnityEngine::AudioSource* source, uint64_t delay);

  /// @brief Method PlayHelper_Injected, addr 0x6e9dd74, size 0x44, virtual false, abstract: false, final false
  static inline void PlayHelper_Injected(::System::IntPtr source, uint64_t delay);

  /// [ExcludeFromDocs]
  /// @brief Method PlayOneShot, addr 0x6e9f40c, size 0x8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip);

  /// @brief Method PlayOneShot, addr 0x6e9f414, size 0xe8, virtual false, abstract: false, final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip, /* [DefaultValue("1.0F")] */ float_t volumeScale);

  /// @brief Method PlayOneShotHelper, addr 0x6e9de94, size 0x120, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper(/* [NotNull] */ ::UnityEngine::AudioSource* source, /* [NotNull] */ ::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method PlayOneShotHelper_Injected, addr 0x6e9dfb4, size 0x54, virtual false, abstract: false, final false
  static inline void PlayOneShotHelper_Injected(::System::IntPtr source, ::System::IntPtr clip, float_t volumeScale);

  /// @brief Method PlayScheduled, addr 0x6e9f3f0, size 0x1c, virtual false, abstract: false, final false
  inline void PlayScheduled(double_t time);

  /// @brief Method Play_Injected, addr 0x6e9de48, size 0x4c, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self, double_t delay);

  /// @brief Method SetAmbisonicDecoderFloat, addr 0x6ea23f8, size 0xa0, virtual false, abstract: false, final false
  inline bool SetAmbisonicDecoderFloat(int32_t index, float_t value);

  /// @brief Method SetAmbisonicDecoderFloat_Injected, addr 0x6ea2498, size 0x54, virtual false, abstract: false, final false
  static inline bool SetAmbisonicDecoderFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SetCustomCurve, addr 0x6ea0c0c, size 0x4, virtual false, abstract: false, final false
  inline void SetCustomCurve(::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// [NativeThrows]
  /// @brief Method SetCustomCurveHelper, addr 0x6e9e0dc, size 0xc4, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper(/* [NotNull] */ ::UnityEngine::AudioSource* source, ::UnityEngine::AudioSourceCurveType type, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCustomCurveHelper_Injected, addr 0x6e9e1a0, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomCurveHelper_Injected(::System::IntPtr source, ::UnityEngine::AudioSourceCurveType type, ::System::IntPtr curve);

  /// @brief Method SetPitch, addr 0x6e9dbc0, size 0xb4, virtual false, abstract: false, final false
  static inline void SetPitch(/* [NotNull] */ ::UnityEngine::AudioSource* source, float_t pitch);

  /// @brief Method SetPitch_Injected, addr 0x6e9dc74, size 0x4c, virtual false, abstract: false, final false
  static inline void SetPitch_Injected(::System::IntPtr source, float_t pitch);

  /// @brief Method SetScheduledEndTime, addr 0x6e9f5d8, size 0x90, virtual false, abstract: false, final false
  inline void SetScheduledEndTime(double_t time);

  /// @brief Method SetScheduledEndTime_Injected, addr 0x6e9f668, size 0x4c, virtual false, abstract: false, final false
  static inline void SetScheduledEndTime_Injected(::System::IntPtr _unity_self, double_t time);

  /// @brief Method SetScheduledStartTime, addr 0x6e9f4fc, size 0x90, virtual false, abstract: false, final false
  inline void SetScheduledStartTime(double_t time);

  /// @brief Method SetScheduledStartTime_Injected, addr 0x6e9f58c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetScheduledStartTime_Injected(::System::IntPtr _unity_self, double_t time);

  /// @brief Method SetSpatializerFloat, addr 0x6ea212c, size 0xa0, virtual false, abstract: false, final false
  inline bool SetSpatializerFloat(int32_t index, float_t value);

  /// @brief Method SetSpatializerFloat_Injected, addr 0x6ea21cc, size 0x54, virtual false, abstract: false, final false
  static inline bool SetSpatializerFloat_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SkipToNextElementIfHasContainer, addr 0x6e9f834, size 0x80, virtual false, abstract: false, final false
  inline void SkipToNextElementIfHasContainer();

  /// @brief Method SkipToNextElementIfHasContainer_Injected, addr 0x6e9f8b4, size 0x3c, virtual false, abstract: false, final false
  static inline void SkipToNextElementIfHasContainer_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x6e9f6b4, size 0x8, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop, addr 0x6e9e008, size 0x90, virtual false, abstract: false, final false
  inline void Stop(bool stopOneShots);

  /// @brief Method Stop_Injected, addr 0x6e9e098, size 0x44, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self, bool stopOneShots);

  /// @brief Method UnPause, addr 0x6e9f778, size 0x80, virtual false, abstract: false, final false
  inline void UnPause();

  /// @brief Method UnPause_Injected, addr 0x6e9f7f8, size 0x3c, virtual false, abstract: false, final false
  static inline void UnPause_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x6ea2650, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bypassEffects, addr 0x6ea0dac, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassEffects();

  /// @brief Method get_bypassEffects_Injected, addr 0x6ea0e2c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bypassListenerEffects, addr 0x6ea0f3c, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassListenerEffects();

  /// @brief Method get_bypassListenerEffects_Injected, addr 0x6ea0fbc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassListenerEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bypassReverbZones, addr 0x6ea10cc, size 0x80, virtual false, abstract: false, final false
  inline bool get_bypassReverbZones();

  /// @brief Method get_bypassReverbZones_Injected, addr 0x6ea114c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bypassReverbZones_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clip, addr 0x6e9ebb0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_clip();

  /// @brief Method get_containerActivePlayables, addr 0x6e9fa68, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ActivePlayable> get_containerActivePlayables();

  /// @brief Method get_containerActivePlayables_Injected, addr 0x6e9fae8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::ActivePlayable> get_containerActivePlayables_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_dopplerLevel, addr 0x6ea125c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_dopplerLevel();

  /// @brief Method get_dopplerLevel_Injected, addr 0x6ea12dc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_dopplerLevel_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_generator, addr 0x6e9eeac, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::IAudioGenerator* get_generator();

  /// @brief Method get_generatorDefinition, addr 0x6ea25a8, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::IAudioGenerator* get_generatorDefinition();

  /// @brief Method get_generatorHandle, addr 0x6ea2618, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance get_generatorHandle();

  /// @brief Method get_generatorHeader, addr 0x6e9efd8, size 0x80, virtual false, abstract: false, final false
  inline void* get_generatorHeader();

  /// @brief Method get_generatorHeader_Injected, addr 0x6e9f074, size 0x3c, virtual false, abstract: false, final false
  static inline void* get_generatorHeader_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_generatorInstance, addr 0x6e9efac, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::ProcessorInstance get_generatorInstance();

  /// @brief Method get_generatorObject, addr 0x6e9ec10, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_generatorObject();

  /// @brief Method get_generatorObject_Injected, addr 0x6e9f0b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_generatorObject_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreListenerPause, addr 0x6ea032c, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreListenerPause();

  /// @brief Method get_ignoreListenerPause_Injected, addr 0x6ea03ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreListenerPause_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_ignoreListenerVolume, addr 0x6ea000c, size 0x80, virtual false, abstract: false, final false
  inline bool get_ignoreListenerVolume();

  /// @brief Method get_ignoreListenerVolume_Injected, addr 0x6ea008c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ignoreListenerVolume_Injected(::System::IntPtr _unity_self);

  /// [NativeName("IsContainerPlaying")]
  /// @brief Method get_isContainerPlaying, addr 0x6e9f9ac, size 0x80, virtual false, abstract: false, final false
  inline bool get_isContainerPlaying();

  /// @brief Method get_isContainerPlaying_Injected, addr 0x6e9fa2c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isContainerPlaying_Injected(::System::IntPtr _unity_self);

  /// [NativeName("IsPlayingScripting")]
  /// @brief Method get_isPlaying, addr 0x6e9f8f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPlaying_Injected, addr 0x6e9f970, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPlaying_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetLastVirtualState")]
  /// @brief Method get_isVirtual, addr 0x6e9fb24, size 0x80, virtual false, abstract: false, final false
  inline bool get_isVirtual();

  /// @brief Method get_isVirtual_Injected, addr 0x6e9fba4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isVirtual_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loop, addr 0x6e9fe7c, size 0x80, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x6e9fefc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDistance, addr 0x6ea1a44, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method get_maxDistance_Injected, addr 0x6ea1ac4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxVolume, addr 0x6ea1f5c, size 0x78, virtual false, abstract: false, final false
  inline float_t get_maxVolume();

  /// @brief Method get_minDistance, addr 0x6ea18ac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method get_minDistance_Injected, addr 0x6ea192c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minVolume, addr 0x6ea1e74, size 0x78, virtual false, abstract: false, final false
  inline float_t get_minVolume();

  /// @brief Method get_mute, addr 0x6ea171c, size 0x80, virtual false, abstract: false, final false
  inline bool get_mute();

  /// @brief Method get_mute_Injected, addr 0x6ea179c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_mute_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_outputAudioMixerGroup, addr 0x6e9f130, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup();

  /// @brief Method get_outputAudioMixerGroup_Injected, addr 0x6e9f280, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_panStereo, addr 0x6ea064c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_panStereo();

  /// @brief Method get_panStereo_Injected, addr 0x6ea06cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_panStereo_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitch, addr 0x6e9e880, size 0x4, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method get_playOnAwake, addr 0x6ea019c, size 0x80, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playOnAwake_Injected, addr 0x6ea021c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playOnAwake_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_priority, addr 0x6ea158c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_priority();

  /// @brief Method get_priority_Injected, addr 0x6ea160c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_priority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_resource, addr 0x6e9ee24, size 0x84, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioResource> get_resource();

  /// @brief Method get_reverbZoneMix, addr 0x6ea0c14, size 0x80, virtual false, abstract: false, final false
  inline float_t get_reverbZoneMix();

  /// @brief Method get_reverbZoneMix_Injected, addr 0x6ea0c94, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_reverbZoneMix_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rolloffFactor, addr 0x6ea2044, size 0x78, virtual false, abstract: false, final false
  inline float_t get_rolloffFactor();

  /// @brief Method get_rolloffMode, addr 0x6ea1bdc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioRolloffMode get_rolloffMode();

  /// @brief Method get_rolloffMode_Injected, addr 0x6ea1c5c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioRolloffMode get_rolloffMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialBlend, addr 0x6ea07e4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spatialBlend();

  /// @brief Method get_spatialBlend_Injected, addr 0x6ea0864, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spatialBlend_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialize, addr 0x6ea08ec, size 0x80, virtual false, abstract: false, final false
  inline bool get_spatialize();

  /// @brief Method get_spatializePostEffects, addr 0x6ea0a7c, size 0x80, virtual false, abstract: false, final false
  inline bool get_spatializePostEffects();

  /// @brief Method get_spatializePostEffects_Injected, addr 0x6ea0afc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_spatializePostEffects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spatialize_Injected, addr 0x6ea096c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_spatialize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spread, addr 0x6ea13f4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spread();

  /// @brief Method get_spread_Injected, addr 0x6ea1474, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spread_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time, addr 0x6e9e888, size 0x80, virtual false, abstract: false, final false
  inline float_t get_time();

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method get_timeSamples, addr 0x6e9ea20, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_timeSamples();

  /// @brief Method get_timeSamples_Injected, addr 0x6e9eaa0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_timeSamples_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time_Injected, addr 0x6e9e908, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_time_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocityUpdateMode, addr 0x6ea04bc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode();

  /// @brief Method get_velocityUpdateMode_Injected, addr 0x6ea053c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6e9e6e8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volume_Injected, addr 0x6e9e768, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bypassEffects, addr 0x6ea0e68, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassEffects(bool value);

  /// @brief Method set_bypassEffects_Injected, addr 0x6ea0ef8, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bypassListenerEffects, addr 0x6ea0ff8, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassListenerEffects(bool value);

  /// @brief Method set_bypassListenerEffects_Injected, addr 0x6ea1088, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassListenerEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bypassReverbZones, addr 0x6ea1188, size 0x90, virtual false, abstract: false, final false
  inline void set_bypassReverbZones(bool value);

  /// @brief Method set_bypassReverbZones_Injected, addr 0x6ea1218, size 0x44, virtual false, abstract: false, final false
  static inline void set_bypassReverbZones_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_clip, addr 0x6e9ed60, size 0x4, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method set_dopplerLevel, addr 0x6ea1318, size 0x90, virtual false, abstract: false, final false
  inline void set_dopplerLevel(float_t value);

  /// @brief Method set_dopplerLevel_Injected, addr 0x6ea13a8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_dopplerLevel_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_generator, addr 0x6e9ef1c, size 0x90, virtual false, abstract: false, final false
  inline void set_generator(::UnityEngine::Audio::IAudioGenerator* value);

  /// @brief Method set_generatorDefinition, addr 0x6ea25e0, size 0x38, virtual false, abstract: false, final false
  inline void set_generatorDefinition(::UnityEngine::Audio::IAudioGenerator* value);

  /// @brief Method set_generatorObject, addr 0x6e9ed64, size 0xc0, virtual false, abstract: false, final false
  inline void set_generatorObject(::UnityEngine::Object* value);

  /// @brief Method set_generatorObject_Injected, addr 0x6e9f0ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_generatorObject_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_ignoreListenerPause, addr 0x6ea03e8, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreListenerPause(bool value);

  /// @brief Method set_ignoreListenerPause_Injected, addr 0x6ea0478, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreListenerPause_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_ignoreListenerVolume, addr 0x6ea00c8, size 0x90, virtual false, abstract: false, final false
  inline void set_ignoreListenerVolume(bool value);

  /// @brief Method set_ignoreListenerVolume_Injected, addr 0x6ea0158, size 0x44, virtual false, abstract: false, final false
  static inline void set_ignoreListenerVolume_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loop, addr 0x6e9ff38, size 0x90, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x6e9ffc8, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maxDistance, addr 0x6ea1b00, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method set_maxDistance_Injected, addr 0x6ea1b90, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxVolume, addr 0x6ea1fd4, size 0x70, virtual false, abstract: false, final false
  inline void set_maxVolume(float_t value);

  /// @brief Method set_minDistance, addr 0x6ea1968, size 0x90, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_minDistance_Injected, addr 0x6ea19f8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_minVolume, addr 0x6ea1eec, size 0x70, virtual false, abstract: false, final false
  inline void set_minVolume(float_t value);

  /// @brief Method set_mute, addr 0x6ea17d8, size 0x90, virtual false, abstract: false, final false
  inline void set_mute(bool value);

  /// @brief Method set_mute_Injected, addr 0x6ea1868, size 0x44, virtual false, abstract: false, final false
  static inline void set_mute_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_outputAudioMixerGroup, addr 0x6e9f2bc, size 0xc0, virtual false, abstract: false, final false
  inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value);

  /// @brief Method set_outputAudioMixerGroup_Injected, addr 0x6e9f37c, size 0x44, virtual false, abstract: false, final false
  static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_panStereo, addr 0x6ea0708, size 0x90, virtual false, abstract: false, final false
  inline void set_panStereo(float_t value);

  /// @brief Method set_panStereo_Injected, addr 0x6ea0798, size 0x4c, virtual false, abstract: false, final false
  static inline void set_panStereo_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_pitch, addr 0x6e9e884, size 0x4, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_playOnAwake, addr 0x6ea0258, size 0x90, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playOnAwake_Injected, addr 0x6ea02e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_priority, addr 0x6ea1648, size 0x90, virtual false, abstract: false, final false
  inline void set_priority(int32_t value);

  /// @brief Method set_priority_Injected, addr 0x6ea16d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_priority_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_resource, addr 0x6e9eea8, size 0x4, virtual false, abstract: false, final false
  inline void set_resource(::UnityEngine::Audio::AudioResource* value);

  /// @brief Method set_reverbZoneMix, addr 0x6ea0cd0, size 0x90, virtual false, abstract: false, final false
  inline void set_reverbZoneMix(float_t value);

  /// @brief Method set_reverbZoneMix_Injected, addr 0x6ea0d60, size 0x4c, virtual false, abstract: false, final false
  static inline void set_reverbZoneMix_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_rolloffFactor, addr 0x6ea20bc, size 0x70, virtual false, abstract: false, final false
  inline void set_rolloffFactor(float_t value);

  /// @brief Method set_rolloffMode, addr 0x6ea1c98, size 0x90, virtual false, abstract: false, final false
  inline void set_rolloffMode(::UnityEngine::AudioRolloffMode value);

  /// @brief Method set_rolloffMode_Injected, addr 0x6ea1d28, size 0x44, virtual false, abstract: false, final false
  static inline void set_rolloffMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioRolloffMode value);

  /// @brief Method set_spatialBlend, addr 0x6e9fdec, size 0x90, virtual false, abstract: false, final false
  inline void set_spatialBlend(float_t value);

  /// @brief Method set_spatialBlend_Injected, addr 0x6ea08a0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spatialBlend_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_spatialize, addr 0x6ea09a8, size 0x90, virtual false, abstract: false, final false
  inline void set_spatialize(bool value);

  /// @brief Method set_spatializePostEffects, addr 0x6ea0b38, size 0x90, virtual false, abstract: false, final false
  inline void set_spatializePostEffects(bool value);

  /// @brief Method set_spatializePostEffects_Injected, addr 0x6ea0bc8, size 0x44, virtual false, abstract: false, final false
  static inline void set_spatializePostEffects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_spatialize_Injected, addr 0x6ea0a38, size 0x44, virtual false, abstract: false, final false
  static inline void set_spatialize_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_spread, addr 0x6ea14b0, size 0x90, virtual false, abstract: false, final false
  inline void set_spread(float_t value);

  /// @brief Method set_spread_Injected, addr 0x6ea1540, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spread_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_time, addr 0x6e9e944, size 0x90, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// [NativeMethod(IsThreadSafe = true)]
  /// @brief Method set_timeSamples, addr 0x6e9eadc, size 0x90, virtual false, abstract: false, final false
  inline void set_timeSamples(int32_t value);

  /// @brief Method set_timeSamples_Injected, addr 0x6e9eb6c, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeSamples_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_time_Injected, addr 0x6e9e9d4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_time_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_velocityUpdateMode, addr 0x6ea0578, size 0x90, virtual false, abstract: false, final false
  inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_velocityUpdateMode_Injected, addr 0x6ea0608, size 0x44, virtual false, abstract: false, final false
  static inline void set_velocityUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_volume, addr 0x6e9e7a4, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volume_Injected, addr 0x6e9e834, size 0x4c, virtual false, abstract: false, final false
  static inline void set_volume_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSource(AudioSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSource(AudioSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20311 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioSource) == 0x18, "Size mismatch!");

} // namespace UnityEngine
