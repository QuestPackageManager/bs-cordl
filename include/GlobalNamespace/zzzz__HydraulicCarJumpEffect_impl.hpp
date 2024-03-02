#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarJumpEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xe78d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe78e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xe78ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe78fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValues;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__eventValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidbody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__eventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__eventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventValuesHashSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HydraulicCarJumpEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::HydraulicCarJumpEffect* GlobalNamespace::HydraulicCarJumpEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HydraulicCarJumpEffect*>());
}
inline void GlobalNamespace::HydraulicCarJumpEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydraulicCarJumpEffect::HydraulicCarJumpEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
