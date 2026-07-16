#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatEffectSpawner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner_InitData::*)(bool)>(&::GlobalNamespace::BeatEffectSpawner_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5987df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatEffectSpawner_InitData::__cordl_internal_get_hideNoteSpawnEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr bool const& GlobalNamespace::BeatEffectSpawner_InitData::__cordl_internal_get_hideNoteSpawnEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr void GlobalNamespace::BeatEffectSpawner_InitData::__cordl_internal_set_hideNoteSpawnEffect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideNoteSpawnEffect = value;
}
inline void GlobalNamespace::BeatEffectSpawner_InitData::_ctor(bool hideNoteSpawnEffect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hideNoteSpawnEffect);
}
inline ::GlobalNamespace::BeatEffectSpawner_InitData* GlobalNamespace::BeatEffectSpawner_InitData::New_ctor(bool hideNoteSpawnEffect) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatEffectSpawner_InitData*>(hideNoteSpawnEffect));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatEffectSpawner_InitData::BeatEffectSpawner_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::BeatEffect_Pool*)>(&::GlobalNamespace::BeatEffectSpawner::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5987718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::BeatEffect_Pool*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x598779c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x598782c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::Update)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59878c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.HandleNoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5987a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "HandleNoteDidStartJump", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.HandleBeatEffectDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::BeatEffect*)>(
    &::GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5987cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "HandleBeatEffectDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::BeatEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5987de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__effectDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectDuration;
}
constexpr float_t const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__effectDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectDuration;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__effectDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bombColorEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombColorEffect;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bombColorEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombColorEffect;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__bombColorEffect(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombColorEffect = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::BeatEffectSpawner_InitData*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::BeatEffectSpawner_InitData* const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__initData(::GlobalNamespace::BeatEffectSpawner_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFog = value;
}
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songController = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatEffectPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatEffectPoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>* const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatEffectPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatEffectPoolContainer;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatEffectPoolContainer = value;
}
inline void GlobalNamespace::BeatEffectSpawner::Init(::GlobalNamespace::BeatEffect_Pool* beatEffectPool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::BeatEffect_Pool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatEffectPool);
}
inline void GlobalNamespace::BeatEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "HandleNoteDidStartJump", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { "HandleBeatEffectDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::BeatEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatEffect);
}
inline void GlobalNamespace::BeatEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatEffectSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatEffectSpawner* GlobalNamespace::BeatEffectSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatEffectSpawner*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr GlobalNamespace::BeatEffectSpawner::operator ::GlobalNamespace::IBeatEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IBeatEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr ::GlobalNamespace::IBeatEffectDidFinishEvent* GlobalNamespace::BeatEffectSpawner::i___GlobalNamespace__IBeatEffectDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::IBeatEffectDidFinishEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatEffectSpawner::BeatEffectSpawner() {}
