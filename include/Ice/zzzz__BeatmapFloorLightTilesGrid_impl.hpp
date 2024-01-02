#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Ice/zzzz__BeatmapFloorLightTilesGrid_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "Ice/zzzz__FloorLightTilesGrid_def.hpp"
//  Writing Method size for method: ::Ice::BeatmapFloorLightTilesGrid.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::BeatmapFloorLightTilesGrid::*)()>(&::Ice::BeatmapFloorLightTilesGrid::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x129ed94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::BeatmapFloorLightTilesGrid*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::BeatmapFloorLightTilesGrid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::BeatmapFloorLightTilesGrid::*)()>(&::Ice::BeatmapFloorLightTilesGrid::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x129f018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::BeatmapFloorLightTilesGrid*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& Ice::BeatmapFloorLightTilesGrid::__get__numberOfRows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfRows;
}
constexpr int32_t const& Ice::BeatmapFloorLightTilesGrid::__get__numberOfRows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfRows;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__numberOfRows(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfRows = value;
}
constexpr float_t& Ice::BeatmapFloorLightTilesGrid::__get__tileWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileWidth;
}
constexpr float_t const& Ice::BeatmapFloorLightTilesGrid::__get__tileWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileWidth;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__tileWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileWidth = value;
}
constexpr float_t& Ice::BeatmapFloorLightTilesGrid::__get__tileHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileHeight;
}
constexpr float_t const& Ice::BeatmapFloorLightTilesGrid::__get__tileHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileHeight;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__tileHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileHeight = value;
}
constexpr ::Ice::FloorLightTilesGrid*& Ice::BeatmapFloorLightTilesGrid::__get__floorLightTilesGrid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilesGrid;
}
constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightTilesGrid*> const& Ice::BeatmapFloorLightTilesGrid::__get__floorLightTilesGrid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilesGrid;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__floorLightTilesGrid(::Ice::FloorLightTilesGrid* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floorLightTilesGrid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& Ice::BeatmapFloorLightTilesGrid::__get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& Ice::BeatmapFloorLightTilesGrid::__get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Ice::BeatmapFloorLightTilesGrid::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::BeatmapFloorLightTilesGrid*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Ice::BeatmapFloorLightTilesGrid* Ice::BeatmapFloorLightTilesGrid::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Ice::BeatmapFloorLightTilesGrid*>());
}
inline void Ice::BeatmapFloorLightTilesGrid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::BeatmapFloorLightTilesGrid*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Ice::BeatmapFloorLightTilesGrid::BeatmapFloorLightTilesGrid() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
