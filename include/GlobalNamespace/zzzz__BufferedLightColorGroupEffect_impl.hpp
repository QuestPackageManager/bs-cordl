#pragma once
// IWYU pragma private; include "GlobalNamespace/BufferedLightColorGroupEffect.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect_InitData::*)(
    ::GlobalNamespace::LightGroup*, ::GlobalNamespace::MaterialPropertyBlockController*)>(&::GlobalNamespace::BufferedLightColorGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599107c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect_InitData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>(), ::i2c::type_of<::GlobalNamespace::MaterialPropertyBlockController*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroup>& GlobalNamespace::BufferedLightColorGroupEffect_InitData::__cordl_internal_get_lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroup> const& GlobalNamespace::BufferedLightColorGroupEffect_InitData::__cordl_internal_get_lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroup;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect_InitData::__cordl_internal_set_lightGroup(::UnityW<::GlobalNamespace::LightGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::BufferedLightColorGroupEffect_InitData::__cordl_internal_get_materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::BufferedLightColorGroupEffect_InitData::__cordl_internal_get_materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialPropertyBlockController;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect_InitData::__cordl_internal_set_materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialPropertyBlockController = value;
}
inline void GlobalNamespace::BufferedLightColorGroupEffect_InitData::_ctor(::GlobalNamespace::LightGroup* lightGroup,
                                                                           ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect_InitData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>(), ::i2c::type_of<::GlobalNamespace::MaterialPropertyBlockController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroup, materialPropertyBlockController);
}
inline ::GlobalNamespace::BufferedLightColorGroupEffect_InitData*
GlobalNamespace::BufferedLightColorGroupEffect_InitData::New_ctor(::GlobalNamespace::LightGroup* lightGroup, ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BufferedLightColorGroupEffect_InitData*>(lightGroup, materialPropertyBlockController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedLightColorGroupEffect_InitData::BufferedLightColorGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::BufferedLightColorGroupEffect_InitData*,
                                                                                                                  ::GlobalNamespace::ColorManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5990884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BufferedLightColorGroupEffect_InitData*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5990c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorBoostBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5990d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(),
                                                             { "HandleColorBoostBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5990d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(),
                                                             { "HandleColorChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5990e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), { "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.GetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(
    &::GlobalNamespace::BufferedLightColorGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5990f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), { ::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBoostBeatmapDataCallbackWrapper = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrappers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrappers;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrappers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrappers;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__lightColorBeatmapEventCallbackWrappers(::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColorBeatmapEventCallbackWrappers = value;
}
constexpr int32_t& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lastIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastIndex;
}
constexpr int32_t const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__lastIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastIndex;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__lastIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastIndex = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__timesBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timesBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__timesBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timesBuffer;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__timesBuffer(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timesBuffer = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsBuffer;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__colorsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsBuffer;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__colorsBuffer(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsBuffer = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__elementIdsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementIdsBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__elementIdsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementIdsBuffer;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__elementIdsBuffer(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementIdsBuffer = value;
}
constexpr bool& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__useBoostColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBoostColors;
}
constexpr bool const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__useBoostColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useBoostColors;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__useBoostColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useBoostColors = value;
}
constexpr bool& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__didReceiveEventThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didReceiveEventThisFrame;
}
constexpr bool const& GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_get__didReceiveEventThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didReceiveEventThisFrame;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__cordl_internal_set__didReceiveEventThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didReceiveEventThisFrame = value;
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__timesBufferPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_timesBufferPropertyId", ::GlobalNamespace::BufferedLightColorGroupEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__timesBufferPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_timesBufferPropertyId", ::GlobalNamespace::BufferedLightColorGroupEffect*>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__colorBufferPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorBufferPropertyId", ::GlobalNamespace::BufferedLightColorGroupEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__colorBufferPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_colorBufferPropertyId", ::GlobalNamespace::BufferedLightColorGroupEffect*>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__elementIdBufferPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_elementIdBufferPropertyId", ::GlobalNamespace::BufferedLightColorGroupEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__elementIdBufferPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_elementIdBufferPropertyId", ::GlobalNamespace::BufferedLightColorGroupEffect*>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::_ctor(::GlobalNamespace::BufferedLightColorGroupEffect_InitData* initData, ::GlobalNamespace::ColorManager* colorManager,
                                                                  ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BufferedLightColorGroupEffect_InitData*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, colorManager, beatmapCallbacksController);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* colorBoost) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(),
                                                           { "HandleColorBoostBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorBoost);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(),
                                                           { "HandleColorChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEvent);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), { "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BufferedLightColorGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BufferedLightColorGroupEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, colorType, colorBoost, brightness);
}
inline ::GlobalNamespace::BufferedLightColorGroupEffect* GlobalNamespace::BufferedLightColorGroupEffect::New_ctor(::GlobalNamespace::BufferedLightColorGroupEffect_InitData* initData,
                                                                                                                  ::GlobalNamespace::ColorManager* colorManager,
                                                                                                                  ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BufferedLightColorGroupEffect*>(initData, colorManager, beatmapCallbacksController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedLightColorGroupEffect::BufferedLightColorGroupEffect() {}
