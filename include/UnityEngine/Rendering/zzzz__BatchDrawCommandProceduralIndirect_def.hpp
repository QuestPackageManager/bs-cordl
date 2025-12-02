#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandProceduralIndirect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchDrawCommandProceduralIndirect)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchDrawCommandProceduralIndirect;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect);
// Dependencies UnityEngine.GraphicsBufferHandle, UnityEngine.MeshTopology, UnityEngine.Rendering.BatchDrawCommandFlags, UnityEngine.Rendering.BatchID, UnityEngine.Rendering.BatchMaterialID
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchDrawCommandProceduralIndirect
struct CORDL_TYPE BatchDrawCommandProceduralIndirect {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchDrawCommandProceduralIndirect();

  // Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: None }, CppParam { name: "batchID", ty:
  // "::UnityEngine::Rendering::BatchID", modifiers: "", def_value: None }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: None }, CppParam {
  // name: "splitVisibilityMask", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lightmapIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "sortingPosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "topology", ty:
  // "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "indexBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None }, CppParam {
  // name: "visibleInstancesBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None }, CppParam { name: "visibleInstancesBufferWindowOffset", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "visibleInstancesBufferWindowSizeBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "indirectArgsBufferHandle", ty:
  // "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None }, CppParam { name: "indirectArgsBufferOffset", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BatchDrawCommandProceduralIndirect(::UnityEngine::Rendering::BatchDrawCommandFlags flags, ::UnityEngine::Rendering::BatchID batchID, ::UnityEngine::Rendering::BatchMaterialID materialID,
                                               uint16_t splitVisibilityMask, uint16_t lightmapIndex, int32_t sortingPosition, uint32_t visibleOffset, ::UnityEngine::MeshTopology topology,
                                               ::UnityEngine::GraphicsBufferHandle indexBufferHandle, ::UnityEngine::GraphicsBufferHandle visibleInstancesBufferHandle,
                                               uint32_t visibleInstancesBufferWindowOffset, uint32_t visibleInstancesBufferWindowSizeBytes,
                                               ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle, uint32_t indirectArgsBufferOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10833 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchDrawCommandFlags flags;

  /// @brief Field batchID, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchID batchID;

  /// @brief Field materialID, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchMaterialID materialID;

  /// @brief Field splitVisibilityMask, offset: 0xc, size: 0x2, def value: None
  uint16_t splitVisibilityMask;

  /// @brief Field lightmapIndex, offset: 0xe, size: 0x2, def value: None
  uint16_t lightmapIndex;

  /// @brief Field sortingPosition, offset: 0x10, size: 0x4, def value: None
  int32_t sortingPosition;

  /// @brief Field visibleOffset, offset: 0x14, size: 0x4, def value: None
  uint32_t visibleOffset;

  /// @brief Field topology, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::MeshTopology topology;

  /// @brief Field indexBufferHandle, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::GraphicsBufferHandle indexBufferHandle;

  /// @brief Field visibleInstancesBufferHandle, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::GraphicsBufferHandle visibleInstancesBufferHandle;

  /// @brief Field visibleInstancesBufferWindowOffset, offset: 0x24, size: 0x4, def value: None
  uint32_t visibleInstancesBufferWindowOffset;

  /// @brief Field visibleInstancesBufferWindowSizeBytes, offset: 0x28, size: 0x4, def value: None
  uint32_t visibleInstancesBufferWindowSizeBytes;

  /// @brief Field indirectArgsBufferHandle, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle;

  /// @brief Field indirectArgsBufferOffset, offset: 0x30, size: 0x4, def value: None
  uint32_t indirectArgsBufferOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, batchID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, materialID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, splitVisibilityMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, lightmapIndex) == 0xe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, sortingPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, visibleOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, topology) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, indexBufferHandle) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, visibleInstancesBufferHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, visibleInstancesBufferWindowOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, visibleInstancesBufferWindowSizeBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, indirectArgsBufferHandle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, indirectArgsBufferOffset) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, 0x34>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchDrawCommandProceduralIndirect, "UnityEngine.Rendering", "BatchDrawCommandProceduralIndirect");
