#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorRendererGraphicsSettingsPresets.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType() {}
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType::FakeMirror{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType::RenderedMirror{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::*)()>(
    &::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x372d048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_mirrorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorType;
}
constexpr ::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_mirrorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorType;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_mirrorType(::GlobalNamespace::Preset_MirrorRendererGraphicsSettingsPresets_MirrorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorType = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_reflectLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_reflectLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectLayers;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_reflectLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectLayers = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_stereoTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureWidth;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_stereoTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureWidth;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_stereoTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoTextureWidth = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_stereoTextureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureHeight;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_stereoTextureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureHeight;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_stereoTextureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoTextureHeight = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_monoTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureWidth;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_monoTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureWidth;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_monoTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoTextureWidth = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_monoTextureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureHeight;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_monoTextureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureHeight;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_monoTextureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoTextureHeight = value;
}
constexpr int32_t& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_maxAntiAliasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAntiAliasing;
}
constexpr int32_t const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_maxAntiAliasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAntiAliasing;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_maxAntiAliasing(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAntiAliasing = value;
}
constexpr bool& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_enableBloomPrePassFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBloomPrePassFog;
}
constexpr bool const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_get_enableBloomPrePassFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBloomPrePassFog;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::__cordl_internal_set_enableBloomPrePassFog(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableBloomPrePassFog = value;
}
inline void GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset* GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset::MirrorRendererGraphicsSettingsPresets_Preset() {}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_presets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(
    &::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(), { "get_presets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_namedPresets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*> (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(
    &::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372d040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>& GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__cordl_internal_get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> const& GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__cordl_internal_get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__cordl_internal_set__presets(::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presets = value;
}
inline ::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(), { "get_presets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets_Preset*>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NamedPreset*> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*>>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* GlobalNamespace::MirrorRendererGraphicsSettingsPresets::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::MirrorRendererGraphicsSettingsPresets() {}
