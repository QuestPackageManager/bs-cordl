#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererMeshLodData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenRendererMeshLodData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenRendererMeshLodData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenRendererMeshLodData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenRendererMeshLodData, "UnityEngine.Rendering", "GPUDrivenRendererMeshLodData");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenRendererMeshLodData
struct CORDL_TYPE GPUDrivenRendererMeshLodData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenRendererMeshLodData();

  // Ctor Parameters [CppParam { name: "forceLod", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodSelectionBias", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr GPUDrivenRendererMeshLodData(int32_t forceLod, float_t lodSelectionBias) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10489 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field forceLod, offset: 0x0, size: 0x4, def value: None
  int32_t forceLod;

  /// @brief Field lodSelectionBias, offset: 0x4, size: 0x4, def value: None
  float_t lodSelectionBias;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererMeshLodData, forceLod) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererMeshLodData, lodSelectionBias) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenRendererMeshLodData) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering
