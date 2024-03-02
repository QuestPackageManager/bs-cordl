#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevronManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevronManager_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SpawnRotationChevronManager__DirectionData::*)()>(
    &::GlobalNamespace::__SpawnRotationChevronManager__DirectionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2443920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_chevron() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chevron;
}
constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_chevron() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chevron;
}
constexpr void GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_set_chevron(::UnityW<::GlobalNamespace::SpawnRotationChevron> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chevron)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_fullyLid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullyLid;
}
constexpr bool const& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_fullyLid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullyLid;
}
constexpr void GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_set_fullyLid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullyLid = value;
}
constexpr float_t& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_fadeOutStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeOutStartTime;
}
constexpr float_t const& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_fadeOutStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeOutStartTime;
}
constexpr void GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_set_fadeOutStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeOutStartTime = value;
}
constexpr float_t& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_fadeInEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInEndTime;
}
constexpr float_t const& GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_get_fadeInEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInEndTime;
}
constexpr void GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__cordl_internal_set_fadeInEndTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeInEndTime = value;
}
inline ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData* GlobalNamespace::__SpawnRotationChevronManager__DirectionData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>());
}
inline void GlobalNamespace::__SpawnRotationChevronManager__DirectionData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData::__SpawnRotationChevronManager__DirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(&::GlobalNamespace::SpawnRotationChevronManager::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x24427b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(
    &::GlobalNamespace::SpawnRotationChevronManager::Update)> {
  constexpr static std::size_t size = 0xa64;
  constexpr static std::size_t addrs = 0x2442a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(
    &::GlobalNamespace::SpawnRotationChevronManager::OnDestroy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x24434c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.HandleBeatmapObjectCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)(::GlobalNamespace::BeatmapObjectData*)>(
    &::GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x24435c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "HandleBeatmapObjectCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.HandleSpawnRotationBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)(::GlobalNamespace::SpawnRotationBeatmapEventData*)>(
    &::GlobalNamespace::SpawnRotationChevronManager::HandleSpawnRotationBeatmapEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2443928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "HandleSpawnRotationBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.HandleBeatmapObjectSpawnControllerDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(
    &::GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2442920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                                 "HandleBeatmapObjectSpawnControllerDidInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.ComputeAheadTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SpawnRotationChevronManager::*)()>(
    &::GlobalNamespace::SpawnRotationChevronManager::ComputeAheadTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2443944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                                                               "ComputeAheadTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(&::GlobalNamespace::SpawnRotationChevronManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24439a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeInTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTime;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeInTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTime;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__fadeInTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInTime = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeOutTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTime;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeOutTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTime;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__fadeOutTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutTime = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__jumpStartOffsetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpStartOffsetTime;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__jumpStartOffsetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpStartOffsetTime;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__jumpStartOffsetTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpStartOffsetTime = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__cutOffsetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutOffsetTime;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__cutOffsetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutOffsetTime;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__cutOffsetTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutOffsetTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeInLightAmountCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInLightAmountCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeInLightAmountCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInLightAmountCurve;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__fadeInLightAmountCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInLightAmountCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeOutLightAmountCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutLightAmountCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeOutLightAmountCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutLightAmountCurve;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__fadeOutLightAmountCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeOutLightAmountCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SpawnRotationChevron__Pool*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__chevronPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chevronPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SpawnRotationChevron__Pool*> const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__chevronPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chevronPool;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__chevronPool(::GlobalNamespace::__SpawnRotationChevron__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chevronPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__spawnRotationDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__spawnRotationDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationDataCallbackWrapper;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__spawnRotationDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnRotationDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapObjectDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapObjectDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectDataCallbackWrapper;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__beatmapObjectDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>*&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__directionToDataDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionToDataDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>*> const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__directionToDataDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionToDataDictionary;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__directionToDataDictionary(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionToDataDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__activeDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDirections;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__activeDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDirections;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__activeDirections(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeDirections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__reusableDirectionsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableDirectionsList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__reusableDirectionsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableDirectionsList;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__reusableDirectionsList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableDirectionsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__moveDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDuration;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__moveDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDuration;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__moveDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveDuration = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__halfJumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDuration;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__halfJumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDuration;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__halfJumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____halfJumpDuration = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__currentSpawnRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSpawnRotation;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__currentSpawnRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSpawnRotation;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__currentSpawnRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSpawnRotation = value;
}
inline void GlobalNamespace::SpawnRotationChevronManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationChevronManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationChevronManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "HandleBeatmapObjectCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::SpawnRotationChevronManager::HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "HandleSpawnRotationBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpawnRotationBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                               "HandleBeatmapObjectSpawnControllerDidInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SpawnRotationChevronManager::ComputeAheadTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                                                             "ComputeAheadTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnRotationChevronManager* GlobalNamespace::SpawnRotationChevronManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpawnRotationChevronManager*>());
}
inline void GlobalNamespace::SpawnRotationChevronManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevronManager::SpawnRotationChevronManager() {}
