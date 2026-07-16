#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect_InitData::*)(int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::LightColorGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5992000;

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
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x59912a4;

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
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5991674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::LightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5991714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(),
                                                             { "HandleColorChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.UseBoostColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(bool)>(&::GlobalNamespace::LightColorGroupEffect::UseBoostColors)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5991b20;

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
  constexpr static std::size_t addrs = 0x5991c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { ::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, float_t, float_t, float_t, float_t, bool)>(&::GlobalNamespace::LightColorGroupEffect::SetData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5991c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(),
                            { "SetData",
                              {},
                              { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.SetColorWithValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(float_t)>(&::GlobalNamespace::LightColorGroupEffect::SetColorWithValidation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5991df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "SetColorWithValidation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(float_t)>(&::GlobalNamespace::LightColorGroupEffect::SetColor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5991e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "SetColor", {}, { ::i2c::type_of<float_t>() } })));
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
constexpr int32_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightManager = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
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
constexpr ::GlobalNamespace::IBpmController*& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__bpmController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmController;
}
constexpr ::GlobalNamespace::IBpmController* const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__bpmController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmController;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__bpmController(::GlobalNamespace::IBpmController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bpmController = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__floatTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__floatTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__floatTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatTween = value;
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
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__fromColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__fromColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromColor;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__fromColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__toColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__toColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toColor;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__toColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__alternativeFromColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeFromColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__alternativeFromColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeFromColor;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__alternativeFromColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeFromColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__alternativeToColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeToColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__alternativeToColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeToColor;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__alternativeToColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeToColor = value;
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__fromStrobeFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeFrequency;
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__fromStrobeFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeFrequency;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__fromStrobeFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromStrobeFrequency = value;
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__toStrobeFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeFrequency;
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__toStrobeFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeFrequency;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__toStrobeFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toStrobeFrequency = value;
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__fromStrobeBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeBrightness;
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__fromStrobeBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeBrightness;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__fromStrobeBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromStrobeBrightness = value;
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__toStrobeBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeBrightness;
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__toStrobeBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeBrightness;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__toStrobeBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toStrobeBrightness = value;
}
constexpr bool& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__strobeFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strobeFade;
}
constexpr bool const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__strobeFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strobeFade;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__strobeFade(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strobeFade = value;
}
constexpr bool& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__usingBoostColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingBoostColors;
}
constexpr bool const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__usingBoostColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingBoostColors;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__usingBoostColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingBoostColors = value;
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lastSetColorT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSetColorT;
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lastSetColorT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSetColorT;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__lastSetColorT(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSetColorT = value;
}
constexpr int32_t& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lastSetColorFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSetColorFrameCount;
}
constexpr int32_t const& GlobalNamespace::LightColorGroupEffect::__cordl_internal_get__lastSetColorFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSetColorFrameCount;
}
constexpr void GlobalNamespace::LightColorGroupEffect::__cordl_internal_set__lastSetColorFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSetColorFrameCount = value;
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
inline void GlobalNamespace::LightColorGroupEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(),
                                                           { "HandleColorChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEventData);
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
inline void GlobalNamespace::LightColorGroupEffect::SetData(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor,
                                                            ::UnityEngine::Color alternativeToColor, float_t fromStrobeBeatFrequency, float_t toStrobeBeatFrequency, float_t fromStrobeBrightness,
                                                            float_t toStrobeBrightness, bool strobeFade) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(),
                          { "SetData",
                            {},
                            { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromColor, toColor, alternativeFromColor, alternativeToColor, fromStrobeBeatFrequency, toStrobeBeatFrequency,
                                                   fromStrobeBrightness, toStrobeBrightness, strobeFade);
}
inline void GlobalNamespace::LightColorGroupEffect::SetColorWithValidation(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "SetColorWithValidation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::LightColorGroupEffect::SetColor(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorGroupEffect*>(), { "SetColor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
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
