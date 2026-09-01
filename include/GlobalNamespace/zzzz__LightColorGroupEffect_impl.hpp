#pragma once
// IWYU pragma private; include "GlobalNamespace\LightColorGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__LightColorEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect_InitData::*)(int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::LightColorGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59999d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect_InitData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr int32_t& GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_get_lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr int32_t const& GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_get_lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr void GlobalNamespace::LightColorGroupEffect_InitData::__cordl_internal_set_lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightId = value;
}
inline void GlobalNamespace::LightColorGroupEffect_InitData::_ctor(int32_t groupId, int32_t elementId, int32_t lightId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect_InitData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, lightId);
}
inline ::GlobalNamespace::LightColorGroupEffect_InitData* GlobalNamespace::LightColorGroupEffect_InitData::New_ctor(int32_t groupId, int32_t elementId, int32_t lightId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightColorGroupEffect_InitData*>(groupId, elementId, lightId));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroupEffect_InitData::LightColorGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(
    ::GlobalNamespace::LightColorGroupEffect_InitData*, ::GlobalNamespace::LightWithIdManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::ColorManager*,
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::IBpmController*)>(&::GlobalNamespace::LightColorGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5999700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LightColorGroupEffect_InitData*>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                                                 ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)()>(&::GlobalNamespace::LightColorGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5999950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.UseBoostColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(bool)>(&::GlobalNamespace::LightColorGroupEffect::UseBoostColors)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5999988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "UseBoostColors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.GetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(
    &::GlobalNamespace::LightColorGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59999a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { ::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::LightColorEventHandler*& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::GlobalNamespace::LightColorEventHandler* const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__handler(::GlobalNamespace::LightColorEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handler = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColorBeatmapEventCallbackWrapper = value;
}
inline void GlobalNamespace::LightColorGroupEffect::_ctor(::GlobalNamespace::LightColorGroupEffect_InitData* initData, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                          ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                          ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::IBpmController* bpmController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LightColorGroupEffect_InitData*>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                                               ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController);
}
inline void GlobalNamespace::LightColorGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightColorGroupEffect::UseBoostColors(bool useBoostColors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "UseBoostColors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useBoostColors);
}
inline ::UnityEngine::Color GlobalNamespace::LightColorGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, colorType, colorBoost, brightness);
}
inline ::GlobalNamespace::LightColorGroupEffect* GlobalNamespace::LightColorGroupEffect::New_ctor(::GlobalNamespace::LightColorGroupEffect_InitData* initData,
                                                                                                  ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                                                  ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                                                                  ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                  ::GlobalNamespace::IBpmController* bpmController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightColorGroupEffect*>(initData, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroupEffect::LightColorGroupEffect() {}
