#pragma once
// IWYU pragma private; include "Ice/NoteCutFloorLightStreakTileEffectSpawnerLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "Ice/zzzz__NoteCutFloorLightStreakTileEffectSpawnerLightWithId_def.hpp"
#include "Ice/zzzz__NoteCutFloorLightStreakTileEffectSpawner_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::*)(::UnityEngine::Color)>(
    &::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32894f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>(),
                                                                                          { ::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::*)()>(&::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3289514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner>& Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::__cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutFloorLightStreakTileEffectSpawner;
}
constexpr ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> const&
Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::__cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutFloorLightStreakTileEffectSpawner;
}
constexpr void
Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::__cordl_internal_set__noteCutFloorLightStreakTileEffectSpawner(::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutFloorLightStreakTileEffectSpawner = value;
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId* Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>());
}
// Ctor Parameters []
constexpr ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::NoteCutFloorLightStreakTileEffectSpawnerLightWithId() {}
