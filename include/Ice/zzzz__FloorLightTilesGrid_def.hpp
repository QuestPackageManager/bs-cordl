#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloorLightTilesGrid)
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace Ice {
class FloorLightTile;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace Ice {
class __FloorLightTile__Pool;
}
// Forward declare root types
namespace Ice {
class FloorLightTilesGrid;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightTilesGrid);
// Type: Ice::FloorLightTilesGrid
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16010))
// CS Name: ::Ice::FloorLightTilesGrid*
class CORDL_TYPE FloorLightTilesGrid : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _floorLightTileMemoryPool, offset 0x18, size 0x8
  __declspec(property(get = __get__floorLightTileMemoryPool, put = __set__floorLightTileMemoryPool))::Ice::__FloorLightTile__Pool* _floorLightTileMemoryPool;

  /// @brief Field _floorLightTileMemoryPoolContainer, offset 0x20, size 0x8
  __declspec(property(get = __get__floorLightTileMemoryPoolContainer,
                      put = __set__floorLightTileMemoryPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>* _floorLightTileMemoryPoolContainer;

  /// @brief Field _grid, offset 0x28, size 0x8
  __declspec(
      property(get = __get__grid,
               put = __set__grid))::ArrayW<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>, ::Array<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>>*> _grid;

  /// @brief Field _tileWidth, offset 0x30, size 0x4
  __declspec(property(get = __get__tileWidth, put = __set__tileWidth)) float_t _tileWidth;

  /// @brief Field _tileHeight, offset 0x34, size 0x4
  __declspec(property(get = __get__tileHeight, put = __set__tileHeight)) float_t _tileHeight;

  /// @brief Field _anchorPoint, offset 0x38, size 0xc
  __declspec(property(get = __get__anchorPoint, put = __set__anchorPoint))::UnityEngine::Vector3 _anchorPoint;

  /// @brief Field _ySize, offset 0x44, size 0x4
  __declspec(property(get = __get__ySize, put = __set__ySize)) int32_t _ySize;

  __declspec(property(get = get_ySize)) int32_t ySize;

  constexpr ::Ice::__FloorLightTile__Pool*& __get__floorLightTileMemoryPool();

  constexpr ::cordl_internals::to_const_pointer<::Ice::__FloorLightTile__Pool*> const& __get__floorLightTileMemoryPool() const;

  constexpr void __set__floorLightTileMemoryPool(::Ice::__FloorLightTile__Pool* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>*& __get__floorLightTileMemoryPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>*> const& __get__floorLightTileMemoryPoolContainer() const;

  constexpr void __set__floorLightTileMemoryPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>* value);

  constexpr ::ArrayW<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>, ::Array<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>>*>& __get__grid();

  constexpr ::ArrayW<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>, ::Array<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>>*> const& __get__grid() const;

  constexpr void __set__grid(::ArrayW<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>, ::Array<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>>*> value);

  constexpr float_t& __get__tileWidth();

  constexpr float_t const& __get__tileWidth() const;

  constexpr void __set__tileWidth(float_t value);

  constexpr float_t& __get__tileHeight();

  constexpr float_t const& __get__tileHeight() const;

  constexpr void __set__tileHeight(float_t value);

  constexpr ::UnityEngine::Vector3& __get__anchorPoint();

  constexpr ::UnityEngine::Vector3 const& __get__anchorPoint() const;

  constexpr void __set__anchorPoint(::UnityEngine::Vector3 value);

  constexpr int32_t& __get__ySize();

  constexpr int32_t const& __get__ySize() const;

  constexpr void __set__ySize(int32_t value);

  /// @brief Method get_ySize addr 0x122da48 size 0x8 virtual false final false
  inline int32_t get_ySize();

  /// @brief Method Init addr 0x122cb58 size 0x194 virtual false final false
  inline void Init(::UnityEngine::Vector3 anchorPoint, int32_t xSize, int32_t ySize, float_t tileWidth, float_t tileHeight);

  /// @brief Method HighlightTile addr 0x122d0f4 size 0x1b8 virtual false final false
  inline void HighlightTile(int32_t x, int32_t y, float_t fadeInDuration, float_t fadeOutDuration, ::UnityEngine::Color color);

  /// @brief Method DespawnAllTiles addr 0x122da50 size 0xc0 virtual false final false
  inline void DespawnAllTiles();

  /// @brief Method HandleFloorLightTileDidFinish addr 0x122db70 size 0x4 virtual false final false
  inline void HandleFloorLightTileDidFinish(::Ice::FloorLightTile* floorLightTile);

  /// @brief Method DespawnTile addr 0x122db10 size 0x60 virtual false final false
  inline void DespawnTile(::Ice::FloorLightTile* floorLightTile);

  static inline ::Ice::FloorLightTilesGrid* New_ctor();

  /// @brief Method .ctor addr 0x122db74 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTilesGrid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightTilesGrid(FloorLightTilesGrid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTilesGrid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightTilesGrid(FloorLightTilesGrid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightTilesGrid();

public:
  /// @brief Field _floorLightTileMemoryPool, offset: 0x18, size: 0x8, def value: None
  ::Ice::__FloorLightTile__Pool* ____floorLightTileMemoryPool;

  /// @brief Field _floorLightTileMemoryPoolContainer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile*>* ____floorLightTileMemoryPoolContainer;

  /// @brief Field _grid, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>, ::Array<::ArrayW<::Ice::FloorLightTile*, ::Array<::Ice::FloorLightTile*>*>>*> ____grid;

  /// @brief Field _tileWidth, offset: 0x30, size: 0x4, def value: None
  float_t ____tileWidth;

  /// @brief Field _tileHeight, offset: 0x34, size: 0x4, def value: None
  float_t ____tileHeight;

  /// @brief Field _anchorPoint, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____anchorPoint;

  /// @brief Field _ySize, offset: 0x44, size: 0x4, def value: None
  int32_t ____ySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTilesGrid, 0x48>, "Size mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____floorLightTileMemoryPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____floorLightTileMemoryPoolContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____grid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____tileWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____tileHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____anchorPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ice::FloorLightTilesGrid, ____ySize) == 0x44, "Offset mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTilesGrid*, "Ice", "FloorLightTilesGrid");
