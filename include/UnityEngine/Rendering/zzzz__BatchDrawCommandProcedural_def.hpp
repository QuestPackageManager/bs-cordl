#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommandProcedural.hpp"
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
CORDL_MODULE_EXPORT(BatchDrawCommandProcedural)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchDrawCommandProcedural;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchDrawCommandProcedural);
// Dependencies UnityEngine.GraphicsBufferHandle, UnityEngine.MeshTopology, UnityEngine.Rendering.BatchDrawCommandFlags, UnityEngine.Rendering.BatchID, UnityEngine.Rendering.BatchMaterialID
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchDrawCommandProcedural
struct CORDL_TYPE BatchDrawCommandProcedural {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchDrawCommandProcedural();

  // Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: None }, CppParam { name: "batchID", ty:
  // "::UnityEngine::Rendering::BatchID", modifiers: "", def_value: None }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: None }, CppParam {
  // name: "splitVisibilityMask", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lightmapIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "sortingPosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCount", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "indexBufferHandle", ty:
  // "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None }, CppParam { name: "baseVertex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "indexOffsetBytes", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "elementCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BatchDrawCommandProcedural(::UnityEngine::Rendering::BatchDrawCommandFlags flags, ::UnityEngine::Rendering::BatchID batchID, ::UnityEngine::Rendering::BatchMaterialID materialID,
                                       uint16_t splitVisibilityMask, uint16_t lightmapIndex, int32_t sortingPosition, uint32_t visibleOffset, uint32_t visibleCount,
                                       ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBufferHandle indexBufferHandle, uint32_t baseVertex, uint32_t indexOffsetBytes,
                                       uint32_t elementCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10836 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

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

  /// @brief Field visibleCount, offset: 0x18, size: 0x4, def value: None
  uint32_t visibleCount;

  /// @brief Field topology, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::MeshTopology topology;

  /// @brief Field indexBufferHandle, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::GraphicsBufferHandle indexBufferHandle;

  /// @brief Field baseVertex, offset: 0x24, size: 0x4, def value: None
  uint32_t baseVertex;

  /// @brief Field indexOffsetBytes, offset: 0x28, size: 0x4, def value: None
  uint32_t indexOffsetBytes;

  /// @brief Field elementCount, offset: 0x2c, size: 0x4, def value: None
  uint32_t elementCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, batchID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, materialID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, splitVisibilityMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, lightmapIndex) == 0xe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, sortingPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, visibleOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, visibleCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, topology) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, indexBufferHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, baseVertex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, indexOffsetBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommandProcedural, elementCount) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchDrawCommandProcedural, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchDrawCommandProcedural, "UnityEngine.Rendering", "BatchDrawCommandProcedural");
