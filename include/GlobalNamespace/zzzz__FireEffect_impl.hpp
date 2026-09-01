#pragma once
// IWYU pragma private; include "GlobalNamespace\FireEffect.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FireEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRenderer_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FireEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireEffect::*)()>(&::GlobalNamespace::FireEffect::Start)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58be770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { ::i2c::class_of<::GlobalNamespace::FireEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireEffect::*)()>(&::GlobalNamespace::FireEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58be9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { ::i2c::class_of<::GlobalNamespace::FireEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::FireEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { ::i2c::class_of<::GlobalNamespace::FireEffect*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireEffect.SetRenderersEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireEffect::*)(bool)>(&::GlobalNamespace::FireEffect::SetRenderersEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58bec7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { "SetRenderersEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireEffect.NotifyAlphaWasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireEffect::*)(float_t)>(&::GlobalNamespace::FireEffect::NotifyAlphaWasChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58bef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { "NotifyAlphaWasChanged", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireEffect::*)()>(&::GlobalNamespace::FireEffect::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58bf08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FireEffect::__cordl_internal_get__groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr int32_t const& GlobalNamespace::FireEffect::__cordl_internal_get__groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupId = value;
}
constexpr int32_t& GlobalNamespace::FireEffect::__cordl_internal_get__elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId;
}
constexpr int32_t const& GlobalNamespace::FireEffect::__cordl_internal_get__elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementId = value;
}
constexpr int32_t& GlobalNamespace::FireEffect::__cordl_internal_get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::FireEffect::__cordl_internal_get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::FireEffect::__cordl_internal_get__flipBookPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipBookPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::FireEffect::__cordl_internal_get__flipBookPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipBookPropertyBlockController;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__flipBookPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipBookPropertyBlockController = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::FireEffect::__cordl_internal_get__bloomPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::FireEffect::__cordl_internal_get__bloomPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPropertyBlockController;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__bloomPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPropertyBlockController = value;
}
constexpr bool& GlobalNamespace::FireEffect::__cordl_internal_get__useEmissionColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEmissionColor;
}
constexpr bool const& GlobalNamespace::FireEffect::__cordl_internal_get__useEmissionColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEmissionColor;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__useEmissionColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useEmissionColor = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::FireEffect::__cordl_internal_get__privatePointLightPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privatePointLightPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::FireEffect::__cordl_internal_get__privatePointLightPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privatePointLightPropertyBlockController;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__privatePointLightPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____privatePointLightPropertyBlockController = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::FireEffect::__cordl_internal_get__emissionTextureColorPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emissionTextureColorPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::FireEffect::__cordl_internal_get__emissionTextureColorPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emissionTextureColorPropertyBlockController;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__emissionTextureColorPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emissionTextureColorPropertyBlockController = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>& GlobalNamespace::FireEffect::__cordl_internal_get__bloomPrePassRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> const& GlobalNamespace::FireEffect::__cordl_internal_get__bloomPrePassRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassRenderer;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__bloomPrePassRenderer(::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassRenderer = value;
}
constexpr float_t& GlobalNamespace::FireEffect::__cordl_internal_get__bloomIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::FireEffect::__cordl_internal_get__bloomIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIntensityMultiplier;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__bloomIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomIntensityMultiplier = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FireEffect::__cordl_internal_get__pointLightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FireEffect::__cordl_internal_get__pointLightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightColor;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__pointLightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointLightColor = value;
}
constexpr bool& GlobalNamespace::FireEffect::__cordl_internal_get__contributeCustomLightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contributeCustomLightColor;
}
constexpr bool const& GlobalNamespace::FireEffect::__cordl_internal_get__contributeCustomLightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contributeCustomLightColor;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__contributeCustomLightColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contributeCustomLightColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::FireEffect::__cordl_internal_get__customLightColorContribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLightColorContribution;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::FireEffect::__cordl_internal_get__customLightColorContribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLightColorContribution;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__customLightColorContribution(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLightColorContribution = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::FireEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::FireEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::FireEffect::__cordl_internal_get__lightWithIdManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightWithIdManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::FireEffect::__cordl_internal_get__lightWithIdManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightWithIdManager;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__lightWithIdManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightWithIdManager = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::FireEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::FireEffect::__cordl_internal_get__lightColorBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::FireEffect::__cordl_internal_set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColorBeatmapEventCallbackWrapper = value;
}
inline void GlobalNamespace::FireEffect::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FireEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireEffect::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FireEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FireEffect*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void GlobalNamespace::FireEffect::SetRenderersEnabled(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { "SetRenderersEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::FireEffect::NotifyAlphaWasChanged(float_t currentAlpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { "NotifyAlphaWasChanged", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentAlpha);
}
inline void GlobalNamespace::FireEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FireEffect* GlobalNamespace::FireEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireEffect::FireEffect() {}
