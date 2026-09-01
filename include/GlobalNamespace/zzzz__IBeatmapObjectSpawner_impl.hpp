#pragma once
// IWYU pragma private; include "GlobalNamespace\IBeatmapObjectSpawner.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapObjectSpawner.ProcessNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatmapObjectSpawner::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool)>(
    &::GlobalNamespace::IBeatmapObjectSpawner::ProcessNoteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapObjectSpawner.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatmapObjectSpawner::*)(::GlobalNamespace::ObstacleData*, ::by_ref<::GlobalNamespace::ObstacleSpawnData>)>(
    &::GlobalNamespace::IBeatmapObjectSpawner::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapObjectSpawner.ProcessSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatmapObjectSpawner::*)(::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>)>(
    &::GlobalNamespace::IBeatmapObjectSpawner::ProcessSliderData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), 2 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatmapObjectSpawner::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::IBeatmapObjectSpawner::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::by_ref<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::IBeatmapObjectSpawner::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatmapObjectSpawner*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData, sliderSpawnData);
}
