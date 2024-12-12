#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchDrawCommand)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchDrawCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchDrawCommand);
// Dependencies UnityEngine.Rendering.BatchDrawCommandFlags, UnityEngine.Rendering.BatchID, UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.BatchMeshID
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchDrawCommand
struct CORDL_TYPE BatchDrawCommand {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchDrawCommand();

  // Ctor Parameters [CppParam { name: "visibleOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "batchID", ty: "::UnityEngine::Rendering::BatchID", modifiers: "", def_value: None }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "",
  // def_value: None }, CppParam { name: "meshID", ty: "::UnityEngine::Rendering::BatchMeshID", modifiers: "", def_value: None }, CppParam { name: "submeshIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "splitVisibilityMask", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags",
  // modifiers: "", def_value: None }, CppParam { name: "sortingPosition", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BatchDrawCommand(uint32_t visibleOffset, uint32_t visibleCount, ::UnityEngine::Rendering::BatchID batchID, ::UnityEngine::Rendering::BatchMaterialID materialID,
                             ::UnityEngine::Rendering::BatchMeshID meshID, uint16_t submeshIndex, uint16_t splitVisibilityMask, ::UnityEngine::Rendering::BatchDrawCommandFlags flags,
                             int32_t sortingPosition) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11244 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field visibleOffset, offset: 0x0, size: 0x4, def value: None
  uint32_t visibleOffset;

  /// @brief Field visibleCount, offset: 0x4, size: 0x4, def value: None
  uint32_t visibleCount;

  /// @brief Field batchID, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchID batchID;

  /// @brief Field materialID, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchMaterialID materialID;

  /// @brief Field meshID, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchMeshID meshID;

  /// @brief Field submeshIndex, offset: 0x14, size: 0x2, def value: None
  uint16_t submeshIndex;

  /// @brief Field splitVisibilityMask, offset: 0x16, size: 0x2, def value: None
  uint16_t splitVisibilityMask;

  /// @brief Field flags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchDrawCommandFlags flags;

  /// @brief Field sortingPosition, offset: 0x1c, size: 0x4, def value: None
  int32_t sortingPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, visibleOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, visibleCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, batchID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, materialID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, meshID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, submeshIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, splitVisibilityMask) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, flags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawCommand, sortingPosition) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchDrawCommand, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchDrawCommand, "UnityEngine.Rendering", "BatchDrawCommand");
