#pragma once
// IWYU pragma private; include "GlobalNamespace\MockBeatmapObjectManager.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.get_activeObstacleControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* (::GlobalNamespace::MockBeatmapObjectManager::*)()>(
    &::GlobalNamespace::MockBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ccf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ::by_ref<::GlobalNamespace::ObstacleSpawnData>)>(
    &::GlobalNamespace::MockBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.ProcessNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool)>(
    &::GlobalNamespace::MockBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.ProcessSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>)>(
    &::GlobalNamespace::MockBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MockBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MockBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MockBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapObjectManager::*)()>(&::GlobalNamespace::MockBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ccfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* GlobalNamespace::MockBeatmapObjectManager::get_activeObstacleControllers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::by_ref<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::MockBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                       bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::MockBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData, sliderSpawnData);
}
inline void GlobalNamespace::MockBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MockBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MockBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline void GlobalNamespace::MockBeatmapObjectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapObjectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockBeatmapObjectManager* GlobalNamespace::MockBeatmapObjectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockBeatmapObjectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapObjectManager::MockBeatmapObjectManager() {}
