#pragma once
// IWYU pragma private; include "GlobalNamespace\TrackLaneRingsRotationEffectSpawner.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType::TrackLaneRingsRotationEffectSpawner_RotationStepType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType::TrackLaneRingsRotationEffectSpawner_RotationStepType() {}
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType::Range0ToMax{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType::Range{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType::MaxOr0{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x59a9400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a9528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59a9544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59a9628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect>& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__trackLaneRingsRotationEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingsRotationEffect;
}
constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect> const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__trackLaneRingsRotationEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingsRotationEffect;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__trackLaneRingsRotationEffect(::UnityW<::GlobalNamespace::TrackLaneRingsRotationEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackLaneRingsRotationEffect = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStep;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStep;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__rotationStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationStep = value;
}
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationStepType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStepType;
}
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationStepType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStepType;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__rotationStepType(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner_RotationStepType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationStepType = value;
}
constexpr int32_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationPropagationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationPropagationSpeed;
}
constexpr int32_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationPropagationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationPropagationSpeed;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__rotationPropagationSpeed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationPropagationSpeed = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationFlexySpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationFlexySpeed;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationFlexySpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationFlexySpeed;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__rotationFlexySpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationFlexySpeed = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::IRandom*& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::GlobalNamespace::IRandom* const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__random(::GlobalNamespace::IRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner* GlobalNamespace::TrackLaneRingsRotationEffectSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::TrackLaneRingsRotationEffectSpawner() {}
