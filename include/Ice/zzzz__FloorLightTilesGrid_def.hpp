#pragma once
// IWYU pragma private; include "Ice/FloorLightTilesGrid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AbstractPoolContainer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloorLightTilesGrid)
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace Ice {
class FloorLightTile_Pool;
}
namespace Ice {
class FloorLightTile;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Ice {
class FloorLightTilesGrid;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightTilesGrid);
// Dependencies AbstractPoolContainer, UnityEngine.Vector3
namespace Ice {
// Is value type: false
// CS Name: Ice.FloorLightTilesGrid
class CORDL_TYPE FloorLightTilesGrid : public ::GlobalNamespace::AbstractPoolContainer {
public:
  // Declarations
  /// @brief Field _anchorPoint, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__anchorPoint, put = __cordl_internal_set__anchorPoint)) ::UnityEngine::Vector3 _anchorPoint;

  /// @brief Field _floorLightTileMemoryPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floorLightTileMemoryPool, put = __cordl_internal_set__floorLightTileMemoryPool)) ::Ice::FloorLightTile_Pool* _floorLightTileMemoryPool;

  /// @brief Field _floorLightTileMemoryPoolContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floorLightTileMemoryPoolContainer,
                      put = __cordl_internal_set__floorLightTileMemoryPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>* _floorLightTileMemoryPoolContainer;

  /// @brief Field _grid, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__grid, put = __cordl_internal_set__grid)) ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>,
                                                                                                    ::Array<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>>*>
      _grid;

  /// @brief Field _tileHeight, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__tileHeight, put = __cordl_internal_set__tileHeight)) float_t _tileHeight;

  /// @brief Field _tileWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tileWidth, put = __cordl_internal_set__tileWidth)) float_t _tileWidth;

  /// @brief Field _ySize, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__ySize, put = __cordl_internal_set__ySize)) int32_t _ySize;

  __declspec(property(get = get_ySize)) int32_t ySize;

  /// @brief Method DespawnAll, addr 0x2269a6c, size 0xc0, virtual true, abstract: false, final false
  inline void DespawnAll();

  /// @brief Method DespawnTile, addr 0x2269b2c, size 0x60, virtual false, abstract: false, final false
  inline void DespawnTile(::Ice::FloorLightTile* floorLightTile);

  /// @brief Method HandleFloorLightTileDidFinish, addr 0x2269b8c, size 0x4, virtual false, abstract: false, final false
  inline void HandleFloorLightTileDidFinish(::Ice::FloorLightTile* floorLightTile);

  /// @brief Method HighlightTile, addr 0x2269128, size 0x1b4, virtual false, abstract: false, final false
  inline void HighlightTile(int32_t x, int32_t y, float_t fadeInDuration, float_t fadeOutDuration, ::UnityEngine::Color color);

  /// @brief Method Init, addr 0x2268b8c, size 0x190, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 anchorPoint, int32_t xSize, int32_t ySize, float_t tileWidth, float_t tileHeight);

  static inline ::Ice::FloorLightTilesGrid* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__anchorPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__anchorPoint();

  constexpr ::Ice::FloorLightTile_Pool* const& __cordl_internal_get__floorLightTileMemoryPool() const;

  constexpr ::Ice::FloorLightTile_Pool*& __cordl_internal_get__floorLightTileMemoryPool();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>* const& __cordl_internal_get__floorLightTileMemoryPoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>*& __cordl_internal_get__floorLightTileMemoryPoolContainer();

  constexpr ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>,
                     ::Array<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>>*> const&
  __cordl_internal_get__grid() const;

  constexpr ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>,
                     ::Array<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>>*>&
  __cordl_internal_get__grid();

  constexpr float_t const& __cordl_internal_get__tileHeight() const;

  constexpr float_t& __cordl_internal_get__tileHeight();

  constexpr float_t const& __cordl_internal_get__tileWidth() const;

  constexpr float_t& __cordl_internal_get__tileWidth();

  constexpr int32_t const& __cordl_internal_get__ySize() const;

  constexpr int32_t& __cordl_internal_get__ySize();

  constexpr void __cordl_internal_set__anchorPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__floorLightTileMemoryPool(::Ice::FloorLightTile_Pool* value);

  constexpr void __cordl_internal_set__floorLightTileMemoryPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>* value);

  constexpr void __cordl_internal_set__grid(
      ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>, ::Array<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>>*>
          value);

  constexpr void __cordl_internal_set__tileHeight(float_t value);

  constexpr void __cordl_internal_set__tileWidth(float_t value);

  constexpr void __cordl_internal_set__ySize(int32_t value);

  /// @brief Method .ctor, addr 0x2269b90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ySize, addr 0x2269a64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ySize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightTilesGrid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTilesGrid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightTilesGrid(FloorLightTilesGrid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTilesGrid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightTilesGrid(FloorLightTilesGrid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18950 };

  /// @brief Field _floorLightTileMemoryPool, offset: 0x20, size: 0x8, def value: None
  ::Ice::FloorLightTile_Pool* ____floorLightTileMemoryPool;

  /// @brief Field _floorLightTileMemoryPoolContainer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>* ____floorLightTileMemoryPoolContainer;

  /// @brief Field _grid, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>, ::Array<::ArrayW<::UnityW<::Ice::FloorLightTile>, ::Array<::UnityW<::Ice::FloorLightTile>>*>>*>
      ____grid;

  /// @brief Field _tileWidth, offset: 0x38, size: 0x4, def value: None
  float_t ____tileWidth;

  /// @brief Field _tileHeight, offset: 0x3c, size: 0x4, def value: None
  float_t ____tileHeight;

  /// @brief Field _anchorPoint, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____anchorPoint;

  /// @brief Field _ySize, offset: 0x4c, size: 0x4, def value: None
  int32_t ____ySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ice::FloorLightTilesGrid, ____floorLightTileMemoryPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____floorLightTileMemoryPoolContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____grid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____tileWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____tileHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____anchorPoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____ySize) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTilesGrid, 0x50>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTilesGrid*, "Ice", "FloorLightTilesGrid");
