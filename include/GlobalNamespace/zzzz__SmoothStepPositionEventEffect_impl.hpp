#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothStepPositionEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothStepPositionEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Vector3Tween_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3ba744c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3ba755c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3ba7684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3ba7720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.GetPositionForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SmoothStepPositionEventEffect::*)(int32_t)>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::GetPositionForValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3ba7800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "GetPositionForValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect.SetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::SetPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3ba785c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "SetPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothStepPositionEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothStepPositionEventEffect::*)()>(
    &::GlobalNamespace::SmoothStepPositionEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3ba78a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____event = value;
}
constexpr bool& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__clampValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampValue;
}
constexpr bool const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__clampValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampValue;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__clampValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clampValue = value;
}
constexpr int32_t& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__eventValueMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMin;
}
constexpr int32_t const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__eventValueMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMin;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__eventValueMin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValueMin = value;
}
constexpr int32_t& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__eventValueMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMax;
}
constexpr int32_t const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__eventValueMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventValueMax;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__eventValueMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventValueMax = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__movementVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__movementVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementVector;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__movementVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementVector = value;
}
constexpr float_t& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__stepSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr float_t const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__stepSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stepSize;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__stepSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stepSize = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Vector3Tween*& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__positionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionTween;
}
constexpr ::Tweening::Vector3Tween* const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__positionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionTween;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__positionTween(::Tweening::Vector3Tween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::SmoothStepPositionEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SmoothStepPositionEventEffect::GetPositionForValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "GetPositionForValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::SetPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), "SetPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void GlobalNamespace::SmoothStepPositionEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothStepPositionEventEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothStepPositionEventEffect* GlobalNamespace::SmoothStepPositionEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SmoothStepPositionEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothStepPositionEventEffect::SmoothStepPositionEventEffect() {}
