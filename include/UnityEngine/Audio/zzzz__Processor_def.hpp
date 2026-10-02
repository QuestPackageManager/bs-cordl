#pragma once
// IWYU pragma private; include "UnityEngine/Audio/Processor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Processor)
// Forward declare root types
namespace UnityEngine::Audio {
struct Processor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::Processor);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::Processor, "UnityEngine.Audio", "Processor");
// [Obsolete("Processor has been deprecated. Use ProcessorInstance instead. (UnityUpgradable) -> ProcessorInstance", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.Processor
#pragma pack(push, 0)
struct CORDL_TYPE Processor {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Processor();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20371 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::Processor) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Audio
