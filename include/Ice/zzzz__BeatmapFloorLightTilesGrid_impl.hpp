#pragma once
// IWYU pragma private; include "Ice/BeatmapFloorLightTilesGrid.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Ice/zzzz__BeatmapFloorLightTilesGrid_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "Ice/zzzz__FloorLightTilesGrid_def.hpp"
//  Writing Method size for method: ::Ice::BeatmapFloorLightTilesGrid.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::BeatmapFloorLightTilesGrid::*)()>(&::Ice::BeatmapFloorLightTilesGrid::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x328826c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::BeatmapFloorLightTilesGrid*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::BeatmapFloorLightTilesGrid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::BeatmapFloorLightTilesGrid::*)()>(&::Ice::BeatmapFloorLightTilesGrid::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3288480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::BeatmapFloorLightTilesGrid*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__numberOfRows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfRows;
}
constexpr int32_t const& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__numberOfRows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfRows;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__cordl_internal_set__numberOfRows(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfRows = value;
}
constexpr float_t& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__tileWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileWidth;
}
constexpr float_t const& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__tileWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileWidth;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__cordl_internal_set__tileWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileWidth = value;
}
constexpr float_t& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__tileHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileHeight;
}
constexpr float_t const& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__tileHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileHeight;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__cordl_internal_set__tileHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileHeight = value;
}
constexpr ::UnityW<::Ice::FloorLightTilesGrid>& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__floorLightTilesGrid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilesGrid;
}
constexpr ::UnityW<::Ice::FloorLightTilesGrid> const& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__floorLightTilesGrid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilesGrid;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__cordl_internal_set__floorLightTilesGrid(::UnityW<::Ice::FloorLightTilesGrid> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorLightTilesGrid = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& Ice::BeatmapFloorLightTilesGrid::__cordl_internal_get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectSpawnController = value;
}
inline void Ice::BeatmapFloorLightTilesGrid::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::BeatmapFloorLightTilesGrid*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::BeatmapFloorLightTilesGrid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::BeatmapFloorLightTilesGrid*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::BeatmapFloorLightTilesGrid* Ice::BeatmapFloorLightTilesGrid::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::BeatmapFloorLightTilesGrid*>());
}
// Ctor Parameters []
constexpr ::Ice::BeatmapFloorLightTilesGrid::BeatmapFloorLightTilesGrid() {}
