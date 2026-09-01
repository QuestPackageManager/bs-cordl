#pragma once
// IWYU pragma private; include "GlobalNamespace\LightSwitchEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.get_lightsId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightSwitchEventEffect::*)()>(&::GlobalNamespace::LightSwitchEventEffect::get_lightsId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "get_lightsId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.get_eventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BasicBeatmapEventType (::GlobalNamespace::LightSwitchEventEffect::*)()>(
    &::GlobalNamespace::LightSwitchEventEffect::get_eventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "get_eventType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)()>(&::GlobalNamespace::LightSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x599d36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)()>(&::GlobalNamespace::LightSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x599d758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::LightSwitchEventEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x599d80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                                                                                           { "HandleColorChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.HandleColorBoostBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(
    &::GlobalNamespace::LightSwitchEventEffect::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x599df4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                                                             { "HandleColorBoostBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.SetupTweenAndSaveOtherColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::LightSwitchEventEffect::SetupTweenAndSaveOtherColors)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x599d71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                            { "SetupTweenAndSaveOtherColors",
                              {},
                              { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.CheckNextEventForFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::LightSwitchEventEffect::CheckNextEventForFade)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x599dbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                                                                                           { "CheckNextEventForFade", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.GetNormalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightSwitchEventEffect::*)(int32_t, bool)>(
    &::GlobalNamespace::LightSwitchEventEffect::GetNormalColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x599de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "GetNormalColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.GetHighlightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightSwitchEventEffect::*)(int32_t, bool)>(
    &::GlobalNamespace::LightSwitchEventEffect::GetHighlightColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x599deb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "GetHighlightColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)(::UnityEngine::Color)>(&::GlobalNamespace::LightSwitchEventEffect::SetColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x599dbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightSwitchEventEffect::*)()>(&::GlobalNamespace::LightSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599e028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor0;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor0;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightColor0(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor0 = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor1;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor1;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightColor1(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor1 = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor0;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor0;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__highlightColor0(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightColor0 = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor1;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor1;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__highlightColor1(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightColor1 = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor0Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor0Boost;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor0Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor0Boost;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightColor0Boost(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor0Boost = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor1Boost;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightColor1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColor1Boost;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightColor1Boost(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColor1Boost = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor0Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor0Boost;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor0Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor0Boost;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__highlightColor0Boost(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightColor0Boost = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor1Boost;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__highlightColor1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor1Boost;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__highlightColor1Boost(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightColor1Boost = value;
}
constexpr float_t& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__offColorIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offColorIntensity;
}
constexpr float_t const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__offColorIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offColorIntensity;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__offColorIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offColorIntensity = value;
}
constexpr bool& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightOnStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightOnStart;
}
constexpr bool const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightOnStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightOnStart;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightOnStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightOnStart = value;
}
constexpr int32_t& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightsID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsID;
}
constexpr int32_t const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightsID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsID;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightsID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightsID = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__event(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____event = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightManager = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::Tweening::ColorTween*& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTween;
}
constexpr ::Tweening::ColorTween* const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTween;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__colorTween(::Tweening::ColorTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorTween = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__alternativeFromColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeFromColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__alternativeFromColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeFromColor;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__alternativeFromColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeFromColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__alternativeToColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeToColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__alternativeToColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeToColor;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__alternativeToColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeToColor = value;
}
constexpr bool& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__usingBoostColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingBoostColors;
}
constexpr bool const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__usingBoostColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingBoostColors;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__usingBoostColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingBoostColors = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorChangeBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorChangeBeatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorChangeBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorChangeBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__colorChangeBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorChangeBeatmapDataCallbackWrapper = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightSwitchEventEffect::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBoostBeatmapDataCallbackWrapper = value;
}
inline int32_t GlobalNamespace::LightSwitchEventEffect::get_lightsId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "get_lightsId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::LightSwitchEventEffect::get_eventType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "get_eventType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType>(this, ___internal_method);
}
inline void GlobalNamespace::LightSwitchEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightSwitchEventEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                                                                                         { "HandleColorChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::LightSwitchEventEffect::HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                                                           { "HandleColorBoostBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::LightSwitchEventEffect::SetupTweenAndSaveOtherColors(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor,
                                                                                  ::UnityEngine::Color alternativeToColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "SetupTweenAndSaveOtherColors",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromColor, toColor, alternativeFromColor, alternativeToColor);
}
inline void GlobalNamespace::LightSwitchEventEffect::CheckNextEventForFade(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(),
                                                                                         { "CheckNextEventForFade", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline ::UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::GetNormalColor(int32_t beatmapEventValue, bool colorBoost) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "GetNormalColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, beatmapEventValue, colorBoost);
}
inline ::UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::GetHighlightColor(int32_t beatmapEventValue, bool colorBoost) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "GetHighlightColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, beatmapEventValue, colorBoost);
}
inline void GlobalNamespace::LightSwitchEventEffect::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::LightSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightSwitchEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightSwitchEventEffect* GlobalNamespace::LightSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightSwitchEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightSwitchEventEffect::LightSwitchEventEffect() {}
