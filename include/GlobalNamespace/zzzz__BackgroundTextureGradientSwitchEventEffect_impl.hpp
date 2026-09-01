#pragma once
// IWYU pragma private; include "GlobalNamespace\BackgroundTextureGradientSwitchEventEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BackgroundTextureGradientSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x598d954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x598da04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x598da20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(
    &::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598da70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__defaultTextureGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultTextureGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> const& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__defaultTextureGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultTextureGradient;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__defaultTextureGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultTextureGradient = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient>& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__boostTextureGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostTextureGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> const& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__boostTextureGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boostTextureGradient;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__boostTextureGradient(::UnityW<::GlobalNamespace::BloomPrePassBackgroundTextureGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boostTextureGradient = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::BackgroundTextureGradientSwitchEventEffect() {}
