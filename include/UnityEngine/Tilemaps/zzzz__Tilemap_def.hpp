#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct TileData;
}
namespace UnityEngine::Tilemaps {
struct __Tilemap__SyncTileCallbackSettings;
}
namespace UnityEngine::Tilemaps {
struct __Tilemap__SyncTile;
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
struct __Tilemap__SyncTile;
}
namespace UnityEngine::Tilemaps {
struct __Tilemap__SyncTileCallbackSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Tilemaps::Tilemap);
MARK_VAL_T(::UnityEngine::Tilemaps::__Tilemap__SyncTile);
MARK_VAL_T(::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings);
// Type: ::SyncTile
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: ::Tilemap::SyncTile
struct CORDL_TYPE __Tilemap__SyncTile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tilemap__SyncTile();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_Tile", ty: "::UnityW<::UnityEngine::Tilemaps::TileBase>",
  // modifiers: "", def_value: None }, CppParam { name: "m_TileData", ty: "::UnityEngine::Tilemaps::TileData", modifiers: "", def_value: None }]
  constexpr __Tilemap__SyncTile(::UnityEngine::Vector3Int m_Position, ::UnityW<::UnityEngine::Tilemaps::TileBase> m_Tile, ::UnityEngine::Tilemaps::TileData m_TileData) noexcept;

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int m_Position;

  /// @brief Field m_Tile, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Tilemaps::TileBase> m_Tile;

  /// @brief Field m_TileData, offset: 0x18, size: 0x60, def value: None
  ::UnityEngine::Tilemaps::TileData m_TileData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::__Tilemap__SyncTile, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::__Tilemap__SyncTile, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::__Tilemap__SyncTile, m_Tile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::__Tilemap__SyncTile, m_TileData) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
// Type: ::SyncTileCallbackSettings
// SizeInfo { instance_size: 3, native_size: 12, calculated_instance_size: 3, calculated_native_size: 19, minimum_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: ::Tilemap::SyncTileCallbackSettings
struct CORDL_TYPE __Tilemap__SyncTileCallbackSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tilemap__SyncTileCallbackSettings();

  // Ctor Parameters [CppParam { name: "hasSyncTileCallback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasPositionsChangedCallback", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "isBufferSyncTile", ty: "bool", modifiers: "", def_value: None }]
  constexpr __Tilemap__SyncTileCallbackSettings(bool hasSyncTileCallback, bool hasPositionsChangedCallback, bool isBufferSyncTile) noexcept;

  /// @brief Field hasSyncTileCallback, offset: 0x0, size: 0x1, def value: None
  bool hasSyncTileCallback;

  /// @brief Field hasPositionsChangedCallback, offset: 0x1, size: 0x1, def value: None
  bool hasPositionsChangedCallback;

  /// @brief Field isBufferSyncTile, offset: 0x2, size: 0x1, def value: None
  bool isBufferSyncTile;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18446 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings, 0x3>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings, hasSyncTileCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings, hasPositionsChangedCallback) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings, isBufferSyncTile) == 0x2, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
// Type: UnityEngine.Tilemaps::Tilemap
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: ::UnityEngine.Tilemaps::Tilemap*
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
  // Declarations
  using SyncTile = ::UnityEngine::Tilemaps::__Tilemap__SyncTile;

  using SyncTileCallbackSettings = ::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings;

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
  static __declspec(property(
      get = getStaticF_tilemapPositionsChanged,
      put =
          setStaticF_tilemapPositionsChanged)) ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* tilemapPositionsChanged;

  /// @brief Field tilemapTileChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tilemapTileChanged, put = setStaticF_tilemapTileChanged)) ::System::Action_2<
      ::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::ArrayW<::UnityEngine::Tilemaps::__Tilemap__SyncTile, ::Array<::UnityEngine::Tilemaps::__Tilemap__SyncTile>*>>* tilemapTileChanged;

  /// @brief Method DoPositionsChangedCallback, addr 0x48db958, size 0x4, virtual false, abstract: false, final false
  inline void DoPositionsChangedCallback(int32_t count, ::System::IntPtr positionsIntPtr);

  /// @brief Method DoSyncTileCallback, addr 0x48db954, size 0x4, virtual false, abstract: false, final false
  inline void DoSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::__Tilemap__SyncTile, ::Array<::UnityEngine::Tilemaps::__Tilemap__SyncTile>*> syncTiles);

  /// @brief Method GetSyncTileCallbackSettings, addr 0x48db8b4, size 0xa0, virtual false, abstract: false, final false
  inline void GetSyncTileCallbackSettings(ByRef<::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings> settings);

  /// @brief Method GetTile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetTile(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAsset, addr 0x48db458, size 0x54, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetTileAsset(::UnityEngine::Vector3Int position);

  /// @brief Method GetTileAsset_Injected, addr 0x48db4ac, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetTileAsset_Injected(ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method GetTileAssetsBlock, addr 0x48db4f0, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> GetTileAssetsBlock(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int blockDimensions);

  /// @brief Method GetTileAssetsBlock_Injected, addr 0x48db550, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> GetTileAssetsBlock_Injected(ByRef<::UnityEngine::Vector3Int> position,
                                                                                                                          ByRef<::UnityEngine::Vector3Int> blockDimensions);

  /// @brief Method GetTilesBlock, addr 0x48db5a4, size 0x184, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Tilemaps::TileBase>, ::Array<::UnityW<::UnityEngine::Tilemaps::TileBase>>*> GetTilesBlock(::UnityEngine::BoundsInt bounds);

  /// @brief Method GetUsedTilesCount, addr 0x48db7f0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesCount();

  /// @brief Method GetUsedTilesNonAlloc, addr 0x48db82c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*> usedTiles);

  /// @brief Method HandlePositionsChangedCallback, addr 0x48daf74, size 0xac, virtual false, abstract: false, final false
  inline void HandlePositionsChangedCallback(int32_t count, ::System::IntPtr positionsIntPtr);

  /// @brief Method HandleSyncTileCallback, addr 0x48dade4, size 0x74, virtual false, abstract: false, final false
  inline void HandleSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::__Tilemap__SyncTile, ::Array<::UnityEngine::Tilemaps::__Tilemap__SyncTile>*> syncTiles);

  /// @brief Method HasPositionsChangedCallback, addr 0x48dad94, size 0x50, virtual false, abstract: false, final false
  static inline bool HasPositionsChangedCallback();

  /// @brief Method HasSyncTileCallback, addr 0x48dad44, size 0x50, virtual false, abstract: false, final false
  static inline bool HasSyncTileCallback();

  /// @brief Method HasTile, addr 0x48db728, size 0x84, virtual false, abstract: false, final false
  inline bool HasTile(::UnityEngine::Vector3Int position);

  /// @brief Method Internal_GetUsedTilesNonAlloc, addr 0x48db870, size 0x44, virtual false, abstract: false, final false
  inline int32_t Internal_GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> usedTiles);

  /// @brief Method RefreshTile, addr 0x48da330, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTile(::UnityEngine::Vector3Int position);

  /// @brief Method RefreshTile_Injected, addr 0x48db7ac, size 0x44, virtual false, abstract: false, final false
  inline void RefreshTile_Injected(ByRef<::UnityEngine::Vector3Int> position);

  /// @brief Method RefreshTilesNative, addr 0x48da6f4, size 0x54, virtual false, abstract: false, final false
  inline void RefreshTilesNative(::cordl_internals::Ptr<void> positions, int32_t count);

  /// @brief Method SendTilemapPositionsChangedCallback, addr 0x48db020, size 0x124, virtual false, abstract: false, final false
  inline void SendTilemapPositionsChangedCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> positions);

  /// @brief Method SendTilemapTileChangedCallback, addr 0x48dae58, size 0x11c, virtual false, abstract: false, final false
  inline void SendTilemapTileChangedCallback(::ArrayW<::UnityEngine::Tilemaps::__Tilemap__SyncTile, ::Array<::UnityEngine::Tilemaps::__Tilemap__SyncTile>*> syncTiles);

  constexpr bool const& __cordl_internal_get_m_BufferSyncTile() const;

  constexpr bool& __cordl_internal_get_m_BufferSyncTile();

  constexpr void __cordl_internal_set_m_BufferSyncTile(bool value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* getStaticF_tilemapPositionsChanged();

  static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::ArrayW<::UnityEngine::Tilemaps::__Tilemap__SyncTile, ::Array<::UnityEngine::Tilemaps::__Tilemap__SyncTile>*>>*
  getStaticF_tilemapTileChanged();

  /// @brief Method get_bufferSyncTile, addr 0x48dad3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_bufferSyncTile();

  /// @brief Method get_cellBounds, addr 0x48db180, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::BoundsInt get_cellBounds();

  /// @brief Method get_layoutGrid, addr 0x48db144, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Grid> get_layoutGrid();

  /// @brief Method get_orientationMatrix, addr 0x48db3a8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_orientationMatrix();

  /// @brief Method get_orientationMatrix_Injected, addr 0x48db414, size 0x44, virtual false, abstract: false, final false
  inline void get_orientationMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_origin, addr 0x48db1c8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_origin();

  /// @brief Method get_origin_Injected, addr 0x48db280, size 0x44, virtual false, abstract: false, final false
  inline void get_origin_Injected(ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_size, addr 0x48db224, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_size();

  /// @brief Method get_size_Injected, addr 0x48db2c4, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector3Int> ret);

  /// @brief Method get_tileAnchor, addr 0x48db308, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_tileAnchor();

  /// @brief Method get_tileAnchor_Injected, addr 0x48db364, size 0x44, virtual false, abstract: false, final false
  inline void get_tileAnchor_Injected(ByRef<::UnityEngine::Vector3> ret);

  static inline void setStaticF_tilemapPositionsChanged(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* value);

  static inline void setStaticF_tilemapTileChanged(
      ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>, ::ArrayW<::UnityEngine::Tilemaps::__Tilemap__SyncTile, ::Array<::UnityEngine::Tilemaps::__Tilemap__SyncTile>*>>* value);

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

  /// @brief Field m_BufferSyncTile, offset: 0x18, size: 0x1, def value: None
  bool ___m_BufferSyncTile;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::Tilemap, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap, ___m_BufferSyncTile) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::__Tilemap__SyncTile, "UnityEngine.Tilemaps", "Tilemap/SyncTile");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::__Tilemap__SyncTileCallbackSettings, "UnityEngine.Tilemaps", "Tilemap/SyncTileCallbackSettings");
