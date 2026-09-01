#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDataObstaclesAndBombsTransform.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataObstaclesAndBombsTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataObstaclesAndBombsTransform_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3705b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0._CreateTransformedData_g__ProcessData_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::*)(::GlobalNamespace::BeatmapDataItem*)>(
        &::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3705c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0*>(),
                                                             { "<CreateTransformedData>g__ProcessData|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType& GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::__cordl_internal_get_enabledObstaclesType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstaclesType;
}
constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const&
GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::__cordl_internal_get_enabledObstaclesType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstaclesType;
}
constexpr void GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::__cordl_internal_set_enabledObstaclesType(::GlobalNamespace::GameplayModifiers_EnabledObstacleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabledObstaclesType = value;
}
constexpr bool& GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::__cordl_internal_get_noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr bool const& GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::__cordl_internal_get_noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr void GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::__cordl_internal_set_noBombs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noBombs = value;
}
inline void GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem*
GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0*>(),
                                                           { "<CreateTransformedData>g__ProcessData|0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method, beatmapDataItem);
}
inline ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0* GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::GameplayModifiers_EnabledObstacleType,
                                                                                                    bool)>(&::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x37059cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*>(),
                            { "CreateTransformedData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform.ShouldUseBeatmapDataItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::GameplayModifiers_EnabledObstacleType, bool)>(
    &::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::ShouldUseBeatmapDataItem)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3705b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*>(),
                            { "ShouldUseBeatmapDataItem",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData*
GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                              ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstaclesType, bool noBombs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*>(),
                          { "CreateTransformedData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(nullptr, ___internal_method, beatmapData, enabledObstaclesType, noBombs);
}
inline bool GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::ShouldUseBeatmapDataItem(::GlobalNamespace::BeatmapDataItem* beatmapDataItem,
                                                                                             ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstaclesType, bool noBombs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*>(),
                          { "ShouldUseBeatmapDataItem",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapDataItem*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers_EnabledObstacleType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, beatmapDataItem, enabledObstaclesType, noBombs);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::BeatmapDataObstaclesAndBombsTransform() {}
