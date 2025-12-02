#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugOccluderStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugOccluderStats)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugOccluderStats;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugOccluderStats);
// Dependencies UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugOccluderStats
struct CORDL_TYPE DebugOccluderStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugOccluderStats();

  // Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subviewCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "occluderMipLayoutSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }]
  constexpr DebugOccluderStats(int32_t viewInstanceID, int32_t subviewCount, ::UnityEngine::Vector2Int occluderMipLayoutSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field viewInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field subviewCount, offset: 0x4, size: 0x4, def value: None
  int32_t subviewCount;

  /// @brief Field occluderMipLayoutSize, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int occluderMipLayoutSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugOccluderStats, viewInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugOccluderStats, subviewCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugOccluderStats, occluderMipLayoutSize) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugOccluderStats, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugOccluderStats, "UnityEngine.Rendering", "DebugOccluderStats");
