#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/SceneBuildMemoryRequirements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneBuildMemoryRequirements)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct SceneBuildMemoryRequirements;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements, "UnityEngine.Rendering.RadeonRays", "SceneBuildMemoryRequirements");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.SceneBuildMemoryRequirements
struct CORDL_TYPE SceneBuildMemoryRequirements {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneBuildMemoryRequirements();

  // Ctor Parameters [CppParam { name: "buildScratchSizeInDwords", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr SceneBuildMemoryRequirements(uint64_t buildScratchSizeInDwords) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field buildScratchSizeInDwords, offset: 0x0, size: 0x8, def value: None
  uint64_t buildScratchSizeInDwords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements, buildScratchSizeInDwords) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::SceneBuildMemoryRequirements) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
