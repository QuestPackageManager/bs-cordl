#pragma once
// IWYU pragma private; include "GlobalNamespace\PhysicsPositionsMovementEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PhysicsPositionsMovementEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__SongTimeFixedUpdateController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhysicsPositionsMovementEventEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(&::GlobalNamespace::PhysicsPositionsMovementEventEffect::Start)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x59a05a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsPositionsMovementEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(&::GlobalNamespace::PhysicsPositionsMovementEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59a0870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsPositionsMovementEventEffect.HandleSongTimeFixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhysicsPositionsMovementEventEffect::*)(float_t)>(
    &::GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeFixedUpdate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59a0a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "HandleSongTimeFixedUpdate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsPositionsMovementEventEffect.HandleSongTimeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(
    &::GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59a0b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "HandleSongTimeUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsPositionsMovementEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhysicsPositionsMovementEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59a0b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhysicsPositionsMovementEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(&::GlobalNamespace::PhysicsPositionsMovementEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59a0bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____event = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__movementVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__movementVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementVector;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__movementVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementVector = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__stepSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__stepSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__stepSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepSize = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elasticity;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elasticity;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__elasticity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elasticity = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__friction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friction;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__friction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friction;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__friction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____friction = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__minMaxSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minMaxSpeed;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__minMaxSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minMaxSpeed;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__minMaxSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__maxMaxSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMaxSpeed;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__maxMaxSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMaxSpeed;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__maxMaxSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__maxAcceleration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAcceleration;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__maxAcceleration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAcceleration;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__maxAcceleration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxAcceleration = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeFixedUpdateController>& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__songTimeFixedUpdateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeFixedUpdateController;
}
constexpr ::UnityW<::GlobalNamespace::SongTimeFixedUpdateController> const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__songTimeFixedUpdateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeFixedUpdateController;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__songTimeFixedUpdateController(::UnityW<::GlobalNamespace::SongTimeFixedUpdateController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeFixedUpdateController = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__velocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__velocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____velocity;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__velocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____velocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__prevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__prevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__prevPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__targetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__targetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPosition;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__targetPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetPosition = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__maxSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpeed;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__maxSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpeed;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__maxSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxSpeed = value;
}
constexpr float_t& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__sqrMaxSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrMaxSpeed;
}
constexpr float_t const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__sqrMaxSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sqrMaxSpeed;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__sqrMaxSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sqrMaxSpeed = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::PhysicsPositionsMovementEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::PhysicsPositionsMovementEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhysicsPositionsMovementEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeFixedUpdate(float_t fixedDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "HandleSongTimeFixedUpdate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixedDeltaTime);
}
inline void GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { "HandleSongTimeUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::PhysicsPositionsMovementEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhysicsPositionsMovementEventEffect* GlobalNamespace::PhysicsPositionsMovementEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhysicsPositionsMovementEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhysicsPositionsMovementEventEffect::PhysicsPositionsMovementEventEffect() {}
