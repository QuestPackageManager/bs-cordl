#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/MeshBuildMemoryRequirements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuildMemoryRequirements)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct MeshBuildMemoryRequirements;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements, "UnityEngine.Rendering.RadeonRays", "MeshBuildMemoryRequirements");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.MeshBuildMemoryRequirements
struct CORDL_TYPE MeshBuildMemoryRequirements {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuildMemoryRequirements();

  // Ctor Parameters [CppParam { name: "buildScratchSizeInDwords", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bvhSizeInDwords", ty: "uint64_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "bvhLeavesSizeInDwords", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr MeshBuildMemoryRequirements(uint64_t buildScratchSizeInDwords, uint64_t bvhSizeInDwords, uint64_t bvhLeavesSizeInDwords) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20430 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field buildScratchSizeInDwords, offset: 0x0, size: 0x8, def value: None
  uint64_t buildScratchSizeInDwords;

  /// @brief Field bvhSizeInDwords, offset: 0x8, size: 0x8, def value: None
  uint64_t bvhSizeInDwords;

  /// @brief Field bvhLeavesSizeInDwords, offset: 0x10, size: 0x8, def value: None
  uint64_t bvhLeavesSizeInDwords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements, buildScratchSizeInDwords) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements, bvhSizeInDwords) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements, bvhLeavesSizeInDwords) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::MeshBuildMemoryRequirements) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
