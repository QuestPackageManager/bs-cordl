#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHeightDetector.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector_InitData::*)(float_t, float_t)>(&::GlobalNamespace::PlayerHeightDetector_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e6ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerHeightDetector_InitData::__cordl_internal_get_headPosToPlayerHeightOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosToPlayerHeightOffset;
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector_InitData::__cordl_internal_get_headPosToPlayerHeightOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosToPlayerHeightOffset;
}
constexpr void GlobalNamespace::PlayerHeightDetector_InitData::__cordl_internal_set_headPosToPlayerHeightOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPosToPlayerHeightOffset = value;
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector_InitData::__cordl_internal_get_startPlayerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPlayerHeight;
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector_InitData::__cordl_internal_get_startPlayerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPlayerHeight;
}
constexpr void GlobalNamespace::PlayerHeightDetector_InitData::__cordl_internal_set_startPlayerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startPlayerHeight = value;
}
inline void GlobalNamespace::PlayerHeightDetector_InitData::_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headPosToPlayerHeightOffset, startPlayerHeight);
}
inline ::GlobalNamespace::PlayerHeightDetector_InitData* GlobalNamespace::PlayerHeightDetector_InitData::New_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHeightDetector_InitData*>(headPosToPlayerHeightOffset, startPlayerHeight));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeightDetector_InitData::PlayerHeightDetector_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.add_playerHeightDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e6808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "add_playerHeightDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.remove_playerHeightDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e68c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(),
                                                                                           { "remove_playerHeightDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.get_playerHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::get_playerHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e6988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "get_playerHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59e6990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59e6a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::LateUpdate)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x59e6a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.BeatmapObjectSpawnCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::GlobalNamespace::ObstacleData*)>(
    &::GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59e6c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "BeatmapObjectSpawnCallback", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e6cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { ".ctor", {}, {} })));
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
  this->____playerTransforms = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::PlayerHeightDetector_InitData*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::PlayerHeightDetector_InitData* const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__initData(::GlobalNamespace::PlayerHeightDetector_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get_playerHeightDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeightDidChangeEvent;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get_playerHeightDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeightDidChangeEvent;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set_playerHeightDidChangeEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerHeightDidChangeEvent = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapObjectCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::PlayerHeightDetector::__cordl_internal_get__beatmapObjectCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectCallbackWrapper;
}
constexpr void GlobalNamespace::PlayerHeightDetector::__cordl_internal_set__beatmapObjectCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectCallbackWrapper = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "add_playerHeightDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "remove_playerHeightDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerHeightDetector::get_playerHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "get_playerHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback(::GlobalNamespace::ObstacleData* obstacleData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { "BeatmapObjectSpawnCallback", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData);
}
inline void GlobalNamespace::PlayerHeightDetector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeightDetector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHeightDetector* GlobalNamespace::PlayerHeightDetector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHeightDetector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeightDetector::PlayerHeightDetector() {}
