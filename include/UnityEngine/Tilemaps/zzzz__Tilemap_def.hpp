#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tilemap)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Tilemaps {
class TileBase;
}
namespace UnityEngine::Tilemaps {
struct Tilemap_SyncTileCallbackSettings;
}
namespace UnityEngine::Tilemaps {
struct Tilemap_SyncTile;
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
namespace UnityEngine::Tilemaps {
struct Tilemap_SyncTile;
}
namespace UnityEngine::Tilemaps {
struct Tilemap_SyncTileCallbackSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::Tilemap);
MARK_VAL_T(::UnityEngine::Tilemaps::Tilemap_SyncTile);
MARK_VAL_T(::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings);
// Dependencies UnityEngine.Tilemaps.TileData, UnityEngine.Vector3Int
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.Tilemap/SyncTile
struct CORDL_TYPE Tilemap_SyncTile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tilemap_SyncTile();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_Tile", ty: "::UnityW<::UnityEngine::Tilemaps::TileBase>",
  // modifiers: "", def_value: None }, CppParam { name: "m_TileData", ty: "::UnityEngine::Tilemaps::TileData", modifiers: "", def_value: None }]
  constexpr Tilemap_SyncTile(::UnityEngine::Vector3Int m_Position, ::UnityW<::UnityEngine::Tilemaps::TileBase> m_Tile, ::UnityEngine::Tilemaps::TileData m_TileData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int m_Position;

  /// @brief Field m_Tile, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Tilemaps::TileBase> m_Tile;

  /// @brief Field m_TileData, offset: 0x18, size: 0x60, def value: None
  ::UnityEngine::Tilemaps::TileData m_TileData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap_SyncTile, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap_SyncTile, m_Tile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap_SyncTile, m_TileData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap_SyncTile, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
// Dependencies
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.Tilemap/SyncTileCallbackSettings
struct CORDL_TYPE Tilemap_SyncTileCallbackSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tilemap_SyncTileCallbackSettings();

  // Ctor Parameters [CppParam { name: "hasSyncTileCallback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasPositionsChangedCallback", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "isBufferSyncTile", ty: "bool", modifiers: "", def_value: None }]
  constexpr Tilemap_SyncTileCallbackSettings(bool hasSyncTileCallback, bool hasPositionsChangedCallback, bool isBufferSyncTile) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  /// @brief Field hasSyncTileCallback, offset: 0x0, size: 0x1, def value: None
  bool hasSyncTileCallback;

  /// @brief Field hasPositionsChangedCallback, offset: 0x1, size: 0x1, def value: None
  bool hasPositionsChangedCallback;

  /// @brief Field isBufferSyncTile, offset: 0x2, size: 0x1, def value: None
  bool isBufferSyncTile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings, hasSyncTileCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings, hasPositionsChangedCallback) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings, isBufferSyncTile) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings, 0x3>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
// Dependencies UnityEngine.GridLayout
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.Tilemap
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
  // Declarations
  using SyncTile = ::UnityEngine::Tilemaps::Tilemap_SyncTile;

  using SyncTileCallbackSettings = ::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings;

  __declspec(property(get = get_bufferSyncTile)) bool bufferSyncTile;

  __declspec(property(get = get_cellBounds)) ::UnityEngine::BoundsInt cellBounds;

  __declspec(property(get = get_layoutGrid)) ::UnityW<::UnityEngine::Grid> layoutGrid;

  /// @brief Field m_BufferSyncTile, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BufferSyncTile, put = __cordl_internal_set_m_BufferSyncTile)) bool m_BufferSyncTile;

  __declspec(property(get = get_orientationMatrix)) ::UnityEngine::Matrix4x4 orientationMatrix;

  __declspec(property(get = get_origin)) ::UnityEngine::Vector3Int origin;

  __declspec(property(get = get_size)) ::UnityEngine::Vector3Int size;

  __declspec(property(get = get_tileAnchor)) ::UnityEngine::Vector3 tileAnchor;

  /// @brief Field tilemapPositionsChanged, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_tilemapPositionsChanged,
      put =
          setStaticF_tilemapPositionsChanged)) ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* tilemapPositionsChanged;

  /// @brief Field tilemapTileChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tilemapTileChanged, put = setStaticF_tilemapTileChanged)) ::System::Action_2<
      ::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>* tilemapTileChanged;

  /// @brief Method DoPositionsChangedCallback, addr 0x4957964, size 0x4, virtual false, abstract: false, final false
  inline void DoPositionsChangedCallback(int32_t count, ::System::IntPtr positionsIntPtr);

  /// @brief Method DoSyncTileCallback, addr 0x4957960, size 0x4, virtual false, abstract: false, final false
  inline void DoSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*> syncTiles);

  /// @brief Method GetSyncTileCallbackSettings, addr 0x49578c0, size 0xa0, virtual false, abstract: false, final false
  inline void GetSyncTileCallbackSettings(::ByRef<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings> settings);

  /// @brief Method GetTile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetTile(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAsset, addr 0x4957464, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetTileAsset(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAsset_Injected, addr 0x49574b8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetTileAsset_Injected(::ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method GetTileAssetsBlock, addr 0x49574fc, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> GetTileAssetsBlock(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int blockDimensions);

  /// @brief Method GetTileAssetsBlock_Injected, addr 0x495755c, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> GetTileAssetsBlock_Injected(::ByRef<::UnityEngine::Vector3Int> position,
                                                                                                                          ::ByRef<::UnityEngine::Vector3Int> blockDimensions);

  /// @brief Method GetTilesBlock, addr 0x49575b0, size 0x184, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Tilemaps::TileBase>, ::Array<::UnityW<::UnityEngine::Tilemaps::TileBase>>*> GetTilesBlock(::UnityEngine::BoundsInt bounds);

  /// @brief Method GetUsedTilesCount, addr 0x49577fc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesCount();

  /// @brief Method GetUsedTilesNonAlloc, addr 0x4957838, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*> usedTiles);

  /// @brief Method HandlePositionsChangedCallback, addr 0x4956f80, size 0xac, virtual false, abstract: false, final false
  inline void HandlePositionsChangedCallback(int32_t count, ::System::IntPtr positionsIntPtr);

  /// @brief Method HandleSyncTileCallback, addr 0x4956df0, size 0x74, virtual false, abstract: false, final false
  inline void HandleSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*> syncTiles);

  /// @brief Method HasPositionsChangedCallback, addr 0x4956da0, size 0x50, virtual false, abstract: false, final false
  static inline bool HasPositionsChangedCallback();

  /// @brief Method HasSyncTileCallback, addr 0x4956d50, size 0x50, virtual false, abstract: false, final false
  static inline bool HasSyncTileCallback();

  /// @brief Method HasTile, addr 0x4957734, size 0x84, virtual false, abstract: false, final false
  inline bool HasTile(::UnityEngine::Vector3Int position);

  /// @brief Method Internal_GetUsedTilesNonAlloc, addr 0x495787c, size 0x44, virtual false, abstract: false, final false
  inline int32_t Internal_GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> usedTiles);

  /// @brief Method RefreshTile, addr 0x495633c, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position);

  /// @brief Method RefreshTile_Injected, addr 0x49577b8, size 0x44, virtual false, abstract: false, final false
  inline void RefreshTile_Injected(::ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method RefreshTilesNative, addr 0x4956700, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTilesNative(::cordl_internals::Ptr<void> positions, int32_t count);

  /// @brief Method SendTilemapPositionsChangedCallback, addr 0x495702c, size 0x124, virtual false, abstract: false, final false
  inline void SendTilemapPositionsChangedCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> positions);

  /// @brief Method SendTilemapTileChangedCallback, addr 0x4956e64, size 0x11c, virtual false, abstract: false, final false
  inline void SendTilemapTileChangedCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*> syncTiles);

  constexpr bool const& __cordl_internal_get_m_BufferSyncTile() const;

  constexpr bool& __cordl_internal_get_m_BufferSyncTile();

  constexpr void __cordl_internal_set_m_BufferSyncTile(bool value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* getStaticF_tilemapPositionsChanged();

  static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>*
  getStaticF_tilemapTileChanged();

  /// @brief Method get_bufferSyncTile, addr 0x4956d48, size 0x8, virtual false, abstract: false, final false
  inline bool get_bufferSyncTile();

  /// @brief Method get_cellBounds, addr 0x495718c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::BoundsInt get_cellBounds();

  /// @brief Method get_layoutGrid, addr 0x4957150, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Grid> get_layoutGrid();

  /// @brief Method get_orientationMatrix, addr 0x49573b4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_orientationMatrix();

  /// @brief Method get_orientationMatrix_Injected, addr 0x4957420, size 0x44, virtual false, abstract: false, final false
  inline void get_orientationMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_origin, addr 0x49571d4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_origin();

  /// @brief Method get_origin_Injected, addr 0x495728c, size 0x44, virtual false, abstract: false, final false
  inline void get_origin_Injected(::ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_size, addr 0x4957230, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_size();

  /// @brief Method get_size_Injected, addr 0x49572d0, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(::ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_tileAnchor, addr 0x4957314, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_tileAnchor();

  /// @brief Method get_tileAnchor_Injected, addr 0x4957370, size 0x44, virtual false, abstract: false, final false
  inline void get_tileAnchor_Injected(::ByRef<::UnityEngine::Vector3> ret);

  static inline void setStaticF_tilemapPositionsChanged(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* value);

  static inline void setStaticF_tilemapTileChanged(
      ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18567 };

  /// @brief Field m_BufferSyncTile, offset: 0x18, size: 0x1, def value: None
  bool ___m_BufferSyncTile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap, ___m_BufferSyncTile) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap_SyncTile, "UnityEngine.Tilemaps", "Tilemap/SyncTile");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings, "UnityEngine.Tilemaps", "Tilemap/SyncTileCallbackSettings");
