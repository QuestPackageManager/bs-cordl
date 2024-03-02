#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tilemap)
namespace UnityEngine::Tilemaps {
class TileBase;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
class Grid;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::Tilemap);
// Type: UnityEngine.Tilemaps::Tilemap
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: ::UnityEngine.Tilemaps::Tilemap*
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
  // Declarations
  __declspec(property(get = get_cellBounds))::UnityEngine::BoundsInt cellBounds;

  __declspec(property(get = get_layoutGrid))::UnityW<::UnityEngine::Grid> layoutGrid;

  __declspec(property(get = get_orientationMatrix))::UnityEngine::Matrix4x4 orientationMatrix;

  __declspec(property(get = get_origin))::UnityEngine::Vector3Int origin;

  __declspec(property(get = get_size))::UnityEngine::Vector3Int size;

  __declspec(property(get = get_tileAnchor))::UnityEngine::Vector3 tileAnchor;

  /// @brief Method GetTile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetTile(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAsset, addr 0x2e5a734, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetTileAsset(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAsset_Injected, addr 0x2e5a788, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetTileAsset_Injected(ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method GetTileAssetsBlock, addr 0x2e5a7cc, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> GetTileAssetsBlock(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int blockDimensions);

  /// @brief Method GetTileAssetsBlock_Injected, addr 0x2e5a82c, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> GetTileAssetsBlock_Injected(ByRef<::UnityEngine::Vector3Int> position,
                                                                                                                          ByRef<::UnityEngine::Vector3Int> blockDimensions);

  /// @brief Method GetTilesBlock, addr 0x2e5a880, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Tilemaps::TileBase>, ::Array<::UnityW<::UnityEngine::Tilemaps::TileBase>>*> GetTilesBlock(::UnityEngine::BoundsInt bounds);

  /// @brief Method GetUsedTilesCount, addr 0x2e5ab84, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesCount();

  /// @brief Method GetUsedTilesNonAlloc, addr 0x2e5abc0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*> usedTiles);

  /// @brief Method HasTile, addr 0x2e5aa14, size 0x84, virtual false, abstract: false, final false
  inline bool HasTile(::UnityEngine::Vector3Int position);

  /// @brief Method Internal_GetUsedTilesNonAlloc, addr 0x2e5ac04, size 0x44, virtual false, abstract: false, final false
  inline int32_t Internal_GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> usedTiles);

  /// @brief Method RefreshTile, addr 0x2e5aa98, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position);

  /// @brief Method RefreshTile_Injected, addr 0x2e5aaec, size 0x44, virtual false, abstract: false, final false
  inline void RefreshTile_Injected(ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method RefreshTilesNative, addr 0x2e5ab30, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTilesNative(::cordl_internals::Ptr<void> positions, int32_t count);

  /// @brief Method get_cellBounds, addr 0x2e5a420, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::BoundsInt get_cellBounds();

  /// @brief Method get_layoutGrid, addr 0x2e5a3e4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Grid> get_layoutGrid();

  /// @brief Method get_orientationMatrix, addr 0x2e5a684, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_orientationMatrix();

  /// @brief Method get_orientationMatrix_Injected, addr 0x2e5a6f0, size 0x44, virtual false, abstract: false, final false
  inline void get_orientationMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_origin, addr 0x2e5a4a4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_origin();

  /// @brief Method get_origin_Injected, addr 0x2e5a55c, size 0x44, virtual false, abstract: false, final false
  inline void get_origin_Injected(ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_size, addr 0x2e5a500, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_size();

  /// @brief Method get_size_Injected, addr 0x2e5a5a0, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_tileAnchor, addr 0x2e5a5e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_tileAnchor();

  /// @brief Method get_tileAnchor_Injected, addr 0x2e5a640, size 0x44, virtual false, abstract: false, final false
  inline void get_tileAnchor_Injected(ByRef<::UnityEngine::Vector3> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tilemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tilemap(Tilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tilemap(Tilemap const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
