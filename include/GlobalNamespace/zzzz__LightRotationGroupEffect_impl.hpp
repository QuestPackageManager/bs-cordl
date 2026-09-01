#pragma once
// IWYU pragma private; include "GlobalNamespace\LightRotationGroupEffect.hpp"
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect_InitData::*)(int32_t, int32_t, ::GlobalNamespace::LightAxis, bool, ::UnityEngine::Transform*)>(
    &::GlobalNamespace::LightRotationGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x599a860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect_InitData*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___axis;
}
constexpr void GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_set_axis(::GlobalNamespace::LightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___axis = value;
}
constexpr bool& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_mirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrored;
}
constexpr bool const& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_mirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrored;
}
constexpr void GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_set_mirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrored = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void GlobalNamespace::LightRotationGroupEffect_InitData::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transform = value;
}
inline void GlobalNamespace::LightRotationGroupEffect_InitData::_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored, ::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect_InitData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, axis, mirrored, transform);
}
inline ::GlobalNamespace::LightRotationGroupEffect_InitData* GlobalNamespace::LightRotationGroupEffect_InitData::New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis,
                                                                                                                          bool mirrored, ::UnityEngine::Transform* transform) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationGroupEffect_InitData*>(groupId, elementId, axis, mirrored, transform));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroupEffect_InitData::LightRotationGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect::*)(::GlobalNamespace::LightRotationGroupEffect_InitData*,
                                                                                                             ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::LightRotationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x599a608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LightRotationGroupEffect_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect::*)()>(&::GlobalNamespace::LightRotationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x599a824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect.ComputeTargetAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(
    &::GlobalNamespace::LightRotationGroupEffect::ComputeTargetAngle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599a85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect*>(),
            { "ComputeTargetAngle", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::LightRotationEventHandler*& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::GlobalNamespace::LightRotationEventHandler* const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__handler(::GlobalNamespace::LightRotationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handler = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__lightRotationBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightRotationBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__lightRotationBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightRotationBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__lightRotationBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightRotationBeatmapEventCallbackWrapper = value;
}
inline void GlobalNamespace::LightRotationGroupEffect::_ctor(::GlobalNamespace::LightRotationGroupEffect_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                             ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LightRotationGroupEffect_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::LightRotationGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightRotationGroupEffect::ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount,
                                                                             ::GlobalNamespace::LightRotationDirection rotationOrientation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LightRotationGroupEffect*>(),
          { "ComputeTargetAngle", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, startAngle, targetAngle, loopCount, rotationOrientation);
}
inline ::GlobalNamespace::LightRotationGroupEffect* GlobalNamespace::LightRotationGroupEffect::New_ctor(::GlobalNamespace::LightRotationGroupEffect_InitData* initData,
                                                                                                        ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                        ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightRotationGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroupEffect::LightRotationGroupEffect() {}
