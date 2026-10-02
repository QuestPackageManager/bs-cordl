#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/URPReflectionProbeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(URPReflectionProbeSettings)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class URPReflectionProbeSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::URPReflectionProbeSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::URPReflectionProbeSettings*, "UnityEngine.Rendering", "URPReflectionProbeSettings");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "Lighting", Order = 21)]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.URPReflectionProbeSettings
class CORDL_TYPE URPReflectionProbeSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  __declspec(property(get = get_UseReflectionProbeRotation)) bool UseReflectionProbeRotation;

  /// @brief Field useReflectionProbeRotation, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_useReflectionProbeRotation, put = __cordl_internal_set_useReflectionProbeRotation)) bool useReflectionProbeRotation;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::URPReflectionProbeSettings* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6c75ae8, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x6c75ae0, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr bool const& __cordl_internal_get_useReflectionProbeRotation() const;

  constexpr bool& __cordl_internal_get_useReflectionProbeRotation();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_useReflectionProbeRotation(bool value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x6c75af8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UseReflectionProbeRotation, addr 0x6c75af0, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseReflectionProbeRotation();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPReflectionProbeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPReflectionProbeSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPReflectionProbeSettings(URPReflectionProbeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPReflectionProbeSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPReflectionProbeSettings(URPReflectionProbeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12790 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// [SerializeField]
  /// [Tooltip("Use ReflectionProbe rotation. Enabling this will improve the appearance of reflections when the ReflectionProbe isn\'t axis aligned, but may worsen performance on lower end
  /// platforms.")]
  /// @brief Field useReflectionProbeRotation, offset: 0x14, size: 0x1, def value: None
  bool ___useReflectionProbeRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::URPReflectionProbeSettings, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::URPReflectionProbeSettings, ___useReflectionProbeRotation) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::URPReflectionProbeSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
