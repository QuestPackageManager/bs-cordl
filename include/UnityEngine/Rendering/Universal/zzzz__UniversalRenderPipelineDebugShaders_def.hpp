#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineDebugShaders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineDebugShaders)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineDebugShaders;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugShaders
class CORDL_TYPE UniversalRenderPipelineDebugShaders : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_debugReplacementPS, put = set_debugReplacementPS)) ::UnityW<::UnityEngine::Shader> debugReplacementPS;

  __declspec(property(get = get_hdrDebugViewPS, put = set_hdrDebugViewPS)) ::UnityW<::UnityEngine::Shader> hdrDebugViewPS;

  /// @brief Field m_DebugReplacementPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugReplacementPS, put = __cordl_internal_set_m_DebugReplacementPS)) ::UnityW<::UnityEngine::Shader> m_DebugReplacementPS;

  /// @brief Field m_HdrDebugViewPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HdrDebugViewPS, put = __cordl_internal_set_m_HdrDebugViewPS)) ::UnityW<::UnityEngine::Shader> m_HdrDebugViewPS;

  /// @brief Field m_ProbeVolumeSamplingDebugComputeShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProbeVolumeSamplingDebugComputeShader, put = __cordl_internal_set_m_ProbeVolumeSamplingDebugComputeShader)) ::UnityW<::UnityEngine::ComputeShader>
      m_ProbeVolumeSamplingDebugComputeShader;

  __declspec(property(get = get_probeVolumeSamplingDebugComputeShader, put = set_probeVolumeSamplingDebugComputeShader)) ::UnityW<::UnityEngine::ComputeShader> probeVolumeSamplingDebugComputeShader;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x66970dc, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugReplacementPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugReplacementPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_HdrDebugViewPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_HdrDebugViewPS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_ProbeVolumeSamplingDebugComputeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_ProbeVolumeSamplingDebugComputeShader();

  constexpr void __cordl_internal_set_m_DebugReplacementPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_HdrDebugViewPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_ProbeVolumeSamplingDebugComputeShader(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x669724c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_debugReplacementPS, addr 0x66970e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_debugReplacementPS();

  /// @brief Method get_hdrDebugViewPS, addr 0x669715c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_hdrDebugViewPS();

  /// @brief Method get_probeVolumeSamplingDebugComputeShader, addr 0x66971d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_probeVolumeSamplingDebugComputeShader();

  /// @brief Method get_version, addr 0x66970d4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_debugReplacementPS, addr 0x66970ec, size 0x70, virtual false, abstract: false, final false
  inline void set_debugReplacementPS(::UnityEngine::Shader* value);

  /// @brief Method set_hdrDebugViewPS, addr 0x6697164, size 0x70, virtual false, abstract: false, final false
  inline void set_hdrDebugViewPS(::UnityEngine::Shader* value);

  /// @brief Method set_probeVolumeSamplingDebugComputeShader, addr 0x66971dc, size 0x70, virtual false, abstract: false, final false
  inline void set_probeVolumeSamplingDebugComputeShader(::UnityEngine::ComputeShader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineDebugShaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineDebugShaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineDebugShaders(UniversalRenderPipelineDebugShaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineDebugShaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineDebugShaders(UniversalRenderPipelineDebugShaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12910 };

  /// @brief Field m_DebugReplacementPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DebugReplacementPS;

  /// @brief Field m_HdrDebugViewPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_HdrDebugViewPS;

  /// @brief Field m_ProbeVolumeSamplingDebugComputeShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_ProbeVolumeSamplingDebugComputeShader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders, ___m_DebugReplacementPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders, ___m_HdrDebugViewPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders, ___m_ProbeVolumeSamplingDebugComputeShader) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugShaders*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineDebugShaders");
