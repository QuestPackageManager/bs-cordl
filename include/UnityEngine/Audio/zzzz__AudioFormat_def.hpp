#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioFormat)
namespace UnityEngine {
struct AudioConfiguration;
}
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioFormat);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioFormat, "UnityEngine.Audio", "AudioFormat");
// Dependencies UnityEngine.AudioConfiguration
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioFormat
struct CORDL_TYPE AudioFormat {
public:
  // Declarations
  __declspec(property(get = get_audioConfiguration)) ::UnityEngine::AudioConfiguration audioConfiguration;

  __declspec(property(get = get_bufferFrameCount)) int32_t bufferFrameCount;

  __declspec(property(get = get_channelCount)) int32_t channelCount;

  __declspec(property(get = get_sampleRate)) int32_t sampleRate;

  __declspec(property(get = get_speakerMode)) ::UnityEngine::AudioSpeakerMode speakerMode;

  /// @brief Method .ctor, addr 0x6eaa518, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioConfiguration config);

  /// @brief Method .ctor, addr 0x6eaa52c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioSpeakerMode speakerMode, int32_t sampleRate, int32_t bufferSize);

  /// [IsReadOnly]
  /// @brief Method get_audioConfiguration, addr 0x6eaa55c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioConfiguration get_audioConfiguration();

  /// [IsReadOnly]
  /// @brief Method get_bufferFrameCount, addr 0x6eaa544, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bufferFrameCount();

  /// [IsReadOnly]
  /// @brief Method get_channelCount, addr 0x6eaa53c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_channelCount();

  /// [IsReadOnly]
  /// @brief Method get_sampleRate, addr 0x6eaa54c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sampleRate();

  /// [IsReadOnly]
  /// @brief Method get_speakerMode, addr 0x6eaa554, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioSpeakerMode get_speakerMode();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioFormat();

  // Ctor Parameters [CppParam { name: "m_Config", ty: "::UnityEngine::AudioConfiguration", modifiers: "", def_value: None, comment: None }]
  constexpr AudioFormat(::UnityEngine::AudioConfiguration m_Config) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20334 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_Config, offset: 0x0, size: 0x14, def value: None
  ::UnityEngine::AudioConfiguration m_Config;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioFormat, m_Config) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioFormat) == 0x14, "Size mismatch!");

} // namespace UnityEngine::Audio
