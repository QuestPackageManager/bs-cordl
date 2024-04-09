#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainTileCoord)
// Forward declare root types
namespace UnityEngine::TerrainUtils {
struct TerrainTileCoord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainUtils::TerrainTileCoord);
// Type: UnityEngine.TerrainUtils::TerrainTileCoord
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TerrainUtils {
// Is value type: true
// CS Name: ::UnityEngine.TerrainUtils::TerrainTileCoord
struct CORDL_TYPE TerrainTileCoord {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x326b0a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t tileX, int32_t tileZ);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainTileCoord();

  // Ctor Parameters [CppParam { name: "tileX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tileZ", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TerrainTileCoord(int32_t tileX, int32_t tileZ) noexcept;

  /// @brief Field tileX, offset: 0x0, size: 0x4, def value: None
  int32_t tileX;

  /// @brief Field tileZ, offset: 0x4, size: 0x4, def value: None
  int32_t tileZ;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainTileCoord, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainTileCoord, tileX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainUtils::TerrainTileCoord, tileZ) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::TerrainUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainTileCoord, "UnityEngine.TerrainUtils", "TerrainTileCoord");
