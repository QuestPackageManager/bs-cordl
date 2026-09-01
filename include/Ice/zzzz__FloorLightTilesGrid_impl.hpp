#pragma once
// IWYU pragma private; include "Ice\FloorLightTilesGrid.hpp"
#include "GlobalNamespace/zzzz__AbstractPoolContainer_impl.hpp"
#include "Ice/zzzz__FloorLightTile_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Ice/zzzz__FloorLightTilesGrid_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightTilesGrid.get_ySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ice::FloorLightTilesGrid::*)()>(&::Ice::FloorLightTilesGrid::get_ySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { "get_ySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTilesGrid.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTilesGrid::*)(::UnityEngine::Vector3, int32_t, int32_t, float_t, float_t)>(&::Ice::FloorLightTilesGrid::Init)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3289358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(),
                            { "Init", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTilesGrid.HighlightTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTilesGrid::*)(int32_t, int32_t, float_t, float_t, ::UnityEngine::Color)>(&::Ice::FloorLightTilesGrid::HighlightTile)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x32898d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Ice::FloorLightTilesGrid*>(),
            { "HighlightTile", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTilesGrid.DespawnAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTilesGrid::*)()>(&::Ice::FloorLightTilesGrid::DespawnAll)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x328a280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { ::i2c::class_of<::Ice::FloorLightTilesGrid*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTilesGrid.HandleFloorLightTileDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTilesGrid::*)(::Ice::FloorLightTile*)>(&::Ice::FloorLightTilesGrid::HandleFloorLightTileDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328a3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { "HandleFloorLightTileDidFinish", {}, { ::i2c::type_of<::Ice::FloorLightTile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTilesGrid.DespawnTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTilesGrid::*)(::Ice::FloorLightTile*)>(&::Ice::FloorLightTilesGrid::DespawnTile)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x328a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { "DespawnTile", {}, { ::i2c::type_of<::Ice::FloorLightTile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTilesGrid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTilesGrid::*)()>(&::Ice::FloorLightTilesGrid::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328a3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Ice::FloorLightTile_Pool*& Ice::FloorLightTilesGrid::__cordl_internal_get__floorLightTileMemoryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTileMemoryPool;
}
constexpr ::Ice::FloorLightTile_Pool* const& Ice::FloorLightTilesGrid::__cordl_internal_get__floorLightTileMemoryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTileMemoryPool;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__floorLightTileMemoryPool(::Ice::FloorLightTile_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorLightTileMemoryPool = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>*& Ice::FloorLightTilesGrid::__cordl_internal_get__floorLightTileMemoryPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTileMemoryPoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>* const& Ice::FloorLightTilesGrid::__cordl_internal_get__floorLightTileMemoryPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTileMemoryPoolContainer;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__floorLightTileMemoryPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::Ice::FloorLightTile>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorLightTileMemoryPoolContainer = value;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>>>& Ice::FloorLightTilesGrid::__cordl_internal_get__grid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grid;
}
constexpr ::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>>> const& Ice::FloorLightTilesGrid::__cordl_internal_get__grid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grid;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__grid(::ArrayW<::ArrayW<::UnityW<::Ice::FloorLightTile>>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grid = value;
}
constexpr float_t& Ice::FloorLightTilesGrid::__cordl_internal_get__tileWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileWidth;
}
constexpr float_t const& Ice::FloorLightTilesGrid::__cordl_internal_get__tileWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileWidth;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__tileWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileWidth = value;
}
constexpr float_t& Ice::FloorLightTilesGrid::__cordl_internal_get__tileHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileHeight;
}
constexpr float_t const& Ice::FloorLightTilesGrid::__cordl_internal_get__tileHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileHeight;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__tileHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileHeight = value;
}
constexpr ::UnityEngine::Vector3& Ice::FloorLightTilesGrid::__cordl_internal_get__anchorPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorPoint;
}
constexpr ::UnityEngine::Vector3 const& Ice::FloorLightTilesGrid::__cordl_internal_get__anchorPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorPoint;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__anchorPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____anchorPoint = value;
}
constexpr int32_t& Ice::FloorLightTilesGrid::__cordl_internal_get__ySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ySize;
}
constexpr int32_t const& Ice::FloorLightTilesGrid::__cordl_internal_get__ySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ySize;
}
constexpr void Ice::FloorLightTilesGrid::__cordl_internal_set__ySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ySize = value;
}
inline int32_t Ice::FloorLightTilesGrid::get_ySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { "get_ySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ice::FloorLightTilesGrid::Init(::UnityEngine::Vector3 anchorPoint, int32_t xSize, int32_t ySize, float_t tileWidth, float_t tileHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(),
                          { "Init", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorPoint, xSize, ySize, tileWidth, tileHeight);
}
inline void Ice::FloorLightTilesGrid::HighlightTile(int32_t x, int32_t y, float_t fadeInDuration, float_t fadeOutDuration, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Ice::FloorLightTilesGrid*>(),
          { "HighlightTile", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, fadeInDuration, fadeOutDuration, color);
}
inline void Ice::FloorLightTilesGrid::DespawnAll() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Ice::FloorLightTilesGrid*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightTilesGrid::HandleFloorLightTileDidFinish(::Ice::FloorLightTile* floorLightTile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { "HandleFloorLightTileDidFinish", {}, { ::i2c::type_of<::Ice::FloorLightTile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, floorLightTile);
}
inline void Ice::FloorLightTilesGrid::DespawnTile(::Ice::FloorLightTile* floorLightTile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { "DespawnTile", {}, { ::i2c::type_of<::Ice::FloorLightTile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, floorLightTile);
}
inline void Ice::FloorLightTilesGrid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTilesGrid*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightTilesGrid* Ice::FloorLightTilesGrid::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::FloorLightTilesGrid*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTilesGrid::FloorLightTilesGrid() {}
