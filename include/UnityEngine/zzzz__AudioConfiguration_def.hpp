#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioConfiguration)
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine {
struct AudioConfiguration;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioConfiguration);
// Type: UnityEngine::AudioConfiguration
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15585))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15587))
// CS Name: ::UnityEngine::AudioConfiguration
struct CORDL_TYPE AudioConfiguration {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: None }, CppParam { name: "dspBufferSize", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numRealVoices", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "numVirtualVoices", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioConfiguration(::UnityEngine::AudioSpeakerMode speakerMode, int32_t dspBufferSize, int32_t sampleRate, int32_t numRealVoices, int32_t numVirtualVoices) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioConfiguration();

  /// @brief Field speakerMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::AudioSpeakerMode speakerMode;

  /// @brief Field dspBufferSize, offset: 0x4, size: 0x4, def value: None
  int32_t dspBufferSize;

  /// @brief Field sampleRate, offset: 0x8, size: 0x4, def value: None
  int32_t sampleRate;

  /// @brief Field numRealVoices, offset: 0xc, size: 0x4, def value: None
  int32_t numRealVoices;

  /// @brief Field numVirtualVoices, offset: 0x10, size: 0x4, def value: None
  int32_t numVirtualVoices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioConfiguration, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AudioConfiguration, speakerMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioConfiguration, dspBufferSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioConfiguration, sampleRate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioConfiguration, numRealVoices) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioConfiguration, numVirtualVoices) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioConfiguration, "UnityEngine", "AudioConfiguration");
