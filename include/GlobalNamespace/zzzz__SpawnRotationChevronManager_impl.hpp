#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnRotationChevronManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevronManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevronManager_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager_DirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager_DirectionData::*)()>(
    &::GlobalNamespace::SpawnRotationChevronManager_DirectionData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x578cde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_chevron() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chevron;
}
constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_chevron() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chevron;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_set_chevron(::UnityW<::GlobalNamespace::SpawnRotationChevron> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chevron)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_fullyLit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullyLit;
}
constexpr bool const& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_fullyLit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullyLit;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_set_fullyLit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullyLit = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_fadeOutStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeOutStartTime;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_fadeOutStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeOutStartTime;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_set_fadeOutStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeOutStartTime = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_fadeInEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInEndTime;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_get_fadeInEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInEndTime;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager_DirectionData::__cordl_internal_set_fadeInEndTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeInEndTime = value;
}
inline void GlobalNamespace::SpawnRotationChevronManager_DirectionData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnRotationChevronManager_DirectionData* GlobalNamespace::SpawnRotationChevronManager_DirectionData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevronManager_DirectionData::SpawnRotationChevronManager_DirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData::*)(float_t, float_t, int32_t)>(
    &::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x578cdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData::_ctor(float_t time, float_t duration, int32_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, duration, rotation);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rotation", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData::SpawnRotationChevronManager_QueuedDirectionData(float_t time, float_t duration, int32_t rotation) noexcept {
  this->time = time;
  this->duration = duration;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData::SpawnRotationChevronManager_QueuedDirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(&::GlobalNamespace::SpawnRotationChevronManager::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x578be60;

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
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x578c08c;

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
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x578cbd8;

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
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x578cd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "HandleBeatmapObjectCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.HandleBeatmapObjectSpawnControllerDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(
    &::GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x578bf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                                 "HandleBeatmapObjectSpawnControllerDidInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager.SpawnDirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)(float_t, float_t, int32_t)>(
    &::GlobalNamespace::SpawnRotationChevronManager::SpawnDirectionData)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x578c82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "SpawnDirectionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevronManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevronManager::*)()>(&::GlobalNamespace::SpawnRotationChevronManager::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x578cde4;

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
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeInLightAmountCurve() const {
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
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__fadeOutLightAmountCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutLightAmountCurve;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__fadeOutLightAmountCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeOutLightAmountCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SpawnRotationChevron_Pool*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__chevronPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chevronPool;
}
constexpr ::GlobalNamespace::SpawnRotationChevron_Pool* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__chevronPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chevronPool;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__chevronPool(::GlobalNamespace::SpawnRotationChevron_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____chevronPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__audioTimeSyncController() const {
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
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variableMovementDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__spawnRotationDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__spawnRotationDataCallbackWrapper() const {
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
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__beatmapObjectDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectDataCallbackWrapper;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__beatmapObjectDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>*&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__directionToDataDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionToDataDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>* const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__directionToDataDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionToDataDictionary;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__directionToDataDictionary(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionToDataDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__activeDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeDirections;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__activeDirections() const {
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
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__reusableDirectionsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableDirectionsList;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__reusableDirectionsList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableDirectionsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>*&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__queuedDirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedDirectionData;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>* const&
GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_get__queuedDirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queuedDirectionData;
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__cordl_internal_set__queuedDirectionData(
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____queuedDirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(),
                                               "HandleBeatmapObjectSpawnControllerDidInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnRotationChevronManager::SpawnDirectionData(float_t time, float_t duration, int32_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), "SpawnDirectionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, duration, rotation);
}
inline void GlobalNamespace::SpawnRotationChevronManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevronManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnRotationChevronManager* GlobalNamespace::SpawnRotationChevronManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpawnRotationChevronManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevronManager::SpawnRotationChevronManager() {}
