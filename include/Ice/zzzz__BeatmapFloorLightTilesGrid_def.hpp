#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapFloorLightTilesGrid)
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace Ice {
class FloorLightTilesGrid;
}
// Forward declare root types
namespace Ice {
class BeatmapFloorLightTilesGrid;
}
// Write type traits
MARK_REF_PTR_T(::Ice::BeatmapFloorLightTilesGrid);
// Type: Ice::BeatmapFloorLightTilesGrid
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// CS Name: ::Ice::BeatmapFloorLightTilesGrid*
class CORDL_TYPE BeatmapFloorLightTilesGrid : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectSpawnController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController,
                      put = __cordl_internal_set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _floorLightTilesGrid, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floorLightTilesGrid, put = __cordl_internal_set__floorLightTilesGrid))::UnityW<::Ice::FloorLightTilesGrid> _floorLightTilesGrid;

  /// @brief Field _numberOfRows, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfRows, put = __cordl_internal_set__numberOfRows)) int32_t _numberOfRows;

  /// @brief Field _tileHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__tileHeight, put = __cordl_internal_set__tileHeight)) float_t _tileHeight;

  /// @brief Field _tileWidth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__tileWidth, put = __cordl_internal_set__tileWidth)) float_t _tileWidth;

  static inline ::Ice::BeatmapFloorLightTilesGrid* New_ctor();

  /// @brief Method Start, addr 0xe95160, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr ::UnityW<::Ice::FloorLightTilesGrid> const& __cordl_internal_get__floorLightTilesGrid() const;

  constexpr ::UnityW<::Ice::FloorLightTilesGrid>& __cordl_internal_get__floorLightTilesGrid();

  constexpr int32_t const& __cordl_internal_get__numberOfRows() const;

  constexpr int32_t& __cordl_internal_get__numberOfRows();

  constexpr float_t const& __cordl_internal_get__tileHeight() const;

  constexpr float_t& __cordl_internal_get__tileHeight();

  constexpr float_t const& __cordl_internal_get__tileWidth() const;

  constexpr float_t& __cordl_internal_get__tileWidth();

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr void __cordl_internal_set__floorLightTilesGrid(::UnityW<::Ice::FloorLightTilesGrid> value);

  constexpr void __cordl_internal_set__numberOfRows(int32_t value);

  constexpr void __cordl_internal_set__tileHeight(float_t value);

  constexpr void __cordl_internal_set__tileWidth(float_t value);

  /// @brief Method .ctor, addr 0xe953e4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapFloorLightTilesGrid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapFloorLightTilesGrid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapFloorLightTilesGrid(BeatmapFloorLightTilesGrid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapFloorLightTilesGrid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapFloorLightTilesGrid(BeatmapFloorLightTilesGrid const&) = delete;

  /// @brief Field _numberOfRows, offset: 0x18, size: 0x4, def value: None
  int32_t ____numberOfRows;

  /// @brief Field _tileWidth, offset: 0x1c, size: 0x4, def value: None
  float_t ____tileWidth;

  /// @brief Field _tileHeight, offset: 0x20, size: 0x4, def value: None
  float_t ____tileHeight;

  /// @brief Field _floorLightTilesGrid, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Ice::FloorLightTilesGrid> ____floorLightTilesGrid;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::BeatmapFloorLightTilesGrid, 0x38>, "Size mismatch!");

static_assert(offsetof(::Ice::BeatmapFloorLightTilesGrid, ____numberOfRows) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::BeatmapFloorLightTilesGrid, ____tileWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Ice::BeatmapFloorLightTilesGrid, ____tileHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::BeatmapFloorLightTilesGrid, ____floorLightTilesGrid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::BeatmapFloorLightTilesGrid, ____beatmapObjectSpawnController) == 0x30, "Offset mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::BeatmapFloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::BeatmapFloorLightTilesGrid*, "Ice", "BeatmapFloorLightTilesGrid");
