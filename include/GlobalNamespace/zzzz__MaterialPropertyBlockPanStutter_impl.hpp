#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockPanStutter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockPanStutter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockPanStutter_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer::*)(::StringW, ::StringW, float_t)>(
    &::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cc025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer::_ctor(::StringW scaleOffsetPropertyName, ::StringW speedPropertyName, float_t panRatePerSec) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, scaleOffsetPropertyName, speedPropertyName, panRatePerSec);
}
// Ctor Parameters [CppParam { name: "scaleOffsetPropertyId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speedPropertyId", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "panRatePerSec", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer::MaterialPropertyBlockPanStutter_PannedLayer(int32_t scaleOffsetPropertyId, int32_t speedPropertyId,
                                                                                                                      float_t panRatePerSec) noexcept {
  this->scaleOffsetPropertyId = scaleOffsetPropertyId;
  this->speedPropertyId = speedPropertyId;
  this->panRatePerSec = panRatePerSec;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer::MaterialPropertyBlockPanStutter_PannedLayer() {}
// Ctor Parameters [CppParam { name: "baseScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "panSpeed", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache::MaterialPropertyBlockPanStutter_LayerCache(::UnityEngine::Vector4 baseScaleOffset, ::UnityEngine::Vector4 panSpeed,
                                                                                                                    bool isEnabled) noexcept {
  this->baseScaleOffset = baseScaleOffset;
  this->panSpeed = panSpeed;
  this->isEnabled = isEnabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache::MaterialPropertyBlockPanStutter_LayerCache() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)()>(&::GlobalNamespace::MaterialPropertyBlockPanStutter::OnEnable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cbf458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)()>(&::GlobalNamespace::MaterialPropertyBlockPanStutter::Update)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cbf924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.AdvancePhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)()>(&::GlobalNamespace::MaterialPropertyBlockPanStutter::AdvancePhase)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5cbfaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "AdvancePhase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.ApplyLayerOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)(::UnityEngine::MaterialPropertyBlock*)>(
    &::GlobalNamespace::MaterialPropertyBlockPanStutter::ApplyLayerOffsets)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cbfb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(),
                                                                                           { "ApplyLayerOffsets", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.RefreshLayerCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)(bool)>(&::GlobalNamespace::MaterialPropertyBlockPanStutter::RefreshLayerCaches)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5cbf504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "RefreshLayerCaches", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.IsLayerGlitchEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)(int32_t)>(
    &::GlobalNamespace::MaterialPropertyBlockPanStutter::IsLayerGlitchEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cbfd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "IsLayerGlitchEnabled", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.SetLayerEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)(int32_t, bool)>(
    &::GlobalNamespace::MaterialPropertyBlockPanStutter::SetLayerEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cbfdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "SetLayerEnabled", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.ResolveLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> (*)(::UnityEngine::Material*)>(
    &::GlobalNamespace::MaterialPropertyBlockPanStutter::ResolveLayers)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cbfc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "ResolveLayers", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter.GetFirstSharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::ArrayW<::UnityEngine::Renderer*>)>(
    &::GlobalNamespace::MaterialPropertyBlockPanStutter::GetFirstSharedMaterial)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cbfc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(),
                                                                                           { "GetFirstSharedMaterial", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockPanStutter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockPanStutter::*)()>(&::GlobalNamespace::MaterialPropertyBlockPanStutter::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cbfe08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__globalSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__globalSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSpeedMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__globalSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____globalSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__playSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__playSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playSpeedMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__playSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__minPlayDurationSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPlayDurationSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__minPlayDurationSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minPlayDurationSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__minPlayDurationSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minPlayDurationSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__maxPlayDurationSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayDurationSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__maxPlayDurationSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayDurationSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__maxPlayDurationSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPlayDurationSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__freezeSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freezeSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__freezeSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freezeSpeedMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__freezeSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freezeSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__minFreezeDurationSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minFreezeDurationSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__minFreezeDurationSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minFreezeDurationSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__minFreezeDurationSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minFreezeDurationSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__maxFreezeDurationSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFreezeDurationSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__maxFreezeDurationSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxFreezeDurationSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__maxFreezeDurationSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxFreezeDurationSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__minJumpSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minJumpSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__minJumpSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minJumpSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__minJumpSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minJumpSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__maxJumpSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxJumpSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__maxJumpSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxJumpSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__maxJumpSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxJumpSec = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldUseSharedTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldUseSharedTimeOffset;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldUseSharedTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldUseSharedTimeOffset;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__shouldUseSharedTimeOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldUseSharedTimeOffset = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchLayer1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchLayer1;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchLayer1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchLayer1;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__shouldGlitchLayer1(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldGlitchLayer1 = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchLayer2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchLayer2;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchLayer2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchLayer2;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__shouldGlitchLayer2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldGlitchLayer2 = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchLayer3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchLayer3;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchLayer3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchLayer3;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__shouldGlitchLayer3(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldGlitchLayer3 = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchDistortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchDistortion;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__shouldGlitchDistortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldGlitchDistortion;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__shouldGlitchDistortion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldGlitchDistortion = value;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache>& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__layerCaches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerCaches;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache> const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__layerCaches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerCaches;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__layerCaches(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerCaches = value;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__activeLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLayers;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__activeLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLayers;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__activeLayers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeLayers = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__isShaderTimeFrozen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isShaderTimeFrozen;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__isShaderTimeFrozen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isShaderTimeFrozen;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__isShaderTimeFrozen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isShaderTimeFrozen = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__glitchedTimeOffsetSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glitchedTimeOffsetSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__glitchedTimeOffsetSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glitchedTimeOffsetSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__glitchedTimeOffsetSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____glitchedTimeOffsetSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__unglitchedTimeOffsetSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unglitchedTimeOffsetSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__unglitchedTimeOffsetSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unglitchedTimeOffsetSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__unglitchedTimeOffsetSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unglitchedTimeOffsetSec = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__hasUnglitchedPanning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasUnglitchedPanning;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__hasUnglitchedPanning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasUnglitchedPanning;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__hasUnglitchedPanning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasUnglitchedPanning = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__wasUsingSharedTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasUsingSharedTimeOffset;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__wasUsingSharedTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasUsingSharedTimeOffset;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__wasUsingSharedTimeOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasUsingSharedTimeOffset = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__lastAppliedGlitchedTimeOffsetSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAppliedGlitchedTimeOffsetSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__lastAppliedGlitchedTimeOffsetSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAppliedGlitchedTimeOffsetSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__lastAppliedGlitchedTimeOffsetSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastAppliedGlitchedTimeOffsetSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__lastAppliedUnglitchedTimeOffsetSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAppliedUnglitchedTimeOffsetSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__lastAppliedUnglitchedTimeOffsetSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAppliedUnglitchedTimeOffsetSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__lastAppliedUnglitchedTimeOffsetSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastAppliedUnglitchedTimeOffsetSec = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__stateTimeLeftSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateTimeLeftSec;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__stateTimeLeftSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateTimeLeftSec;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__stateTimeLeftSec(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateTimeLeftSec = value;
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__isInFreezePhase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInFreezePhase;
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_get__isInFreezePhase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInFreezePhase;
}
constexpr void GlobalNamespace::MaterialPropertyBlockPanStutter::__cordl_internal_set__isInFreezePhase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInFreezePhase = value;
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::setStaticF_kEmissionTexLayers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>, "kEmissionTexLayers", ::GlobalNamespace::MaterialPropertyBlockPanStutter*>(
      std::forward<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>>(value));
}
inline ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> GlobalNamespace::MaterialPropertyBlockPanStutter::getStaticF_kEmissionTexLayers() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>, "kEmissionTexLayers", ::GlobalNamespace::MaterialPropertyBlockPanStutter*>();
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::setStaticF_kMainTexLayers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>, "kMainTexLayers", ::GlobalNamespace::MaterialPropertyBlockPanStutter*>(
      std::forward<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>>(value));
}
inline ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> GlobalNamespace::MaterialPropertyBlockPanStutter::getStaticF_kMainTexLayers() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>, "kMainTexLayers", ::GlobalNamespace::MaterialPropertyBlockPanStutter*>();
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::setStaticF_kTimeOffsetPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kTimeOffsetPropertyId", ::GlobalNamespace::MaterialPropertyBlockPanStutter*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MaterialPropertyBlockPanStutter::getStaticF_kTimeOffsetPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "kTimeOffsetPropertyId", ::GlobalNamespace::MaterialPropertyBlockPanStutter*>();
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::AdvancePhase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "AdvancePhase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::ApplyLayerOffsets(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(),
                                                                                         { "ApplyLayerOffsets", {}, { ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialPropertyBlock);
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::RefreshLayerCaches(bool shouldWarnIfUnsupported) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "RefreshLayerCaches", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldWarnIfUnsupported);
}
inline bool GlobalNamespace::MaterialPropertyBlockPanStutter::IsLayerGlitchEnabled(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "IsLayerGlitchEnabled", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool GlobalNamespace::MaterialPropertyBlockPanStutter::SetLayerEnabled(int32_t index, bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "SetLayerEnabled", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, isEnabled);
}
inline ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> GlobalNamespace::MaterialPropertyBlockPanStutter::ResolveLayers(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { "ResolveLayers", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>>(nullptr, ___internal_method, material);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MaterialPropertyBlockPanStutter::GetFirstSharedMaterial(::ArrayW<::UnityEngine::Renderer*> renderers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(),
                                                                                         { "GetFirstSharedMaterial", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Renderer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, renderers);
}
inline void GlobalNamespace::MaterialPropertyBlockPanStutter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockPanStutter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockPanStutter* GlobalNamespace::MaterialPropertyBlockPanStutter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockPanStutter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockPanStutter::MaterialPropertyBlockPanStutter() {}
