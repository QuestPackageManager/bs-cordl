#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IRenderPipelineGraphicsSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderPipelineGraphicsSettings)
// Forward declare root types
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IRenderPipelineGraphicsSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IRenderPipelineGraphicsSettings
class CORDL_TYPE IRenderPipelineGraphicsSettings {
public:
  // Declarations
  __declspec(property(get = get_isAvailableInPlayerBuild)) bool isAvailableInPlayerBuild;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Method get_isAvailableInPlayerBuild, addr 0x6940080, size 0x8, virtual true, abstract: false, final false
  inline bool get_isAvailableInPlayerBuild();

  /// @brief Method get_version, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_version();

  // Ctor Parameters [CppParam { name: "", ty: "IRenderPipelineGraphicsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderPipelineGraphicsSettings(IRenderPipelineGraphicsSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IRenderPipelineGraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*, "UnityEngine.Rendering", "IRenderPipelineGraphicsSettings");
