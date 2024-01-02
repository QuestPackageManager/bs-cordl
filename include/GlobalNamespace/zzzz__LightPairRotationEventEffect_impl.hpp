#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightPairRotationEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightPairRotationEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightPairRotationEventEffect__RotationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightPairRotationEventEffect__RotationData::*)()>(
    &::GlobalNamespace::__LightPairRotationEventEffect__RotationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ac504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr float_t& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationSpeed;
}
constexpr float_t const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationSpeed;
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_rotationSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationSpeed = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startRotation;
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_startRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startRotation = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotationAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startRotationAngle;
}
constexpr float_t const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotationAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startRotationAngle;
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_startRotationAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startRotationAngle = value;
}
constexpr float_t& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationAngle;
}
constexpr float_t const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationAngle;
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_rotationAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationAngle = value;
}
inline ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* GlobalNamespace::__LightPairRotationEventEffect__RotationData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>());
}
inline void GlobalNamespace::__LightPairRotationEventEffect__RotationData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData::__LightPairRotationEventEffect__RotationData() {}
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(
    &::GlobalNamespace::LightPairRotationEventEffect::Start)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x23ac13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(
    &::GlobalNamespace::LightPairRotationEventEffect::Update)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x23ac50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(
    &::GlobalNamespace::LightPairRotationEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23ac7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::LightPairRotationEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x23ac7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.UpdateRotationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)(
    int32_t, ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, float_t, float_t)>(&::GlobalNamespace::LightPairRotationEventEffect::UpdateRotationData)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x23acb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "UpdateRotationData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(
    &::GlobalNamespace::LightPairRotationEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23acd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairRotationEventEffect::__get__eventL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventL;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairRotationEventEffect::__get__eventL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventL;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__eventL(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventL = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairRotationEventEffect::__get__eventR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventR;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairRotationEventEffect::__get__eventR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventR;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__eventR(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventR = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairRotationEventEffect::__get__switchOverrideRandomValuesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchOverrideRandomValuesEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairRotationEventEffect::__get__switchOverrideRandomValuesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____switchOverrideRandomValuesEvent;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____switchOverrideRandomValuesEvent = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairRotationEventEffect::__get__rotationVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairRotationEventEffect::__get__rotationVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationVector;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__rotationVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationVector = value;
}
constexpr bool& GlobalNamespace::LightPairRotationEventEffect::__get__overrideRandomValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideRandomValues;
}
constexpr bool const& GlobalNamespace::LightPairRotationEventEffect::__get__overrideRandomValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideRandomValues;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__overrideRandomValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideRandomValues = value;
}
constexpr bool& GlobalNamespace::LightPairRotationEventEffect::__get__useZPositionForAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useZPositionForAngleOffset;
}
constexpr bool const& GlobalNamespace::LightPairRotationEventEffect::__get__useZPositionForAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useZPositionForAngleOffset;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__useZPositionForAngleOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useZPositionForAngleOffset = value;
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__zPositionAngleOffsetScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPositionAngleOffsetScale;
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__zPositionAngleOffsetScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPositionAngleOffsetScale;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__zPositionAngleOffsetScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zPositionAngleOffsetScale = value;
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__startRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRotation;
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__startRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRotation;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__startRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startRotation = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::LightPairRotationEventEffect::__get__transformL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformL;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::LightPairRotationEventEffect::__get__transformL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformL;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__transformL(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::LightPairRotationEventEffect::__get__transformR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformR;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::LightPairRotationEventEffect::__get__transformR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformR;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__transformR(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightPairRotationEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::LightPairRotationEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::LightPairRotationEventEffect::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::LightPairRotationEventEffect::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*& GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDataL;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*> const& GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDataL;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__rotationDataL(::GlobalNamespace::__LightPairRotationEventEffect__RotationData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationDataL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*& GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDataR;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*> const& GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDataR;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__rotationDataR(::GlobalNamespace::__LightPairRotationEventEffect__RotationData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationDataR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LightPairRotationEventEffect::__get__randomGenerationFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomGenerationFrameNum;
}
constexpr int32_t const& GlobalNamespace::LightPairRotationEventEffect::__get__randomGenerationFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomGenerationFrameNum;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__randomGenerationFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomGenerationFrameNum = value;
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__randomStartRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomStartRotation;
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__randomStartRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomStartRotation;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__randomStartRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomStartRotation = value;
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__randomDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomDirection;
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__randomDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomDirection;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__randomDirection(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomDirection = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightPairRotationEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::LightPairRotationEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightPairRotationEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairRotationEventEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairRotationEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightPairRotationEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::LightPairRotationEventEffect::UpdateRotationData(int32_t beatmapEventDataValue, ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* rotationData,
                                                                              float_t startRotationOffset, float_t direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), "UpdateRotationData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventDataValue, rotationData, startRotationOffset, direction);
}
inline ::GlobalNamespace::LightPairRotationEventEffect* GlobalNamespace::LightPairRotationEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightPairRotationEventEffect*>());
}
inline void GlobalNamespace::LightPairRotationEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightPairRotationEventEffect::LightPairRotationEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
