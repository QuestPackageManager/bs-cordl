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
struct Vector3Int;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
class Grid;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Matrix4x4;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16183))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15939))
// CS Name: ::UnityEngine.Tilemaps::Tilemap*
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
  // Declarations
  __declspec(property(get = get_layoutGrid))::UnityEngine::Grid* layoutGrid;

  __declspec(property(get = get_cellBounds))::UnityEngine::BoundsInt cellBounds;

  __declspec(property(get = get_origin))::UnityEngine::Vector3Int origin;

  __declspec(property(get = get_size))::UnityEngine::Vector3Int size;

  __declspec(property(get = get_tileAnchor))::UnityEngine::Vector3 tileAnchor;

  __declspec(property(get = get_orientationMatrix))::UnityEngine::Matrix4x4 orientationMatrix;

  /// @brief Method get_layoutGrid, addr 0x2d4f8d4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Grid* get_layoutGrid();

  /// @brief Method get_cellBounds, addr 0x2d4f910, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::BoundsInt get_cellBounds();

  /// @brief Method get_origin, addr 0x2d4f994, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_origin();

  /// @brief Method get_size, addr 0x2d4f9f0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_size();

  /// @brief Method get_tileAnchor, addr 0x2d4fad4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_tileAnchor();

  /// @brief Method get_orientationMatrix, addr 0x2d4fb74, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_orientationMatrix();

  /// @brief Method GetTileAsset, addr 0x2d4fc24, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* GetTileAsset(::UnityEngine::Vector3Int position);

  /// @brief Method GetTile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetTile(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAssetsBlock, addr 0x2d4fcbc, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> GetTileAssetsBlock(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int blockDimensions);

  /// @brief Method GetTilesBlock, addr 0x2d4fd70, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*> GetTilesBlock(::UnityEngine::BoundsInt bounds);

  /// @brief Method HasTile, addr 0x2d4ff04, size 0x84, virtual false, abstract: false, final false
  inline bool HasTile(::UnityEngine::Vector3Int position);

  /// @brief Method RefreshTile, addr 0x2d4ff88, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position);

  /// @brief Method RefreshTilesNative, addr 0x2d50020, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTilesNative(::cordl_internals::Ptr<void> positions, int32_t count);

  /// @brief Method GetUsedTilesCount, addr 0x2d50074, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesCount();

  /// @brief Method GetUsedTilesNonAlloc, addr 0x2d500b0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*> usedTiles);

  /// @brief Method Internal_GetUsedTilesNonAlloc, addr 0x2d500f4, size 0x44, virtual false, abstract: false, final false
  inline int32_t Internal_GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> usedTiles);

  /// @brief Method get_origin_Injected, addr 0x2d4fa4c, size 0x44, virtual false, abstract: false, final false
  inline void get_origin_Injected(ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_size_Injected, addr 0x2d4fa90, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_tileAnchor_Injected, addr 0x2d4fb30, size 0x44, virtual false, abstract: false, final false
  inline void get_tileAnchor_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_orientationMatrix_Injected, addr 0x2d4fbe0, size 0x44, virtual false, abstract: false, final false
  inline void get_orientationMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetTileAsset_Injected, addr 0x2d4fc78, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* GetTileAsset_Injected(ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method GetTileAssetsBlock_Injected, addr 0x2d4fd1c, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> GetTileAssetsBlock_Injected(ByRef<::UnityEngine::Vector3Int> position, ByRef<::UnityEngine::Vector3Int> blockDimensions);

  /// @brief Method RefreshTile_Injected, addr 0x2d4ffdc, size 0x44, virtual false, abstract: false, final false
  inline void RefreshTile_Injected(ByRef<::UnityEngine::Vector3Int> position);

  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tilemap(Tilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tilemap(Tilemap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tilemap();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
