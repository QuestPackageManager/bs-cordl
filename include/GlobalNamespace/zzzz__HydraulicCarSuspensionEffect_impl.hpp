#pragma once
// IWYU pragma private; include "GlobalNamespace\HydraulicCarSuspensionEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarSuspensionEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__SpringJoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3288ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.OnInject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::OnInject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnInject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3288fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.TrySubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::TrySubscribe)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3288da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "TrySubscribe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.TryUnsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::TryUnsubscribe)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3288f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "TryUnsubscribe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.HandleContractBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::HandleContractBeatmapEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3288fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(),
                                                                                           { "HandleContractBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.HandleExpandBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::HandleExpandBeatmapEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32890a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(),
                                                                                           { "HandleExpandBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3289154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEvent;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractEvent = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValues;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValues;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractEventValues(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractEventValues = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEvent;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandEvent = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValues;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValues;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandEventValues(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandEventValues = value;
}
constexpr ::UnityW<::UnityEngine::SpringJoint>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__springJoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____springJoint;
}
constexpr ::UnityW<::UnityEngine::SpringJoint> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__springJoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____springJoint;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__springJoint(::UnityW<::UnityEngine::SpringJoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____springJoint = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractDistance;
}
constexpr float_t const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractDistance;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractDistance = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandDistance;
}
constexpr float_t const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandDistance;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandDistance = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__rigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__rigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rigidbody = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValuesHashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValuesHashSet;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractEventValuesHashSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValuesHashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValuesHashSet;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandEventValuesHashSet = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractBeatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractBeatmapDataCallbackWrapper = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandBeatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandBeatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::OnInject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnInject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::TrySubscribe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "TrySubscribe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::TryUnsubscribe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { "TryUnsubscribe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(),
                                                                                         { "HandleContractBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(),
                                                                                         { "HandleExpandBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HydraulicCarSuspensionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HydraulicCarSuspensionEffect* GlobalNamespace::HydraulicCarSuspensionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HydraulicCarSuspensionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydraulicCarSuspensionEffect::HydraulicCarSuspensionEffect() {}
