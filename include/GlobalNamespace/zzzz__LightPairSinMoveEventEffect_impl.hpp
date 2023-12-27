#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightPairSinMoveEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightPairSinMoveEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::*)()>(
    &::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ad0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enabled;
}
constexpr bool const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enabled;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___enabled = value;
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___speed;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___speed;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___speed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startPosition;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_startPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___startPosition = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___transform;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startMovementValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startMovementValue;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startMovementValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startMovementValue;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_startMovementValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___startMovementValue = value;
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_movementValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___movementValue;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_movementValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___movementValue;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_movementValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___movementValue = value;
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_side() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___side;
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_side() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___side;
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_side(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___side = value;
}
inline ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>());
}
inline void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__LightPairSinMoveEventEffect__MovementData() {}
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::Start)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x23acddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(
    &::GlobalNamespace::LightPairSinMoveEventEffect::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23ad0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(
    &::GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23ad2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23ad2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.UpdateMovementData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)(
    int32_t, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, float_t)>(&::GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23ad444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "UpdateMovementData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23ad57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventL;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventL;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__eventL(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____eventL = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventR;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventR;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__eventR(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____eventR = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__get__switchOverrideRandomValuesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____switchOverrideRandomValuesEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__get__switchOverrideRandomValuesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____switchOverrideRandomValuesEvent;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____switchOverrideRandomValuesEvent = value;
}
constexpr bool& GlobalNamespace::LightPairSinMoveEventEffect::__get__overrideRandomValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____overrideRandomValues;
}
constexpr bool const& GlobalNamespace::LightPairSinMoveEventEffect::__get__overrideRandomValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____overrideRandomValues;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__overrideRandomValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____overrideRandomValues = value;
}
constexpr float_t& GlobalNamespace::LightPairSinMoveEventEffect::__get__startValueOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startValueOffset;
}
constexpr float_t const& GlobalNamespace::LightPairSinMoveEventEffect::__get__startValueOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startValueOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__startValueOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startValueOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairSinMoveEventEffect::__get__startPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairSinMoveEventEffect::__get__startPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startPositionOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__startPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairSinMoveEventEffect::__get__endPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____endPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairSinMoveEventEffect::__get__endPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____endPositionOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__endPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____endPositionOffset = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::LightPairSinMoveEventEffect::__get__transformL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformL;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__transformL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformL;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__transformL(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::LightPairSinMoveEventEffect::__get__transformR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformR;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__transformR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformR;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__transformR(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::LightPairSinMoveEventEffect::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____movementDataL;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____movementDataL;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__movementDataL(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____movementDataL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*& GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____movementDataR;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____movementDataR;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__movementDataR(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____movementDataR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomGenerationFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomGenerationFrameNum;
}
constexpr int32_t const& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomGenerationFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomGenerationFrameNum;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__randomGenerationFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomGenerationFrameNum = value;
}
constexpr float_t& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomStartOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomStartOffset;
}
constexpr float_t const& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomStartOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomStartOffset;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__randomStartOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomStartOffset = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData(int32_t beatmapEventDataValue, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* movementData,
                                                                             float_t movementValueOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), "UpdateMovementData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventDataValue, movementData, movementValueOffset);
}
inline ::GlobalNamespace::LightPairSinMoveEventEffect* GlobalNamespace::LightPairSinMoveEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightPairSinMoveEventEffect*>());
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightPairSinMoveEventEffect::LightPairSinMoveEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
