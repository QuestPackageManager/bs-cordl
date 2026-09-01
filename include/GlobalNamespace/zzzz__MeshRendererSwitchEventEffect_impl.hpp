#pragma once
// IWYU pragma private; include "GlobalNamespace\MeshRendererSwitchEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MeshRendererSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&::GlobalNamespace::MeshRendererSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x599e02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&::GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x599e154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x599e170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect.ToggleObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)(bool)>(&::GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x599e18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { "ToggleObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshRendererSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&::GlobalNamespace::MeshRendererSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599e240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__beatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__beatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEvent = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__deactivateOnBoostRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deactivateOnBoostRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__deactivateOnBoostRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deactivateOnBoostRenderers;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_set__deactivateOnBoostRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deactivateOnBoostRenderers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__activateOnBoostRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnBoostRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__activateOnBoostRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnBoostRenderers;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_set__activateOnBoostRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activateOnBoostRenderers = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects(bool isBoostOn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { "ToggleObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBoostOn);
}
inline void GlobalNamespace::MeshRendererSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MeshRendererSwitchEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MeshRendererSwitchEventEffect* GlobalNamespace::MeshRendererSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MeshRendererSwitchEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshRendererSwitchEventEffect::MeshRendererSwitchEventEffect() {}
