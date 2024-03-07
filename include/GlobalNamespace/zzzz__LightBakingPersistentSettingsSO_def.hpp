#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightBakingPersistentSettingsSO)
namespace GlobalNamespace {
class BakedLightDataLoader;
}
namespace GlobalNamespace {
class BakedReflectionProbe;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller;
}
namespace GlobalNamespace {
class FakeMirrorSettings;
}
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class LightBakingPersistentSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightBakingPersistentSettingsSO);
// Type: ::LightBakingPersistentSettingsSO
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightBakingPersistentSettingsSO*
class CORDL_TYPE LightBakingPersistentSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _bakedLightDataLoaderPrefab, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedLightDataLoaderPrefab,
                      put = __cordl_internal_set__bakedLightDataLoaderPrefab))::UnityW<::GlobalNamespace::BakedLightDataLoader> _bakedLightDataLoaderPrefab;

  /// @brief Field _bakedLightEditorColors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedLightEditorColors,
                      put = __cordl_internal_set__bakedLightEditorColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _bakedLightEditorColors;

  /// @brief Field _bakedReflectionProbePrefab, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedReflectionProbePrefab,
                      put = __cordl_internal_set__bakedReflectionProbePrefab))::UnityW<::GlobalNamespace::BakedReflectionProbe> _bakedReflectionProbePrefab;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer,
                      put = __cordl_internal_set__bloomPrePassEffectContainer))::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrePassEffectToneMappingOff, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectToneMappingOff,
                      put = __cordl_internal_set__bloomPrePassEffectToneMappingOff))::UnityW<::GlobalNamespace::BloomPrePassEffectSO> _bloomPrePassEffectToneMappingOff;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassGraphicsSettingsPresets,
                      put = __cordl_internal_set__bloomPrePassGraphicsSettingsPresets))::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> _bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _colorFromSchemeAlpha, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__colorFromSchemeAlpha, put = __cordl_internal_set__colorFromSchemeAlpha)) float_t _colorFromSchemeAlpha;

  /// @brief Field _defaultDepthOnlyWriteMaterialForFakeMirror, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultDepthOnlyWriteMaterialForFakeMirror,
                      put = __cordl_internal_set__defaultDepthOnlyWriteMaterialForFakeMirror))::UnityW<::UnityEngine::Material> _defaultDepthOnlyWriteMaterialForFakeMirror;

  /// @brief Field _fakeMirrorObjectsInstallerPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fakeMirrorObjectsInstallerPrefab,
                      put = __cordl_internal_set__fakeMirrorObjectsInstallerPrefab))::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> _fakeMirrorObjectsInstallerPrefab;

  /// @brief Field _fakeMirrorSettingsPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__fakeMirrorSettingsPrefab,
                      put = __cordl_internal_set__fakeMirrorSettingsPrefab))::UnityW<::GlobalNamespace::FakeMirrorSettings> _fakeMirrorSettingsPrefab;

  /// @brief Field _lightmapLightsWithIds, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapLightsWithIds, put = __cordl_internal_set__lightmapLightsWithIds))::UnityW<::GlobalNamespace::LightmapLightsWithIds> _lightmapLightsWithIds;

  /// @brief Field _mainEffectContainer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectContainer, put = __cordl_internal_set__mainEffectContainer))::UnityW<::GlobalNamespace::MainEffectContainerSO> _mainEffectContainer;

  /// @brief Field _mainEffectForBaking, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectForBaking, put = __cordl_internal_set__mainEffectForBaking))::UnityW<::GlobalNamespace::MainEffectSO> _mainEffectForBaking;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectGraphicsSettingsPresets,
                      put = __cordl_internal_set__mainEffectGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> _mainEffectGraphicsSettingsPresets;

  /// @brief Field _mainSettingsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _mirrorRenderer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer))::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRendererGraphicsSettingsPresets,
                      put = __cordl_internal_set__mirrorRendererGraphicsSettingsPresets))::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _reflectionsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__reflectionsCount, put = __cordl_internal_set__reflectionsCount)) int32_t _reflectionsCount;

  __declspec(property(get = get_bakedLightDataLoaderPrefab))::UnityW<::GlobalNamespace::BakedLightDataLoader> bakedLightDataLoaderPrefab;

  __declspec(property(get = get_bakedLightEditorColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> bakedLightEditorColors;

  __declspec(property(get = get_bakedReflectionProbePrefab))::UnityW<::GlobalNamespace::BakedReflectionProbe> bakedReflectionProbePrefab;

  __declspec(property(get = get_colorFromSchemeAlpha, put = set_colorFromSchemeAlpha)) float_t colorFromSchemeAlpha;

  __declspec(property(get = get_defaultDepthOnlyWriteMaterialForFakeMirror))::UnityW<::UnityEngine::Material> defaultDepthOnlyWriteMaterialForFakeMirror;

  __declspec(property(get = get_fakeMirrorObjectsInstallerPrefab))::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> fakeMirrorObjectsInstallerPrefab;

  __declspec(property(get = get_fakeMirrorSettingsPrefab))::UnityW<::GlobalNamespace::FakeMirrorSettings> fakeMirrorSettingsPrefab;

  __declspec(property(get = get_lightmapLightsWithIds))::UnityW<::GlobalNamespace::LightmapLightsWithIds> lightmapLightsWithIds;

  __declspec(property(get = get_mainEffectForBakingIsOn, put = set_mainEffectForBakingIsOn)) bool mainEffectForBakingIsOn;

  __declspec(property(get = get_reflectionsCount, put = set_reflectionsCount)) int32_t reflectionsCount;

  /// @brief Method IsToneMappingOn, addr 0x2458860, size 0x34, virtual false, abstract: false, final false
  inline bool IsToneMappingOn();

  static inline ::GlobalNamespace::LightBakingPersistentSettingsSO* New_ctor();

  /// @brief Method SetGraphicsSettingsForBaking, addr 0x2458358, size 0x254, virtual false, abstract: false, final false
  inline void SetGraphicsSettingsForBaking();

  /// @brief Method SetPlatformGraphics, addr 0x245865c, size 0x204, virtual false, abstract: false, final false
  inline void SetPlatformGraphics();

  /// @brief Method SetToneMappingOn, addr 0x24585ac, size 0xb0, virtual false, abstract: false, final false
  inline void SetToneMappingOn(bool isOn);

  constexpr ::UnityW<::GlobalNamespace::BakedLightDataLoader> const& __cordl_internal_get__bakedLightDataLoaderPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BakedLightDataLoader>& __cordl_internal_get__bakedLightDataLoaderPrefab();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__bakedLightEditorColors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__bakedLightEditorColors();

  constexpr ::UnityW<::GlobalNamespace::BakedReflectionProbe> const& __cordl_internal_get__bakedReflectionProbePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BakedReflectionProbe>& __cordl_internal_get__bakedReflectionProbePrefab();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__bloomPrePassEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__bloomPrePassEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get__bloomPrePassEffectToneMappingOff() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get__bloomPrePassEffectToneMappingOff();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& __cordl_internal_get__bloomPrePassGraphicsSettingsPresets();

  constexpr float_t const& __cordl_internal_get__colorFromSchemeAlpha() const;

  constexpr float_t& __cordl_internal_get__colorFromSchemeAlpha();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__defaultDepthOnlyWriteMaterialForFakeMirror() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__defaultDepthOnlyWriteMaterialForFakeMirror();

  constexpr ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> const& __cordl_internal_get__fakeMirrorObjectsInstallerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller>& __cordl_internal_get__fakeMirrorObjectsInstallerPrefab();

  constexpr ::UnityW<::GlobalNamespace::FakeMirrorSettings> const& __cordl_internal_get__fakeMirrorSettingsPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FakeMirrorSettings>& __cordl_internal_get__fakeMirrorSettingsPrefab();

  constexpr ::UnityW<::GlobalNamespace::LightmapLightsWithIds> const& __cordl_internal_get__lightmapLightsWithIds() const;

  constexpr ::UnityW<::GlobalNamespace::LightmapLightsWithIds>& __cordl_internal_get__lightmapLightsWithIds();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__mainEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__mainEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get__mainEffectForBaking() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get__mainEffectForBaking();

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& __cordl_internal_get__mainEffectGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& __cordl_internal_get__mainEffectGraphicsSettingsPresets();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& __cordl_internal_get__mirrorRendererGraphicsSettingsPresets();

  constexpr int32_t const& __cordl_internal_get__reflectionsCount() const;

  constexpr int32_t& __cordl_internal_get__reflectionsCount();

  constexpr void __cordl_internal_set__bakedLightDataLoaderPrefab(::UnityW<::GlobalNamespace::BakedLightDataLoader> value);

  constexpr void __cordl_internal_set__bakedLightEditorColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set__bakedReflectionProbePrefab(::UnityW<::GlobalNamespace::BakedReflectionProbe> value);

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__bloomPrePassEffectToneMappingOff(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  constexpr void __cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__colorFromSchemeAlpha(float_t value);

  constexpr void __cordl_internal_set__defaultDepthOnlyWriteMaterialForFakeMirror(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fakeMirrorObjectsInstallerPrefab(::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> value);

  constexpr void __cordl_internal_set__fakeMirrorSettingsPrefab(::UnityW<::GlobalNamespace::FakeMirrorSettings> value);

  constexpr void __cordl_internal_set__lightmapLightsWithIds(::UnityW<::GlobalNamespace::LightmapLightsWithIds> value);

  constexpr void __cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  constexpr void __cordl_internal_set__mainEffectForBaking(::UnityW<::GlobalNamespace::MainEffectSO> value);

  constexpr void __cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value);

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value);

  constexpr void __cordl_internal_set__reflectionsCount(int32_t value);

  /// @brief Method .ctor, addr 0x2458894, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakedLightDataLoaderPrefab, addr 0x2458330, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BakedLightDataLoader> get_bakedLightDataLoaderPrefab();

  /// @brief Method get_bakedLightEditorColors, addr 0x2458200, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_bakedLightEditorColors();

  /// @brief Method get_bakedReflectionProbePrefab, addr 0x2458338, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BakedReflectionProbe> get_bakedReflectionProbePrefab();

  /// @brief Method get_colorFromSchemeAlpha, addr 0x24581f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorFromSchemeAlpha();

  /// @brief Method get_defaultDepthOnlyWriteMaterialForFakeMirror, addr 0x2458208, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultDepthOnlyWriteMaterialForFakeMirror();

  /// @brief Method get_fakeMirrorObjectsInstallerPrefab, addr 0x2458348, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> get_fakeMirrorObjectsInstallerPrefab();

  /// @brief Method get_fakeMirrorSettingsPrefab, addr 0x2458350, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::FakeMirrorSettings> get_fakeMirrorSettingsPrefab();

  /// @brief Method get_lightmapLightsWithIds, addr 0x2458340, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightmapLightsWithIds> get_lightmapLightsWithIds();

  /// @brief Method get_mainEffectForBakingIsOn, addr 0x2458210, size 0x70, virtual false, abstract: false, final false
  inline bool get_mainEffectForBakingIsOn();

  /// @brief Method get_reflectionsCount, addr 0x24581e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_reflectionsCount();

  /// @brief Method set_colorFromSchemeAlpha, addr 0x24581f8, size 0x8, virtual false, abstract: false, final false
  inline void set_colorFromSchemeAlpha(float_t value);

  /// @brief Method set_mainEffectForBakingIsOn, addr 0x2458280, size 0xb0, virtual false, abstract: false, final false
  inline void set_mainEffectForBakingIsOn(bool value);

  /// @brief Method set_reflectionsCount, addr 0x24581e8, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionsCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightBakingPersistentSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightBakingPersistentSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightBakingPersistentSettingsSO(LightBakingPersistentSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightBakingPersistentSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightBakingPersistentSettingsSO(LightBakingPersistentSettingsSO const&) = delete;

  /// @brief Field _reflectionsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____reflectionsCount;

  /// @brief Field _bloomPrePassEffectToneMappingOff, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ____bloomPrePassEffectToneMappingOff;

  /// @brief Field _mainEffectForBaking, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ____mainEffectForBaking;

  /// @brief Field _colorFromSchemeAlpha, offset: 0x30, size: 0x4, def value: None
  float_t ____colorFromSchemeAlpha;

  /// @brief Field _bakedLightEditorColors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____bakedLightEditorColors;

  /// @brief Field _mainSettingsModel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> ____mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> ____bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____bloomPrePassEffectContainer;

  /// @brief Field _bakedLightDataLoaderPrefab, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BakedLightDataLoader> ____bakedLightDataLoaderPrefab;

  /// @brief Field _bakedReflectionProbePrefab, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BakedReflectionProbe> ____bakedReflectionProbePrefab;

  /// @brief Field _lightmapLightsWithIds, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightmapLightsWithIds> ____lightmapLightsWithIds;

  /// @brief Field _fakeMirrorObjectsInstallerPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> ____fakeMirrorObjectsInstallerPrefab;

  /// @brief Field _fakeMirrorSettingsPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FakeMirrorSettings> ____fakeMirrorSettingsPrefab;

  /// @brief Field _defaultDepthOnlyWriteMaterialForFakeMirror, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____defaultDepthOnlyWriteMaterialForFakeMirror;

  /// @brief Field kDefaultAntiAliasingLevel offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultAntiAliasingLevel{ static_cast<int32_t>(0x8) };

  /// @brief Field kDefaultBurnMarkTrailsEnabled offset 0xffffffff size 0x1
  static constexpr bool kDefaultBurnMarkTrailsEnabled{ true };

  /// @brief Field kDefaultMainEffectGraphicsSettings offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultMainEffectGraphicsSettings{ static_cast<int32_t>(0x1) };

  /// @brief Field kDefaultMenuVRResolutionScaleMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMenuVRResolutionScaleMultiplier{ 1.0 };

  /// @brief Field kDefaultMirrorGraphicsSettings offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultMirrorGraphicsSettings{ static_cast<int32_t>(0x0) };

  /// @brief Field kDefaultScreenDisplacementEffectsEnabled offset 0xffffffff size 0x1
  static constexpr bool kDefaultScreenDisplacementEffectsEnabled{ true };

  /// @brief Field kDefaultUseFixedFoveatedRenderingDuringGameplay offset 0xffffffff size 0x1
  static constexpr bool kDefaultUseFixedFoveatedRenderingDuringGameplay{ false };

  /// @brief Field kDefaultVrResolutionScale offset 0xffffffff size 0x4
  static constexpr float_t kDefaultVrResolutionScale{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightBakingPersistentSettingsSO, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____reflectionsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bloomPrePassEffectToneMappingOff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____mainEffectForBaking) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____colorFromSchemeAlpha) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bakedLightEditorColors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____mainSettingsModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____mirrorRendererGraphicsSettingsPresets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____mainEffectGraphicsSettingsPresets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bloomPrePassGraphicsSettingsPresets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____mirrorRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____mainEffectContainer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bloomPrePassEffectContainer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bakedLightDataLoaderPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bakedReflectionProbePrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____lightmapLightsWithIds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____fakeMirrorObjectsInstallerPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____fakeMirrorSettingsPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____defaultDepthOnlyWriteMaterialForFakeMirror) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightBakingPersistentSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightBakingPersistentSettingsSO*, "", "LightBakingPersistentSettingsSO");
