#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDefaultVolumeProfileSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDefaultVolumeProfileSettings)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDefaultVolumeProfileSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDefaultVolumeProfileSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDefaultVolumeProfileSettings
class CORDL_TYPE IDefaultVolumeProfileSettings {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_volumeProfile, put = set_volumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x65ebdd0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  /// @brief Method get_volumeProfile, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_volumeProfile();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_volumeProfile, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_volumeProfile(::UnityEngine::Rendering::VolumeProfile* value);

  // Ctor Parameters [CppParam { name: "", ty: "IDefaultVolumeProfileSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDefaultVolumeProfileSettings(IDefaultVolumeProfileSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12167 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDefaultVolumeProfileSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDefaultVolumeProfileSettings*, "UnityEngine.Rendering", "IDefaultVolumeProfileSettings");
