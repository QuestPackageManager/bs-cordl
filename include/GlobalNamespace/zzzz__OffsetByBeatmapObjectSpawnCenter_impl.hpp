#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetByBeatmapObjectSpawnCenter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetByBeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(&::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58c1e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter.HandleSpawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)(float_t)>(
    &::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58c1f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>(), { "HandleSpawnCenterDistanceWasFound", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(&::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c1f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__cordl_internal_set__spawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenter = value;
}
inline void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound(float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>(), { "HandleSpawnCenterDistanceWasFound", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter* GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::OffsetByBeatmapObjectSpawnCenter() {}
