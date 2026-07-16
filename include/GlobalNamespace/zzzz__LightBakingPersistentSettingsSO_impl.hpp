#pragma once
// IWYU pragma private; include "GlobalNamespace/LightBakingPersistentSettingsSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LightBakingPersistentSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__BakedLightDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BakedReflectionProbe_def.hpp"
#include "GlobalNamespace/zzzz__FakeMirrorObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FakeMirrorSettings_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightsWithIds_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_reflectionsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&::GlobalNamespace::LightBakingPersistentSettingsSO::get_reflectionsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_reflectionsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.set_reflectionsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightBakingPersistentSettingsSO::*)(int32_t)>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::set_reflectionsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e2934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "set_reflectionsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_colorFromSchemeAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_colorFromSchemeAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_colorFromSchemeAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.set_colorFromSchemeAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightBakingPersistentSettingsSO::*)(float_t)>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::set_colorFromSchemeAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e2944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "set_colorFromSchemeAlpha", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_bakedLightEditorColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightEditorColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e294c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_bakedLightEditorColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_bakedLightDataLoaderPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BakedLightDataLoader> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightDataLoaderPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e2954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_bakedLightDataLoaderPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_bakedReflectionProbePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BakedReflectionProbe> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedReflectionProbePrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_bakedReflectionProbePrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_lightmapLightsWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightmapLightsWithIds> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_lightmapLightsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e2964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_lightmapLightsWithIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_fakeMirrorObjectsInstallerPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorObjectsInstallerPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_fakeMirrorObjectsInstallerPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_fakeMirrorSettingsPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FakeMirrorSettings> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorSettingsPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e2974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_fakeMirrorSettingsPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.get_defaultDepthOnlyWriteMaterialForFakeMirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(
    &::GlobalNamespace::LightBakingPersistentSettingsSO::get_defaultDepthOnlyWriteMaterialForFakeMirror)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_defaultDepthOnlyWriteMaterialForFakeMirror", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO.ApplySettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&::GlobalNamespace::LightBakingPersistentSettingsSO::ApplySettings)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58e2984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "ApplySettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightBakingPersistentSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightBakingPersistentSettingsSO::*)()>(&::GlobalNamespace::LightBakingPersistentSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58e2a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsApplicator = value;
}
constexpr int32_t& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__reflectionsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionsCount;
}
constexpr int32_t const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__reflectionsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionsCount;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__reflectionsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionsCount = value;
}
constexpr float_t& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__colorFromSchemeAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorFromSchemeAlpha;
}
constexpr float_t const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__colorFromSchemeAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorFromSchemeAlpha;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__colorFromSchemeAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorFromSchemeAlpha = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__bakedLightEditorColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightEditorColors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__bakedLightEditorColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightEditorColors;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__bakedLightEditorColors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakedLightEditorColors = value;
}
constexpr ::UnityW<::GlobalNamespace::BakedLightDataLoader>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__bakedLightDataLoaderPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightDataLoaderPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BakedLightDataLoader> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__bakedLightDataLoaderPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightDataLoaderPrefab;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__bakedLightDataLoaderPrefab(::UnityW<::GlobalNamespace::BakedLightDataLoader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakedLightDataLoaderPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BakedReflectionProbe>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__bakedReflectionProbePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedReflectionProbePrefab;
}
constexpr ::UnityW<::GlobalNamespace::BakedReflectionProbe> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__bakedReflectionProbePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedReflectionProbePrefab;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__bakedReflectionProbePrefab(::UnityW<::GlobalNamespace::BakedReflectionProbe> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakedReflectionProbePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::LightmapLightsWithIds>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__lightmapLightsWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightsWithIds;
}
constexpr ::UnityW<::GlobalNamespace::LightmapLightsWithIds> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__lightmapLightsWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightsWithIds;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__lightmapLightsWithIds(::UnityW<::GlobalNamespace::LightmapLightsWithIds> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapLightsWithIds = value;
}
constexpr ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__fakeMirrorObjectsInstallerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeMirrorObjectsInstallerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__fakeMirrorObjectsInstallerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeMirrorObjectsInstallerPrefab;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__fakeMirrorObjectsInstallerPrefab(::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fakeMirrorObjectsInstallerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::FakeMirrorSettings>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__fakeMirrorSettingsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeMirrorSettingsPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FakeMirrorSettings> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__fakeMirrorSettingsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeMirrorSettingsPrefab;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__fakeMirrorSettingsPrefab(::UnityW<::GlobalNamespace::FakeMirrorSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fakeMirrorSettingsPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__defaultDepthOnlyWriteMaterialForFakeMirror() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultDepthOnlyWriteMaterialForFakeMirror;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_get__defaultDepthOnlyWriteMaterialForFakeMirror() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultDepthOnlyWriteMaterialForFakeMirror;
}
constexpr void GlobalNamespace::LightBakingPersistentSettingsSO::__cordl_internal_set__defaultDepthOnlyWriteMaterialForFakeMirror(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultDepthOnlyWriteMaterialForFakeMirror = value;
}
inline int32_t GlobalNamespace::LightBakingPersistentSettingsSO::get_reflectionsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_reflectionsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightBakingPersistentSettingsSO::set_reflectionsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "set_reflectionsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::LightBakingPersistentSettingsSO::get_colorFromSchemeAlpha() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_colorFromSchemeAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightBakingPersistentSettingsSO::set_colorFromSchemeAlpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "set_colorFromSchemeAlpha", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color> GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightEditorColors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_bakedLightEditorColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BakedLightDataLoader> GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedLightDataLoaderPrefab() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_bakedLightDataLoaderPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BakedLightDataLoader>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BakedReflectionProbe> GlobalNamespace::LightBakingPersistentSettingsSO::get_bakedReflectionProbePrefab() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_bakedReflectionProbePrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BakedReflectionProbe>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LightmapLightsWithIds> GlobalNamespace::LightBakingPersistentSettingsSO::get_lightmapLightsWithIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_lightmapLightsWithIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightmapLightsWithIds>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorObjectsInstallerPrefab() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_fakeMirrorObjectsInstallerPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::FakeMirrorSettings> GlobalNamespace::LightBakingPersistentSettingsSO::get_fakeMirrorSettingsPrefab() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_fakeMirrorSettingsPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FakeMirrorSettings>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::LightBakingPersistentSettingsSO::get_defaultDepthOnlyWriteMaterialForFakeMirror() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "get_defaultDepthOnlyWriteMaterialForFakeMirror", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::LightBakingPersistentSettingsSO::ApplySettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { "ApplySettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightBakingPersistentSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightBakingPersistentSettingsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightBakingPersistentSettingsSO* GlobalNamespace::LightBakingPersistentSettingsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightBakingPersistentSettingsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightBakingPersistentSettingsSO::LightBakingPersistentSettingsSO() {}
