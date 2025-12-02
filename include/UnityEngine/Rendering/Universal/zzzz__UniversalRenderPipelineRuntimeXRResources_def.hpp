#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineRuntimeXRResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineRuntimeXRResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineRuntimeXRResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeXRResources
class CORDL_TYPE UniversalRenderPipelineRuntimeXRResources : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  /// @brief Field m_xrMirrorViewPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_xrMirrorViewPS, put = __cordl_internal_set_m_xrMirrorViewPS)) ::UnityW<::UnityEngine::Shader> m_xrMirrorViewPS;

  /// @brief Field m_xrMotionVector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_xrMotionVector, put = __cordl_internal_set_m_xrMotionVector)) ::UnityW<::UnityEngine::Shader> m_xrMotionVector;

  /// @brief Field m_xrOcclusionMeshPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_xrOcclusionMeshPS, put = __cordl_internal_set_m_xrOcclusionMeshPS)) ::UnityW<::UnityEngine::Shader> m_xrOcclusionMeshPS;

  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_version)) int32_t version;

  __declspec(property(get = get_xrMirrorViewPS, put = set_xrMirrorViewPS)) ::UnityW<::UnityEngine::Shader> xrMirrorViewPS;

  __declspec(property(get = get_xrMotionVector, put = set_xrMotionVector)) ::UnityW<::UnityEngine::Shader> xrMotionVector;

  __declspec(property(get = get_xrOcclusionMeshPS, put = set_xrOcclusionMeshPS)) ::UnityW<::UnityEngine::Shader> xrOcclusionMeshPS;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x66977b0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_xrMirrorViewPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_xrMirrorViewPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_xrMotionVector() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_xrMotionVector();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_xrOcclusionMeshPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_xrOcclusionMeshPS();

  constexpr void __cordl_internal_set_m_xrMirrorViewPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_xrMotionVector(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_xrOcclusionMeshPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66979e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_valid, addr 0x6697920, size 0xc8, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Method get_version, addr 0x66977a8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Method get_xrMirrorViewPS, addr 0x6697830, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_xrMirrorViewPS();

  /// @brief Method get_xrMotionVector, addr 0x66978a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_xrMotionVector();

  /// @brief Method get_xrOcclusionMeshPS, addr 0x66977b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_xrOcclusionMeshPS();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_xrMirrorViewPS, addr 0x6697838, size 0x70, virtual false, abstract: false, final false
  inline void set_xrMirrorViewPS(::UnityEngine::Shader* value);

  /// @brief Method set_xrMotionVector, addr 0x66978b0, size 0x70, virtual false, abstract: false, final false
  inline void set_xrMotionVector(::UnityEngine::Shader* value);

  /// @brief Method set_xrOcclusionMeshPS, addr 0x66977c0, size 0x70, virtual false, abstract: false, final false
  inline void set_xrOcclusionMeshPS(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineRuntimeXRResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeXRResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineRuntimeXRResources(UniversalRenderPipelineRuntimeXRResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeXRResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineRuntimeXRResources(UniversalRenderPipelineRuntimeXRResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12913 };

  /// @brief Field m_xrOcclusionMeshPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_xrOcclusionMeshPS;

  /// @brief Field m_xrMirrorViewPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_xrMirrorViewPS;

  /// @brief Field m_xrMotionVector, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_xrMotionVector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources, ___m_xrOcclusionMeshPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources, ___m_xrMirrorViewPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources, ___m_xrMotionVector) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeXRResources*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineRuntimeXRResources");
