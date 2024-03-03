#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeightDetector__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeightDetector__InitData::*)(float_t, float_t)>(
    &::GlobalNamespace::__PlayerHeightDetector__InitData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x248ef4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeightDetector__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__PlayerHeightDetector__InitData::__cordl_internal_get_headPosToPlayerHeightOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosToPlayerHeightOffset;
}
constexpr float_t const& GlobalNamespace::__PlayerHeightDetector__InitData::__cordl_internal_get_headPosToPlayerHeightOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosToPlayerHeightOffset;
}
constexpr void GlobalNamespace::__PlayerHeightDetector__InitData::__cordl_internal_set_headPosToPlayerHeightOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPosToPlayerHeightOffset = value;
}
constexpr float_t& GlobalNamespace::__PlayerHeightDetector__InitData::__cordl_internal_get_startPlayerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPlayerHeight;
}
constexpr float_t const& GlobalNamespace::__PlayerHeightDetector__InitData::__cordl_internal_get_startPlayerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPlayerHeight;
}
constexpr void GlobalNamespace::__PlayerHeightDetector__InitData::__cordl_internal_set_startPlayerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPlayerHeight = value;
}
inline ::GlobalNamespace::__PlayerHeightDetector__InitData* GlobalNamespace::__PlayerHeightDetector__InitData::New_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerHeightDetector__InitData*>(headPosToPlayerHeightOffset, startPlayerHeight));
}
inline void GlobalNamespace::__PlayerHeightDetector__InitData::_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeightDetector__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headPosToPlayerHeightOffset, startPlayerHeight);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerHeightDetector__InitData::__PlayerHeightDetector__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.add_playerHeightDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x248eacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "add_playerHeightDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.remove_playerHeightDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x248eb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "remove_playerHeightDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.get_playerHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::get_playerHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248ec2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                                                                               "get_playerHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x248ec34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x248ed18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::LateUpdate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x248ed34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.BeatmapObjectSpawnCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::GlobalNamespace::ObstacleData*)>(
    &::GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x248ef00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "BeatmapObjectSpawnCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248ef44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerHeightDetector__InitData*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerHeightDetector__InitData*> const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__initData(::GlobalNamespace::__PlayerHeightDetector__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get_playerHeightDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeightDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get_playerHeightDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeightDidChangeEvent;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set_playerHeightDidChangeEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerHeightDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapObjectCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapObjectCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectCallbackWrapper;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__beatmapObjectCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__noTopObstaclesStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noTopObstaclesStartTime;
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__noTopObstaclesStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noTopObstaclesStartTime;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__noTopObstaclesStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noTopObstaclesStartTime = value;
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__computedPlayerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computedPlayerHeight;
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__computedPlayerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computedPlayerHeight;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__computedPlayerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____computedPlayerHeight = value;
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__changeWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____changeWeight;
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__changeWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____changeWeight;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__changeWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____changeWeight = value;
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__lastReportedHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReportedHeight;
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__lastReportedHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReportedHeight;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__lastReportedHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReportedHeight = value;
}
inline void GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "add_playerHeightDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "remove_playerHeightDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerHeightDetector::get_playerHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                                                                             "get_playerHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback(::GlobalNamespace::ObstacleData* obstacleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), "BeatmapObjectSpawnCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData);
}
inline ::GlobalNamespace::PlayerHeightDetector* GlobalNamespace::PlayerHeightDetector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerHeightDetector*>());
}
inline void GlobalNamespace::PlayerHeightDetector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeightDetector::PlayerHeightDetector() {}
