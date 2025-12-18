#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManagerConfigSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioManagerConfigSO)
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioManagerConfigSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioManagerConfigSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioManagerConfigSO
class CORDL_TYPE AudioManagerConfigSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _audioMixer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioMixer, put = __cordl_internal_set__audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer> _audioMixer;

  /// @brief Field _spatializerPluginLatency, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__spatializerPluginLatency, put = __cordl_internal_set__spatializerPluginLatency)) float_t _spatializerPluginLatency;

  /// @brief Field _spatializerSfxVolumeOffset, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__spatializerSfxVolumeOffset, put = __cordl_internal_set__spatializerSfxVolumeOffset)) float_t _spatializerSfxVolumeOffset;

  __declspec(property(get = get_audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer> audioMixer;

  __declspec(property(get = get_spatializerPluginLatency)) float_t spatializerPluginLatency;

  __declspec(property(get = get_spatializerSfxVolumeOffset)) float_t spatializerSfxVolumeOffset;

  static inline ::GlobalNamespace::AudioManagerConfigSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__audioMixer() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__audioMixer();

  constexpr float_t const& __cordl_internal_get__spatializerPluginLatency() const;

  constexpr float_t& __cordl_internal_get__spatializerPluginLatency();

  constexpr float_t const& __cordl_internal_get__spatializerSfxVolumeOffset() const;

  constexpr float_t& __cordl_internal_get__spatializerSfxVolumeOffset();

  constexpr void __cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer> value);

  constexpr void __cordl_internal_set__spatializerPluginLatency(float_t value);

  constexpr void __cordl_internal_set__spatializerSfxVolumeOffset(float_t value);

  /// @brief Method .ctor, addr 0x5709680, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioMixer, addr 0x5709668, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixer> get_audioMixer();

  /// @brief Method get_spatializerPluginLatency, addr 0x5709670, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spatializerPluginLatency();

  /// @brief Method get_spatializerSfxVolumeOffset, addr 0x5709678, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spatializerSfxVolumeOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioManagerConfigSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerConfigSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioManagerConfigSO(AudioManagerConfigSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioManagerConfigSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioManagerConfigSO(AudioManagerConfigSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5556 };

  /// @brief Field _audioMixer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixer> ____audioMixer;

  /// @brief Field _spatializerPluginLatency, offset: 0x20, size: 0x4, def value: None
  float_t ____spatializerPluginLatency;

  /// @brief Field _spatializerSfxVolumeOffset, offset: 0x24, size: 0x4, def value: None
  float_t ____spatializerSfxVolumeOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManagerConfigSO, ____audioMixer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerConfigSO, ____spatializerPluginLatency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManagerConfigSO, ____spatializerSfxVolumeOffset) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioManagerConfigSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioManagerConfigSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioManagerConfigSO*, "", "AudioManagerConfigSO");
