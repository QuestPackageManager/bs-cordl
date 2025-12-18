#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineDebugDisplaySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettings_1_def.hpp"
CORDL_MODULE_EXPORT(UniversalRenderPipelineDebugDisplaySettings)
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsCommon;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplaySettingsStats_1;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsVolume;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineDebugDisplaySettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings);
// Dependencies UnityEngine.Rendering.DebugDisplaySettings`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplaySettings
class CORDL_TYPE UniversalRenderPipelineDebugDisplaySettings
    : public ::UnityEngine::Rendering::DebugDisplaySettings_1<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*> {
public:
  // Declarations
  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field <commonSettings>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__commonSettings_k__BackingField,
                      put = __cordl_internal_set__commonSettings_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* _commonSettings_k__BackingField;

  /// @brief Field <displayStats>k__BackingField, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__displayStats_k__BackingField,
      put =
          __cordl_internal_set__displayStats_k__BackingField)) ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* _displayStats_k__BackingField;

  /// @brief Field <gpuResidentDrawerSettings>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gpuResidentDrawerSettings_k__BackingField,
                      put = __cordl_internal_set__gpuResidentDrawerSettings_k__BackingField)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* _gpuResidentDrawerSettings_k__BackingField;

  /// @brief Field <lightingSettings>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightingSettings_k__BackingField,
                      put = __cordl_internal_set__lightingSettings_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* _lightingSettings_k__BackingField;

  /// @brief Field <materialSettings>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialSettings_k__BackingField,
                      put = __cordl_internal_set__materialSettings_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* _materialSettings_k__BackingField;

  /// @brief Field <renderingSettings>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__renderingSettings_k__BackingField,
                      put = __cordl_internal_set__renderingSettings_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* _renderingSettings_k__BackingField;

  /// @brief Field <volumeSettings>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeSettings_k__BackingField,
                      put = __cordl_internal_set__volumeSettings_k__BackingField)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume* _volumeSettings_k__BackingField;

  __declspec(property(get = get_commonSettings, put = set_commonSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* commonSettings;

  __declspec(property(get = get_displayStats, put = set_displayStats)) ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* displayStats;

  __declspec(property(get = get_gpuResidentDrawerSettings, put = set_gpuResidentDrawerSettings)) ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* gpuResidentDrawerSettings;

  __declspec(property(get = get_lightingSettings, put = set_lightingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* lightingSettings;

  __declspec(property(get = get_materialSettings, put = set_materialSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* materialSettings;

  __declspec(property(get = get_renderingSettings, put = set_renderingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* renderingSettings;

  __declspec(property(get = get_volumeSettings, put = set_volumeSettings)) ::UnityEngine::Rendering::DebugDisplaySettingsVolume* volumeSettings;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* New_ctor();

  /// @brief Method Reset, addr 0x6699f18, size 0x388, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method UpdateDisplayStats, addr 0x669a400, size 0x68, virtual false, abstract: false, final false
  inline void UpdateDisplayStats();

  /// @brief Method UpdateMaterials, addr 0x669a468, size 0x9c, virtual false, abstract: false, final false
  inline void UpdateMaterials();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* const& __cordl_internal_get__commonSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon*& __cordl_internal_get__commonSettings_k__BackingField();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* const& __cordl_internal_get__displayStats_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>*& __cordl_internal_get__displayStats_k__BackingField();

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* const& __cordl_internal_get__gpuResidentDrawerSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer*& __cordl_internal_get__gpuResidentDrawerSettings_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* const& __cordl_internal_get__lightingSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& __cordl_internal_get__lightingSettings_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* const& __cordl_internal_get__materialSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get__materialSettings_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const& __cordl_internal_get__renderingSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get__renderingSettings_k__BackingField();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume* const& __cordl_internal_get__volumeSettings_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsVolume*& __cordl_internal_get__volumeSettings_k__BackingField();

  constexpr void __cordl_internal_set__commonSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value);

  constexpr void __cordl_internal_set__displayStats_k__BackingField(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* value);

  constexpr void __cordl_internal_set__gpuResidentDrawerSettings_k__BackingField(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value);

  constexpr void __cordl_internal_set__lightingSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  constexpr void __cordl_internal_set__materialSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  constexpr void __cordl_internal_set__renderingSettings_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  constexpr void __cordl_internal_set__volumeSettings_k__BackingField(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);

  /// @brief Method .ctor, addr 0x6699e94, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x6699c5c, size 0x238, virtual true, abstract: false, final false
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_commonSettings, addr 0x6699bec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* get_commonSettings();

  /// @brief Method get_displayStats, addr 0x6699c3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* get_displayStats();

  /// @brief Method get_gpuResidentDrawerSettings, addr 0x6699c4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* get_gpuResidentDrawerSettings();

  /// @brief Method get_lightingSettings, addr 0x6699c1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_lightingSettings();

  /// @brief Method get_materialSettings, addr 0x6699bfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_materialSettings();

  /// @brief Method get_renderingSettings, addr 0x6699c0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_renderingSettings();

  /// @brief Method get_volumeSettings, addr 0x6699c2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugDisplaySettingsVolume* get_volumeSettings();

  /// @brief Method set_commonSettings, addr 0x6699bf4, size 0x8, virtual false, abstract: false, final false
  inline void set_commonSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* value);

  /// @brief Method set_displayStats, addr 0x6699c44, size 0x8, virtual false, abstract: false, final false
  inline void set_displayStats(::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* value);

  /// @brief Method set_gpuResidentDrawerSettings, addr 0x6699c54, size 0x8, virtual false, abstract: false, final false
  inline void set_gpuResidentDrawerSettings(::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* value);

  /// @brief Method set_lightingSettings, addr 0x6699c24, size 0x8, virtual false, abstract: false, final false
  inline void set_lightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  /// @brief Method set_materialSettings, addr 0x6699c04, size 0x8, virtual false, abstract: false, final false
  inline void set_materialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method set_renderingSettings, addr 0x6699c14, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method set_volumeSettings, addr 0x6699c34, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeSettings(::UnityEngine::Rendering::DebugDisplaySettingsVolume* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineDebugDisplaySettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineDebugDisplaySettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineDebugDisplaySettings(UniversalRenderPipelineDebugDisplaySettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineDebugDisplaySettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineDebugDisplaySettings(UniversalRenderPipelineDebugDisplaySettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12642 };

  /// @brief Field <commonSettings>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsCommon* ____commonSettings_k__BackingField;

  /// @brief Field <materialSettings>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ____materialSettings_k__BackingField;

  /// @brief Field <renderingSettings>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ____renderingSettings_k__BackingField;

  /// @brief Field <lightingSettings>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* ____lightingSettings_k__BackingField;

  /// @brief Field <volumeSettings>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsVolume* ____volumeSettings_k__BackingField;

  /// @brief Field <displayStats>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsStats_1<::UnityEngine::Rendering::Universal::URPProfileId>* ____displayStats_k__BackingField;

  /// @brief Field <gpuResidentDrawerSettings>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* ____gpuResidentDrawerSettings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____commonSettings_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____materialSettings_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____renderingSettings_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____lightingSettings_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____volumeSettings_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____displayStats_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, ____gpuResidentDrawerSettings_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineDebugDisplaySettings");
