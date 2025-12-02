#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IProbeVolumeEnabledRenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IProbeVolumeEnabledRenderPipeline)
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
class ProbeVolumeSceneData;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IProbeVolumeEnabledRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IProbeVolumeEnabledRenderPipeline
class CORDL_TYPE IProbeVolumeEnabledRenderPipeline {
public:
  // Declarations
  __declspec(property(get = get_maxSHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands maxSHBands;

  __declspec(property(get = get_probeVolumeSceneData)) ::UnityEngine::Rendering::ProbeVolumeSceneData* probeVolumeSceneData;

  __declspec(property(get = get_supportProbeVolume)) bool supportProbeVolume;

  /// @brief Method get_maxSHBands, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeSHBands get_maxSHBands();

  /// @brief Method get_probeVolumeSceneData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeSceneData* get_probeVolumeSceneData();

  /// @brief Method get_supportProbeVolume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_supportProbeVolume();

  // Ctor Parameters [CppParam { name: "", ty: "IProbeVolumeEnabledRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProbeVolumeEnabledRenderPipeline(IProbeVolumeEnabledRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*, "UnityEngine.Rendering", "IProbeVolumeEnabledRenderPipeline");
