#pragma once
// IWYU pragma private; include "GlobalNamespace/LightPairSinMoveEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightPairSinMoveEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__LightPairSinMoveEventEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::*)()>(
    &::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26cdaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___speed;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___speed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_startPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_startPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPosition;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_startPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_startMovementValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startMovementValue;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_startMovementValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startMovementValue;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_startMovementValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startMovementValue = value;
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_movementValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___movementValue;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_movementValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___movementValue;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_movementValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___movementValue = value;
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_side() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___side;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_get_side() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___side;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__cordl_internal_set_side(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___side = value;
}
inline ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>());
}
inline void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__LightPairSinMoveEventEffect__MovementData() {}
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::Start)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x26cd790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(
    &::GlobalNamespace::LightPairSinMoveEventEffect::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x26cdaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(
    &::GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26cdc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x26cdc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.UpdateMovementData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)(
    int32_t, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, float_t)>(&::GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26cddf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "UpdateMovementData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26cdf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__eventL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventL;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__eventL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventL;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__eventL(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventL = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__eventR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventR;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__eventR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventR;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__eventR(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventR = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__switchOverrideRandomValuesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchOverrideRandomValuesEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__switchOverrideRandomValuesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchOverrideRandomValuesEvent;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____switchOverrideRandomValuesEvent = value;
}
constexpr bool& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__overrideRandomValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideRandomValues;
}
constexpr bool const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__overrideRandomValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideRandomValues;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__overrideRandomValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideRandomValues = value;
}
constexpr float_t& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__startValueOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startValueOffset;
}
constexpr float_t const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__startValueOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startValueOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__startValueOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startValueOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__startPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__startPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPositionOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__startPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__endPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__endPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPositionOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__endPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endPositionOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__transformL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformL;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__transformL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformL;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__transformL(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__transformR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformR;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__transformR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformR;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__transformR(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__movementDataL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementDataL;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const&
GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__movementDataL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementDataL;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__movementDataL(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____movementDataL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__movementDataR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementDataR;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const&
GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__movementDataR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementDataR;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__movementDataR(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____movementDataR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__randomGenerationFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomGenerationFrameNum;
}
constexpr int32_t const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__randomGenerationFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomGenerationFrameNum;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__randomGenerationFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomGenerationFrameNum = value;
}
constexpr float_t& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__randomStartOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomStartOffset;
}
constexpr float_t const& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__randomStartOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomStartOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__randomStartOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomStartOffset = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData(int32_t beatmapEventDataValue, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* movementData,
                                                                             float_t movementValueOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "UpdateMovementData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventDataValue, movementData, movementValueOffset);
}
inline ::GlobalNamespace::LightPairSinMoveEventEffect* GlobalNamespace::LightPairSinMoveEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightPairSinMoveEventEffect*>());
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightPairSinMoveEventEffect::LightPairSinMoveEventEffect() {}
