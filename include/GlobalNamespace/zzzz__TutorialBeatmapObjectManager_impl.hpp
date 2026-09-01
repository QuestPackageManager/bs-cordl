#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialBeatmapObjectManager.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager_InitData::*)(float_t)>(&::GlobalNamespace::TutorialBeatmapObjectManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597da58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TutorialBeatmapObjectManager_InitData::__cordl_internal_get_cutAngleTolerance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutAngleTolerance;
}
constexpr float_t const& GlobalNamespace::TutorialBeatmapObjectManager_InitData::__cordl_internal_get_cutAngleTolerance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutAngleTolerance;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager_InitData::__cordl_internal_set_cutAngleTolerance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutAngleTolerance = value;
}
inline void GlobalNamespace::TutorialBeatmapObjectManager_InitData::_ctor(float_t cutAngleTolerance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutAngleTolerance);
}
inline ::GlobalNamespace::TutorialBeatmapObjectManager_InitData* GlobalNamespace::TutorialBeatmapObjectManager_InitData::New_ctor(float_t cutAngleTolerance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialBeatmapObjectManager_InitData*>(cutAngleTolerance));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialBeatmapObjectManager_InitData::TutorialBeatmapObjectManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.get_activeObstacleControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* (::GlobalNamespace::TutorialBeatmapObjectManager::*)()>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x597d4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(
    ::GlobalNamespace::TutorialBeatmapObjectManager_InitData*, ::GlobalNamespace::IRandom*, ::GlobalNamespace::VariableMovementDataProvider*, ::GlobalNamespace::TutorialNoteController_Pool*,
    ::GlobalNamespace::BombNoteController_Pool*, ::GlobalNamespace::ObstacleController_Pool*)>(&::GlobalNamespace::TutorialBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x597d50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::TutorialBeatmapObjectManager_InitData*>(), ::i2c::type_of<::GlobalNamespace::IRandom*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>(), ::i2c::type_of<::GlobalNamespace::TutorialNoteController_Pool*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BombNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::ObstacleController_Pool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ::by_ref<::GlobalNamespace::ObstacleSpawnData>)>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x597d660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.ProcessNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool)>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x597d710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.ProcessSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>)>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597d870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x597d874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x597d9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597da54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>*&
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__tutorialNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* const&
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__tutorialNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialNotePoolContainer;
}
constexpr void
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_set__tutorialNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialNotePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__bombNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* const&
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__bombNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePoolContainer;
}
constexpr void
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNotePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__obstaclePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* const&
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__obstaclePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePoolContainer;
}
constexpr void
GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclePoolContainer = value;
}
constexpr ::GlobalNamespace::TutorialBeatmapObjectManager_InitData*& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::TutorialBeatmapObjectManager_InitData* const& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_set__initData(::GlobalNamespace::TutorialBeatmapObjectManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider*& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider* const& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::GlobalNamespace::IRandom*& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::GlobalNamespace::IRandom* const& GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__cordl_internal_set__random(::GlobalNamespace::IRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::_ctor(::GlobalNamespace::TutorialBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IRandom* random,
                                                                 ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider,
                                                                 ::GlobalNamespace::TutorialNoteController_Pool* tutorialNotePool, ::GlobalNamespace::BombNoteController_Pool* bombNotePool,
                                                                 ::GlobalNamespace::ObstacleController_Pool* obstaclePool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::TutorialBeatmapObjectManager_InitData*>(), ::i2c::type_of<::GlobalNamespace::IRandom*>(),
                                                               ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>(), ::i2c::type_of<::GlobalNamespace::TutorialNoteController_Pool*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BombNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::ObstacleController_Pool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, random, variableMovementDataProvider, tutorialNotePool, bombNotePool, obstaclePool);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::by_ref<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                           bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData, sliderSpawnData);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialBeatmapObjectManager*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline ::GlobalNamespace::TutorialBeatmapObjectManager*
GlobalNamespace::TutorialBeatmapObjectManager::New_ctor(::GlobalNamespace::TutorialBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IRandom* random,
                                                        ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider, ::GlobalNamespace::TutorialNoteController_Pool* tutorialNotePool,
                                                        ::GlobalNamespace::BombNoteController_Pool* bombNotePool, ::GlobalNamespace::ObstacleController_Pool* obstaclePool) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::TutorialBeatmapObjectManager*>(initData, random, variableMovementDataProvider, tutorialNotePool, bombNotePool, obstaclePool));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialBeatmapObjectManager::TutorialBeatmapObjectManager() {}
