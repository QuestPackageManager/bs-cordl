#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionDynamicResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionDynamicResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionDynamicResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionDynamicResources");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "R: SSAO Noise Textures", Order = 1000)]
// [ElementInfo(Order = 0)]
// [HideInInspector]
// Dependencies System.Object, UnityEngine.Texture2D
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionDynamicResources
class CORDL_TYPE ScreenSpaceAmbientOcclusionDynamicResources : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BlueNoise256Textures, put = set_BlueNoise256Textures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>> BlueNoise256Textures;

  __declspec(property(get = get_isAvailableInPlayerBuild)) bool isAvailableInPlayerBuild;

  /// @brief Field m_BlueNoise256Textures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlueNoise256Textures, put = __cordl_internal_set_m_BlueNoise256Textures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>> m_BlueNoise256Textures;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_m_BlueNoise256Textures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_m_BlueNoise256Textures();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_BlueNoise256Textures(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6ce9288, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BlueNoise256Textures, addr 0x6ce9200, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>> get_BlueNoise256Textures();

  /// @brief Method get_isAvailableInPlayerBuild, addr 0x6ce9278, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAvailableInPlayerBuild();

  /// @brief Method get_version, addr 0x6ce9280, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_BlueNoise256Textures, addr 0x6ce9208, size 0x70, virtual false, abstract: false, final false
  inline void set_BlueNoise256Textures(::ArrayW<::UnityEngine::Texture2D*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionDynamicResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionDynamicResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionDynamicResources(ScreenSpaceAmbientOcclusionDynamicResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionDynamicResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionDynamicResources(ScreenSpaceAmbientOcclusionDynamicResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13174 };

  /// [SerializeField]
  /// [ResourceFormattedPaths("Textures/BlueNoise256/LDR_LLL1_{0}.png", 0, 7, (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_BlueNoise256Textures, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>> ___m_BlueNoise256Textures;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources, ___m_BlueNoise256Textures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
