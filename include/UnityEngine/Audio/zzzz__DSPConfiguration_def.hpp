#pragma once
// IWYU pragma private; include "UnityEngine/Audio/DSPConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DSPConfiguration)
// Forward declare root types
namespace UnityEngine::Audio {
struct DSPConfiguration;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::DSPConfiguration);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::DSPConfiguration, "UnityEngine.Audio", "DSPConfiguration");
// [Obsolete("DSPConfiguration has been deprecated. Use AudioFormat instead. (UnityUpgradable) -> AudioFormat", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.DSPConfiguration
#pragma pack(push, 0)
struct CORDL_TYPE DSPConfiguration {
public:
  // Declarations
  /// @brief [Obsolete("AudioFormat.bufferSize has been deprecated. Use AudioFormat.bufferFrameCount instead. (UnityUpgradable) -> AudioFormat.bufferFrameCount", true)]
  __declspec(property(get = get_bufferSize)) int32_t bufferSize;

  /// [IsReadOnly]
  /// @brief Method get_bufferSize, addr 0x6eab4c8, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_bufferSize();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DSPConfiguration();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20342 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::DSPConfiguration) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Audio
