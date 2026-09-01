#pragma once
// IWYU pragma private; include "GlobalNamespace\TriggerFloatFxGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerFloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__TriggerFloatFxGroupEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect_InitData::*)(int32_t, int32_t, ::GlobalNamespace::FloatFxGroupEffectTarget*)>(
    &::GlobalNamespace::TriggerFloatFxGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5998944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::FloatFxGroupEffectTarget*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>& GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> const& GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect_InitData::__cordl_internal_set_target(::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect_InitData::_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::FloatFxGroupEffectTarget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, target);
}
inline ::GlobalNamespace::TriggerFloatFxGroupEffect_InitData* GlobalNamespace::TriggerFloatFxGroupEffect_InitData::New_ctor(int32_t groupId, int32_t elementId,
                                                                                                                            ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*>(groupId, elementId, target));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerFloatFxGroupEffect_InitData::TriggerFloatFxGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)(
    ::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::TriggerFloatFxGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59987c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect*>(),
                            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)()>(&::GlobalNamespace::TriggerFloatFxGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59986c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect.HandleFloatFxBeatmapEventCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(
    &::GlobalNamespace::TriggerFloatFxGroupEffect::HandleFloatFxBeatmapEventCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x599890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect*>(),
                                                             { "HandleFloatFxBeatmapEventCallback", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_get__floatFxBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_get__floatFxBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFxBeatmapEventCallbackWrapper = value;
}
constexpr ::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*& GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::TriggerFloatFxGroupEffect_InitData* const& GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__cordl_internal_set__initData(::GlobalNamespace::TriggerFloatFxGroupEffect_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::_ctor(::GlobalNamespace::TriggerFloatFxGroupEffect_InitData* initData,
                                                              ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect*>(),
                          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::TriggerFloatFxGroupEffect_InitData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, beatmapCallbacksController);
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData* currentEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TriggerFloatFxGroupEffect*>(),
                                                           { "HandleFloatFxBeatmapEventCallback", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEvent);
}
inline ::GlobalNamespace::TriggerFloatFxGroupEffect* GlobalNamespace::TriggerFloatFxGroupEffect::New_ctor(::GlobalNamespace::TriggerFloatFxGroupEffect_InitData* initData,
                                                                                                          ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TriggerFloatFxGroupEffect*>(initData, beatmapCallbacksController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerFloatFxGroupEffect::TriggerFloatFxGroupEffect() {}
