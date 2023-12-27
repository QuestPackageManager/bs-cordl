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
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class FakeMirrorSettings;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller;
}
namespace GlobalNamespace {
class BakedReflectionProbe;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5862))
// CS Name: ::LightBakingPersistentSettingsSO*
class CORDL_TYPE LightBakingPersistentSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _reflectionsCount, offset 0x18, size 0x4
  __declspec(property(get = __get__reflectionsCount, put = __set__reflectionsCount)) int32_t _reflectionsCount;

  /// @brief Field _bloomPrePassEffectToneMappingOff, offset 0x20, size 0x8
  __declspec(property(get = __get__bloomPrePassEffectToneMappingOff, put = __set__bloomPrePassEffectToneMappingOff))::GlobalNamespace::BloomPrePassEffectSO* _bloomPrePassEffectToneMappingOff;

  /// @brief Field _mainEffectForBaking, offset 0x28, size 0x8
  __declspec(property(get = __get__mainEffectForBaking, put = __set__mainEffectForBaking))::GlobalNamespace::MainEffectSO* _mainEffectForBaking;

  /// @brief Field _colorFromSchemeAlpha, offset 0x30, size 0x4
  __declspec(property(get = __get__colorFromSchemeAlpha, put = __set__colorFromSchemeAlpha)) float_t _colorFromSchemeAlpha;

  /// @brief Field _bakedLightEditorColors, offset 0x38, size 0x8
  __declspec(property(get = __get__bakedLightEditorColors, put = __set__bakedLightEditorColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _bakedLightEditorColors;

  /// @brief Field _mainSettingsModel, offset 0x40, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset 0x48, size 0x8
  __declspec(property(get = __get__mirrorRendererGraphicsSettingsPresets,
                      put = __set__mirrorRendererGraphicsSettingsPresets))::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* _mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset 0x50, size 0x8
  __declspec(property(get = __get__mainEffectGraphicsSettingsPresets,
                      put = __set__mainEffectGraphicsSettingsPresets))::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* _mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset 0x58, size 0x8
  __declspec(property(get = __get__bloomPrePassGraphicsSettingsPresets,
                      put = __set__bloomPrePassGraphicsSettingsPresets))::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* _bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset 0x60, size 0x8
  __declspec(property(get = __get__mirrorRenderer, put = __set__mirrorRenderer))::GlobalNamespace::MirrorRendererSO* _mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset 0x68, size 0x8
  __declspec(property(get = __get__mainEffectContainer, put = __set__mainEffectContainer))::GlobalNamespace::MainEffectContainerSO* _mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset 0x70, size 0x8
  __declspec(property(get = __get__bloomPrePassEffectContainer, put = __set__bloomPrePassEffectContainer))::GlobalNamespace::BloomPrePassEffectContainerSO* _bloomPrePassEffectContainer;

  /// @brief Field _bakedLightDataLoaderPrefab, offset 0x78, size 0x8
  __declspec(property(get = __get__bakedLightDataLoaderPrefab, put = __set__bakedLightDataLoaderPrefab))::GlobalNamespace::BakedLightDataLoader* _bakedLightDataLoaderPrefab;

  /// @brief Field _bakedReflectionProbePrefab, offset 0x80, size 0x8
  __declspec(property(get = __get__bakedReflectionProbePrefab, put = __set__bakedReflectionProbePrefab))::GlobalNamespace::BakedReflectionProbe* _bakedReflectionProbePrefab;

  /// @brief Field _lightmapLightsWithIds, offset 0x88, size 0x8
  __declspec(property(get = __get__lightmapLightsWithIds, put = __set__lightmapLightsWithIds))::GlobalNamespace::LightmapLightsWithIds* _lightmapLightsWithIds;

  /// @brief Field _fakeMirrorObjectsInstallerPrefab, offset 0x90, size 0x8
  __declspec(property(get = __get__fakeMirrorObjectsInstallerPrefab, put = __set__fakeMirrorObjectsInstallerPrefab))::GlobalNamespace::FakeMirrorObjectsInstaller* _fakeMirrorObjectsInstallerPrefab;

  /// @brief Field _fakeMirrorSettingsPrefab, offset 0x98, size 0x8
  __declspec(property(get = __get__fakeMirrorSettingsPrefab, put = __set__fakeMirrorSettingsPrefab))::GlobalNamespace::FakeMirrorSettings* _fakeMirrorSettingsPrefab;

  /// @brief Field _defaultDepthOnlyWriteMaterialForFakeMirror, offset 0xa0, size 0x8
  __declspec(property(get = __get__defaultDepthOnlyWriteMaterialForFakeMirror,
                      put = __set__defaultDepthOnlyWriteMaterialForFakeMirror))::UnityEngine::Material* _defaultDepthOnlyWriteMaterialForFakeMirror;

  __declspec(property(get = get_reflectionsCount, put = set_reflectionsCount)) int32_t reflectionsCount;

  __declspec(property(get = get_colorFromSchemeAlpha, put = set_colorFromSchemeAlpha)) float_t colorFromSchemeAlpha;

  __declspec(property(get = get_bakedLightEditorColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> bakedLightEditorColors;

  __declspec(property(get = get_defaultDepthOnlyWriteMaterialForFakeMirror))::UnityEngine::Material* defaultDepthOnlyWriteMaterialForFakeMirror;

  __declspec(property(get = get_mainEffectForBakingIsOn, put = set_mainEffectForBakingIsOn)) bool mainEffectForBakingIsOn;

  __declspec(property(get = get_bakedLightDataLoaderPrefab))::GlobalNamespace::BakedLightDataLoader* bakedLightDataLoaderPrefab;

  __declspec(property(get = get_bakedReflectionProbePrefab))::GlobalNamespace::BakedReflectionProbe* bakedReflectionProbePrefab;

  __declspec(property(get = get_lightmapLightsWithIds))::GlobalNamespace::LightmapLightsWithIds* lightmapLightsWithIds;

  __declspec(property(get = get_fakeMirrorObjectsInstallerPrefab))::GlobalNamespace::FakeMirrorObjectsInstaller* fakeMirrorObjectsInstallerPrefab;

  __declspec(property(get = get_fakeMirrorSettingsPrefab))::GlobalNamespace::FakeMirrorSettings* fakeMirrorSettingsPrefab;

  constexpr int32_t& __get__reflectionsCount();

  constexpr int32_t const& __get__reflectionsCount() const;

  constexpr void __set__reflectionsCount(int32_t value);

  constexpr ::GlobalNamespace::BloomPrePassEffectSO*& __get__bloomPrePassEffectToneMappingOff();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectSO*> const& __get__bloomPrePassEffectToneMappingOff() const;

  constexpr void __set__bloomPrePassEffectToneMappingOff(::GlobalNamespace::BloomPrePassEffectSO* value);

  constexpr ::GlobalNamespace::MainEffectSO*& __get__mainEffectForBaking();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectSO*> const& __get__mainEffectForBaking() const;

  constexpr void __set__mainEffectForBaking(::GlobalNamespace::MainEffectSO* value);

  constexpr float_t& __get__colorFromSchemeAlpha();

  constexpr float_t const& __get__colorFromSchemeAlpha() const;

  constexpr void __set__colorFromSchemeAlpha(float_t value);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __get__bakedLightEditorColors();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __get__bakedLightEditorColors() const;

  constexpr void __set__bakedLightEditorColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*& __get__mirrorRendererGraphicsSettingsPresets();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*> const& __get__mirrorRendererGraphicsSettingsPresets() const;

  constexpr void __set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* value);

  constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*& __get__mainEffectGraphicsSettingsPresets();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*> const& __get__mainEffectGraphicsSettingsPresets() const;

  constexpr void __set__mainEffectGraphicsSettingsPresets(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* value);

  constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*& __get__bloomPrePassGraphicsSettingsPresets();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*> const& __get__bloomPrePassGraphicsSettingsPresets() const;

  constexpr void __set__bloomPrePassGraphicsSettingsPresets(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* value);

  constexpr ::GlobalNamespace::MirrorRendererSO*& __get__mirrorRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererSO*> const& __get__mirrorRenderer() const;

  constexpr void __set__mirrorRenderer(::GlobalNamespace::MirrorRendererSO* value);

  constexpr ::GlobalNamespace::MainEffectContainerSO*& __get__mainEffectContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectContainerSO*> const& __get__mainEffectContainer() const;

  constexpr void __set__mainEffectContainer(::GlobalNamespace::MainEffectContainerSO* value);

  constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO*& __get__bloomPrePassEffectContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectContainerSO*> const& __get__bloomPrePassEffectContainer() const;

  constexpr void __set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO* value);

  constexpr ::GlobalNamespace::BakedLightDataLoader*& __get__bakedLightDataLoaderPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BakedLightDataLoader*> const& __get__bakedLightDataLoaderPrefab() const;

  constexpr void __set__bakedLightDataLoaderPrefab(::GlobalNamespace::BakedLightDataLoader* value);

  constexpr ::GlobalNamespace::BakedReflectionProbe*& __get__bakedReflectionProbePrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BakedReflectionProbe*> const& __get__bakedReflectionProbePrefab() const;

  constexpr void __set__bakedReflectionProbePrefab(::GlobalNamespace::BakedReflectionProbe* value);

  constexpr ::GlobalNamespace::LightmapLightsWithIds*& __get__lightmapLightsWithIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightmapLightsWithIds*> const& __get__lightmapLightsWithIds() const;

  constexpr void __set__lightmapLightsWithIds(::GlobalNamespace::LightmapLightsWithIds* value);

  constexpr ::GlobalNamespace::FakeMirrorObjectsInstaller*& __get__fakeMirrorObjectsInstallerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FakeMirrorObjectsInstaller*> const& __get__fakeMirrorObjectsInstallerPrefab() const;

  constexpr void __set__fakeMirrorObjectsInstallerPrefab(::GlobalNamespace::FakeMirrorObjectsInstaller* value);

  constexpr ::GlobalNamespace::FakeMirrorSettings*& __get__fakeMirrorSettingsPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FakeMirrorSettings*> const& __get__fakeMirrorSettingsPrefab() const;

  constexpr void __set__fakeMirrorSettingsPrefab(::GlobalNamespace::FakeMirrorSettings* value);

  constexpr ::UnityEngine::Material*& __get__defaultDepthOnlyWriteMaterialForFakeMirror();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__defaultDepthOnlyWriteMaterialForFakeMirror() const;

  constexpr void __set__defaultDepthOnlyWriteMaterialForFakeMirror(::UnityEngine::Material* value);

  /// @brief Method get_reflectionsCount addr 0x22f79c4 size 0x8 virtual false final false
  inline int32_t get_reflectionsCount();

  /// @brief Method set_reflectionsCount addr 0x22f79cc size 0x8 virtual false final false
  inline void set_reflectionsCount(int32_t value);

  /// @brief Method get_colorFromSchemeAlpha addr 0x22f79d4 size 0x8 virtual false final false
  inline float_t get_colorFromSchemeAlpha();

  /// @brief Method set_colorFromSchemeAlpha addr 0x22f79dc size 0x8 virtual false final false
  inline void set_colorFromSchemeAlpha(float_t value);

  /// @brief Method get_bakedLightEditorColors addr 0x22f79e4 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_bakedLightEditorColors();

  /// @brief Method get_defaultDepthOnlyWriteMaterialForFakeMirror addr 0x22f79ec size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_defaultDepthOnlyWriteMaterialForFakeMirror();

  /// @brief Method get_mainEffectForBakingIsOn addr 0x22f79f4 size 0x70 virtual false final false
  inline bool get_mainEffectForBakingIsOn();

  /// @brief Method set_mainEffectForBakingIsOn addr 0x22f7a64 size 0xb0 virtual false final false
  inline void set_mainEffectForBakingIsOn(bool value);

  /// @brief Method get_bakedLightDataLoaderPrefab addr 0x22f7b14 size 0x8 virtual false final false
  inline ::GlobalNamespace::BakedLightDataLoader* get_bakedLightDataLoaderPrefab();

  /// @brief Method get_bakedReflectionProbePrefab addr 0x22f7b1c size 0x8 virtual false final false
  inline ::GlobalNamespace::BakedReflectionProbe* get_bakedReflectionProbePrefab();

  /// @brief Method get_lightmapLightsWithIds addr 0x22f7b24 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightmapLightsWithIds* get_lightmapLightsWithIds();

  /// @brief Method get_fakeMirrorObjectsInstallerPrefab addr 0x22f7b2c size 0x8 virtual false final false
  inline ::GlobalNamespace::FakeMirrorObjectsInstaller* get_fakeMirrorObjectsInstallerPrefab();

  /// @brief Method get_fakeMirrorSettingsPrefab addr 0x22f7b34 size 0x8 virtual false final false
  inline ::GlobalNamespace::FakeMirrorSettings* get_fakeMirrorSettingsPrefab();

  /// @brief Method SetGraphicsSettingsForBaking addr 0x22f7b3c size 0x254 virtual false final false
  inline void SetGraphicsSettingsForBaking();

  /// @brief Method SetPlatformGraphics addr 0x22f7e40 size 0x1ac virtual false final false
  inline void SetPlatformGraphics();

  /// @brief Method SetToneMappingOn addr 0x22f7d90 size 0xb0 virtual false final false
  inline void SetToneMappingOn(bool isOn);

  /// @brief Method IsToneMappingOn addr 0x22f7fec size 0x34 virtual false final false
  inline bool IsToneMappingOn();

  static inline ::GlobalNamespace::LightBakingPersistentSettingsSO* New_ctor();

  /// @brief Method .ctor addr 0x22f8020 size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightBakingPersistentSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightBakingPersistentSettingsSO(LightBakingPersistentSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightBakingPersistentSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightBakingPersistentSettingsSO(LightBakingPersistentSettingsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightBakingPersistentSettingsSO();

public:
  /// @brief Field _reflectionsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____reflectionsCount;

  /// @brief Field _bloomPrePassEffectToneMappingOff, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassEffectSO* ____bloomPrePassEffectToneMappingOff;

  /// @brief Field _mainEffectForBaking, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectSO* ____mainEffectForBaking;

  /// @brief Field _colorFromSchemeAlpha, offset: 0x30, size: 0x4, def value: None
  float_t ____colorFromSchemeAlpha;

  /// @brief Field _bakedLightEditorColors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____bakedLightEditorColors;

  /// @brief Field _mainSettingsModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _mirrorRendererGraphicsSettingsPresets, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* ____mirrorRendererGraphicsSettingsPresets;

  /// @brief Field _mainEffectGraphicsSettingsPresets, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* ____mainEffectGraphicsSettingsPresets;

  /// @brief Field _bloomPrePassGraphicsSettingsPresets, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* ____bloomPrePassGraphicsSettingsPresets;

  /// @brief Field _mirrorRenderer, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MirrorRendererSO* ____mirrorRenderer;

  /// @brief Field _mainEffectContainer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MainEffectContainerSO* ____mainEffectContainer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BloomPrePassEffectContainerSO* ____bloomPrePassEffectContainer;

  /// @brief Field _bakedLightDataLoaderPrefab, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BakedLightDataLoader* ____bakedLightDataLoaderPrefab;

  /// @brief Field _bakedReflectionProbePrefab, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BakedReflectionProbe* ____bakedReflectionProbePrefab;

  /// @brief Field _lightmapLightsWithIds, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::LightmapLightsWithIds* ____lightmapLightsWithIds;

  /// @brief Field _fakeMirrorObjectsInstallerPrefab, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::FakeMirrorObjectsInstaller* ____fakeMirrorObjectsInstallerPrefab;

  /// @brief Field _fakeMirrorSettingsPrefab, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::FakeMirrorSettings* ____fakeMirrorSettingsPrefab;

  /// @brief Field _defaultDepthOnlyWriteMaterialForFakeMirror, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Material* ____defaultDepthOnlyWriteMaterialForFakeMirror;

  /// @brief Field kDefaultMirrorGraphicsSettings offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultMirrorGraphicsSettings{ static_cast<int32_t>(0x0) };

  /// @brief Field kDefaultMainEffectGraphicsSettings offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultMainEffectGraphicsSettings{ static_cast<int32_t>(0x1) };

  /// @brief Field kDefaultAntiAliasingLevel offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultAntiAliasingLevel{ static_cast<int32_t>(0x8) };

  /// @brief Field kDefaultVrResolutionScale offset 0xffffffff size 0x4
  static constexpr float_t kDefaultVrResolutionScale{ 1.0 };

  /// @brief Field kDefaultMenuVRResolutionScaleMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMenuVRResolutionScaleMultiplier{ 1.0 };

  /// @brief Field kDefaultUseFixedFoveatedRenderingDuringGameplay offset 0xffffffff size 0x1
  static constexpr bool kDefaultUseFixedFoveatedRenderingDuringGameplay{ false };

  /// @brief Field kDefaultBurnMarkTrailsEnabled offset 0xffffffff size 0x1
  static constexpr bool kDefaultBurnMarkTrailsEnabled{ true };

  /// @brief Field kDefaultScreenDisplacementEffectsEnabled offset 0xffffffff size 0x1
  static constexpr bool kDefaultScreenDisplacementEffectsEnabled{ true };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightBakingPersistentSettingsSO, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightBakingPersistentSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightBakingPersistentSettingsSO*, "", "LightBakingPersistentSettingsSO");
