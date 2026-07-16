#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredBeatmapObjectManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__MirroredBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(
    ::GlobalNamespace::BeatmapObjectManager*, ::GlobalNamespace::MirroredGameNoteController_Pool*, ::GlobalNamespace::MirroredGameNoteController_Pool*,
    ::GlobalNamespace::MirroredGameNoteController_Pool*, ::GlobalNamespace::MirroredBombNoteController_Pool*, ::GlobalNamespace::MirroredObstacleController_Pool*,
    ::GlobalNamespace::MirroredSliderController_Pool*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x58cd720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>(), ::i2c::type_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(),
                                                    ::i2c::type_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(),
                                                    ::i2c::type_of<::GlobalNamespace::MirroredBombNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MirroredObstacleController_Pool*>(),
                                                    ::i2c::type_of<::GlobalNamespace::MirroredSliderController_Pool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&::GlobalNamespace::MirroredBeatmapObjectManager::Dispose)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58cdb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58cde58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                           { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleNoteWasDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58ce07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                           { "HandleNoteWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58ce230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                           { "HandleObstacleWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleObstacleWasDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58ce458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                           { "HandleObstacleWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleSliderWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58ce530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                           { "HandleSliderWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleSliderWasDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasDespawned)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58ce788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                           { "HandleSliderWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleDidHideAllBeatmapObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(bool)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x58ce860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "HandleDidHideAllBeatmapObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.__InvalidateGameNotePools
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&::GlobalNamespace::MirroredBeatmapObjectManager::__InvalidateGameNotePools)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58cedd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "__InvalidateGameNotePools", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.__InvalidateBombNotePool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&::GlobalNamespace::MirroredBeatmapObjectManager::__InvalidateBombNotePool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58cee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "__InvalidateBombNotePool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&::GlobalNamespace::MirroredBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58cef38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBasicGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBasicGameNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBasicGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBasicGameNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBasicGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBasicGameNotePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBurstSliderHeadGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBurstSliderHeadGameNotePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBurstSliderGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBurstSliderGameNotePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBombNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBombNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBombNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBombNotePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredObstaclePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstaclePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredObstaclePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstaclePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredObstaclePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredObstaclePoolContainer = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredSlidersPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSlidersPoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredSlidersPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSlidersPoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredSlidersPoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredSlidersPoolContainer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::GlobalNamespace::IGameNoteMirrorable*,
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteControllersToMirroredGameNoteControllers;
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::GlobalNamespace::IGameNoteMirrorable*,
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteControllersToMirroredGameNoteControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__gameNoteControllersToMirroredGameNoteControllers(
    ::System::Collections::Generic::Dictionary_2<
        ::GlobalNamespace::IGameNoteMirrorable*,
        ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameNoteControllersToMirroredGameNoteControllers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNoteControllersToMirroredBombNoteControllers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNoteControllersToMirroredBombNoteControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__bombNoteControllersToMirroredBombNoteControllers(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNoteControllersToMirroredBombNoteControllers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__obstacleControllersToMirroredObstacleControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleControllersToMirroredObstacleControllers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__obstacleControllersToMirroredObstacleControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleControllersToMirroredObstacleControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__obstacleControllersToMirroredObstacleControllers(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleControllersToMirroredObstacleControllers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__sliderControllersToMirroredSliderControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderControllersToMirroredSliderControllers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__sliderControllersToMirroredSliderControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderControllersToMirroredSliderControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__sliderControllersToMirroredSliderControllers(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderControllersToMirroredSliderControllers = value;
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::Init(::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager,
                                                                ::GlobalNamespace::MirroredGameNoteController_Pool* mirroredBasicGameNotePool,
                                                                ::GlobalNamespace::MirroredGameNoteController_Pool* burstSliderHeadGameNotePool,
                                                                ::GlobalNamespace::MirroredGameNoteController_Pool* burstSliderGameNotePool,
                                                                ::GlobalNamespace::MirroredBombNoteController_Pool* mirroredBombNotePool,
                                                                ::GlobalNamespace::MirroredObstacleController_Pool* mirroredObstaclePool,
                                                                ::GlobalNamespace::MirroredSliderController_Pool* mirroredSlidersPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>(), ::i2c::type_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(),
                                                  ::i2c::type_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(),
                                                  ::i2c::type_of<::GlobalNamespace::MirroredBombNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MirroredObstacleController_Pool*>(),
                                                  ::i2c::type_of<::GlobalNamespace::MirroredSliderController_Pool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapObjectManager, mirroredBasicGameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool,
                                                   mirroredBombNotePool, mirroredObstaclePool, mirroredSlidersPool);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                         { "HandleNoteWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                         { "HandleObstacleWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                         { "HandleObstacleWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                         { "HandleSliderWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(),
                                                                                         { "HandleSliderWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "HandleDidHideAllBeatmapObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::__InvalidateGameNotePools() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "__InvalidateGameNotePools", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::__InvalidateBombNotePool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { "__InvalidateBombNotePool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredBeatmapObjectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredBeatmapObjectManager* GlobalNamespace::MirroredBeatmapObjectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredBeatmapObjectManager*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MirroredBeatmapObjectManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MirroredBeatmapObjectManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredBeatmapObjectManager::MirroredBeatmapObjectManager() {}
