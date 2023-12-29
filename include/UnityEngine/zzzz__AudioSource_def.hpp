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
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct FFTWindow;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15617))
// CS Name: ::UnityEngine::AudioSource*
class CORDL_TYPE AudioSource : public ::UnityEngine::AudioBehaviour {
public:
  // Declarations
  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  __declspec(property(get = get_pitch, put = set_pitch)) float_t pitch;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_timeSamples)) int32_t timeSamples;

  __declspec(property(get = get_clip, put = set_clip))::UnityEngine::AudioClip* clip;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(put = set_loop)) bool loop;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(put = set_ignoreListenerPause)) bool ignoreListenerPause;

  __declspec(property(put = set_spatialBlend)) float_t spatialBlend;

  __declspec(property(put = set_reverbZoneMix)) float_t reverbZoneMix;

  __declspec(property(put = set_bypassEffects)) bool bypassEffects;

  __declspec(property(put = set_bypassReverbZones)) bool bypassReverbZones;

  __declspec(property(put = set_dopplerLevel)) float_t dopplerLevel;

  __declspec(property(put = set_spread)) float_t spread;

  __declspec(property(put = set_priority)) int32_t priority;

  __declspec(property(put = set_minDistance)) float_t minDistance;

  /// @brief Method GetPitch addr 0x2b36820 size 0x3c virtual false final false
  static inline float_t GetPitch(::UnityEngine::AudioSource* source);

  /// @brief Method SetPitch addr 0x2b3685c size 0x4c virtual false final false
  static inline void SetPitch(::UnityEngine::AudioSource* source, float_t pitch);

  /// @brief Method PlayHelper addr 0x2b368a8 size 0x44 virtual false final false
  static inline void PlayHelper(::UnityEngine::AudioSource* source, uint64_t delay);

  /// @brief Method Play addr 0x2b368ec size 0x4c virtual false final false
  inline void Play(double_t delay);

  /// @brief Method PlayOneShotHelper addr 0x2b36938 size 0x54 virtual false final false
  static inline void PlayOneShotHelper(::UnityEngine::AudioSource* source, ::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method Stop addr 0x2b3698c size 0x44 virtual false final false
  inline void Stop(bool stopOneShots);

  /// @brief Method GetSpectrumDataHelper addr 0x2b369d0 size 0x5c virtual false final false
  static inline void GetSpectrumDataHelper(::UnityEngine::AudioSource* source, ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method get_volume addr 0x2b36a2c size 0x3c virtual false final false
  inline float_t get_volume();

  /// @brief Method set_volume addr 0x2b36a68 size 0x4c virtual false final false
  inline void set_volume(float_t value);

  /// @brief Method get_pitch addr 0x2b36ab4 size 0x3c virtual false final false
  inline float_t get_pitch();

  /// @brief Method set_pitch addr 0x2b36af0 size 0x4c virtual false final false
  inline void set_pitch(float_t value);

  /// @brief Method get_time addr 0x2b36b3c size 0x3c virtual false final false
  inline float_t get_time();

  /// @brief Method set_time addr 0x2b36b78 size 0x4c virtual false final false
  inline void set_time(float_t value);

  /// @brief Method get_timeSamples addr 0x2b36bc4 size 0x3c virtual false final false
  inline int32_t get_timeSamples();

  /// @brief Method get_clip addr 0x2b36c00 size 0x3c virtual false final false
  inline ::UnityEngine::AudioClip* get_clip();

  /// @brief Method set_clip addr 0x2b36c3c size 0x44 virtual false final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method Play addr 0x2b36c80 size 0x40 virtual false final false
  inline void Play();

  /// @brief Method PlayScheduled addr 0x2b36cc0 size 0x58 virtual false final false
  inline void PlayScheduled(double_t time);

  /// @brief Method PlayOneShot addr 0x2b36d18 size 0x8 virtual false final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip);

  /// @brief Method PlayOneShot addr 0x2b36d20 size 0xfc virtual false final false
  inline void PlayOneShot(::UnityEngine::AudioClip* clip, float_t volumeScale);

  /// @brief Method Stop addr 0x2b36e1c size 0x40 virtual false final false
  inline void Stop();

  /// @brief Method Pause addr 0x2b36e5c size 0x3c virtual false final false
  inline void Pause();

  /// @brief Method UnPause addr 0x2b36e98 size 0x3c virtual false final false
  inline void UnPause();

  /// @brief Method get_isPlaying addr 0x2b36ed4 size 0x3c virtual false final false
  inline bool get_isPlaying();

  /// @brief Method set_loop addr 0x2b36f10 size 0x44 virtual false final false
  inline void set_loop(bool value);

  /// @brief Method get_playOnAwake addr 0x2b36f54 size 0x3c virtual false final false
  inline bool get_playOnAwake();

  /// @brief Method set_playOnAwake addr 0x2b36f90 size 0x44 virtual false final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_ignoreListenerPause addr 0x2b36fd4 size 0x44 virtual false final false
  inline void set_ignoreListenerPause(bool value);

  /// @brief Method set_spatialBlend addr 0x2b37018 size 0x4c virtual false final false
  inline void set_spatialBlend(float_t value);

  /// @brief Method set_reverbZoneMix addr 0x2b37064 size 0x4c virtual false final false
  inline void set_reverbZoneMix(float_t value);

  /// @brief Method set_bypassEffects addr 0x2b370b0 size 0x44 virtual false final false
  inline void set_bypassEffects(bool value);

  /// @brief Method set_bypassReverbZones addr 0x2b370f4 size 0x44 virtual false final false
  inline void set_bypassReverbZones(bool value);

  /// @brief Method set_dopplerLevel addr 0x2b37138 size 0x4c virtual false final false
  inline void set_dopplerLevel(float_t value);

  /// @brief Method set_spread addr 0x2b37184 size 0x4c virtual false final false
  inline void set_spread(float_t value);

  /// @brief Method set_priority addr 0x2b371d0 size 0x44 virtual false final false
  inline void set_priority(int32_t value);

  /// @brief Method set_minDistance addr 0x2b37214 size 0x4c virtual false final false
  inline void set_minDistance(float_t value);

  /// @brief Method GetSpectrumData addr 0x2b37260 size 0x5c virtual false final false
  inline void GetSpectrumData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel, ::UnityEngine::FFTWindow window);

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
