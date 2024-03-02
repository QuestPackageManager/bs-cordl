#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReverbZone)
namespace UnityEngine {
struct AudioReverbPreset;
}
// Forward declare root types
namespace UnityEngine {
class AudioReverbZone;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioReverbZone);
// Type: UnityEngine::AudioReverbZone
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AudioReverbZone*
class CORDL_TYPE AudioReverbZone : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_HFReference, put = set_HFReference)) float_t HFReference;

  __declspec(property(get = get_LFReference, put = set_LFReference)) float_t LFReference;

  __declspec(property(get = get_decayHFRatio, put = set_decayHFRatio)) float_t decayHFRatio;

  __declspec(property(get = get_decayTime, put = set_decayTime)) float_t decayTime;

  __declspec(property(get = get_density, put = set_density)) float_t density;

  __declspec(property(get = get_diffusion, put = set_diffusion)) float_t diffusion;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  __declspec(property(get = get_minDistance, put = set_minDistance)) float_t minDistance;

  __declspec(property(get = get_reflections, put = set_reflections)) int32_t reflections;

  __declspec(property(get = get_reflectionsDelay, put = set_reflectionsDelay)) float_t reflectionsDelay;

  __declspec(property(get = get_reverb, put = set_reverb)) int32_t reverb;

  __declspec(property(get = get_reverbDelay, put = set_reverbDelay)) float_t reverbDelay;

  __declspec(property(get = get_reverbPreset, put = set_reverbPreset))::UnityEngine::AudioReverbPreset reverbPreset;

  __declspec(property(get = get_room, put = set_room)) int32_t room;

  __declspec(property(get = get_roomHF, put = set_roomHF)) int32_t roomHF;

  __declspec(property(get = get_roomLF, put = set_roomLF)) int32_t roomLF;

  __declspec(property(get = get_roomRolloffFactor, put = set_roomRolloffFactor)) float_t roomRolloffFactor;

  static inline ::UnityEngine::AudioReverbZone* New_ctor();

  /// @brief Method .ctor, addr 0x2d85adc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HFReference, addr 0x2d857e4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_HFReference();

  /// @brief Method get_LFReference, addr 0x2d8586c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_LFReference();

  /// @brief Method get_decayHFRatio, addr 0x2d8554c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_decayHFRatio();

  /// @brief Method get_decayTime, addr 0x2d854c4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_decayTime();

  /// @brief Method get_density, addr 0x2d85a54, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_density();

  /// @brief Method get_diffusion, addr 0x2d859cc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_diffusion();

  /// @brief Method get_maxDistance, addr 0x2d8523c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  /// @brief Method get_minDistance, addr 0x2d851b4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_minDistance();

  /// @brief Method get_reflections, addr 0x2d855d4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_reflections();

  /// @brief Method get_reflectionsDelay, addr 0x2d85654, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_reflectionsDelay();

  /// @brief Method get_reverb, addr 0x2d856dc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_reverb();

  /// @brief Method get_reverbDelay, addr 0x2d8575c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_reverbDelay();

  /// @brief Method get_reverbPreset, addr 0x2d852c4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioReverbPreset get_reverbPreset();

  /// @brief Method get_room, addr 0x2d85344, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_room();

  /// @brief Method get_roomHF, addr 0x2d853c4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_roomHF();

  /// @brief Method get_roomLF, addr 0x2d85444, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_roomLF();

  /// @brief Method get_roomRolloffFactor, addr 0x2d858f4, size 0x70, virtual false, abstract: false, final false
  inline float_t get_roomRolloffFactor();

  /// @brief Method set_HFReference, addr 0x2d85820, size 0x4c, virtual false, abstract: false, final false
  inline void set_HFReference(float_t value);

  /// @brief Method set_LFReference, addr 0x2d858a8, size 0x4c, virtual false, abstract: false, final false
  inline void set_LFReference(float_t value);

  /// @brief Method set_decayHFRatio, addr 0x2d85588, size 0x4c, virtual false, abstract: false, final false
  inline void set_decayHFRatio(float_t value);

  /// @brief Method set_decayTime, addr 0x2d85500, size 0x4c, virtual false, abstract: false, final false
  inline void set_decayTime(float_t value);

  /// @brief Method set_density, addr 0x2d85a90, size 0x4c, virtual false, abstract: false, final false
  inline void set_density(float_t value);

  /// @brief Method set_diffusion, addr 0x2d85a08, size 0x4c, virtual false, abstract: false, final false
  inline void set_diffusion(float_t value);

  /// @brief Method set_maxDistance, addr 0x2d85278, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

  /// @brief Method set_minDistance, addr 0x2d851f0, size 0x4c, virtual false, abstract: false, final false
  inline void set_minDistance(float_t value);

  /// @brief Method set_reflections, addr 0x2d85610, size 0x44, virtual false, abstract: false, final false
  inline void set_reflections(int32_t value);

  /// @brief Method set_reflectionsDelay, addr 0x2d85690, size 0x4c, virtual false, abstract: false, final false
  inline void set_reflectionsDelay(float_t value);

  /// @brief Method set_reverb, addr 0x2d85718, size 0x44, virtual false, abstract: false, final false
  inline void set_reverb(int32_t value);

  /// @brief Method set_reverbDelay, addr 0x2d85798, size 0x4c, virtual false, abstract: false, final false
  inline void set_reverbDelay(float_t value);

  /// @brief Method set_reverbPreset, addr 0x2d85300, size 0x44, virtual false, abstract: false, final false
  inline void set_reverbPreset(::UnityEngine::AudioReverbPreset value);

  /// @brief Method set_room, addr 0x2d85380, size 0x44, virtual false, abstract: false, final false
  inline void set_room(int32_t value);

  /// @brief Method set_roomHF, addr 0x2d85400, size 0x44, virtual false, abstract: false, final false
  inline void set_roomHF(int32_t value);

  /// @brief Method set_roomLF, addr 0x2d85480, size 0x44, virtual false, abstract: false, final false
  inline void set_roomLF(int32_t value);

  /// @brief Method set_roomRolloffFactor, addr 0x2d85964, size 0x68, virtual false, abstract: false, final false
  inline void set_roomRolloffFactor(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioReverbZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioReverbZone(AudioReverbZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioReverbZone(AudioReverbZone const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioReverbZone, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioReverbZone);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioReverbZone*, "UnityEngine", "AudioReverbZone");
