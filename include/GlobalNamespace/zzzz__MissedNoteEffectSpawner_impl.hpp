#pragma once
// IWYU pragma private; include "GlobalNamespace\MissedNoteEffectSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissedNoteEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissedNoteEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissedNoteEffectSpawner::*)()>(&::GlobalNamespace::MissedNoteEffectSpawner::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x598a80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissedNoteEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissedNoteEffectSpawner::*)()>(&::GlobalNamespace::MissedNoteEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x598a8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissedNoteEffectSpawner.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissedNoteEffectSpawner::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MissedNoteEffectSpawner::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x598a97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissedNoteEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissedNoteEffectSpawner::*)()>(&::GlobalNamespace::MissedNoteEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598ab00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner>& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__missedNoteFlyingSpriteSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedNoteFlyingSpriteSpawner;
}
constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner> const& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__missedNoteFlyingSpriteSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedNoteFlyingSpriteSpawner;
}
constexpr void GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_set__missedNoteFlyingSpriteSpawner(::UnityW<::GlobalNamespace::FlyingSpriteSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missedNoteFlyingSpriteSpawner = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData*& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData* const& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_set__initData(::GlobalNamespace::CoreGameHUDController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr float_t& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__spawnPosZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnPosZ;
}
constexpr float_t const& GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_get__spawnPosZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnPosZ;
}
constexpr void GlobalNamespace::MissedNoteEffectSpawner::__cordl_internal_set__spawnPosZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnPosZ = value;
}
inline void GlobalNamespace::MissedNoteEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissedNoteEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissedNoteEffectSpawner::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MissedNoteEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissedNoteEffectSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissedNoteEffectSpawner* GlobalNamespace::MissedNoteEffectSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissedNoteEffectSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissedNoteEffectSpawner::MissedNoteEffectSpawner() {}
