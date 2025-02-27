#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLaneRingsPositionStepEffectSpawner.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsPositionStepEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)()>(
    &::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3bad8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)()>(
    &::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bad9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3bada0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)()>(
    &::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bada8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager>& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__trackLaneRingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingsManager;
}
constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager> const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__trackLaneRingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingsManager;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__trackLaneRingsManager(::UnityW<::GlobalNamespace::TrackLaneRingsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackLaneRingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__minPositionStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPositionStep;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__minPositionStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPositionStep;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__minPositionStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minPositionStep = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__maxPositionStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPositionStep;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__maxPositionStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPositionStep;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__maxPositionStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPositionStep = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__moveSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeed;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__moveSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeed;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__moveSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveSpeed = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(), "HandleBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner* GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::TrackLaneRingsPositionStepEffectSpawner() {}
