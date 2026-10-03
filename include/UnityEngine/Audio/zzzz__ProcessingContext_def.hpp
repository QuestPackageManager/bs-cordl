#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessingContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ProcessingContext)
// Forward declare root types
namespace UnityEngine::Audio {
struct ProcessingContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ProcessingContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessingContext, "UnityEngine.Audio", "ProcessingContext");
// [Obsolete("ProcessingContext has been deprecated. Use RealtimeContext instead. (UnityUpgradable) -> RealtimeContext", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessingContext
#pragma pack(push, 0)
struct CORDL_TYPE ProcessingContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessingContext();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20372 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ProcessingContext) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Audio
