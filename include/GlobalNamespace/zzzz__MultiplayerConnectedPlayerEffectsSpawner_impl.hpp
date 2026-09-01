#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerEffectsSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerEffectsSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59ba6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59ba7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)(::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x59ba8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(),
                                                { "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59baa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner>& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_get__noteDebrisSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDebrisSpawner;
}
constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner> const& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_get__noteDebrisSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDebrisSpawner;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_set__noteDebrisSpawner(::UnityW<::GlobalNamespace::NoteDebrisSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteDebrisSpawner = value;
}
constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect>& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_get__bombExplosionEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionEffect;
}
constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect> const& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_get__bombExplosionEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombExplosionEffect;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_set__bombExplosionEffect(::UnityW<::GlobalNamespace::BombExplosionEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombExplosionEffect = value;
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_get__beatmapObjectEventManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* const& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_get__beatmapObjectEventManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectEventManager = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(),
                                              { "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner* GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::MultiplayerConnectedPlayerEffectsSpawner() {}
