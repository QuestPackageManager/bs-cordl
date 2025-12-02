#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineGlobalSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineGlobalSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class URPShaderStrippingSetting;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine::Rendering {
class RenderPipelineGraphicsSettingsContainer;
}
namespace UnityEngine::Rendering {
class ShaderStrippingSetting;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineGlobalSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings);
// Dependencies UnityEngine.Rendering.RenderPipelineGlobalSettings`2<TGlobalRenderPipelineSettings, TRenderPipeline>, UnityEngine.Rendering.ShaderVariantLogLevel
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineGlobalSettings
class CORDL_TYPE UniversalRenderPipelineGlobalSettings
    : public ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>,
                                                                      ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*> {
public:
  // Declarations
  /// @brief Field apvScenesData, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_apvScenesData, put = __cordl_internal_set_apvScenesData)) ::UnityEngine::Rendering::ProbeVolumeSceneData* apvScenesData;

  /// @brief Field lightLayerName0, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName0, put = __cordl_internal_set_lightLayerName0)) ::StringW lightLayerName0;

  /// @brief Field lightLayerName1, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName1, put = __cordl_internal_set_lightLayerName1)) ::StringW lightLayerName1;

  /// @brief Field lightLayerName2, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName2, put = __cordl_internal_set_lightLayerName2)) ::StringW lightLayerName2;

  /// @brief Field lightLayerName3, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName3, put = __cordl_internal_set_lightLayerName3)) ::StringW lightLayerName3;

  /// @brief Field lightLayerName4, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName4, put = __cordl_internal_set_lightLayerName4)) ::StringW lightLayerName4;

  /// @brief Field lightLayerName5, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName5, put = __cordl_internal_set_lightLayerName5)) ::StringW lightLayerName5;

  /// @brief Field lightLayerName6, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName6, put = __cordl_internal_set_lightLayerName6)) ::StringW lightLayerName6;

  /// @brief Field lightLayerName7, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName7, put = __cordl_internal_set_lightLayerName7)) ::StringW lightLayerName7;

  __declspec(property(get = get_lightLayerNames)) ::ArrayW<::StringW, ::Array<::StringW>*> lightLayerNames;

  /// @brief Field m_AssetVersion, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AssetVersion, put = __cordl_internal_set_m_AssetVersion)) int32_t m_AssetVersion;

  /// @brief Field m_EnableRenderGraph, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRenderGraph, put = __cordl_internal_set_m_EnableRenderGraph)) bool m_EnableRenderGraph;

  /// @brief Field m_ExportShaderVariants, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExportShaderVariants, put = __cordl_internal_set_m_ExportShaderVariants)) bool m_ExportShaderVariants;

  /// @brief Field m_ObsoleteDefaultVolumeProfile, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObsoleteDefaultVolumeProfile, put = __cordl_internal_set_m_ObsoleteDefaultVolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>
      m_ObsoleteDefaultVolumeProfile;

  /// @brief Field m_RenderingLayerNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerNames, put = __cordl_internal_set_m_RenderingLayerNames)) ::ArrayW<::StringW, ::Array<::StringW>*> m_RenderingLayerNames;

  /// @brief Field m_Settings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* m_Settings;

  /// @brief Field m_ShaderStrippingSetting, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderStrippingSetting,
                      put = __cordl_internal_set_m_ShaderStrippingSetting)) ::UnityEngine::Rendering::ShaderStrippingSetting* m_ShaderStrippingSetting;

  /// @brief Field m_ShaderVariantLogLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShaderVariantLogLevel, put = __cordl_internal_set_m_ShaderVariantLogLevel)) ::UnityEngine::Rendering::ShaderVariantLogLevel m_ShaderVariantLogLevel;

  /// @brief Field m_StripDebugVariants, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripDebugVariants, put = __cordl_internal_set_m_StripDebugVariants)) bool m_StripDebugVariants;

  /// @brief Field m_StripScreenCoordOverrideVariants, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripScreenCoordOverrideVariants, put = __cordl_internal_set_m_StripScreenCoordOverrideVariants)) bool m_StripScreenCoordOverrideVariants;

  /// @brief Field m_StripUnusedPostProcessingVariants, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripUnusedPostProcessingVariants, put = __cordl_internal_set_m_StripUnusedPostProcessingVariants)) bool m_StripUnusedPostProcessingVariants;

  /// @brief Field m_StripUnusedVariants, offset 0x37, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripUnusedVariants, put = __cordl_internal_set_m_StripUnusedVariants)) bool m_StripUnusedVariants;

  /// @brief Field m_URPShaderStrippingSetting, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_URPShaderStrippingSetting,
                      put = __cordl_internal_set_m_URPShaderStrippingSetting)) ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* m_URPShaderStrippingSetting;

  /// @brief Field m_ValidRenderingLayers, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ValidRenderingLayers, put = __cordl_internal_set_m_ValidRenderingLayers)) uint32_t m_ValidRenderingLayers;

  __declspec(property(get = get_prefixedLightLayerNames)) ::ArrayW<::StringW, ::Array<::StringW>*> prefixedLightLayerNames;

  __declspec(property(get = get_settingsList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* settingsList;

  __declspec(property(get = get_stripUnusedLODCrossFadeVariants, put = set_stripUnusedLODCrossFadeVariants)) bool stripUnusedLODCrossFadeVariants;

  /// @brief Field supportRuntimeDebugDisplay, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_supportRuntimeDebugDisplay, put = __cordl_internal_set_supportRuntimeDebugDisplay)) bool supportRuntimeDebugDisplay;

  /// @brief Method GetOrCreateAPVSceneData, addr 0x665499c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeSceneData* GetOrCreateAPVSceneData();

  /// @brief Method GetOrCreateDefaultVolumeProfile, addr 0x6654880, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> GetOrCreateDefaultVolumeProfile(::UnityEngine::Rendering::VolumeProfile* defaultVolumeProfile);

  /// @brief Method IsAtLastVersion, addr 0x6654830, size 0x10, virtual false, abstract: false, final false
  inline bool IsAtLastVersion();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings* New_ctor();

  /// @brief Method Reset, addr 0x6654840, size 0x40, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetRenderingLayerNames, addr 0x6654914, size 0x88, virtual false, abstract: false, final false
  inline void ResetRenderingLayerNames();

  constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData* const& __cordl_internal_get_apvScenesData() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData*& __cordl_internal_get_apvScenesData();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName0() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName0();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName1() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName1();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName2() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName2();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName3() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName3();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName4() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName4();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName5() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName5();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName6() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName6();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName7() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName7();

  constexpr int32_t const& __cordl_internal_get_m_AssetVersion() const;

  constexpr int32_t& __cordl_internal_get_m_AssetVersion();

  constexpr bool const& __cordl_internal_get_m_EnableRenderGraph() const;

  constexpr bool& __cordl_internal_get_m_EnableRenderGraph();

  constexpr bool const& __cordl_internal_get_m_ExportShaderVariants() const;

  constexpr bool& __cordl_internal_get_m_ExportShaderVariants();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_m_ObsoleteDefaultVolumeProfile() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_m_ObsoleteDefaultVolumeProfile();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_RenderingLayerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_RenderingLayerNames();

  constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*& __cordl_internal_get_m_Settings();

  constexpr ::UnityEngine::Rendering::ShaderStrippingSetting* const& __cordl_internal_get_m_ShaderStrippingSetting() const;

  constexpr ::UnityEngine::Rendering::ShaderStrippingSetting*& __cordl_internal_get_m_ShaderStrippingSetting();

  constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel const& __cordl_internal_get_m_ShaderVariantLogLevel() const;

  constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel& __cordl_internal_get_m_ShaderVariantLogLevel();

  constexpr bool const& __cordl_internal_get_m_StripDebugVariants() const;

  constexpr bool& __cordl_internal_get_m_StripDebugVariants();

  constexpr bool const& __cordl_internal_get_m_StripScreenCoordOverrideVariants() const;

  constexpr bool& __cordl_internal_get_m_StripScreenCoordOverrideVariants();

  constexpr bool const& __cordl_internal_get_m_StripUnusedPostProcessingVariants() const;

  constexpr bool& __cordl_internal_get_m_StripUnusedPostProcessingVariants();

  constexpr bool const& __cordl_internal_get_m_StripUnusedVariants() const;

  constexpr bool& __cordl_internal_get_m_StripUnusedVariants();

  constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* const& __cordl_internal_get_m_URPShaderStrippingSetting() const;

  constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*& __cordl_internal_get_m_URPShaderStrippingSetting();

  constexpr uint32_t const& __cordl_internal_get_m_ValidRenderingLayers() const;

  constexpr uint32_t& __cordl_internal_get_m_ValidRenderingLayers();

  constexpr bool const& __cordl_internal_get_supportRuntimeDebugDisplay() const;

  constexpr bool& __cordl_internal_get_supportRuntimeDebugDisplay();

  constexpr void __cordl_internal_set_apvScenesData(::UnityEngine::Rendering::ProbeVolumeSceneData* value);

  constexpr void __cordl_internal_set_lightLayerName0(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName1(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName2(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName3(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName4(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName5(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName6(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName7(::StringW value);

  constexpr void __cordl_internal_set_m_AssetVersion(int32_t value);

  constexpr void __cordl_internal_set_m_EnableRenderGraph(bool value);

  constexpr void __cordl_internal_set_m_ExportShaderVariants(bool value);

  constexpr void __cordl_internal_set_m_ObsoleteDefaultVolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  constexpr void __cordl_internal_set_m_RenderingLayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* value);

  constexpr void __cordl_internal_set_m_ShaderStrippingSetting(::UnityEngine::Rendering::ShaderStrippingSetting* value);

  constexpr void __cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value);

  constexpr void __cordl_internal_set_m_StripDebugVariants(bool value);

  constexpr void __cordl_internal_set_m_StripScreenCoordOverrideVariants(bool value);

  constexpr void __cordl_internal_set_m_StripUnusedPostProcessingVariants(bool value);

  constexpr void __cordl_internal_set_m_StripUnusedVariants(bool value);

  constexpr void __cordl_internal_set_m_URPShaderStrippingSetting(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* value);

  constexpr void __cordl_internal_set_m_ValidRenderingLayers(uint32_t value);

  constexpr void __cordl_internal_set_supportRuntimeDebugDisplay(bool value);

  /// @brief Method .ctor, addr 0x66549fc, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightLayerNames, addr 0x66548cc, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_lightLayerNames();

  /// @brief Method get_prefixedLightLayerNames, addr 0x6654884, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedLightLayerNames();

  /// @brief Method get_settingsList, addr 0x665480c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* get_settingsList();

  /// @brief Method get_stripUnusedLODCrossFadeVariants, addr 0x6654800, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripUnusedLODCrossFadeVariants();

  /// @brief Method set_stripUnusedLODCrossFadeVariants, addr 0x6654808, size 0x4, virtual false, abstract: false, final false
  inline void set_stripUnusedLODCrossFadeVariants(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineGlobalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineGlobalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineGlobalSettings(UniversalRenderPipelineGlobalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineGlobalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineGlobalSettings(UniversalRenderPipelineGlobalSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12717 };

  /// @brief Field defaultAssetName offset 0xffffffff size 0x8
  static constexpr ::ConstString defaultAssetName{ u"UniversalRenderPipelineGlobalSettings" };

  /// @brief Field k_LastVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LastVersion{ static_cast<int32_t>(0x8) };

  /// @brief Field m_ShaderStrippingSetting, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ShaderStrippingSetting* ___m_ShaderStrippingSetting;

  /// @brief Field m_URPShaderStrippingSetting, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* ___m_URPShaderStrippingSetting;

  /// @brief Field m_ShaderVariantLogLevel, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderVariantLogLevel ___m_ShaderVariantLogLevel;

  /// @brief Field m_ExportShaderVariants, offset: 0x34, size: 0x1, def value: None
  bool ___m_ExportShaderVariants;

  /// @brief Field m_StripDebugVariants, offset: 0x35, size: 0x1, def value: None
  bool ___m_StripDebugVariants;

  /// @brief Field m_StripUnusedPostProcessingVariants, offset: 0x36, size: 0x1, def value: None
  bool ___m_StripUnusedPostProcessingVariants;

  /// @brief Field m_StripUnusedVariants, offset: 0x37, size: 0x1, def value: None
  bool ___m_StripUnusedVariants;

  /// @brief Field m_StripScreenCoordOverrideVariants, offset: 0x38, size: 0x1, def value: None
  bool ___m_StripScreenCoordOverrideVariants;

  /// @brief Field supportRuntimeDebugDisplay, offset: 0x39, size: 0x1, def value: None
  bool ___supportRuntimeDebugDisplay;

  /// @brief Field m_EnableRenderGraph, offset: 0x3a, size: 0x1, def value: None
  bool ___m_EnableRenderGraph;

  /// @brief Field m_Settings, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* ___m_Settings;

  /// @brief Field m_AssetVersion, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_AssetVersion;

  /// @brief Field m_ObsoleteDefaultVolumeProfile, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ___m_ObsoleteDefaultVolumeProfile;

  /// @brief Field m_RenderingLayerNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_RenderingLayerNames;

  /// @brief Field m_ValidRenderingLayers, offset: 0x60, size: 0x4, def value: None
  uint32_t ___m_ValidRenderingLayers;

  /// @brief Field lightLayerName0, offset: 0x68, size: 0x8, def value: None
  ::StringW ___lightLayerName0;

  /// @brief Field lightLayerName1, offset: 0x70, size: 0x8, def value: None
  ::StringW ___lightLayerName1;

  /// @brief Field lightLayerName2, offset: 0x78, size: 0x8, def value: None
  ::StringW ___lightLayerName2;

  /// @brief Field lightLayerName3, offset: 0x80, size: 0x8, def value: None
  ::StringW ___lightLayerName3;

  /// @brief Field lightLayerName4, offset: 0x88, size: 0x8, def value: None
  ::StringW ___lightLayerName4;

  /// @brief Field lightLayerName5, offset: 0x90, size: 0x8, def value: None
  ::StringW ___lightLayerName5;

  /// @brief Field lightLayerName6, offset: 0x98, size: 0x8, def value: None
  ::StringW ___lightLayerName6;

  /// @brief Field lightLayerName7, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___lightLayerName7;

  /// @brief Field apvScenesData, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSceneData* ___apvScenesData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_ShaderStrippingSetting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_URPShaderStrippingSetting) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_ShaderVariantLogLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_ExportShaderVariants) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripDebugVariants) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripUnusedPostProcessingVariants) == 0x36, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripUnusedVariants) == 0x37, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripScreenCoordOverrideVariants) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___supportRuntimeDebugDisplay) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_EnableRenderGraph) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_Settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_AssetVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_ObsoleteDefaultVolumeProfile) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_RenderingLayerNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_ValidRenderingLayers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName0) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName2) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName3) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName4) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName5) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName6) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName7) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___apvScenesData) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineGlobalSettings");
