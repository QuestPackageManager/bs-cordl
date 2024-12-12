#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutputDrawCommands.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchCullingOutputDrawCommands)
namespace UnityEngine::Rendering {
struct BatchDrawCommand;
}
namespace UnityEngine::Rendering {
struct BatchDrawRange;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchCullingOutputDrawCommands;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchCullingOutputDrawCommands);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchCullingOutputDrawCommands
struct CORDL_TYPE BatchCullingOutputDrawCommands {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchCullingOutputDrawCommands();

  // Ctor Parameters [CppParam { name: "drawCommands", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawCommand>", modifiers: "", def_value: None }, CppParam { name: "visibleInstances",
  // ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawRanges", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawRange>", modifiers: "",
  // def_value: None }, CppParam { name: "instanceSortingPositions", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam { name: "drawCommandPickingInstanceIDs", ty:
  // "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawCommandCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleInstanceCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceSortingPositionFloatCount", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr BatchCullingOutputDrawCommands(::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawCommand> drawCommands, ::cordl_internals::Ptr<int32_t> visibleInstances,
                                           ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawRange> drawRanges, ::cordl_internals::Ptr<float_t> instanceSortingPositions,
                                           ::cordl_internals::Ptr<int32_t> drawCommandPickingInstanceIDs, int32_t drawCommandCount, int32_t visibleInstanceCount, int32_t drawRangeCount,
                                           int32_t instanceSortingPositionFloatCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field drawCommands, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawCommand> drawCommands;

  /// @brief Field visibleInstances, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> visibleInstances;

  /// @brief Field drawRanges, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchDrawRange> drawRanges;

  /// @brief Field instanceSortingPositions, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> instanceSortingPositions;

  /// @brief Field drawCommandPickingInstanceIDs, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> drawCommandPickingInstanceIDs;

  /// @brief Field drawCommandCount, offset: 0x28, size: 0x4, def value: None
  int32_t drawCommandCount;

  /// @brief Field visibleInstanceCount, offset: 0x2c, size: 0x4, def value: None
  int32_t visibleInstanceCount;

  /// @brief Field drawRangeCount, offset: 0x30, size: 0x4, def value: None
  int32_t drawRangeCount;

  /// @brief Field instanceSortingPositionFloatCount, offset: 0x34, size: 0x4, def value: None
  int32_t instanceSortingPositionFloatCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, drawCommands) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, visibleInstances) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, drawRanges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, instanceSortingPositions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, drawCommandPickingInstanceIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, drawCommandCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, visibleInstanceCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, drawRangeCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, instanceSortingPositionFloatCount) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchCullingOutputDrawCommands, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingOutputDrawCommands, "UnityEngine.Rendering", "BatchCullingOutputDrawCommands");
