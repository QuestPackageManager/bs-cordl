#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutCoreEffectsSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutCoreEffectsSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ShockwaveEffect_def.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::Start)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5988aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5988c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5988cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.PlayHitNoteHapticEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::NoteCutInfo, ::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitNoteHapticEffect)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5989164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                             { "PlayHitNoteHapticEffect", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.PlayHitChainNoteHapticEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::NoteCutInfo, bool)>(
    &::GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitChainNoteHapticEffect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59892bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                             { "PlayHitChainNoteHapticEffect", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.SpawnNoteCutEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::by_ref<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*, int32_t,
                                                                                                              int32_t)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5988e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                             { "SpawnNoteCutEffect",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>(), ::i2c::type_of<::GlobalNamespace::NoteController*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.SpawnBombCutEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::by_ref<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5989268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                { "SpawnBombCutEffect", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>(), ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.IsArcHapticsCurrentlyActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::ColorType)>(
    &::GlobalNamespace::NoteCutCoreEffectsSpawner::IsArcHapticsCurrentlyActive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5989328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { "IsArcHapticsCurrentlyActive", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5989c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockWaveYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockWaveYPos;
}
constexpr float_t const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockWaveYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockWaveYPos;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__shockWaveYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shockWaveYPos = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutParticlesEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutParticlesEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutParticlesEffect;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutParticlesEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutParticlesEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutParticlesEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__noteCutParticlesEffect(::UnityW<::GlobalNamespace::NoteCutParticlesEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutParticlesEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteDebrisSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDebrisSpawner;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteDebrisSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDebrisSpawner;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__noteDebrisSpawner(::UnityW<::GlobalNamespace::NoteDebrisSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDebrisSpawner = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutHapticEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutHapticEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutHapticEffect;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutHapticEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__noteCutHapticEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutHapticEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__noteCutHapticEffect(::UnityW<::GlobalNamespace::NoteCutHapticEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutHapticEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::ShockwaveEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockwaveEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwaveEffect;
}
constexpr ::UnityW<::GlobalNamespace::ShockwaveEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__shockwaveEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwaveEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__shockwaveEffect(::UnityW<::GlobalNamespace::ShockwaveEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shockwaveEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__bombExplosionEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionEffect;
}
constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__bombExplosionEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionEffect;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__bombExplosionEffect(::UnityW<::GlobalNamespace::BombExplosionEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombExplosionEffect = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*&
GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__sliderInteractionManagers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderInteractionManagers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* const&
GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__sliderInteractionManagers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderInteractionManagers;
}
constexpr void
GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__sliderInteractionManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderInteractionManagers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>*&
GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__colorTypeToSliderInteractionManagerDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTypeToSliderInteractionManagerDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>* const&
GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_get__colorTypeToSliderInteractionManagerDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTypeToSliderInteractionManagerDictionary;
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__cordl_internal_set__colorTypeToSliderInteractionManagerDictionary(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ColorType, ::UnityW<::GlobalNamespace::SliderInteractionManager>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorTypeToSliderInteractionManagerDictionary = value;
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, ::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                           { "PlayHitNoteHapticEffect", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>(), ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo, noteData);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitChainNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, bool isChainHead) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                           { "PlayHitChainNoteHapticEffect", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfo>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo, isChainHead);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect(::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController,
                                                                           int32_t sparkleParticlesCount, int32_t explosionParticlesCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                                           { "SpawnNoteCutEffect",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>(), ::i2c::type_of<::GlobalNamespace::NoteController*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo, noteController, sparkleParticlesCount, explosionParticlesCount);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect(::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(),
                                              { "SpawnBombCutEffect", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>(), ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo, noteController);
}
inline bool GlobalNamespace::NoteCutCoreEffectsSpawner::IsArcHapticsCurrentlyActive(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { "IsArcHapticsCurrentlyActive", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colorType);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutCoreEffectsSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutCoreEffectsSpawner* GlobalNamespace::NoteCutCoreEffectsSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteCutCoreEffectsSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutCoreEffectsSpawner::NoteCutCoreEffectsSpawner() {}
