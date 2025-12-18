#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerViewStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullerViewStats)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceCullerViewStats;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceCullerViewStats);
// Dependencies UnityEngine.Rendering.BatchCullingViewType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullerViewStats
struct CORDL_TYPE InstanceCullerViewStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerViewStats();

  // Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleInstances", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "drawCommands", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceCullerViewStats(::UnityEngine::Rendering::BatchCullingViewType viewType, int32_t viewInstanceID, int32_t splitIndex, int32_t visibleInstances, int32_t drawCommands) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17590 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field viewType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingViewType viewType;

  /// @brief Field viewInstanceID, offset: 0x4, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field splitIndex, offset: 0x8, size: 0x4, def value: None
  int32_t splitIndex;

  /// @brief Field visibleInstances, offset: 0xc, size: 0x4, def value: None
  int32_t visibleInstances;

  /// @brief Field drawCommands, offset: 0x10, size: 0x4, def value: None
  int32_t drawCommands;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerViewStats, viewType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerViewStats, viewInstanceID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerViewStats, splitIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerViewStats, visibleInstances) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerViewStats, drawCommands) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCullerViewStats, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCullerViewStats, "UnityEngine.Rendering", "InstanceCullerViewStats");
