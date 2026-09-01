#pragma once
// IWYU pragma private; include "GlobalNamespace\PosesPlayback.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__PosesPlayback_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58e9c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesPlayback::*)(::ArrayW<::GlobalNamespace::PoseObject*>, ::GlobalNamespace::PosesRecordingData*,
                                                                                                  ::GlobalNamespace::IBeatSaberLogger*)>(&::GlobalNamespace::PosesPlayback::Init)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x58e7ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::GlobalNamespace::PoseObject*>>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.StartPlayback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::StartPlayback)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58e8408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "StartPlayback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.PlaybackTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesPlayback::*)(float_t)>(&::GlobalNamespace::PosesPlayback::PlaybackTick)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x58e9c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "PlaybackTick", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.StopPlayback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::StopPlayback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e837c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "StopPlayback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ea020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::PosesPlayback::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::PosesPlayback::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PosesPlayback::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::PosesPlayback::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::GlobalNamespace::IBeatSaberLogger* const& GlobalNamespace::PosesPlayback::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::PosesPlayback::__cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logger = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::PosesPlayback::__cordl_internal_get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::PosesPlayback::__cordl_internal_get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::PosesPlayback::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transforms = value;
}
constexpr ::GlobalNamespace::PosesRecordingData*& GlobalNamespace::PosesPlayback::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::GlobalNamespace::PosesRecordingData* const& GlobalNamespace::PosesPlayback::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::PosesPlayback::__cordl_internal_set__data(::GlobalNamespace::PosesRecordingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr int32_t& GlobalNamespace::PosesPlayback::__cordl_internal_get__keyframeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframeIndex;
}
constexpr int32_t const& GlobalNamespace::PosesPlayback::__cordl_internal_get__keyframeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframeIndex;
}
constexpr void GlobalNamespace::PosesPlayback::__cordl_internal_set__keyframeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyframeIndex = value;
}
inline void GlobalNamespace::PosesPlayback::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PosesPlayback::Init(::ArrayW<::GlobalNamespace::PoseObject*> poseObjects, ::GlobalNamespace::PosesRecordingData* data, ::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::GlobalNamespace::PoseObject*>>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatSaberLogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseObjects, data, logger);
}
inline void GlobalNamespace::PosesPlayback::StartPlayback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "StartPlayback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PosesPlayback::PlaybackTick(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "PlaybackTick", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::PosesPlayback::StopPlayback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { "StopPlayback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PosesPlayback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosesPlayback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PosesPlayback* GlobalNamespace::PosesPlayback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosesPlayback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesPlayback::PosesPlayback() {}
