#pragma once
// IWYU pragma private; include "GlobalNamespace\HydraulicCarJumpEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarJumpEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x328889c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnInject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnInject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnInject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3288a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3288af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.TrySubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::TrySubscribe)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x328894c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "TrySubscribe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.TryUnsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::TryUnsubscribe)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3288ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "TryUnsubscribe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3288b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3288c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____event = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValues;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValues;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__eventValues(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValues = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__impulse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____impulse;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__impulse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____impulse;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__impulse(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____impulse = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__randomness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomness;
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__randomness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomness;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__randomness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomness = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__minDelayBetweenEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minDelayBetweenEvents;
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__minDelayBetweenEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minDelayBetweenEvents;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__minDelayBetweenEvents(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minDelayBetweenEvents = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__rigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__rigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rigidbody = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__lastEventTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEventTime;
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__lastEventTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEventTime;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__lastEventTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastEventTime = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValuesHashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValuesHashSet;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__eventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValuesHashSet = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::HydraulicCarJumpEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnInject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnInject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::TrySubscribe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "TrySubscribe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::TryUnsubscribe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "TryUnsubscribe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarJumpEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HydraulicCarJumpEffect* GlobalNamespace::HydraulicCarJumpEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HydraulicCarJumpEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydraulicCarJumpEffect::HydraulicCarJumpEffect() {}
