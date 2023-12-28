#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothStepPositionEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Vector3Tween_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23b242c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23b253c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23b2660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23b26fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.GetPositionForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SmoothStepPositionEventEffect::*)(int32_t)>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::GetPositionForValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23b27d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "GetPositionForValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.SetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::SetPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23b2838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "SetPosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23b2880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::SmoothStepPositionEventEffect::__get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::SmoothStepPositionEventEffect::__get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__event(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____event = value;
}
constexpr bool& GlobalNamespace::SmoothStepPositionEventEffect::__get__clampValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampValue;
}
constexpr bool const& GlobalNamespace::SmoothStepPositionEventEffect::__get__clampValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampValue;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__clampValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clampValue = value;
}
constexpr int32_t& GlobalNamespace::SmoothStepPositionEventEffect::__get__eventValueMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMin;
}
constexpr int32_t const& GlobalNamespace::SmoothStepPositionEventEffect::__get__eventValueMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMin;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__eventValueMin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValueMin = value;
}
constexpr int32_t& GlobalNamespace::SmoothStepPositionEventEffect::__get__eventValueMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMax;
}
constexpr int32_t const& GlobalNamespace::SmoothStepPositionEventEffect::__get__eventValueMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMax;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__eventValueMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValueMax = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothStepPositionEventEffect::__get__movementVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothStepPositionEventEffect::__get__movementVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementVector;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__movementVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementVector = value;
}
constexpr float_t& GlobalNamespace::SmoothStepPositionEventEffect::__get__stepSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr float_t const& GlobalNamespace::SmoothStepPositionEventEffect::__get__stepSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__stepSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepSize = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::SmoothStepPositionEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::SmoothStepPositionEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::SongTimeTweeningManager*& GlobalNamespace::SmoothStepPositionEventEffect::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& GlobalNamespace::SmoothStepPositionEventEffect::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__tweeningManager(::Tweening::SongTimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Vector3Tween*& GlobalNamespace::SmoothStepPositionEventEffect::__get__positionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& GlobalNamespace::SmoothStepPositionEventEffect::__get__positionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionTween;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__positionTween(::Tweening::Vector3Tween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::SmoothStepPositionEventEffect::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::SmoothStepPositionEventEffect::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothStepPositionEventEffect::__get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothStepPositionEventEffect::__get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::SmoothStepPositionEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::SmoothStepPositionEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SmoothStepPositionEventEffect::GetPositionForValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "GetPositionForValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::SetPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "SetPosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline ::GlobalNamespace::SmoothStepPositionEventEffect* GlobalNamespace::SmoothStepPositionEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SmoothStepPositionEventEffect*>());
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothStepPositionEventEffect::SmoothStepPositionEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
