#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightmapSamplingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapSamplingSettings)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LightmapSamplingSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LightmapSamplingSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LightmapSamplingSettings*, "UnityEngine.Rendering", "LightmapSamplingSettings");
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "Lighting", Order = 20)]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LightmapSamplingSettings
class CORDL_TYPE LightmapSamplingSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  /// @brief Field m_UseBicubicLightmapSampling, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseBicubicLightmapSampling, put = __cordl_internal_set_m_UseBicubicLightmapSampling)) bool m_UseBicubicLightmapSampling;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_useBicubicLightmapSampling, put = set_useBicubicLightmapSampling)) bool useBicubicLightmapSampling;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::LightmapSamplingSettings* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6bc2890, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x6bc2888, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr bool const& __cordl_internal_get_m_UseBicubicLightmapSampling() const;

  constexpr bool& __cordl_internal_get_m_UseBicubicLightmapSampling();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_UseBicubicLightmapSampling(bool value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6bc2910, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_useBicubicLightmapSampling, addr 0x6bc2898, size 0x8, virtual false, abstract: false, final false
  inline bool get_useBicubicLightmapSampling();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_useBicubicLightmapSampling, addr 0x6bc28a0, size 0x70, virtual false, abstract: false, final false
  inline void set_useBicubicLightmapSampling(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapSamplingSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapSamplingSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapSamplingSettings(LightmapSamplingSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapSamplingSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapSamplingSettings(LightmapSamplingSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9086 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// [SerializeField]
  /// [Tooltip("Use Bicubic Lightmap Sampling. Enabling this will improve the appearance of lightmaps, but may worsen performance on lower end platforms.")]
  /// @brief Field m_UseBicubicLightmapSampling, offset: 0x14, size: 0x1, def value: None
  bool ___m_UseBicubicLightmapSampling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LightmapSamplingSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LightmapSamplingSettings, ___m_UseBicubicLightmapSampling) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LightmapSamplingSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
