#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDefaultVolumeProfileAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDefaultVolumeProfileAsset)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDefaultVolumeProfileAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDefaultVolumeProfileAsset);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDefaultVolumeProfileAsset
class CORDL_TYPE IDefaultVolumeProfileAsset {
public:
  // Declarations
  __declspec(property(get = get_defaultVolumeProfile, put = set_defaultVolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> defaultVolumeProfile;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Method get_defaultVolumeProfile, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_defaultVolumeProfile();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_defaultVolumeProfile, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_defaultVolumeProfile(::UnityEngine::Rendering::VolumeProfile* value);

  // Ctor Parameters [CppParam { name: "", ty: "IDefaultVolumeProfileAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDefaultVolumeProfileAsset(IDefaultVolumeProfileAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDefaultVolumeProfileAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDefaultVolumeProfileAsset*, "UnityEngine.Rendering", "IDefaultVolumeProfileAsset");
