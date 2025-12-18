#pragma once
// IWYU pragma private; include "GlobalNamespace/LightBakingPersistentSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
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
class FakeMirrorObjectsInstaller;
}
namespace GlobalNamespace {
class FakeMirrorSettings;
}
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
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
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightBakingPersistentSettingsSO
class CORDL_TYPE LightBakingPersistentSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _bakedLightDataLoaderPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedLightDataLoaderPrefab, put = __cordl_internal_set__bakedLightDataLoaderPrefab)) ::UnityW<::GlobalNamespace::BakedLightDataLoader>
      _bakedLightDataLoaderPrefab;

  /// @brief Field _bakedLightEditorColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedLightEditorColors, put = __cordl_internal_set__bakedLightEditorColors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>
      _bakedLightEditorColors;

  /// @brief Field _bakedReflectionProbePrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedReflectionProbePrefab, put = __cordl_internal_set__bakedReflectionProbePrefab)) ::UnityW<::GlobalNamespace::BakedReflectionProbe>
      _bakedReflectionProbePrefab;

  /// @brief Field _colorFromSchemeAlpha, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__colorFromSchemeAlpha, put = __cordl_internal_set__colorFromSchemeAlpha)) float_t _colorFromSchemeAlpha;

  /// @brief Field _defaultDepthOnlyWriteMaterialForFakeMirror, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultDepthOnlyWriteMaterialForFakeMirror, put = __cordl_internal_set__defaultDepthOnlyWriteMaterialForFakeMirror)) ::UnityW<::UnityEngine::Material>
      _defaultDepthOnlyWriteMaterialForFakeMirror;

  /// @brief Field _fakeMirrorObjectsInstallerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fakeMirrorObjectsInstallerPrefab,
                      put = __cordl_internal_set__fakeMirrorObjectsInstallerPrefab)) ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller>
      _fakeMirrorObjectsInstallerPrefab;

  /// @brief Field _fakeMirrorSettingsPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__fakeMirrorSettingsPrefab, put = __cordl_internal_set__fakeMirrorSettingsPrefab)) ::UnityW<::GlobalNamespace::FakeMirrorSettings>
      _fakeMirrorSettingsPrefab;

  /// @brief Field _lightmapLightsWithIds, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapLightsWithIds, put = __cordl_internal_set__lightmapLightsWithIds)) ::UnityW<::GlobalNamespace::LightmapLightsWithIds> _lightmapLightsWithIds;

  /// @brief Field _reflectionsCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__reflectionsCount, put = __cordl_internal_set__reflectionsCount)) int32_t _reflectionsCount;

  /// @brief Field _settingsApplicator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  __declspec(property(get = get_bakedLightDataLoaderPrefab)) ::UnityW<::GlobalNamespace::BakedLightDataLoader> bakedLightDataLoaderPrefab;

  __declspec(property(get = get_bakedLightEditorColors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> bakedLightEditorColors;

  __declspec(property(get = get_bakedReflectionProbePrefab)) ::UnityW<::GlobalNamespace::BakedReflectionProbe> bakedReflectionProbePrefab;

  __declspec(property(get = get_colorFromSchemeAlpha, put = set_colorFromSchemeAlpha)) float_t colorFromSchemeAlpha;

  __declspec(property(get = get_defaultDepthOnlyWriteMaterialForFakeMirror)) ::UnityW<::UnityEngine::Material> defaultDepthOnlyWriteMaterialForFakeMirror;

  __declspec(property(get = get_fakeMirrorObjectsInstallerPrefab)) ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> fakeMirrorObjectsInstallerPrefab;

  __declspec(property(get = get_fakeMirrorSettingsPrefab)) ::UnityW<::GlobalNamespace::FakeMirrorSettings> fakeMirrorSettingsPrefab;

  __declspec(property(get = get_lightmapLightsWithIds)) ::UnityW<::GlobalNamespace::LightmapLightsWithIds> lightmapLightsWithIds;

  __declspec(property(get = get_reflectionsCount, put = set_reflectionsCount)) int32_t reflectionsCount;

  /// @brief Method ApplySettings, addr 0x5751aac, size 0x7c, virtual false, abstract: false, final false
  inline void ApplySettings();

  static inline ::GlobalNamespace::LightBakingPersistentSettingsSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BakedLightDataLoader> const& __cordl_internal_get__bakedLightDataLoaderPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BakedLightDataLoader>& __cordl_internal_get__bakedLightDataLoaderPrefab();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__bakedLightEditorColors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__bakedLightEditorColors();

  constexpr ::UnityW<::GlobalNamespace::BakedReflectionProbe> const& __cordl_internal_get__bakedReflectionProbePrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BakedReflectionProbe>& __cordl_internal_get__bakedReflectionProbePrefab();

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

  constexpr int32_t const& __cordl_internal_get__reflectionsCount() const;

  constexpr int32_t& __cordl_internal_get__reflectionsCount();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr void __cordl_internal_set__bakedLightDataLoaderPrefab(::UnityW<::GlobalNamespace::BakedLightDataLoader> value);

  constexpr void __cordl_internal_set__bakedLightEditorColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set__bakedReflectionProbePrefab(::UnityW<::GlobalNamespace::BakedReflectionProbe> value);

  constexpr void __cordl_internal_set__colorFromSchemeAlpha(float_t value);

  constexpr void __cordl_internal_set__defaultDepthOnlyWriteMaterialForFakeMirror(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fakeMirrorObjectsInstallerPrefab(::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> value);

  constexpr void __cordl_internal_set__fakeMirrorSettingsPrefab(::UnityW<::GlobalNamespace::FakeMirrorSettings> value);

  constexpr void __cordl_internal_set__lightmapLightsWithIds(::UnityW<::GlobalNamespace::LightmapLightsWithIds> value);

  constexpr void __cordl_internal_set__reflectionsCount(int32_t value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  /// @brief Method .ctor, addr 0x5751b28, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakedLightDataLoaderPrefab, addr 0x5751a7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BakedLightDataLoader> get_bakedLightDataLoaderPrefab();

  /// @brief Method get_bakedLightEditorColors, addr 0x5751a74, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_bakedLightEditorColors();

  /// @brief Method get_bakedReflectionProbePrefab, addr 0x5751a84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BakedReflectionProbe> get_bakedReflectionProbePrefab();

  /// @brief Method get_colorFromSchemeAlpha, addr 0x5751a64, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorFromSchemeAlpha();

  /// @brief Method get_defaultDepthOnlyWriteMaterialForFakeMirror, addr 0x5751aa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultDepthOnlyWriteMaterialForFakeMirror();

  /// @brief Method get_fakeMirrorObjectsInstallerPrefab, addr 0x5751a94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> get_fakeMirrorObjectsInstallerPrefab();

  /// @brief Method get_fakeMirrorSettingsPrefab, addr 0x5751a9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::FakeMirrorSettings> get_fakeMirrorSettingsPrefab();

  /// @brief Method get_lightmapLightsWithIds, addr 0x5751a8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightmapLightsWithIds> get_lightmapLightsWithIds();

  /// @brief Method get_reflectionsCount, addr 0x5751a54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_reflectionsCount();

  /// @brief Method set_colorFromSchemeAlpha, addr 0x5751a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_colorFromSchemeAlpha(float_t value);

  /// @brief Method set_reflectionsCount, addr 0x5751a5c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6622 };

  /// @brief Field _settingsApplicator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field _reflectionsCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____reflectionsCount;

  /// @brief Field _colorFromSchemeAlpha, offset: 0x24, size: 0x4, def value: None
  float_t ____colorFromSchemeAlpha;

  /// @brief Field _bakedLightEditorColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____bakedLightEditorColors;

  /// @brief Field _bakedLightDataLoaderPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BakedLightDataLoader> ____bakedLightDataLoaderPrefab;

  /// @brief Field _bakedReflectionProbePrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BakedReflectionProbe> ____bakedReflectionProbePrefab;

  /// @brief Field _lightmapLightsWithIds, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightmapLightsWithIds> ____lightmapLightsWithIds;

  /// @brief Field _fakeMirrorObjectsInstallerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FakeMirrorObjectsInstaller> ____fakeMirrorObjectsInstallerPrefab;

  /// @brief Field _fakeMirrorSettingsPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FakeMirrorSettings> ____fakeMirrorSettingsPrefab;

  /// @brief Field _defaultDepthOnlyWriteMaterialForFakeMirror, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____defaultDepthOnlyWriteMaterialForFakeMirror;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____settingsApplicator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____reflectionsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____colorFromSchemeAlpha) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bakedLightEditorColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bakedLightDataLoaderPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____bakedReflectionProbePrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____lightmapLightsWithIds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____fakeMirrorObjectsInstallerPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____fakeMirrorSettingsPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightBakingPersistentSettingsSO, ____defaultDepthOnlyWriteMaterialForFakeMirror) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightBakingPersistentSettingsSO, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightBakingPersistentSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightBakingPersistentSettingsSO*, "", "LightBakingPersistentSettingsSO");
