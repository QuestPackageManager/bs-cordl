#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::__TrackLaneRingsRotationEffectSpawner__RotationStepType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::__TrackLaneRingsRotationEffectSpawner__RotationStepType() {}
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::Range0ToMax{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::Range{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::MaxOr0{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23b87dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b8900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23b891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(
    &::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23b89e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackLaneRingsRotationEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationStepType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStepType;
}
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__rotationStepType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationStepType;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__rotationStepType(::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType value) {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner* GlobalNamespace::TrackLaneRingsRotationEffectSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>());
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::TrackLaneRingsRotationEffectSpawner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
