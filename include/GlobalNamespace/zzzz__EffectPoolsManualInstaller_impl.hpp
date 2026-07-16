#pragma once
// IWYU pragma private; include "GlobalNamespace/EffectPoolsManualInstaller.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EffectPoolsManualInstaller.ManualInstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EffectPoolsManualInstaller::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x59f4a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EffectPoolsManualInstaller*>(),
                                                                                           { "ManualInstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EffectPoolsManualInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EffectPoolsManualInstaller::*)()>(&::GlobalNamespace::EffectPoolsManualInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f4c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EffectPoolsManualInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FlyingTextEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__flyingTextEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingTextEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FlyingTextEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__flyingTextEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingTextEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__flyingTextEffectPrefab(::UnityW<::GlobalNamespace::FlyingTextEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flyingTextEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::FlyingScoreEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__flyingScoreEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FlyingScoreEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__flyingScoreEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__flyingScoreEffectPrefab(::UnityW<::GlobalNamespace::FlyingScoreEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flyingScoreEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__beatEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__beatEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__beatEffectPrefab(::UnityW<::GlobalNamespace::BeatEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__shortBeatEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortBeatEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__shortBeatEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortBeatEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__shortBeatEffectPrefab(::UnityW<::GlobalNamespace::BeatEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shortBeatEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__noteCutSoundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__noteCutSoundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutSoundEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__noteCutSoundEffectPrefab(::UnityW<::GlobalNamespace::NoteCutSoundEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutSoundEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BombCutSoundEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__bombCutSoundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCutSoundEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BombCutSoundEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__bombCutSoundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombCutSoundEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__bombCutSoundEffectPrefab(::UnityW<::GlobalNamespace::BombCutSoundEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombCutSoundEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::FlyingSpriteEffect>& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__flyingSpriteEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FlyingSpriteEffect> const& GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_get__flyingSpriteEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPrefab;
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__cordl_internal_set__flyingSpriteEffectPrefab(::UnityW<::GlobalNamespace::FlyingSpriteEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flyingSpriteEffectPrefab = value;
}
inline void GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings(::Zenject::DiContainer* container, bool shortBeatEffect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EffectPoolsManualInstaller*>(),
                                                                                         { "ManualInstallBindings", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, shortBeatEffect);
}
inline void GlobalNamespace::EffectPoolsManualInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EffectPoolsManualInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EffectPoolsManualInstaller* GlobalNamespace::EffectPoolsManualInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EffectPoolsManualInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EffectPoolsManualInstaller::EffectPoolsManualInstaller() {}
