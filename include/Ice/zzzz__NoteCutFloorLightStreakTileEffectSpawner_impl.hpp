#pragma once
// IWYU pragma private; include "Ice\NoteCutFloorLightStreakTileEffectSpawner.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Ice/zzzz__NoteCutFloorLightStreakTileEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "Ice/zzzz__FloorLightStreakTileEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawner.set_spawnColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawner::*)(::UnityEngine::Color)>(
    &::Ice::NoteCutFloorLightStreakTileEffectSpawner::set_spawnColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x328a3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "set_spawnColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawner.get_spawnColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&::Ice::NoteCutFloorLightStreakTileEffectSpawner::get_spawnColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x328a3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "get_spawnColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&::Ice::NoteCutFloorLightStreakTileEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x328a3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&::Ice::NoteCutFloorLightStreakTileEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x328a470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawner.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawner::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::Ice::NoteCutFloorLightStreakTileEffectSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x328a508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(),
                                                { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawner::*)()>(&::Ice::NoteCutFloorLightStreakTileEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Ice::FloorLightStreakTileEffect>& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__floorLightStreakTileEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightStreakTileEffect;
}
constexpr ::UnityW<::Ice::FloorLightStreakTileEffect> const& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__floorLightStreakTileEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightStreakTileEffect;
}
constexpr void Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_set__floorLightStreakTileEffect(::UnityW<::Ice::FloorLightStreakTileEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorLightStreakTileEffect = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::GlobalNamespace::ColorManager*& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::UnityEngine::Color& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__spawnColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnColor;
}
constexpr ::UnityEngine::Color const& Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_get__spawnColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnColor;
}
constexpr void Ice::NoteCutFloorLightStreakTileEffectSpawner::__cordl_internal_set__spawnColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnColor = value;
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawner::set_spawnColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "set_spawnColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Ice::NoteCutFloorLightStreakTileEffectSpawner::get_spawnColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "get_spawnColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::NoteCutFloorLightStreakTileEffectSpawner* Ice::NoteCutFloorLightStreakTileEffectSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::NoteCutFloorLightStreakTileEffectSpawner*>());
}
// Ctor Parameters []
constexpr ::Ice::NoteCutFloorLightStreakTileEffectSpawner::NoteCutFloorLightStreakTileEffectSpawner() {}
