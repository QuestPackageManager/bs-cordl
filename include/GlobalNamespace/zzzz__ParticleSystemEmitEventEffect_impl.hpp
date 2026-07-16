#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEmitEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__SongSpeedData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventType, ::UnityEngine::Transform*, int32_t, ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BeatmapCallbacksController*,
    ::GlobalNamespace::ParticleSystemEventController_Pool*)>(&::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5998474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ParticleSystemEventController_Pool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5998618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x599878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior.EmitParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ParticleSystemEventController> (::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::*)(
    float_t)>(&::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::EmitParticles)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x599890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>*&
GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemEventControllerPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerPoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>* const&
GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemEventControllerPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerPoolContainer;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_set__particleSystemEventControllerPoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemEventControllerPoolContainer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemParentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemParentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_set__particleSystemParentTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemParentTransform = value;
}
constexpr int32_t& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemMaxSpawnedSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr int32_t const& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemMaxSpawnedSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_set__particleSystemMaxSpawnedSystems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemMaxSpawnedSystems = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent,
                                                                                             ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                                                                                             ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                             ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                             ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                               ::i2c::type_of<::GlobalNamespace::ParticleSystemEventController_Pool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController,
                                                   particleSystemEventControllerPool);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline ::UnityW<::GlobalNamespace::ParticleSystemEventController> GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::EmitParticles(float_t startTime) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ParticleSystemEventController>>(this, ___internal_method, startTime);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*
GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform,
                                                                                    int32_t particleSystemMaxSpawnedSystems, ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*>(beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems,
                                                                                                                    audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventType, ::UnityEngine::Transform*, int32_t, ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BeatmapCallbacksController*,
    ::GlobalNamespace::ParticleSystemEventController_Pool*, ::Zenject::TickableManager*)>(&::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5998ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ParticleSystemEventController_Pool*>(), ::i2c::type_of<::Zenject::TickableManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::Tick)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5998af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5998ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(),
                                                            { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Zenject::TickableManager*& GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::__cordl_internal_get__tickableManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickableManager;
}
constexpr ::Zenject::TickableManager* const& GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::__cordl_internal_get__tickableManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickableManager;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::__cordl_internal_set__tickableManager(::Zenject::TickableManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tickableManager = value;
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent,
                                                                                                          ::UnityEngine::Transform* particleSystemParentTransform,
                                                                                                          int32_t particleSystemMaxSpawnedSystems, ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                          ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                          ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool,
                                                                                                          ::Zenject::TickableManager* tickableManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                               ::i2c::type_of<::GlobalNamespace::ParticleSystemEventController_Pool*>(), ::i2c::type_of<::Zenject::TickableManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController,
                                                   particleSystemEventControllerPool, tickableManager);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::Tick() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior* GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::New_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*>(
                                              beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController,
                                              particleSystemEventControllerPool, tickableManager));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventType, ::UnityEngine::Transform*, int32_t, ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BeatmapCallbacksController*,
    ::GlobalNamespace::ParticleSystemEventController_Pool*, ::GlobalNamespace::PauseController*, ::GlobalNamespace::SongSpeedData*)>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5998ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ParticleSystemEventController_Pool*>(), ::i2c::type_of<::GlobalNamespace::PauseController*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::SongSpeedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5999054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(),
                                                            { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior.HandlePauseControllerDidPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59991e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), { "HandlePauseControllerDidPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior.HandlePauseControllerDidResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5999334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), { "HandlePauseControllerDidResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior.EmitParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityW<::GlobalNamespace::ParticleSystemEventController> (::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::*)(float_t)>(
        &::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::EmitParticles)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5999480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(),
                                                            { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::__cordl_internal_get__pauseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::__cordl_internal_get__pauseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseController;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::__cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseController = value;
}
constexpr ::GlobalNamespace::SongSpeedData*& GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::__cordl_internal_get__songSpeedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedData;
}
constexpr ::GlobalNamespace::SongSpeedData* const& GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::__cordl_internal_get__songSpeedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedData;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::__cordl_internal_set__songSpeedData(::GlobalNamespace::SongSpeedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSpeedData = value;
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController, ::GlobalNamespace::SongSpeedData* songSpeedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(),
                                                               ::i2c::type_of<::GlobalNamespace::ParticleSystemEventController_Pool*>(), ::i2c::type_of<::GlobalNamespace::PauseController*>(),
                                                               ::i2c::type_of<::GlobalNamespace::SongSpeedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController,
                                                   particleSystemEventControllerPool, pauseController, songSpeedData);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), { "HandlePauseControllerDidPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), { "HandlePauseControllerDidResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ParticleSystemEventController> GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::EmitParticles(float_t startTime) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ParticleSystemEventController>>(this, ___internal_method, startTime);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior* GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::New_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController, ::GlobalNamespace::SongSpeedData* songSpeedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*>(
                                              beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController,
                                              particleSystemEventControllerPool, pauseController, songSpeedData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEmitEventEffect::Start)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x59981e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5998450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEmitEventEffect::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5998468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__beatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__beatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEvent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemParentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemParentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__particleSystemParentTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemParentTransform = value;
}
constexpr int32_t& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemMaxSpawnedSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr int32_t const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemMaxSpawnedSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__particleSystemMaxSpawnedSystems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemMaxSpawnedSystems = value;
}
constexpr ::GlobalNamespace::EnvironmentContext& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__environmentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr ::GlobalNamespace::EnvironmentContext const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__environmentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentContext = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__diContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diContainer;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__diContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diContainer;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__diContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____diContainer = value;
}
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemEmitBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEmitBehavior;
}
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemEmitBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEmitBehavior;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__particleSystemEmitBehavior(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemEmitBehavior = value;
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemEmitEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffect* GlobalNamespace::ParticleSystemEmitEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleSystemEmitEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitEventEffect() {}
