#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingSpriteSpawner.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner.SpawnFlyingSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5987520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingSpriteSpawner*>(),
                            { "SpawnFlyingSprite", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner.HandleFlyingObjectEffectDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(
    &::GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x598831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingSpriteSpawner*>(),
                                                                                           { "HandleFlyingObjectEffectDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::FlyingObjectEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)()>(&::GlobalNamespace::FlyingSpriteSpawner::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x598844c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingSpriteSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sprite = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__xSpread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSpread;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__xSpread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSpread;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__xSpread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xSpread = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__targetYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetYPos;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__targetYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetYPos;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__targetYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetYPos = value;
}
constexpr float_t& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__targetZPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetZPos;
}
constexpr float_t const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__targetZPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetZPos;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__targetZPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetZPos = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr bool& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__shake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr bool const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__shake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__shake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shake = value;
}
constexpr ::GlobalNamespace::FlyingSpriteEffect_Pool*& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__flyingSpriteEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPool;
}
constexpr ::GlobalNamespace::FlyingSpriteEffect_Pool* const& GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_get__flyingSpriteEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingSpriteEffectPool;
}
constexpr void GlobalNamespace::FlyingSpriteSpawner::__cordl_internal_set__flyingSpriteEffectPool(::GlobalNamespace::FlyingSpriteEffect_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flyingSpriteEffectPool = value;
}
inline void GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingSpriteSpawner*>(),
                          { "SpawnFlyingSprite", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rotation, inverseRotation);
}
inline void GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingSpriteSpawner*>(),
                                                                                         { "HandleFlyingObjectEffectDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::FlyingObjectEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flyingObjectEffect);
}
inline void GlobalNamespace::FlyingSpriteSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingSpriteSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingSpriteSpawner* GlobalNamespace::FlyingSpriteSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlyingSpriteSpawner*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr GlobalNamespace::FlyingSpriteSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* GlobalNamespace::FlyingSpriteSpawner::i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingSpriteSpawner::FlyingSpriteSpawner() {}
