#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPersistentResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionPersistentResources)
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
class ScreenSpaceAmbientOcclusionPersistentResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPersistentResources");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "R: SSAO Shader", Order = 1000)]
// [ElementInfo(Order = 0)]
// [HideInInspector]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPersistentResources
class CORDL_TYPE ScreenSpaceAmbientOcclusionPersistentResources : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Shader, put = set_Shader)) ::UnityW<::UnityEngine::Shader> Shader;

  __declspec(property(get = get_isAvailableInPlayerBuild)) bool isAvailableInPlayerBuild;

  /// @brief Field m_Shader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6ce91fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Shader, addr 0x6ce9174, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_Shader();

  /// @brief Method get_isAvailableInPlayerBuild, addr 0x6ce91ec, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAvailableInPlayerBuild();

  /// @brief Method get_version, addr 0x6ce91f4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_Shader, addr 0x6ce917c, size 0x70, virtual false, abstract: false, final false
  inline void set_Shader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionPersistentResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPersistentResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionPersistentResources(ScreenSpaceAmbientOcclusionPersistentResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionPersistentResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionPersistentResources(ScreenSpaceAmbientOcclusionPersistentResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13173 };

  /// [SerializeField]
  /// [ResourcePath("Shaders/Utils/ScreenSpaceAmbientOcclusion.shader", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_Shader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources, ___m_Shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
